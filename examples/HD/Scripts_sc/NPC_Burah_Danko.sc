event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t1
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
			f_3424_a2_v(tv1, tv0);
			f_d8_a1_v("Sorrow");
			tv0->SetMessage(518350);
			tv0->ClearReplies();
			if (f_3744_a1_b(tv1)) {
				tv0->AddReply(518352, 19466, 19465);
			}
			if (f_3750_a1_b(tv1) && f_3711_a1_b(tv1)) {
				tv0->AddReply(518358, 19472, 19471);
			}
			if (f_377e_a1_b(tv1) && f_3846_a1_b(tv1)) {
				tv0->AddReply(518361, 19475, 19474);
			}
			if (f_383a_a1_b(tv1)) {
				tv0->AddReply(519361, 20523, 20522);
			}
			if (f_36d6_a1_b(tv1) && f_36f9_a1_b(tv1)) {
				tv0->AddReply(530617, 31920, 31919);
			}
			tv0->AddReply(518351, -1, 19464);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_d8_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 20517) {
				f_33d1_a2_v(tv1, tv0);
				f_3512_a2_v(tv1, tv0);
				f_334d_a2_v(tv1, tv0);
				f_3419_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 20518) {
				f_33d1_a2_v(tv1, tv0);
				f_3507_a2_v(tv1, tv0);
				f_34f1_a2_v(tv1, tv0);
				f_34fc_a2_v(tv1, tv0);
				f_3419_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 20519) {
				f_33d1_a2_v(tv1, tv0);
				f_34d6_a2_v(tv1, tv0);
				f_351d_a2_v(tv1, tv0);
				f_3528_a2_v(tv1, tv0);
				f_3419_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 20521) {
				f_33d1_a2_v(tv1, tv0);
				f_340e_a2_v(tv1, tv0);
				f_3419_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 20515) {
				f_33b3_a2_v(tv1, tv0);
			}
			if (a1 == 20500) {
				f_33d1_a2_v(tv1, tv0);
				f_334d_a2_v(tv1, tv0);
				f_3512_a2_v(tv1, tv0);
				f_33c3_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 20501) {
				f_33d1_a2_v(tv1, tv0);
				f_34d6_a2_v(tv1, tv0);
				f_351d_a2_v(tv1, tv0);
				f_3528_a2_v(tv1, tv0);
				f_33c3_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 20502) {
				f_33d1_a2_v(tv1, tv0);
				f_3507_a2_v(tv1, tv0);
				f_34f1_a2_v(tv1, tv0);
				f_34fc_a2_v(tv1, tv0);
				f_33c3_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 20503) {
				f_33d1_a2_v(tv1, tv0);
				f_340e_a2_v(tv1, tv0);
				f_33c3_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 19474) {
				f_323b_a2_v(tv1, tv0);
			}
			if (a1 == 19476) {
				f_353a_a2_v(tv1, tv0);
			}
			if (a1 == 20522) {
				f_3235_a2_v(tv1, tv0);
			}
			if (a1 == 31919) {
				f_33ad_a2_v(tv1, tv0);
			}
			if (a0 == 19463) {
				f_3424_a2_v(tv1, tv0);
				f_d8_a1_v("Sorrow");
				tv0->SetMessage(518350);
				tv0->ClearReplies();
				if (f_3744_a1_b(tv1)) {
					tv0->AddReply(518352, 19466, 19465);
				}
				if (f_3750_a1_b(tv1) && f_3711_a1_b(tv1)) {
					tv0->AddReply(518358, 19472, 19471);
				}
				if (f_377e_a1_b(tv1) && f_3846_a1_b(tv1)) {
					tv0->AddReply(518361, 19475, 19474);
				}
				if (f_383a_a1_b(tv1)) {
					tv0->AddReply(519361, 20523, 20522);
				}
				if (f_36d6_a1_b(tv1) && f_36f9_a1_b(tv1)) {
					tv0->AddReply(530617, 31920, 31919);
				}
				tv0->AddReply(518351, -1, 19464);
				return;
			}
			if (a0 == 31920) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(530618);
				tv0->ClearReplies();
				tv0->AddReply(530619, 31922, 31921);
				tv0->AddReply(530626, 31924, 31928);
				return;
			}
			if (a0 == 31922) {
				f_d8_a1_v("Smile");
				tv0->SetMessage(530620);
				tv0->ClearReplies();
				tv0->AddReply(530621, 31924, 31923);
				tv0->AddReply(530625, -1, 31927);
				return;
			}
			if (a0 == 31924) {
				f_d8_a1_v("Smile");
				tv0->SetMessage(530622);
				tv0->ClearReplies();
				tv0->AddReply(530623, -1, 31925);
				tv0->AddReply(530624, -1, 31926);
				return;
			}
			if (a0 == 20523) {
				f_d8_a1_v("Untrust");
				tv0->SetMessage(519362);
				tv0->ClearReplies();
				tv0->AddReply(519363, 20525, 20524);
				return;
			}
			if (a0 == 20525) {
				f_d8_a1_v("Untrust");
				tv0->SetMessage(519364);
				tv0->ClearReplies();
				tv0->AddReply(519365, 20527, 20526);
				return;
			}
			if (a0 == 20527) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519366);
				tv0->ClearReplies();
				tv0->AddReply(519367, 20529, 20528);
				return;
			}
			if (a0 == 20529) {
				f_d8_a1_v("Sorrow");
				tv0->SetMessage(519368);
				tv0->ClearReplies();
				tv0->AddReply(519369, 20531, 20530);
				return;
			}
			if (a0 == 20531) {
				f_d8_a1_v("Sorrow");
				tv0->SetMessage(519370);
				tv0->ClearReplies();
				tv0->AddReply(519371, -1, 20532);
				return;
			}
			if (a0 == 19475) {
				f_d8_a1_v("Menace");
				tv0->SetMessage(518362);
				tv0->ClearReplies();
				tv0->AddReply(519323, 20482, 20481);
				return;
			}
			if (a0 == 20482) {
				f_d8_a1_v("Menace");
				tv0->SetMessage(519324);
				tv0->ClearReplies();
				tv0->AddReply(519325, 20484, 20483);
				tv0->AddReply(519332, 20491, 20490);
				return;
			}
			if (a0 == 20484) {
				f_d8_a1_v("Menace");
				tv0->SetMessage(519326);
				tv0->ClearReplies();
				tv0->AddReply(519327, 20486, 20485);
				tv0->AddReply(519335, 20495, 20494);
				return;
			}
			if (a0 == 20495) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519336);
				tv0->ClearReplies();
				tv0->AddReply(519337, 20486, 20496);
				tv0->AddReply(519338, -1, 20497);
				return;
			}
			if (a0 == 20486) {
				f_d8_a1_v("Sorrow");
				tv0->SetMessage(519328);
				tv0->ClearReplies();
				tv0->AddReply(519329, 20488, 20487);
				tv0->AddReply(519331, 20491, 20489);
				return;
			}
			if (a0 == 20491) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519333);
				tv0->ClearReplies();
				tv0->AddReply(519334, -1, 20492);
				return;
			}
			if (a0 == 20488) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519330);
				tv0->ClearReplies();
				tv0->AddReply(518363, -1, 19476);
				return;
			}
			if (a0 == 19472) {
				f_d8_a1_v("Smile");
				tv0->SetMessage(518359);
				tv0->ClearReplies();
				tv0->AddReply(518360, 20499, 19473);
				return;
			}
			if (a0 == 20499) {
				f_d8_a1_v("Smile");
				tv0->SetMessage(519339);
				tv0->ClearReplies();
				tv0->AddReply(519340, -1, 20500);
				tv0->AddReply(519341, -1, 20501);
				tv0->AddReply(519342, -1, 20502);
				tv0->AddReply(519343, -1, 20503);
				return;
			}
			if (a0 == 19466) {
				f_d8_a1_v("Menace");
				tv0->SetMessage(518353);
				tv0->ClearReplies();
				tv0->AddReply(519349, 29215, 20510);
				return;
			}
			if (a0 == 29215) {
				f_d8_a1_v("Menace");
				tv0->SetMessage(527868);
				tv0->ClearReplies();
				tv0->AddReply(527870, 29218, 29217);
				return;
			}
			if (a0 == 29218) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(527871);
				tv0->ClearReplies();
				tv0->AddReply(527869, 20511, 29216);
				return;
			}
			if (a0 == 20511) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519350);
				tv0->ClearReplies();
				if (f_3711_a1_b(tv1)) {
					tv0->AddReply(518354, 19469, 19467);
				}
				tv0->AddReply(518355, 20512, 19468);
				return;
			}
			if (a0 == 20512) {
				f_d8_a1_v("Sorrow");
				tv0->SetMessage(519351);
				tv0->ClearReplies();
				tv0->AddReply(519352, 20514, 20513);
				return;
			}
			if (a0 == 20514) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519353);
				tv0->ClearReplies();
				tv0->AddReply(519354, -1, 20515);
				return;
			}
			if (a0 == 19469) {
				f_d8_a1_v("Smile");
				tv0->SetMessage(518356);
				tv0->ClearReplies();
				tv0->AddReply(518357, 29214, 19470);
				return;
			}
			if (a0 == 29214) {
				f_d8_a1_v("Smile");
				tv0->SetMessage(527867);
				tv0->ClearReplies();
				tv0->AddReply(519344, 20505, 20504);
				return;
			}
			if (a0 == 20505) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519345);
				tv0->ClearReplies();
				tv0->AddReply(519346, 20507, 20506);
				return;
			}
			if (a0 == 20507) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519347);
				tv0->ClearReplies();
				tv0->AddReply(519348, 20516, 20508);
				return;
			}
			if (a0 == 20516) {
				f_d8_a1_v("Neutral");
				tv0->SetMessage(519355);
				tv0->ClearReplies();
				tv0->AddReply(519356, -1, 20517);
				tv0->AddReply(519357, -1, 20518);
				tv0->AddReply(519358, -1, 20519);
				tv0->AddReply(519360, -1, 20521);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (f_3796_a1_b(tv1)) {
				f_31e5_a2_v(tv1, tv0);
				f_5b4_a1_v("Sorrow");
				tv0->SetMessage(518531);
				tv0->ClearReplies();
				tv0->AddReply(519073, 20199, 20198);
				tv0->AddReply(519077, 20203, 20202);
				break;
			}
			f_5b4_a1_v("Untrust");
			tv0->SetMessage(518536);
			tv0->ClearReplies();
			if (f_378a_a1_b(tv1)) {
				tv0->AddReply(518537, 19648, 19647);
			}
			if (f_37ae_a1_b(tv1) && f_37b9_a1_b(tv1) && !f_37a2_a1_b(tv1)) {
				tv0->AddReply(518540, 19651, 19650);
			}
			if (f_37a2_a1_b(tv1) && f_37ae_a1_b(tv1) && f_37b9_a1_b(tv1)) {
				tv0->AddReply(518543, 19654, 19653);
			}
			if (f_36d6_a1_b(tv1) && f_37c5_a1_b(tv1)) {
				tv0->AddReply(530627, 31931, 31930);
			}
			tv0->AddReply(518546, -1, 19656);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_5b4_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 20237) {
				f_31bd_a2_v(tv1, tv0);
				f_34bf_a2_v(tv1, tv0);
			}
			if (a1 == 19644) {
				f_31bd_a2_v(tv1, tv0);
				f_34bf_a2_v(tv1, tv0);
			}
			if (a1 == 19649) {
				f_31bd_a2_v(tv1, tv0);
				f_34bf_a2_v(tv1, tv0);
			}
			if (a1 == 19650) {
				f_31eb_a2_v(tv1, tv0);
			}
			if (a1 == 19652) {
				f_3493_a2_v(tv1, tv0);
				f_3499_a2_v(tv1, tv0);
			}
			if (a1 == 20194) {
				f_3493_a2_v(tv1, tv0);
				f_3499_a2_v(tv1, tv0);
			}
			if (a1 == 19653) {
				f_31eb_a2_v(tv1, tv0);
			}
			if (a1 == 31930) {
				f_31f1_a2_v(tv1, tv0);
			}
			if (a0 == 19641) {
				if (f_3796_a1_b(tv1)) {
					f_31e5_a2_v(tv1, tv0);
					f_5b4_a1_v("Sorrow");
					tv0->SetMessage(518531);
					tv0->ClearReplies();
					tv0->AddReply(519073, 20199, 20198);
					tv0->AddReply(519077, 20203, 20202);
					return;
				}
				f_5b4_a1_v("Untrust");
				tv0->SetMessage(518536);
				tv0->ClearReplies();
				if (f_378a_a1_b(tv1)) {
					tv0->AddReply(518537, 19648, 19647);
				}
				if (f_37ae_a1_b(tv1) && f_37b9_a1_b(tv1) && !f_37a2_a1_b(tv1)) {
					tv0->AddReply(518540, 19651, 19650);
				}
				if (f_37a2_a1_b(tv1) && f_37ae_a1_b(tv1) && f_37b9_a1_b(tv1)) {
					tv0->AddReply(518543, 19654, 19653);
				}
				if (f_36d6_a1_b(tv1) && f_37c5_a1_b(tv1)) {
					tv0->AddReply(530627, 31931, 31930);
				}
				tv0->AddReply(518546, -1, 19656);
				return;
			}
			if (a0 == 31931) {
				f_5b4_a1_v("Untrust");
				tv0->SetMessage(530628);
				tv0->ClearReplies();
				tv0->AddReply(530629, 31933, 31932);
				tv0->AddReply(530636, 31935, 31939);
				return;
			}
			if (a0 == 31933) {
				f_5b4_a1_v("Untrust");
				tv0->SetMessage(530630);
				tv0->ClearReplies();
				tv0->AddReply(530631, 31935, 31934);
				tv0->AddReply(530635, -1, 31938);
				return;
			}
			if (a0 == 31935) {
				f_5b4_a1_v("Menace");
				tv0->SetMessage(530632);
				tv0->ClearReplies();
				tv0->AddReply(530633, -1, 31936);
				tv0->AddReply(530634, -1, 31937);
				return;
			}
			if (a0 == 19654) {
				f_5b4_a1_v("Menace");
				tv0->SetMessage(518544);
				tv0->ClearReplies();
				tv0->AddReply(519060, 20843, 20185);
				return;
			}
			if (a0 == 20843) {
				f_5b4_a1_v("Menace");
				tv0->SetMessage(519685);
				tv0->ClearReplies();
				tv0->AddReply(519686, 20845, 20844);
				return;
			}
			if (a0 == 20845) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(519687);
				tv0->ClearReplies();
				tv0->AddReply(519688, -1, 20846);
				tv0->AddReply(530645, 31951, 31950);
				return;
			}
			if (a0 == 31951) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(530646);
				tv0->ClearReplies();
				tv0->AddReply(530647, 31953, 31952);
				return;
			}
			if (a0 == 31953) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(530648);
				tv0->ClearReplies();
				tv0->AddReply(530649, 31955, 31954);
				tv0->AddReply(530652, -1, 31957);
				return;
			}
			if (a0 == 31955) {
				f_5b4_a1_v("Smile");
				tv0->SetMessage(530650);
				tv0->ClearReplies();
				tv0->AddReply(530651, -1, 31956);
				return;
			}
			if (a0 == 19651) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(518541);
				tv0->ClearReplies();
				tv0->AddReply(530643, 31949, 31948);
				return;
			}
			if (a0 == 31949) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(530644);
				tv0->ClearReplies();
				tv0->AddReply(519066, 20192, 20191);
				return;
			}
			if (a0 == 20192) {
				f_5b4_a1_v("Smile");
				tv0->SetMessage(519067);
				tv0->ClearReplies();
				tv0->AddReply(519068, 20195, 20193);
				tv0->AddReply(519069, -1, 20194);
				return;
			}
			if (a0 == 20195) {
				f_5b4_a1_v("Smile");
				tv0->SetMessage(519070);
				tv0->ClearReplies();
				tv0->AddReply(518542, -1, 19652);
				return;
			}
			if (a0 == 19648) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(518538);
				tv0->ClearReplies();
				tv0->AddReply(519071, 20197, 20196);
				return;
			}
			if (a0 == 20197) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(519072);
				tv0->ClearReplies();
				tv0->AddReply(518539, -1, 19649);
				return;
			}
			if (a0 == 20203) {
				f_5b4_a1_v("Sorrow");
				tv0->SetMessage(519078);
				tv0->ClearReplies();
				tv0->AddReply(519079, 20199, 20204);
				tv0->AddReply(519080, 20206, 20205);
				return;
			}
			if (a0 == 20206) {
				f_5b4_a1_v("Menace");
				tv0->SetMessage(519081);
				tv0->ClearReplies();
				tv0->AddReply(519082, 20209, 20208);
				tv0->AddReply(519086, -1, 20212);
				return;
			}
			if (a0 == 20209) {
				f_5b4_a1_v("Menace");
				tv0->SetMessage(519083);
				tv0->ClearReplies();
				tv0->AddReply(519085, 20214, 20211);
				tv0->AddReply(519084, 20214, 20210);
				return;
			}
			if (a0 == 20214) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(519088);
				tv0->ClearReplies();
				tv0->AddReply(519089, 20199, 20216);
				return;
			}
			if (a0 == 20199) {
				f_5b4_a1_v("Sorrow");
				tv0->SetMessage(519074);
				tv0->ClearReplies();
				tv0->AddReply(519075, 20201, 20200);
				tv0->AddReply(519087, 20218, 20213);
				return;
			}
			if (a0 == 20218) {
				f_5b4_a1_v("Menace");
				tv0->SetMessage(519090);
				tv0->ClearReplies();
				tv0->AddReply(519091, 20201, 20219);
				return;
			}
			if (a0 == 20201) {
				f_5b4_a1_v("Untrust");
				tv0->SetMessage(519076);
				tv0->ClearReplies();
				tv0->AddReply(519092, 20222, 20221);
				return;
			}
			if (a0 == 20222) {
				f_5b4_a1_v("Untrust");
				tv0->SetMessage(519093);
				tv0->ClearReplies();
				tv0->AddReply(519094, 20224, 20223);
				return;
			}
			if (a0 == 20224) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(519095);
				tv0->ClearReplies();
				tv0->AddReply(519096, 20226, 20225);
				tv0->AddReply(519099, -1, 20228);
				return;
			}
			if (a0 == 20226) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(519097);
				tv0->ClearReplies();
				tv0->AddReply(519098, 20231, 20227);
				tv0->AddReply(519100, 20230, 20229);
				return;
			}
			if (a0 == 20230) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(519101);
				tv0->ClearReplies();
				tv0->AddReply(519103, 20231, 20232);
				tv0->AddReply(519104, 20236, 20234);
				return;
			}
			if (a0 == 20231) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(519102);
				tv0->ClearReplies();
				tv0->AddReply(519105, 20236, 20235);
				return;
			}
			if (a0 == 20236) {
				f_5b4_a1_v("Neutral");
				tv0->SetMessage(519106);
				tv0->ClearReplies();
				tv0->AddReply(519107, -1, 20237);
				tv0->AddReply(518534, -1, 19644);
				tv0->AddReply(519108, -1, 20239);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (f_37d1_a1_b(tv1)) {
				f_321f_a2_v(tv1, tv0);
				f_a48_a1_v("Menace");
				tv0->SetMessage(518609);
				tv0->ClearReplies();
				tv0->AddReply(518750, 19843, 19842);
				tv0->AddReply(518748, 19845, 19840);
				break;
			}
			f_a48_a1_v("Untrust");
			tv0->SetMessage(518612);
			tv0->ClearReplies();
			if (f_37dd_a1_b(tv1)) {
				tv0->AddReply(518613, 19996, 19705);
			}
			if (f_37e9_a1_b(tv1) && !f_37f5_a1_b(tv1) && f_3822_a1_b(tv1) && f_382e_a1_b(tv1)) {
				tv0->AddReply(518633, 20000, 19725);
			}
			if (f_3801_a1_b(tv1) && f_3822_a1_b(tv1) && !f_3682_a1_b(tv1)) {
				tv0->AddReply(518636, 19729, 19728);
			}
			if (f_380c_a1_b(tv1) && f_3822_a1_b(tv1) && !f_3682_a1_b(tv1)) {
				tv0->AddReply(518639, 19732, 19731);
			}
			if (f_3817_a1_b(tv1) && f_3822_a1_b(tv1) && !f_3682_a1_b(tv1)) {
				tv0->AddReply(518642, 19735, 19734);
			}
			if (f_3682_a1_b(tv1) && !f_368e_a1_b(tv1)) {
				tv0->AddReply(529822, 31272, 31271);
			}
			if (f_36d6_a1_b(tv1)) {
				tv0->AddReply(530667, 31961, 31960);
			}
			tv0->AddReply(518618, 29655, 19710);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_a48_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 19707) {
				f_31f7_a2_v(tv1, tv0);
				f_349f_a2_v(tv1, tv0);
				f_34e1_a2_v(tv1, tv0);
			}
			if (a1 == 19709) {
				f_31f7_a2_v(tv1, tv0);
				f_349f_a2_v(tv1, tv0);
				f_34e1_a2_v(tv1, tv0);
			}
			if (a1 == 19725) {
				f_322f_a2_v(tv1, tv0);
			}
			if (a1 == 19730) {
				f_333b_a2_v(tv1, tv0);
				f_3499_a2_v(tv1, tv0);
				f_3368_a2_v(tv1, tv0);
			}
			if (a1 == 19733) {
				f_3499_a2_v(tv1, tv0);
				f_3341_a2_v(tv1, tv0);
				f_3368_a2_v(tv1, tv0);
				f_343a_a2_v(tv1, tv0);
				f_3472_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
			}
			if (a1 == 19736) {
				f_3347_a2_v(tv1, tv0);
				f_3499_a2_v(tv1, tv0);
				f_3368_a2_v(tv1, tv0);
				f_3379_a2_v(tv1, tv0);
				f_3488_a2_v(tv1, tv0);
				f_347d_a2_v(tv1, tv0);
			}
			if (a1 == 31273) {
				f_3225_a2_v(tv1, tv0);
			}
			if (a0 == 19701) {
				if (f_37d1_a1_b(tv1)) {
					f_321f_a2_v(tv1, tv0);
					f_a48_a1_v("Menace");
					tv0->SetMessage(518609);
					tv0->ClearReplies();
					tv0->AddReply(518750, 19843, 19842);
					tv0->AddReply(518748, 19845, 19840);
					return;
				}
				f_a48_a1_v("Untrust");
				tv0->SetMessage(518612);
				tv0->ClearReplies();
				if (f_37dd_a1_b(tv1)) {
					tv0->AddReply(518613, 19996, 19705);
				}
				if (f_37e9_a1_b(tv1) && !f_37f5_a1_b(tv1) && f_3822_a1_b(tv1) && f_382e_a1_b(tv1)) {
					tv0->AddReply(518633, 20000, 19725);
				}
				if (f_3801_a1_b(tv1) && f_3822_a1_b(tv1) && !f_3682_a1_b(tv1)) {
					tv0->AddReply(518636, 19729, 19728);
				}
				if (f_380c_a1_b(tv1) && f_3822_a1_b(tv1) && !f_3682_a1_b(tv1)) {
					tv0->AddReply(518639, 19732, 19731);
				}
				if (f_3817_a1_b(tv1) && f_3822_a1_b(tv1) && !f_3682_a1_b(tv1)) {
					tv0->AddReply(518642, 19735, 19734);
				}
				if (f_3682_a1_b(tv1) && !f_368e_a1_b(tv1)) {
					tv0->AddReply(529822, 31272, 31271);
				}
				if (f_36d6_a1_b(tv1)) {
					tv0->AddReply(530667, 31961, 31960);
				}
				tv0->AddReply(518618, 29655, 19710);
				return;
			}
			if (a0 == 29655) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(528290);
				tv0->ClearReplies();
				tv0->AddReply(528291, -1, 29656);
				return;
			}
			if (a0 == 31961) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(530668);
				tv0->ClearReplies();
				tv0->AddReply(530669, 31963, 31962);
				tv0->AddReply(530676, 31965, 31969);
				return;
			}
			if (a0 == 31963) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(530670);
				tv0->ClearReplies();
				tv0->AddReply(530671, 31965, 31964);
				tv0->AddReply(530675, -1, 31968);
				return;
			}
			if (a0 == 31965) {
				f_a48_a1_v("Sorrow");
				tv0->SetMessage(530672);
				tv0->ClearReplies();
				tv0->AddReply(530673, -1, 31966);
				tv0->AddReply(530674, -1, 31967);
				return;
			}
			if (a0 == 31272) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(529823);
				tv0->ClearReplies();
				tv0->AddReply(530179, 31573, 31572);
				return;
			}
			if (a0 == 31573) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(530180);
				tv0->ClearReplies();
				tv0->AddReply(530637, 31942, 31941);
				tv0->AddReply(530639, 31945, 31943);
				return;
			}
			if (a0 == 31942) {
				f_a48_a1_v("Smile");
				tv0->SetMessage(530638);
				tv0->ClearReplies();
				tv0->AddReply(530640, 31945, 31944);
				return;
			}
			if (a0 == 31945) {
				f_a48_a1_v("Smile");
				tv0->SetMessage(530641);
				tv0->ClearReplies();
				tv0->AddReply(529824, -1, 31273);
				return;
			}
			if (a0 == 19735) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518643);
				tv0->ClearReplies();
				tv0->AddReply(518912, 20024, 20023);
				return;
			}
			if (a0 == 20024) {
				f_a48_a1_v("Sorrow");
				tv0->SetMessage(518913);
				tv0->ClearReplies();
				tv0->AddReply(518914, 20026, 20025);
				tv0->AddReply(528298, 29666, 29665);
				return;
			}
			if (a0 == 29666) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(528299);
				tv0->ClearReplies();
				tv0->AddReply(528300, 20026, 29667);
				return;
			}
			if (a0 == 20026) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518915);
				tv0->ClearReplies();
				tv0->AddReply(518644, -1, 19736);
				return;
			}
			if (a0 == 19732) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518640);
				tv0->ClearReplies();
				tv0->AddReply(518910, 20022, 20021);
				return;
			}
			if (a0 == 20022) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518911);
				tv0->ClearReplies();
				tv0->AddReply(518641, -1, 19733);
				return;
			}
			if (a0 == 19729) {
				f_a48_a1_v("Menace");
				tv0->SetMessage(518637);
				tv0->ClearReplies();
				tv0->AddReply(518901, 20012, 20011);
				tv0->AddReply(518907, 20014, 20017);
				return;
			}
			if (a0 == 20012) {
				f_a48_a1_v("Sorrow");
				tv0->SetMessage(518902);
				tv0->ClearReplies();
				tv0->AddReply(518903, 20014, 20013);
				return;
			}
			if (a0 == 20014) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518904);
				tv0->ClearReplies();
				tv0->AddReply(518905, 20016, 20015);
				return;
			}
			if (a0 == 20016) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518906);
				tv0->ClearReplies();
				tv0->AddReply(518638, -1, 19730);
				return;
			}
			if (a0 == 20000) {
				f_a48_a1_v("Menace");
				tv0->SetMessage(518891);
				tv0->ClearReplies();
				tv0->AddReply(518892, 19726, 20001);
				tv0->AddReply(518893, 20004, 20002);
				return;
			}
			if (a0 == 20004) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518895);
				tv0->ClearReplies();
				tv0->AddReply(518896, 20003, 20005);
				return;
			}
			if (a0 == 19726) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518634);
				tv0->ClearReplies();
				tv0->AddReply(518635, 20003, 19727);
				return;
			}
			if (a0 == 20003) {
				f_a48_a1_v("Menace");
				tv0->SetMessage(518894);
				tv0->ClearReplies();
				tv0->AddReply(518897, 20009, 20007);
				tv0->AddReply(518898, -1, 20008);
				return;
			}
			if (a0 == 20009) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518899);
				tv0->ClearReplies();
				tv0->AddReply(518900, -1, 20010);
				return;
			}
			if (a0 == 19996) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518887);
				tv0->ClearReplies();
				tv0->AddReply(518888, 19998, 19997);
				return;
			}
			if (a0 == 19998) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518889);
				tv0->ClearReplies();
				tv0->AddReply(518617, -1, 19709);
				return;
			}
			if (a0 == 19843) {
				f_a48_a1_v("Menace");
				tv0->SetMessage(518751);
				tv0->ClearReplies();
				tv0->AddReply(518752, 19845, 19844);
				tv0->AddReply(518758, 19845, 19851);
				return;
			}
			if (a0 == 19845) {
				f_a48_a1_v("Menace");
				tv0->SetMessage(518753);
				tv0->ClearReplies();
				tv0->AddReply(518755, 19849, 19847);
				tv0->AddReply(518756, 19849, 19848);
				return;
			}
			if (a0 == 19849) {
				f_a48_a1_v("Sorrow");
				tv0->SetMessage(518757);
				tv0->ClearReplies();
				tv0->AddReply(518759, 19854, 19853);
				tv0->AddReply(518761, 19856, 19855);
				tv0->AddReply(518765, 19858, 19859);
				return;
			}
			if (a0 == 19856) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518762);
				tv0->ClearReplies();
				tv0->AddReply(518763, 19858, 19857);
				return;
			}
			if (a0 == 19858) {
				f_a48_a1_v("Smile");
				tv0->SetMessage(518764);
				tv0->ClearReplies();
				tv0->AddReply(518766, 19869, 19861);
				return;
			}
			if (a0 == 19854) {
				f_a48_a1_v("Sorrow");
				tv0->SetMessage(518760);
				tv0->ClearReplies();
				tv0->AddReply(518769, 19869, 19864);
				tv0->AddReply(518768, 19870, 19863);
				return;
			}
			if (a0 == 19870) {
				f_a48_a1_v("Menace");
				tv0->SetMessage(518773);
				tv0->ClearReplies();
				tv0->AddReply(518774, 19873, 19871);
				tv0->AddReply(518775, 19878, 19872);
				tv0->AddReply(518779, 19877, 19876);
				return;
			}
			if (a0 == 19878) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518781);
				tv0->ClearReplies();
				tv0->AddReply(518782, 19841, 19879);
				return;
			}
			if (a0 == 19873) {
				f_a48_a1_v("Menace");
				tv0->SetMessage(518776);
				tv0->ClearReplies();
				tv0->AddReply(518778, 19877, 19875);
				tv0->AddReply(518777, -1, 19874);
				return;
			}
			if (a0 == 19877) {
				f_a48_a1_v("Menace");
				tv0->SetMessage(518780);
				tv0->ClearReplies();
				tv0->AddReply(518784, 19885, 19883);
				tv0->AddReply(518786, 19841, 19886);
				return;
			}
			if (a0 == 19885) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518785);
				tv0->ClearReplies();
				tv0->AddReply(518787, 19841, 19888);
				tv0->AddReply(518788, 19891, 19889);
				return;
			}
			if (a0 == 19891) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518789);
				tv0->ClearReplies();
				tv0->AddReply(518790, 19869, 19892);
				tv0->AddReply(518791, -1, 19893);
				return;
			}
			if (a0 == 19869) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518772);
				tv0->ClearReplies();
				tv0->AddReply(518783, 19841, 19881);
				return;
			}
			if (a0 == 19841) {
				f_a48_a1_v("Neutral");
				tv0->SetMessage(518749);
				tv0->ClearReplies();
				tv0->AddReply(518610, 19706, 19702);
				tv0->AddReply(518611, -1, 19703);
				return;
			}
			if (a0 == 19706) {
				f_a48_a1_v("Untrust");
				tv0->SetMessage(518614);
				tv0->ClearReplies();
				tv0->AddReply(518792, 19896, 19895);
				return;
			}
			if (a0 == 19896) {
				f_a48_a1_v("Untrust");
				tv0->SetMessage(518793);
				tv0->ClearReplies();
				tv0->AddReply(518615, -1, 19707);
				tv0->AddReply(518794, -1, 19897);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (!f_385e_a1_b(tv1) && !f_3852_a1_b(tv1)) {
				f_fc3_a1_v("Menace");
				tv0->SetMessage(520217);
				tv0->ClearReplies();
				tv0->AddReply(520218, 21411, 21410);
				tv0->AddReply(520222, 21415, 21414);
				break;
			}
			f_fc3_a1_v("Smile");
			tv0->SetMessage(520439);
			tv0->ClearReplies();
			tv0->AddReply(520440, -1, 21653);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_fc3_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 21656) {
				f_3241_a2_v(tv1, tv0);
				f_34cf_a2_v(tv1, tv0);
			}
			if (a1 == 21659) {
				f_3241_a2_v(tv1, tv0);
				f_34cf_a2_v(tv1, tv0);
			}
			if (a0 == 21409) {
				if (!f_385e_a1_b(tv1) && !f_3852_a1_b(tv1)) {
					f_fc3_a1_v("Menace");
					tv0->SetMessage(520217);
					tv0->ClearReplies();
					tv0->AddReply(520218, 21411, 21410);
					tv0->AddReply(520222, 21415, 21414);
					return;
				}
				f_fc3_a1_v("Smile");
				tv0->SetMessage(520439);
				tv0->ClearReplies();
				tv0->AddReply(520440, -1, 21653);
				return;
			}
			if (a0 == 21415) {
				f_fc3_a1_v("Menace");
				tv0->SetMessage(520223);
				tv0->ClearReplies();
				tv0->AddReply(520437, 21413, 21648);
				return;
			}
			if (a0 == 21411) {
				f_fc3_a1_v("Menace");
				tv0->SetMessage(520219);
				tv0->ClearReplies();
				tv0->AddReply(520220, 21413, 21412);
				tv0->AddReply(520438, 21413, 21650);
				return;
			}
			if (a0 == 21413) {
				f_fc3_a1_v("Smile");
				tv0->SetMessage(520221);
				tv0->ClearReplies();
				tv0->AddReply(520441, 21655, 21654);
				return;
			}
			if (a0 == 21655) {
				f_fc3_a1_v("Sorrow");
				tv0->SetMessage(520442);
				tv0->ClearReplies();
				tv0->AddReply(520443, -1, 21656);
				tv0->AddReply(520444, 21658, 21657);
				return;
			}
			if (a0 == 21658) {
				f_fc3_a1_v("Sorrow");
				tv0->SetMessage(520445);
				tv0->ClearReplies();
				tv0->AddReply(520446, -1, 21659);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (f_36a6_a1_b(tv1)) {
				f_327d_a2_v(tv1, tv0);
				f_11aa_a1_v("Menace");
				tv0->SetMessage(520332);
				tv0->ClearReplies();
				if (f_38d3_a1_b(tv1)) {
					tv0->AddReply(520333, 21529, 21528);
				}
				tv0->AddReply(520347, -1, 21544);
				break;
			}
			if (f_389a_a1_b(tv1) && f_36b2_a1_b(tv1)) {
				f_326b_a2_v(tv1, tv0);
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520348);
				tv0->ClearReplies();
				tv0->AddReply(520349, 21548, 21547);
				tv0->AddReply(520368, 21548, 21571);
				break;
			}
			f_11aa_a1_v("Neutral");
			tv0->SetMessage(520369);
			tv0->ClearReplies();
			if (f_38b2_a1_b(tv1) && f_38c7_a1_b(tv1) && f_36be_a1_b(tv1)) {
				tv0->AddReply(520370, -1, 21574);
			}
			if (f_36ca_a1_b(tv1) && !f_388e_a1_b(tv1)) {
				tv0->AddReply(520372, 21577, 21576);
			}
			if (f_38a6_a1_b(tv1)) {
				tv0->AddReply(520388, 21595, 21594);
			}
			tv0->AddReply(520397, -1, 21603);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_11aa_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 21528) {
				f_3283_a2_v(tv1, tv0);
			}
			if (a1 == 21557) {
				f_3289_a2_v(tv1, tv0);
				f_337f_a2_v(tv1, tv0);
				f_34af_a2_v(tv1, tv0);
			}
			if (a1 == 21558) {
				f_3289_a2_v(tv1, tv0);
				f_337f_a2_v(tv1, tv0);
				f_34af_a2_v(tv1, tv0);
			}
			if (a1 == 22171) {
				f_337f_a2_v(tv1, tv0);
			}
			if (a1 == 21574) {
				f_3277_a2_v(tv1, tv0);
				f_3388_a2_v(tv1, tv0);
			}
			if (a1 == 31916) {
				f_324a_a2_v(tv1, tv0);
			}
			if (a1 == 31914) {
				f_324a_a2_v(tv1, tv0);
			}
			if (a1 == 21586) {
				f_324a_a2_v(tv1, tv0);
			}
			if (a1 == 21594) {
				f_3271_a2_v(tv1, tv0);
			}
			if (a0 == 21527) {
				if (f_36a6_a1_b(tv1)) {
					f_327d_a2_v(tv1, tv0);
					f_11aa_a1_v("Menace");
					tv0->SetMessage(520332);
					tv0->ClearReplies();
					if (f_38d3_a1_b(tv1)) {
						tv0->AddReply(520333, 21529, 21528);
					}
					tv0->AddReply(520347, -1, 21544);
					return;
				}
				if (f_389a_a1_b(tv1) && f_36b2_a1_b(tv1)) {
					f_326b_a2_v(tv1, tv0);
					f_11aa_a1_v("Neutral");
					tv0->SetMessage(520348);
					tv0->ClearReplies();
					tv0->AddReply(520349, 21548, 21547);
					tv0->AddReply(520368, 21548, 21571);
					return;
				}
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520369);
				tv0->ClearReplies();
				if (f_38b2_a1_b(tv1) && f_38c7_a1_b(tv1) && f_36be_a1_b(tv1)) {
					tv0->AddReply(520370, -1, 21574);
				}
				if (f_36ca_a1_b(tv1) && !f_388e_a1_b(tv1)) {
					tv0->AddReply(520372, 21577, 21576);
				}
				if (f_38a6_a1_b(tv1)) {
					tv0->AddReply(520388, 21595, 21594);
				}
				tv0->AddReply(520397, -1, 21603);
				return;
			}
			if (a0 == 21595) {
				f_11aa_a1_v("Sorrow");
				tv0->SetMessage(520389);
				tv0->ClearReplies();
				tv0->AddReply(520390, 21597, 21596);
				tv0->AddReply(520396, -1, 21602);
				return;
			}
			if (a0 == 21597) {
				f_11aa_a1_v("Sorrow");
				tv0->SetMessage(520391);
				tv0->ClearReplies();
				tv0->AddReply(520392, 21599, 21598);
				tv0->AddReply(520395, -1, 21601);
				return;
			}
			if (a0 == 21599) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520393);
				tv0->ClearReplies();
				tv0->AddReply(520394, -1, 21600);
				return;
			}
			if (a0 == 21577) {
				f_11aa_a1_v("Untrust");
				tv0->SetMessage(520373);
				tv0->ClearReplies();
				tv0->AddReply(520374, 21579, 21578);
				tv0->AddReply(520387, 21583, 21592);
				return;
			}
			if (a0 == 21579) {
				f_11aa_a1_v("Untrust");
				tv0->SetMessage(520375);
				tv0->ClearReplies();
				tv0->AddReply(520376, 21581, 21580);
				tv0->AddReply(520386, 21583, 21590);
				return;
			}
			if (a0 == 21581) {
				f_11aa_a1_v("Untrust");
				tv0->SetMessage(520377);
				tv0->ClearReplies();
				tv0->AddReply(520378, 21583, 21582);
				tv0->AddReply(530616, 21583, 31917);
				return;
			}
			if (a0 == 21583) {
				f_11aa_a1_v("Sorrow");
				tv0->SetMessage(520379);
				tv0->ClearReplies();
				tv0->AddReply(520380, 21585, 21584);
				if (!f_3876_a1_b(tv1)) {
					tv0->AddReply(520383, 21588, 21587);
				}
				return;
			}
			if (a0 == 21588) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520384);
				tv0->ClearReplies();
				tv0->AddReply(520385, 21585, 21589);
				return;
			}
			if (a0 == 21585) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520381);
				tv0->ClearReplies();
				tv0->AddReply(530608, 31909, 31908);
				tv0->AddReply(520382, -1, 21586);
				return;
			}
			if (a0 == 31909) {
				f_11aa_a1_v("Untrust");
				tv0->SetMessage(530609);
				tv0->ClearReplies();
				tv0->AddReply(530610, 31912, 31911);
				return;
			}
			if (a0 == 31912) {
				f_11aa_a1_v("Untrust");
				tv0->SetMessage(530611);
				tv0->ClearReplies();
				tv0->AddReply(530612, 31915, 31913);
				tv0->AddReply(530613, -1, 31914);
				return;
			}
			if (a0 == 31915) {
				f_11aa_a1_v("Menace");
				tv0->SetMessage(530614);
				tv0->ClearReplies();
				tv0->AddReply(530615, -1, 31916);
				return;
			}
			if (a0 == 21548) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520350);
				tv0->ClearReplies();
				tv0->AddReply(520351, 21550, 21549);
				tv0->AddReply(520363, 21550, 21563);
				tv0->AddReply(520364, 21566, 21565);
				return;
			}
			if (a0 == 21566) {
				f_11aa_a1_v("Menace");
				tv0->SetMessage(520365);
				tv0->ClearReplies();
				tv0->AddReply(527832, 29172, 29171);
				return;
			}
			if (a0 == 29172) {
				f_11aa_a1_v("Menace");
				tv0->SetMessage(527833);
				tv0->ClearReplies();
				tv0->AddReply(520367, 21550, 21569);
				tv0->AddReply(520366, 21552, 21567);
				return;
			}
			if (a0 == 21550) {
				f_11aa_a1_v("Sorrow");
				tv0->SetMessage(520352);
				tv0->ClearReplies();
				tv0->AddReply(527834, 29174, 29173);
				return;
			}
			if (a0 == 29174) {
				f_11aa_a1_v("Untrust");
				tv0->SetMessage(527835);
				tv0->ClearReplies();
				tv0->AddReply(520353, 21552, 21551);
				tv0->AddReply(520362, 21552, 21561);
				return;
			}
			if (a0 == 21552) {
				f_11aa_a1_v("Untrust");
				tv0->SetMessage(520354);
				tv0->ClearReplies();
				tv0->AddReply(520355, 21554, 21553);
				tv0->AddReply(520361, 21556, 21559);
				return;
			}
			if (a0 == 21554) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520356);
				tv0->ClearReplies();
				tv0->AddReply(520357, 21556, 21555);
				if (f_3876_a1_b(tv1)) {
					tv0->AddReply(520954, -1, 22171);
				}
				return;
			}
			if (a0 == 21556) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520358);
				tv0->ClearReplies();
				tv0->AddReply(520359, -1, 21557);
				tv0->AddReply(520360, -1, 21558);
				return;
			}
			if (a0 == 21529) {
				f_11aa_a1_v("Menace");
				tv0->SetMessage(520334);
				tv0->ClearReplies();
				tv0->AddReply(520335, 21531, 21530);
				tv0->AddReply(520346, 21531, 21542);
				return;
			}
			if (a0 == 21531) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(520336);
				tv0->ClearReplies();
				tv0->AddReply(527828, 29168, 29167);
				return;
			}
			if (a0 == 29168) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(527829);
				tv0->ClearReplies();
				tv0->AddReply(527830, 29170, 29169);
				return;
			}
			if (a0 == 29170) {
				f_11aa_a1_v("Neutral");
				tv0->SetMessage(527831);
				tv0->ClearReplies();
				tv0->AddReply(520337, 21533, 21532);
				return;
			}
			if (a0 == 21533) {
				if (!f_386a_a1_b(tv1)) {
					f_11aa_a1_v("Menace");
					tv0->SetMessage(520338);
					tv0->ClearReplies();
					tv0->AddReply(520339, 21535, 21534);
					tv0->AddReply(520345, 21535, 21540);
					return;
				}
				if (f_386a_a1_b(tv1)) {
					f_11aa_a1_v("Neutral");
					tv0->SetMessage(520956);
					tv0->ClearReplies();
					tv0->AddReply(520957, 29175, 22173);
					tv0->AddReply(520958, 29175, 22174);
					return;
				}
			}
			if (a0 == 21535) {
				f_11aa_a1_v("Menace");
				tv0->SetMessage(520340);
				tv0->ClearReplies();
				tv0->AddReply(520341, 29175, 21536);
				tv0->AddReply(520342, 21538, 21537);
				return;
			}
			if (a0 == 21538) {
				f_11aa_a1_v("Smile");
				tv0->SetMessage(520343);
				tv0->ClearReplies();
				tv0->AddReply(520344, 29175, 21539);
				return;
			}
			if (a0 == 29175) {
				f_11aa_a1_v("Menace");
				tv0->SetMessage(527836);
				tv0->ClearReplies();
				tv0->AddReply(527837, -1, 29176);
				tv0->AddReply(527838, -1, 29177);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (f_3882_a1_b(tv1)) {
				f_3254_a2_v(tv1, tv0);
				f_161b_a1_v("Neutral");
				tv0->SetMessage(520527);
				tv0->ClearReplies();
				tv0->AddReply(520528, 21731, 21730);
				break;
			}
			f_161b_a1_v("Neutral");
			tv0->SetMessage(520547);
			tv0->ClearReplies();
			if (f_3774_a1_b(tv1)) {
				tv0->AddReply(520548, 21751, 21750);
			}
			if (f_365f_a1_b(tv1) && f_366a_a1_b(tv1)) {
				tv0->AddReply(522217, 23367, 23366);
			}
			if (!f_3676_a1_b(tv1) && f_36e1_a1_b(tv1)) {
				tv0->AddReply(522220, 23370, 23369);
			}
			tv0->AddReply(520557, -1, 21759);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_161b_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 21742) {
				f_325a_a2_v(tv1, tv0);
			}
			if (a1 == 21743) {
				f_325a_a2_v(tv1, tv0);
			}
			if (a1 == 23366) {
				f_3362_a2_v(tv1, tv0);
			}
			if (a1 == 23368) {
				f_338f_a2_v(tv1, tv0);
			}
			if (a1 == 23377) {
				f_3358_a2_v(tv1, tv0);
			}
			if (a1 == 23378) {
				f_3358_a2_v(tv1, tv0);
			}
			if (a0 == 21729) {
				if (f_3882_a1_b(tv1)) {
					f_3254_a2_v(tv1, tv0);
					f_161b_a1_v("Neutral");
					tv0->SetMessage(520527);
					tv0->ClearReplies();
					tv0->AddReply(520528, 21731, 21730);
					return;
				}
				f_161b_a1_v("Neutral");
				tv0->SetMessage(520547);
				tv0->ClearReplies();
				if (f_3774_a1_b(tv1)) {
					tv0->AddReply(520548, 21751, 21750);
				}
				if (f_365f_a1_b(tv1) && f_366a_a1_b(tv1)) {
					tv0->AddReply(522217, 23367, 23366);
				}
				if (!f_3676_a1_b(tv1) && f_36e1_a1_b(tv1)) {
					tv0->AddReply(522220, 23370, 23369);
				}
				tv0->AddReply(520557, -1, 21759);
				return;
			}
			if (a0 == 23370) {
				f_161b_a1_v("Smile");
				tv0->SetMessage(522221);
				tv0->ClearReplies();
				tv0->AddReply(522222, 23372, 23371);
				return;
			}
			if (a0 == 23372) {
				f_161b_a1_v("Sorrow");
				tv0->SetMessage(522223);
				tv0->ClearReplies();
				tv0->AddReply(522224, 23374, 23373);
				return;
			}
			if (a0 == 23374) {
				f_161b_a1_v("Sorrow");
				tv0->SetMessage(522225);
				tv0->ClearReplies();
				tv0->AddReply(522226, 23376, 23375);
				tv0->AddReply(522229, -1, 23378);
				return;
			}
			if (a0 == 23376) {
				f_161b_a1_v("Sorrow");
				tv0->SetMessage(522227);
				tv0->ClearReplies();
				tv0->AddReply(522228, -1, 23377);
				return;
			}
			if (a0 == 23367) {
				f_161b_a1_v("Neutral");
				tv0->SetMessage(522218);
				tv0->ClearReplies();
				tv0->AddReply(522219, -1, 23368);
				return;
			}
			if (a0 == 21751) {
				f_161b_a1_v("Neutral");
				tv0->SetMessage(520549);
				tv0->ClearReplies();
				tv0->AddReply(520550, 21753, 21752);
				return;
			}
			if (a0 == 21753) {
				f_161b_a1_v("Neutral");
				tv0->SetMessage(520551);
				tv0->ClearReplies();
				tv0->AddReply(520552, -1, 21754);
				tv0->AddReply(520553, -1, 21755);
				return;
			}
			if (a0 == 21731) {
				f_161b_a1_v("Menace");
				tv0->SetMessage(520529);
				tv0->ClearReplies();
				tv0->AddReply(520530, 21733, 21732);
				return;
			}
			if (a0 == 21733) {
				f_161b_a1_v("Smile");
				tv0->SetMessage(520531);
				tv0->ClearReplies();
				tv0->AddReply(520532, 21735, 21734);
				tv0->AddReply(528355, 29726, 29725);
				return;
			}
			if (a0 == 29726) {
				f_161b_a1_v("Menace");
				tv0->SetMessage(528356);
				tv0->ClearReplies();
				tv0->AddReply(528357, 21737, 29727);
				return;
			}
			if (a0 == 21735) {
				f_161b_a1_v("Smile");
				tv0->SetMessage(520533);
				tv0->ClearReplies();
				tv0->AddReply(520534, 21737, 21736);
				return;
			}
			if (a0 == 21737) {
				f_161b_a1_v("Smile");
				tv0->SetMessage(520535);
				tv0->ClearReplies();
				tv0->AddReply(520536, 21739, 21738);
				tv0->AddReply(520542, 21745, 21744);
				return;
			}
			if (a0 == 21745) {
				f_161b_a1_v("Smile");
				tv0->SetMessage(520543);
				tv0->ClearReplies();
				tv0->AddReply(520544, 21747, 21746);
				return;
			}
			if (a0 == 21747) {
				f_161b_a1_v("Smile");
				tv0->SetMessage(520545);
				tv0->ClearReplies();
				tv0->AddReply(520546, 21741, 21748);
				return;
			}
			if (a0 == 21739) {
				f_161b_a1_v("Smile");
				tv0->SetMessage(520537);
				tv0->ClearReplies();
				tv0->AddReply(520538, 21741, 21740);
				return;
			}
			if (a0 == 21741) {
				f_161b_a1_v("Smile");
				tv0->SetMessage(520539);
				tv0->ClearReplies();
				tv0->AddReply(520540, -1, 21742);
				tv0->AddReply(520541, -1, 21743);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			f_1894_a1_v("Smile");
			tv0->SetMessage(520709);
			tv0->ClearReplies();
			tv0->AddReply(520710, 21922, 21921);
			tv0->AddReply(520714, 21922, 21925);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_1894_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a0 == 21920) {
				f_1894_a1_v("Smile");
				tv0->SetMessage(520709);
				tv0->ClearReplies();
				tv0->AddReply(520710, 21922, 21921);
				tv0->AddReply(520714, 21922, 21925);
				return;
			}
			if (a0 == 21922) {
				f_1894_a1_v("Smile");
				tv0->SetMessage(520711);
				tv0->ClearReplies();
				tv0->AddReply(520712, -1, 21923);
				tv0->AddReply(520713, -1, 21924);
				tv0->AddReply(530691, -1, 31983);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (f_38df_a1_b(tv1)) {
				f_198a_a1_v("Neutral");
				tv0->SetMessage(520966);
				tv0->ClearReplies();
				tv0->AddReply(528598, 29999, 29998);
				break;
			}
			f_198a_a1_v("Neutral");
			tv0->SetMessage(520968);
			tv0->ClearReplies();
			tv0->AddReply(520969, -1, 22182);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_198a_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 22180) {
				f_3299_a2_v(tv1, tv0);
				f_3533_a2_v(tv1, tv0);
				f_32b8_a2_v(tv1, tv0);
			}
			if (a1 == 30025) {
				f_3299_a2_v(tv1, tv0);
				f_3533_a2_v(tv1, tv0);
				f_32b8_a2_v(tv1, tv0);
			}
			if (a0 == 22179) {
				if (f_38df_a1_b(tv1)) {
					f_198a_a1_v("Neutral");
					tv0->SetMessage(520966);
					tv0->ClearReplies();
					tv0->AddReply(528598, 29999, 29998);
					return;
				}
				f_198a_a1_v("Neutral");
				tv0->SetMessage(520968);
				tv0->ClearReplies();
				tv0->AddReply(520969, -1, 22182);
				return;
			}
			if (a0 == 29999) {
				f_198a_a1_v("Neutral");
				tv0->SetMessage(528599);
				tv0->ClearReplies();
				tv0->AddReply(528607, 30008, 30007);
				return;
			}
			if (a0 == 30008) {
				f_198a_a1_v("Sorrow");
				tv0->SetMessage(528608);
				tv0->ClearReplies();
				tv0->AddReply(528619, 23365, 30021);
				tv0->AddReply(528600, 30001, 30000);
				return;
			}
			if (a0 == 30001) {
				f_198a_a1_v("Sorrow");
				tv0->SetMessage(528601);
				tv0->ClearReplies();
				tv0->AddReply(528602, 23365, 30002);
				return;
			}
			if (a0 == 23365) {
				f_198a_a1_v("Untrust");
				tv0->SetMessage(522216);
				tv0->ClearReplies();
				tv0->AddReply(528603, 30004, 30003);
				tv0->AddReply(528609, 30012, 30009);
				return;
			}
			if (a0 == 30012) {
				f_198a_a1_v("Smile");
				tv0->SetMessage(528612);
				tv0->ClearReplies();
				tv0->AddReply(528613, 30015, 30013);
				return;
			}
			if (a0 == 30004) {
				f_198a_a1_v("Untrust");
				tv0->SetMessage(528604);
				tv0->ClearReplies();
				tv0->AddReply(528605, 30006, 30005);
				tv0->AddReply(528610, 30011, 30010);
				return;
			}
			if (a0 == 30011) {
				f_198a_a1_v("Sorrow");
				tv0->SetMessage(528611);
				tv0->ClearReplies();
				tv0->AddReply(528618, 30006, 30018);
				return;
			}
			if (a0 == 30006) {
				f_198a_a1_v("Untrust");
				tv0->SetMessage(528606);
				tv0->ClearReplies();
				tv0->AddReply(528614, 30015, 30014);
				return;
			}
			if (a0 == 30015) {
				f_198a_a1_v("Untrust");
				tv0->SetMessage(528615);
				tv0->ClearReplies();
				tv0->AddReply(528616, 30017, 30016);
				return;
			}
			if (a0 == 30017) {
				f_198a_a1_v("Untrust");
				tv0->SetMessage(528617);
				tv0->ClearReplies();
				tv0->AddReply(520967, -1, 22180);
				tv0->AddReply(528620, 30024, 30023);
				return;
			}
			if (a0 == 30024) {
				f_198a_a1_v("Untrust");
				tv0->SetMessage(528621);
				tv0->ClearReplies();
				tv0->AddReply(528622, -1, 30025);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (f_354f_a1_b(tv1)) {
				f_32c8_a2_v(tv1, tv0);
				f_344b_a2_v(tv1, tv0);
				f_1bb5_a1_v("Smile");
				tv0->SetMessage(521440);
				tv0->ClearReplies();
				tv0->AddReply(531320, 32648, 32647);
				tv0->AddReply(531327, 32650, 32654);
				break;
			}
			f_1bb5_a1_v("Neutral");
			tv0->SetMessage(521450);
			tv0->ClearReplies();
			if (!f_357d_a1_b(tv1) && f_3589_a1_b(tv1) && f_3595_a1_b(tv1)) {
				tv0->AddReply(521451, 22630, 22629);
			}
			if (f_375c_a1_b(tv1) && f_3768_a1_b(tv1)) {
				tv0->AddReply(534566, 36201, 36200);
			}
			tv0->AddReply(521454, -1, 22632);
			tv0->AddReply(531341, -1, 32672);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_1bb5_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 22625) {
				f_32ce_a2_v(tv1, tv0);
			}
			if (a1 == 22629) {
				f_32d4_a2_v(tv1, tv0);
			}
			if (a1 == 36200) {
				f_3445_a2_v(tv1, tv0);
			}
			if (a0 == 22618) {
				if (f_354f_a1_b(tv1)) {
					f_32c8_a2_v(tv1, tv0);
					f_344b_a2_v(tv1, tv0);
					f_1bb5_a1_v("Smile");
					tv0->SetMessage(521440);
					tv0->ClearReplies();
					tv0->AddReply(531320, 32648, 32647);
					tv0->AddReply(531327, 32650, 32654);
					return;
				}
				f_1bb5_a1_v("Neutral");
				tv0->SetMessage(521450);
				tv0->ClearReplies();
				if (!f_357d_a1_b(tv1) && f_3589_a1_b(tv1) && f_3595_a1_b(tv1)) {
					tv0->AddReply(521451, 22630, 22629);
				}
				if (f_375c_a1_b(tv1) && f_3768_a1_b(tv1)) {
					tv0->AddReply(534566, 36201, 36200);
				}
				tv0->AddReply(521454, -1, 22632);
				tv0->AddReply(531341, -1, 32672);
				return;
			}
			if (a0 == 36201) {
				f_1bb5_a1_v("Sorrow");
				tv0->SetMessage(534567);
				tv0->ClearReplies();
				tv0->AddReply(534568, 36203, 36202);
				tv0->AddReply(534570, 36206, 36204);
				tv0->AddReply(534571, 36206, 36205);
				return;
			}
			if (a0 == 36206) {
				f_1bb5_a1_v("Sorrow");
				tv0->SetMessage(534572);
				tv0->ClearReplies();
				tv0->AddReply(534573, 36203, 36209);
				tv0->AddReply(534576, 36203, 36213);
				return;
			}
			if (a0 == 36203) {
				f_1bb5_a1_v("Sorrow");
				tv0->SetMessage(534569);
				tv0->ClearReplies();
				tv0->AddReply(534574, -1, 36211);
				tv0->AddReply(534575, -1, 36212);
				return;
			}
			if (a0 == 22630) {
				f_1bb5_a1_v("Neutral");
				tv0->SetMessage(521452);
				tv0->ClearReplies();
				tv0->AddReply(521453, 32674, 22631);
				tv0->AddReply(531342, 32674, 32673);
				return;
			}
			if (a0 == 32674) {
				f_1bb5_a1_v("Sorrow");
				tv0->SetMessage(531343);
				tv0->ClearReplies();
				tv0->AddReply(531344, -1, 32675);
				tv0->AddReply(531345, -1, 32676);
				return;
			}
			if (a0 == 32648) {
				f_1bb5_a1_v("Smile");
				tv0->SetMessage(531321);
				tv0->ClearReplies();
				tv0->AddReply(531322, 32650, 32649);
				tv0->AddReply(531328, 32650, 32655);
				return;
			}
			if (a0 == 32650) {
				f_1bb5_a1_v("Menace");
				tv0->SetMessage(531323);
				tv0->ClearReplies();
				tv0->AddReply(531324, 32652, 32651);
				tv0->AddReply(531329, 32652, 32656);
				return;
			}
			if (a0 == 32652) {
				f_1bb5_a1_v("Neutral");
				tv0->SetMessage(531325);
				tv0->ClearReplies();
				if (f_3543_a1_b(tv1)) {
					tv0->AddReply(521441, 32659, 22619);
				}
				if (f_355b_a1_b(tv1)) {
					tv0->AddReply(521444, 22623, 22622);
				}
				if (f_3595_a1_b(tv1)) {
					tv0->AddReply(521447, 22626, 22625);
				}
				return;
			}
			if (a0 == 22626) {
				f_1bb5_a1_v("Menace");
				tv0->SetMessage(521448);
				tv0->ClearReplies();
				tv0->AddReply(521449, 32664, 22627);
				tv0->AddReply(531333, 32663, 32662);
				return;
			}
			if (a0 == 32663) {
				f_1bb5_a1_v("Menace");
				tv0->SetMessage(531334);
				tv0->ClearReplies();
				tv0->AddReply(531339, 32664, 32668);
				tv0->AddReply(531340, 32664, 32669);
				return;
			}
			if (a0 == 32664) {
				f_1bb5_a1_v("Menace");
				tv0->SetMessage(531335);
				tv0->ClearReplies();
				tv0->AddReply(531336, -1, 32665);
				tv0->AddReply(531337, -1, 32666);
				tv0->AddReply(531338, -1, 32667);
				return;
			}
			if (a0 == 22623) {
				f_1bb5_a1_v("Menace");
				tv0->SetMessage(521445);
				tv0->ClearReplies();
				tv0->AddReply(521446, -1, 22624);
				tv0->AddReply(531332, -1, 32661);
				return;
			}
			if (a0 == 32659) {
				f_1bb5_a1_v("Neutral");
				tv0->SetMessage(531330);
				tv0->ClearReplies();
				tv0->AddReply(531326, 22620, 32653);
				return;
			}
			if (a0 == 22620) {
				f_1bb5_a1_v("Smile");
				tv0->SetMessage(521442);
				tv0->ClearReplies();
				tv0->AddReply(521443, -1, 22621);
				tv0->AddReply(531331, -1, 32660);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t19{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (f_35ad_a1_b(tv1)) {
				f_32f0_a2_v(tv1, tv0);
				f_32ff_a2_v(tv1, tv0);
				f_1ece_a1_v("Menace");
				tv0->SetMessage(521910);
				tv0->ClearReplies();
				tv0->AddReply(522427, 23595, 23594);
				tv0->AddReply(521912, 23599, 23086);
				break;
			}
			f_1ece_a1_v("Neutral");
			tv0->SetMessage(521913);
			tv0->ClearReplies();
			if (f_35a1_a1_b(tv1)) {
				tv0->AddReply(521914, 23092, 23088);
			}
			if (f_35b9_a1_b(tv1)) {
				tv0->AddReply(521920, 23095, 23094);
			}
			if (f_35c5_a1_b(tv1) && f_35dd_a1_b(tv1) && !f_35d1_a1_b(tv1)) {
				tv0->AddReply(521935, 32896, 23109);
			}
			if (f_35c5_a1_b(tv1) && f_35d1_a1_b(tv1) && !f_35dd_a1_b(tv1)) {
				tv0->AddReply(521936, 23113, 23110);
			}
			if (f_35dd_a1_b(tv1) && f_35d1_a1_b(tv1) && f_35c5_a1_b(tv1)) {
				tv0->AddReply(521941, 32893, 23115);
			}
			tv0->AddReply(521917, -1, 23091);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_1ece_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 23085) {
				f_32da_a2_v(tv1, tv0);
			}
			if (a1 == 23093) {
				f_32da_a2_v(tv1, tv0);
			}
			if (a1 == 23096) {
				f_32f6_a2_v(tv1, tv0);
			}
			if (a1 == 23117) {
				f_32e6_a2_v(tv1, tv0);
				f_3451_a2_v(tv1, tv0);
				f_3462_a2_v(tv1, tv0);
			}
			if (a0 == 23084) {
				if (f_35ad_a1_b(tv1)) {
					f_32f0_a2_v(tv1, tv0);
					f_32ff_a2_v(tv1, tv0);
					f_1ece_a1_v("Menace");
					tv0->SetMessage(521910);
					tv0->ClearReplies();
					tv0->AddReply(522427, 23595, 23594);
					tv0->AddReply(521912, 23599, 23086);
					return;
				}
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(521913);
				tv0->ClearReplies();
				if (f_35a1_a1_b(tv1)) {
					tv0->AddReply(521914, 23092, 23088);
				}
				if (f_35b9_a1_b(tv1)) {
					tv0->AddReply(521920, 23095, 23094);
				}
				if (f_35c5_a1_b(tv1) && f_35dd_a1_b(tv1) && !f_35d1_a1_b(tv1)) {
					tv0->AddReply(521935, 32896, 23109);
				}
				if (f_35c5_a1_b(tv1) && f_35d1_a1_b(tv1) && !f_35dd_a1_b(tv1)) {
					tv0->AddReply(521936, 23113, 23110);
				}
				if (f_35dd_a1_b(tv1) && f_35d1_a1_b(tv1) && f_35c5_a1_b(tv1)) {
					tv0->AddReply(521941, 32893, 23115);
				}
				tv0->AddReply(521917, -1, 23091);
				return;
			}
			if (a0 == 32893) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(531532);
				tv0->ClearReplies();
				tv0->AddReply(531533, 32895, 32894);
				tv0->AddReply(531538, 32895, 32900);
				return;
			}
			if (a0 == 32895) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(531534);
				tv0->ClearReplies();
				tv0->AddReply(531539, 32904, 32902);
				tv0->AddReply(531545, 32904, 32908);
				return;
			}
			if (a0 == 32904) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(531541);
				tv0->ClearReplies();
				tv0->AddReply(531542, 23116, 32905);
				tv0->AddReply(531546, 23116, 32910);
				return;
			}
			if (a0 == 23116) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(521942);
				tv0->ClearReplies();
				tv0->AddReply(531543, 32912, 32906);
				tv0->AddReply(531544, 32912, 32907);
				return;
			}
			if (a0 == 32912) {
				f_1ece_a1_v("Menace");
				tv0->SetMessage(531547);
				tv0->ClearReplies();
				tv0->AddReply(521943, -1, 23117);
				return;
			}
			if (a0 == 23113) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(521939);
				tv0->ClearReplies();
				tv0->AddReply(521940, 32889, 23114);
				tv0->AddReply(531530, 32889, 32890);
				return;
			}
			if (a0 == 32889) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(531529);
				tv0->ClearReplies();
				tv0->AddReply(531531, -1, 32892);
				return;
			}
			if (a0 == 32896) {
				f_1ece_a1_v("Menace");
				tv0->SetMessage(531535);
				tv0->ClearReplies();
				tv0->AddReply(531536, 23111, 32897);
				tv0->AddReply(531537, 23111, 32898);
				return;
			}
			if (a0 == 23111) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(521937);
				tv0->ClearReplies();
				tv0->AddReply(521938, 32887, 23112);
				return;
			}
			if (a0 == 32887) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(531527);
				tv0->ClearReplies();
				tv0->AddReply(531528, -1, 32888);
				return;
			}
			if (a0 == 23095) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(521921);
				tv0->ClearReplies();
				tv0->AddReply(522470, 23644, 23643);
				tv0->AddReply(531518, 23646, 32874);
				return;
			}
			if (a0 == 23644) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(522471);
				tv0->ClearReplies();
				tv0->AddReply(522472, 23646, 23645);
				tv0->AddReply(531517, 32882, 32873);
				return;
			}
			if (a0 == 32882) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(531523);
				tv0->ClearReplies();
				tv0->AddReply(531524, 23646, 32883);
				tv0->AddReply(531525, -1, 32885);
				return;
			}
			if (a0 == 23646) {
				f_1ece_a1_v("Menace");
				tv0->SetMessage(522473);
				tv0->ClearReplies();
				tv0->AddReply(522474, 23648, 23647);
				tv0->AddReply(531519, 32877, 32875);
				return;
			}
			if (a0 == 32877) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(531520);
				tv0->ClearReplies();
				tv0->AddReply(531521, 23648, 32878);
				tv0->AddReply(531522, 23648, 32879);
				return;
			}
			if (a0 == 23648) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(522475);
				tv0->ClearReplies();
				tv0->AddReply(522476, 23650, 23649);
				return;
			}
			if (a0 == 23650) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(522477);
				tv0->ClearReplies();
				tv0->AddReply(521922, -1, 23096);
				tv0->AddReply(531526, -1, 32886);
				return;
			}
			if (a0 == 23092) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(521918);
				tv0->ClearReplies();
				tv0->AddReply(521919, -1, 23093);
				return;
			}
			if (a0 == 23595) {
				f_1ece_a1_v("Smile");
				tv0->SetMessage(522428);
				tv0->ClearReplies();
				tv0->AddReply(522429, 23611, 23596);
				tv0->AddReply(522431, 23599, 23598);
				tv0->AddReply(522430, 23606, 23597);
				return;
			}
			if (a0 == 23606) {
				f_1ece_a1_v("Untrust");
				tv0->SetMessage(522439);
				tv0->ClearReplies();
				tv0->AddReply(522440, 23608, 23607);
				return;
			}
			if (a0 == 23608) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(522441);
				tv0->ClearReplies();
				tv0->AddReply(522442, 23601, 23609);
				return;
			}
			if (a0 == 23599) {
				f_1ece_a1_v("Sorrow");
				tv0->SetMessage(522432);
				tv0->ClearReplies();
				tv0->AddReply(522433, 23601, 23600);
				return;
			}
			if (a0 == 23601) {
				f_1ece_a1_v("Menace");
				tv0->SetMessage(522434);
				tv0->ClearReplies();
				tv0->AddReply(522435, 23603, 23602);
				return;
			}
			if (a0 == 23603) {
				f_1ece_a1_v("Menace");
				tv0->SetMessage(522436);
				tv0->ClearReplies();
				tv0->AddReply(522437, 23615, 23604);
				tv0->AddReply(522438, -1, 23605);
				return;
			}
			if (a0 == 23611) {
				f_1ece_a1_v("Sorrow");
				tv0->SetMessage(522443);
				tv0->ClearReplies();
				tv0->AddReply(522445, 23615, 23614);
				tv0->AddReply(522444, 23599, 23612);
				return;
			}
			if (a0 == 23615) {
				f_1ece_a1_v("Sorrow");
				tv0->SetMessage(522446);
				tv0->ClearReplies();
				tv0->AddReply(522447, 23618, 23616);
				return;
			}
			if (a0 == 23618) {
				f_1ece_a1_v("Menace");
				tv0->SetMessage(522448);
				tv0->ClearReplies();
				tv0->AddReply(522449, 23621, 23619);
				return;
			}
			if (a0 == 23621) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(522451);
				tv0->ClearReplies();
				tv0->AddReply(522452, 23623, 23622);
				tv0->AddReply(522450, 23623, 23620);
				return;
			}
			if (a0 == 23623) {
				f_1ece_a1_v("Menace");
				tv0->SetMessage(522453);
				tv0->ClearReplies();
				tv0->AddReply(522454, 23627, 23624);
				tv0->AddReply(522455, 23626, 23625);
				return;
			}
			if (a0 == 23626) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(522456);
				tv0->ClearReplies();
				tv0->AddReply(522458, 23630, 23629);
				return;
			}
			if (a0 == 23630) {
				f_1ece_a1_v("Neutral");
				tv0->SetMessage(522459);
				tv0->ClearReplies();
				tv0->AddReply(522460, 23627, 23631);
				return;
			}
			if (a0 == 23627) {
				f_1ece_a1_v("Menace");
				tv0->SetMessage(522457);
				tv0->ClearReplies();
				tv0->AddReply(521911, -1, 23085);
				tv0->AddReply(522461, -1, 23633);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
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
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t21{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
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
			if (f_35f5_a1_b(tv1)) {
				f_330e_a2_v(tv1, tv0);
				f_2326_a1_v("Menace");
				tv0->SetMessage(522061);
				tv0->ClearReplies();
				tv0->AddReply(523529, 24763, 24762);
				break;
			}
			f_2326_a1_v("Neutral");
			tv0->SetMessage(522063);
			tv0->ClearReplies();
			if (f_3653_a1_b(tv1)) {
				tv0->AddReply(523535, 24769, 24768);
			}
			if (f_3653_a1_b(tv1)) {
				tv0->AddReply(523537, 24771, 24770);
			}
			if (f_369a_a1_b(tv1)) {
				tv0->AddReply(530525, 32707, 31884);
			}
			if (f_36ed_a1_b(tv1)) {
				tv0->AddReply(531113, 32712, 32431);
			}
			tv0->AddReply(522064, -1, 23233);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_2326_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 24768) {
				f_3335_a2_v(tv1, tv0);
			}
			if (a1 == 23231) {
				f_3305_a2_v(tv1, tv0);
			}
			if (a1 == 24786) {
				f_3305_a2_v(tv1, tv0);
			}
			if (a1 == 24770) {
				f_3335_a2_v(tv1, tv0);
			}
			if (a1 == 31886) {
				f_336f_a2_v(tv1, tv0);
			}
			if (a1 == 32709) {
				f_336f_a2_v(tv1, tv0);
			}
			if (a1 == 32433) {
				f_339a_a2_v(tv1, tv0);
			}
			if (a1 == 32723) {
				f_339a_a2_v(tv1, tv0);
			}
			if (a1 == 32720) {
				f_33a3_a2_v(tv1, tv0);
			}
			if (a0 == 23230) {
				if (f_35f5_a1_b(tv1)) {
					f_330e_a2_v(tv1, tv0);
					f_2326_a1_v("Menace");
					tv0->SetMessage(522061);
					tv0->ClearReplies();
					tv0->AddReply(523529, 24763, 24762);
					return;
				}
				f_2326_a1_v("Neutral");
				tv0->SetMessage(522063);
				tv0->ClearReplies();
				if (f_3653_a1_b(tv1)) {
					tv0->AddReply(523535, 24769, 24768);
				}
				if (f_3653_a1_b(tv1)) {
					tv0->AddReply(523537, 24771, 24770);
				}
				if (f_369a_a1_b(tv1)) {
					tv0->AddReply(530525, 32707, 31884);
				}
				if (f_36ed_a1_b(tv1)) {
					tv0->AddReply(531113, 32712, 32431);
				}
				tv0->AddReply(522064, -1, 23233);
				return;
			}
			if (a0 == 32712) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(531375);
				tv0->ClearReplies();
				tv0->AddReply(531376, 32432, 32713);
				tv0->AddReply(531377, 32717, 32714);
				return;
			}
			if (a0 == 32717) {
				f_2326_a1_v("Sorrow");
				tv0->SetMessage(531380);
				tv0->ClearReplies();
				tv0->AddReply(531381, 32432, 32718);
				tv0->AddReply(531382, -1, 32720);
				return;
			}
			if (a0 == 32432) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(531114);
				tv0->ClearReplies();
				tv0->AddReply(531378, 32716, 32715);
				tv0->AddReply(531383, 32722, 32721);
				return;
			}
			if (a0 == 32722) {
				f_2326_a1_v("Smile");
				tv0->SetMessage(531384);
				tv0->ClearReplies();
				tv0->AddReply(531385, -1, 32723);
				tv0->AddReply(531386, 32716, 32724);
				return;
			}
			if (a0 == 32716) {
				f_2326_a1_v("Neutral");
				tv0->SetMessage(531379);
				tv0->ClearReplies();
				tv0->AddReply(531115, -1, 32433);
				return;
			}
			if (a0 == 32707) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(531370);
				tv0->ClearReplies();
				tv0->AddReply(531371, 31885, 32708);
				tv0->AddReply(531372, -1, 32709);
				return;
			}
			if (a0 == 31885) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(530526);
				tv0->ClearReplies();
				tv0->AddReply(531373, 32711, 32710);
				return;
			}
			if (a0 == 32711) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(531374);
				tv0->ClearReplies();
				tv0->AddReply(530527, -1, 31886);
				return;
			}
			if (a0 == 24771) {
				f_2326_a1_v("Neutral");
				tv0->SetMessage(523538);
				tv0->ClearReplies();
				tv0->AddReply(523539, 24773, 24772);
				return;
			}
			if (a0 == 24773) {
				f_2326_a1_v("Neutral");
				tv0->SetMessage(523540);
				tv0->ClearReplies();
				tv0->AddReply(523541, 24775, 24774);
				return;
			}
			if (a0 == 24775) {
				f_2326_a1_v("Smile");
				tv0->SetMessage(523542);
				tv0->ClearReplies();
				tv0->AddReply(523543, -1, 24776);
				tv0->AddReply(523544, -1, 24777);
				return;
			}
			if (a0 == 24769) {
				f_2326_a1_v("Smile");
				tv0->SetMessage(523536);
				tv0->ClearReplies();
				tv0->AddReply(523545, 24779, 24778);
				return;
			}
			if (a0 == 24779) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(523546);
				tv0->ClearReplies();
				tv0->AddReply(523547, 24781, 24780);
				if (f_35e9_a1_b(tv1)) {
					tv0->AddReply(522065, -1, 23234);
				}
				return;
			}
			if (a0 == 24781) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(523548);
				tv0->ClearReplies();
				tv0->AddReply(523549, 24784, 24782);
				return;
			}
			if (a0 == 24784) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(523551);
				tv0->ClearReplies();
				if (!f_35e9_a1_b(tv1)) {
					tv0->AddReply(522062, -1, 23231);
				}
				tv0->AddReply(523553, -1, 24786);
				return;
			}
			if (a0 == 24763) {
				f_2326_a1_v("Menace");
				tv0->SetMessage(523530);
				tv0->ClearReplies();
				tv0->AddReply(523531, 24765, 24764);
				return;
			}
			if (a0 == 24765) {
				f_2326_a1_v("Smile");
				tv0->SetMessage(523532);
				tv0->ClearReplies();
				tv0->AddReply(523533, 24767, 24766);
				tv0->AddReply(523554, 24788, 24787);
				return;
			}
			if (a0 == 24788) {
				f_2326_a1_v("Untrust");
				tv0->SetMessage(523555);
				tv0->ClearReplies();
				tv0->AddReply(523556, 24790, 24789);
				return;
			}
			if (a0 == 24790) {
				f_2326_a1_v("Untrust");
				tv0->SetMessage(523557);
				tv0->ClearReplies();
				tv0->AddReply(523558, 24767, 24791);
				return;
			}
			if (a0 == 24767) {
				f_2326_a1_v("Smile");
				tv0->SetMessage(523534);
				tv0->ClearReplies();
				tv0->AddReply(523559, 24794, 24793);
				return;
			}
			if (a0 == 24794) {
				f_2326_a1_v("Untrust");
				tv0->SetMessage(523560);
				tv0->ClearReplies();
				tv0->AddReply(523561, -1, 24795);
				tv0->AddReply(523562, -1, 24796);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t22
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t23{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t23
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
			if (f_3601_a1_b(tv1) && !f_3625_a1_b(tv1)) {
				f_3314_a2_v(tv1, tv0);
				f_3323_a2_v(tv1, tv0);
				f_269d_a1_v("Neutral");
				tv0->SetMessage(522107);
				tv0->ClearReplies();
				tv0->AddReply(522108, 24172, 23275);
				tv0->AddReply(522109, 24176, 23276);
				break;
			}
			f_3323_a2_v(tv1, tv0);
			f_269d_a1_v("Neutral");
			tv0->SetMessage(531983);
			tv0->ClearReplies();
			if (f_3649_a1_b(tv1) && !f_3705_a1_b(tv1) && !f_3625_a1_b(tv1)) {
				tv0->AddReply(540259, 42243, 42242);
			}
			if (f_3631_a1_b(tv1) && f_363d_a1_b(tv1)) {
				tv0->AddReply(522987, 24179, 24178);
			}
			if (f_360d_a1_b(tv1) && f_3619_a1_b(tv1)) {
				tv0->AddReply(522996, 24188, 24187);
			}
			tv0->AddReply(531987, -1, 33393);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_269d_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a1 == 24209) {
				f_342a_a2_v(tv1, tv0);
			}
			if (a1 == 33406) {
				f_331a_a2_v(tv1, tv0);
			}
			if (a1 == 33416) {
				f_342a_a2_v(tv1, tv0);
			}
			if (a1 == 33395) {
				f_331a_a2_v(tv1, tv0);
			}
			if (a1 == 42244) {
				f_331a_a2_v(tv1, tv0);
			}
			if (a1 == 24178) {
				f_332f_a2_v(tv1, tv0);
			}
			if (a1 == 24187) {
				f_3329_a2_v(tv1, tv0);
			}
			if (a0 == 23274) {
				if (f_3601_a1_b(tv1) && !f_3625_a1_b(tv1)) {
					f_3314_a2_v(tv1, tv0);
					f_3323_a2_v(tv1, tv0);
					f_269d_a1_v("Neutral");
					tv0->SetMessage(522107);
					tv0->ClearReplies();
					tv0->AddReply(522108, 24172, 23275);
					tv0->AddReply(522109, 24176, 23276);
					return;
				}
				f_3323_a2_v(tv1, tv0);
				f_269d_a1_v("Neutral");
				tv0->SetMessage(531983);
				tv0->ClearReplies();
				if (f_3649_a1_b(tv1) && !f_3705_a1_b(tv1) && !f_3625_a1_b(tv1)) {
					tv0->AddReply(540259, 42243, 42242);
				}
				if (f_3631_a1_b(tv1) && f_363d_a1_b(tv1)) {
					tv0->AddReply(522987, 24179, 24178);
				}
				if (f_360d_a1_b(tv1) && f_3619_a1_b(tv1)) {
					tv0->AddReply(522996, 24188, 24187);
				}
				tv0->AddReply(531987, -1, 33393);
				return;
			}
			if (a0 == 24188) {
				f_269d_a1_v("Smile");
				tv0->SetMessage(522997);
				tv0->ClearReplies();
				tv0->AddReply(522998, 24190, 24189);
				return;
			}
			if (a0 == 24190) {
				f_269d_a1_v("Smile");
				tv0->SetMessage(522999);
				tv0->ClearReplies();
				tv0->AddReply(523000, 24192, 24191);
				return;
			}
			if (a0 == 24192) {
				f_269d_a1_v("Smile");
				tv0->SetMessage(523001);
				tv0->ClearReplies();
				tv0->AddReply(523002, 24194, 24193);
				return;
			}
			if (a0 == 24194) {
				f_269d_a1_v("Menace");
				tv0->SetMessage(523003);
				tv0->ClearReplies();
				tv0->AddReply(523004, 24196, 24195);
				return;
			}
			if (a0 == 24196) {
				f_269d_a1_v("Menace");
				tv0->SetMessage(523005);
				tv0->ClearReplies();
				tv0->AddReply(523006, -1, 24197);
				return;
			}
			if (a0 == 24179) {
				f_269d_a1_v("Menace");
				tv0->SetMessage(522988);
				tv0->ClearReplies();
				tv0->AddReply(522992, 24184, 24183);
				return;
			}
			if (a0 == 24184) {
				f_269d_a1_v("Menace");
				tv0->SetMessage(522993);
				tv0->ClearReplies();
				tv0->AddReply(522989, 24181, 24180);
				return;
			}
			if (a0 == 24181) {
				f_269d_a1_v("Menace");
				tv0->SetMessage(522990);
				tv0->ClearReplies();
				tv0->AddReply(522991, 24185, 24182);
				return;
			}
			if (a0 == 24185) {
				f_269d_a1_v("Untrust");
				tv0->SetMessage(522994);
				tv0->ClearReplies();
				tv0->AddReply(522995, -1, 24186);
				return;
			}
			if (a0 == 42243) {
				f_269d_a1_v("Menace");
				tv0->SetMessage(540260);
				tv0->ClearReplies();
				tv0->AddReply(540261, -1, 42244);
				return;
			}
			if (a0 == 24172) {
				f_269d_a1_v("Untrust");
				tv0->SetMessage(522981);
				tv0->ClearReplies();
				tv0->AddReply(522984, 24176, 24175);
				tv0->AddReply(522982, 24174, 24173);
				return;
			}
			if (a0 == 24174) {
				f_269d_a1_v("Smile");
				tv0->SetMessage(522983);
				tv0->ClearReplies();
				tv0->AddReply(523009, 24176, 24200);
				return;
			}
			if (a0 == 24176) {
				f_269d_a1_v("Untrust");
				tv0->SetMessage(522985);
				tv0->ClearReplies();
				tv0->AddReply(522986, 24198, 24177);
				tv0->AddReply(523012, 33391, 24204);
				return;
			}
			if (a0 == 33391) {
				if (!f_3649_a1_b(tv1)) {
					f_269d_a1_v("Sorrow");
					tv0->SetMessage(531985);
					tv0->ClearReplies();
					tv0->AddReply(531986, 33408, 33392);
					return;
				}
				if (f_3649_a1_b(tv1)) {
					f_269d_a1_v("Smile");
					tv0->SetMessage(531988);
					tv0->ClearReplies();
					tv0->AddReply(532018, 33419, 33418);
					return;
				}
			}
			if (a0 == 33419) {
				f_269d_a1_v("Neutral");
				tv0->SetMessage(532019);
				tv0->ClearReplies();
				tv0->AddReply(531989, -1, 33395);
				tv0->AddReply(540262, -1, 42245);
				return;
			}
			if (a0 == 33408) {
				f_269d_a1_v("Neutral");
				tv0->SetMessage(532008);
				tv0->ClearReplies();
				tv0->AddReply(532009, 33410, 33409);
				tv0->AddReply(532017, -1, 33417);
				return;
			}
			if (a0 == 33410) {
				f_269d_a1_v("Sorrow");
				tv0->SetMessage(532010);
				tv0->ClearReplies();
				tv0->AddReply(532011, 33412, 33411);
				tv0->AddReply(532013, -1, 33413);
				return;
			}
			if (a0 == 33412) {
				f_269d_a1_v("Neutral");
				tv0->SetMessage(532012);
				tv0->ClearReplies();
				tv0->AddReply(532014, 33415, 33414);
				return;
			}
			if (a0 == 33415) {
				f_269d_a1_v("Neutral");
				tv0->SetMessage(532015);
				tv0->ClearReplies();
				tv0->AddReply(532016, -1, 33416);
				return;
			}
			if (a0 == 24198) {
				f_269d_a1_v("Menace");
				tv0->SetMessage(523007);
				tv0->ClearReplies();
				tv0->AddReply(523008, 24202, 24199);
				return;
			}
			if (a0 == 24202) {
				f_269d_a1_v("Untrust");
				tv0->SetMessage(523010);
				tv0->ClearReplies();
				tv0->AddReply(523013, 23277, 24206);
				return;
			}
			if (a0 == 23277) {
				if (!f_3649_a1_b(tv1)) {
					f_269d_a1_v("Neutral");
					tv0->SetMessage(522110);
					tv0->ClearReplies();
					tv0->AddReply(540119, 42089, 42088);
					tv0->AddReply(523014, -1, 24207);
					return;
				}
				if (f_3649_a1_b(tv1)) {
					f_269d_a1_v("Neutral");
					tv0->SetMessage(531999);
					tv0->ClearReplies();
					tv0->AddReply(532000, -1, 33406);
					tv0->AddReply(532001, -1, 33407);
					return;
				}
			}
			if (a0 == 42089) {
				f_269d_a1_v("Sorrow");
				tv0->SetMessage(540120);
				tv0->ClearReplies();
				tv0->AddReply(523016, -1, 24209);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t24
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t25{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t25
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
			f_2a06_a1_v("Neutral");
			tv0->SetMessage(529906);
			tv0->ClearReplies();
			tv0->AddReply(529907, -1, 31290);
			tv0->AddReply(529908, -1, 31291);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_2a06_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a0 == 31289) {
				f_2a06_a1_v("Neutral");
				tv0->SetMessage(529906);
				tv0->ClearReplies();
				tv0->AddReply(529907, -1, 31290);
				tv0->AddReply(529908, -1, 31291);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t26
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t27{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t27
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
			f_2ad1_a1_v("Neutral");
			tv0->SetMessage(529910);
			tv0->ClearReplies();
			tv0->AddReply(529911, -1, 31294);
			tv0->AddReply(529912, -1, 31295);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_2ad1_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a0 == 31293) {
				f_2ad1_a1_v("Neutral");
				tv0->SetMessage(529910);
				tv0->ClearReplies();
				tv0->AddReply(529911, -1, 31294);
				tv0->AddReply(529912, -1, 31295);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t28
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t29{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t29
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
			f_2b9c_a1_v("Neutral");
			tv0->SetMessage(529914);
			tv0->ClearReplies();
			tv0->AddReply(529915, -1, 31298);
			tv0->AddReply(529916, -1, 31299);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_2b9c_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a0 == 31297) {
				f_2b9c_a1_v("Neutral");
				tv0->SetMessage(529914);
				tv0->ClearReplies();
				tv0->AddReply(529915, -1, 31298);
				tv0->AddReply(529916, -1, 31299);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t30
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t31{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t31
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
			f_2c67_a1_v("Neutral");
			tv0->SetMessage(529918);
			tv0->ClearReplies();
			tv0->AddReply(529919, -1, 31302);
			tv0->AddReply(529920, -1, 31303);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_2c67_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a0 == 31301) {
				f_2c67_a1_v("Neutral");
				tv0->SetMessage(529918);
				tv0->ClearReplies();
				tv0->AddReply(529919, -1, 31302);
				tv0->AddReply(529920, -1, 31303);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t32
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t33{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t33
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
			f_2d32_a1_v("Neutral");
			tv0->SetMessage(529930);
			tv0->ClearReplies();
			tv0->AddReply(529931, -1, 31314);
			tv0->AddReply(529932, -1, 31315);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_2d32_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a0 == 31313) {
				f_2d32_a1_v("Neutral");
				tv0->SetMessage(529930);
				tv0->ClearReplies();
				tv0->AddReply(529931, -1, 31314);
				tv0->AddReply(529932, -1, 31315);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t34
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_2f86_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31b5_a0_i());
		L0->SetNPCDescription(f_31b3_a0_i());
		L0->SetPhoto(f_31b7_a0_s());
		L0->SetPhoto2(f_31b9_a0_s());
		L0->SetPlayerName(f_3aae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2fdd_a1_b(f_309c_a0_o());
		t35{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2fcb_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t35
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
			f_2dfd_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_31bb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3067_a1_v(tv2);
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

	void f_2dfd_a1_v(string a0)
	{
		if (!f_31bb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3077_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3095_a0_v();
			if (a0 == 42563) {
				f_2dfd_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_31bb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t36
{
	var Vector tv0;

	void init(void)
	{
		f_2e41_a0_v();
	}

	void f_2e41_a0_v(void)
	{
		if (!f_2f81_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_2ef1_a0_v();
		}
	}

	bool f_2e4f_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_2f78_a1_b(L0);
	}

	void f_2e5e_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_2e63_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_2f3d_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_2e79_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_2e82_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_2e82_a0_v();
			if (f_2f81_a0_b() && f_2e63_a0_b()) {
				if (f_2e4f_a0_b()) {
					f_3017_a1_b(f_309c_a0_o());
				}
			} else {
				f_2e5e_a0_v();
				f_2e79_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_2f38_a0_v();
		f_2e82_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_2e82_a0_v();
		f_3067_a1_v("Neutral");
		f_2e79_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_2e79_a0_v();
		} else {
			f_3067_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_2f38_a0_v();
			f_2f78_a1_b(a0);
			enable OnUse;
			f_3b1a_a1_v(a0);
			f_3067_a1_v("Neutral");
			f_2e82_a0_v();
			f_2e79_a0_v();
		}
	}
}

void f_2ef1_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2f81_a0_b()) {
		return;
	}
	L0 = f_31a2_a0_i();
	for (L1 = 0; L1 < 5 && f_2f81_a0_b(); L1++) {
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
			@PlayAnimation("all", f_319b_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_2f36_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2f36_a0_b(void)
{
	return true;
}

void f_2f38_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2f3d_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2f45_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_2f51_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_2f45_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_30ac_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_2f67_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_2f6e_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_2f78_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_2f6e_a1_b(L0);
}

bool f_2f81_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2f86_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_30a2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_31bb_a0_b()) {
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

void f_2fcb_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_31bb_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2fdd_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3017_a1_b(a0)) {
			if (!f_303c_a1_b(a0)) {
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
		if (!f_303c_a1_b(a0)) {
			if (!f_3017_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3017_a1_b(object a0)
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
	return f_3086_a1_b(L4);
}

bool f_303c_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3179_a0_i() + "m";
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
	return f_3086_a1_b(L4);
}

void f_3067_a1_v(string a0)
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

void f_3077_a2_v(string a0, bool a1)
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

bool f_3086_a1_b(string a0)
{
	if (f_31bb_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3095_a0_v(void)
{
	if (f_31bb_a0_b()) {
		@lshStopSpeech();
	}
}

object f_309c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_30a2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_30ac_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_30b7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_30bc_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_30c7_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_30d8_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_30e4_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(4, L0);
}

void f_30f0_a2_v(object a0, int a1)
{
	f_2f67_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_30d8_a2_v(L0, a1);
	}
}

void f_3103_a3_v(object a0, object a1, int a2)
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
		f_30d8_a2_v(L0, a2);
	}
}

void f_3116_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_3103_a3_v(a0, L0, a2);
}

bool f_3123_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_312a_a2_b(object a0, string a1)
{
	int L0;
	int L1;
	bool L2;
	@GetInvItemByName(L0, a1);
	@GetInvItemProperty(L1, L0, "Category");
	a0->RemoveItemByType(L2, L0, L1);
	if (L2) {
		f_30e4_a2_v(L0, 1);
	}
	return L2;
}

bool f_313b_a2_b(object a0, float a1)
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
	f_315e_a1_v(a1);
	f_2f51_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_315e_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_3168_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_3174_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_3179_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_3182_a1_b(int a0)
{
	return f_3179_a0_i() == a0;
}

bool f_3188_a1_b(int a0)
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

string f_319b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_31a2_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_319b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_31b3_a0_i(void)
{
	return 515573;
}

int f_31b5_a0_i(void)
{
	return 504032;
}

string f_31b7_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_31b9_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_31bb_a0_b(void)
{
	return true;
}

void f_31bd_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b4q01", 1);
	L0 = f_3a7c_a0_o();
	L0->AddMark("b4q01DankoGotoLaraSelf", "pt_map_eva", 1, 518592, f_3174_a0_f());
	L0->AddMark("b4q01DankoGotoLara", "pt_map_lara", 1, 518591, f_3174_a0_f());
	f_39c4_a0_v();
	f_39d1_a0_v();
	f_3168_a2_b("quest_b4_01", "rubin_unlock");
}

void f_31e5_a2_v(object a0, object a1)
{
	@SetVariable("oob4Danko1", 1);
}

void f_31eb_a2_v(object a0, object a1)
{
	@SetVariable("oob4Danko2", 1);
}

void f_31f1_a2_v(object a0, object a1)
{
	@SetVariable("oob4Danko3", 1);
}

void f_31f7_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b5q01", 1);
	L0 = f_3a7c_a0_o();
	L0->AddMark("b5q01DankoGotoAndrei", "pt_map_andrei", 1, 519742, f_3174_a0_f());
	L0->AddMark("b5q01DankoGotoOspina", "pt_map_ospina", 1, 519741, f_3174_a0_f());
	f_39eb_a0_v();
	f_3a05_a0_v();
	f_3168_a2_b("quest_b5_01", "vera_kabak");
}

void f_321f_a2_v(object a0, object a1)
{
	@SetVariable("oob5Danko1", 1);
}

void f_3225_a2_v(object a0, object a1)
{
	f_39f8_a0_v();
	f_3168_a2_b("quest_b5_01", "completed");
}

void f_322f_a2_v(object a0, object a1)
{
	@SetVariable("oob5Danko2", 1);
}

void f_3235_a2_v(object a0, object a1)
{
	@SetVariable("oob3Danko1", 1);
}

void f_323b_a2_v(object a0, object a1)
{
	@SetVariable("oob3Danko2", 1);
}

void f_3241_a2_v(object a0, object a1)
{
	@SetVariable("b1q01", 1000);
	f_3976_a0_v();
}

void f_324a_a2_v(object a0, object a1)
{
	f_3983_a0_v();
	f_3168_a2_b("quest_b2_01", "completed");
}

void f_3254_a2_v(object a0, object a1)
{
	@SetVariable("oob6Danko1", 1);
}

void f_325a_a2_v(object a0, object a1)
{
	@SetVariable("b6q01", 1);
	f_3a12_a0_v();
	f_3a2c_a0_v();
	f_3168_a2_b("quest_b6_01", "place_klara");
}

void f_326b_a2_v(object a0, object a1)
{
	@SetVariable("oob2Danko1", 1);
}

void f_3271_a2_v(object a0, object a1)
{
	@SetVariable("oob2Danko2", 1);
}

void f_3277_a2_v(object a0, object a1)
{
	@SetVariable("oob2Danko3", 1);
}

void f_327d_a2_v(object a0, object a1)
{
	@SetVariable("b2DankoTalk", 1);
}

void f_3283_a2_v(object a0, object a1)
{
	@SetVariable("oob2Danko4", 1);
}

void f_3289_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_3a7c_a0_o();
	L0->AddMark("b2DankoGotoMladVlad", "pt_map_mladvlad", 3, 520955, f_3174_a0_f());
}

void f_3299_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b7q01", 1);
	L0 = f_3a7c_a0_o();
	L0->AddMark("b7q01DankoGotoSobor", "pt_map_aglaja", 1, 521021, f_3174_a0_f());
	f_3a39_a0_v();
	f_3a46_a0_v();
	f_3168_a2_b("quest_b7_01", "init_sobor");
}

void f_32b8_a2_v(object a0, object a1)
{
	f_3a8d_a3_v(f_3a7c_a0_o(), "pt_map_aglaja", 2);
	a1->ShowMap(f_3a7c_a0_o());
}

void f_32c8_a2_v(object a0, object a1)
{
	@SetVariable("oob8Danko1", 1);
}

void f_32ce_a2_v(object a0, object a1)
{
	@SetVariable("oob8DankoStop", 1);
}

void f_32d4_a2_v(object a0, object a1)
{
	@SetVariable("oob8Danko2", 1);
}

void f_32da_a2_v(object a0, object a1)
{
	@SetVariable("b10q01", 1);
	f_38f4_a0_v();
	f_391b_a0_v();
}

void f_32e6_a2_v(object a0, object a1)
{
	f_390e_a0_v();
	f_3168_a2_b("quest_b10_01", "completed");
}

void f_32f0_a2_v(object a0, object a1)
{
	@SetVariable("oob10Danko1", 1);
}

void f_32f6_a2_v(object a0, object a1)
{
	@SetVariable("b10q01", 4);
	f_3901_a0_v();
}

void f_32ff_a2_v(object a0, object a1)
{
	@SetVariable("b10q01DankoTalk", 1);
}

void f_3305_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	f_3928_a0_v();
}

void f_330e_a2_v(object a0, object a1)
{
	@SetVariable("oob11Danko1", 1);
}

void f_3314_a2_v(object a0, object a1)
{
	@SetVariable("oob12Danko1", 1);
}

void f_331a_a2_v(object a0, object a1)
{
	@SetVariable("b12q01DankoInSobor", 1);
	f_395c_a0_v();
}

void f_3323_a2_v(object a0, object a1)
{
	@SetVariable("b12q01DankoVisit", 1);
}

void f_3329_a2_v(object a0, object a1)
{
	@SetVariable("oob12Danko2", 1);
}

void f_332f_a2_v(object a0, object a1)
{
	@SetVariable("oob12Danko3", 1);
}

void f_3335_a2_v(object a0, object a1)
{
	@SetVariable("oob11Danko2", 1);
}

void f_333b_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "b5q01_heart_vera", 1);
}

void f_3341_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "b5q01_heart_nude", 1);
}

void f_3347_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "b5q01_heart_butcher", 1);
}

void f_334d_a2_v(object a0, object a1)
{
	@Trace("beta_pills 5 is given");
	f_3116_a3_v(a0, "beta_pills", 5);
}

void f_3358_a2_v(object a0, object a1)
{
	f_3a1f_a0_v();
	f_3168_a2_b("quest_b6_01", "completed");
}

void f_3362_a2_v(object a0, object a1)
{
	@SetVariable("oob6Danko2", 1);
}

void f_3368_a2_v(object a0, object a1)
{
	f_3168_a2_b("quest_b5_01", "cutscene");
}

void f_336f_a2_v(object a0, object a1)
{
	f_394f_a0_v();
	f_3168_a2_b("quest_b11_04", "completed");
}

void f_3379_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_337f_a2_v(object a0, object a1)
{
	@SetVariable("b2q01", 4);
	f_3990_a0_v();
}

void f_3388_a2_v(object a0, object a1)
{
	f_3168_a2_b("quest_b2_01", "cutscene");
}

void f_338f_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "b6q01_bull_blood", 1);
	f_3168_a2_b("quest_b6_01", "cutscene");
}

void f_339a_a2_v(object a0, object a1)
{
	@SetVariable("b11q02", 2);
	f_3942_a0_v();
}

void f_33a3_a2_v(object a0, object a1)
{
	f_3935_a0_v();
	f_3168_a2_b("quest_b11_02", "fail");
}

void f_33ad_a2_v(object a0, object a1)
{
	@SetVariable("oob3Danko3", 1);
}

void f_33b3_a2_v(object a0, object a1)
{
	@SetVariable("b3q04", 1);
	f_39aa_a0_v();
	f_39b7_a0_v();
	f_30bc_a1_o("quest_b3_04");
}

void f_33c3_a2_v(object a0, object a1)
{
	@SetVariable("b3q04", 1000);
	f_39de_a0_v();
	f_3168_a2_b("quest_b3_04", "completed");
}

void f_33d1_a2_v(object a0, object a1)
{
	if (f_3123_a2_b(a0, "diseased_blood")) {
		f_312a_a2_b(a0, "diseased_blood");
	} else {
		if (f_3123_a2_b(a0, "diseased_heart")) {
			f_312a_a2_b(a0, "diseased_heart");
		} else {
			if (f_3123_a2_b(a0, "diseased_liver")) {
				f_312a_a2_b(a0, "diseased_liver");
			} else {
				if (f_3123_a2_b(a0, "diseased_kidney")) {
					f_312a_a2_b(a0, "diseased_kidney");
				} else {
					if (f_3123_a2_b(a0, "b3q01_blood")) {
						f_312a_a2_b(a0, "b3q01_blood");
					}
				}
			}
		}
	}
}

void f_340e_a2_v(object a0, object a1)
{
	@Trace("packet is given");
	f_3116_a3_v(a0, "packet", 2);
}

void f_3419_a2_v(object a0, object a1)
{
	@SetVariable("b3q04", 1000);
	f_3168_a2_b("quest_b3_04", "completed");
}

void f_3424_a2_v(object a0, object a1)
{
	@SetVariable("b3DankoVisit", 1);
}

void f_342a_a2_v(object a0, object a1)
{
	if (f_30b7_a1_i("b12q01_Danko") == 0) {
		@SetVariable("b12q01_Danko", 1);
		f_3969_a0_v();
	}
}

void f_343a_a2_v(object a0, object a1)
{
	@Trace("bluevaccine is given");
	f_3116_a3_v(a0, "blue_vaccine", 1);
}

void f_3445_a2_v(object a0, object a1)
{
	@SetVariable("oob8Danko3", 1);
}

void f_344b_a2_v(object a0, object a1)
{
	@SetVariable("b8DankoVisit", 1);
}

void f_3451_a2_v(object a0, object a1)
{
	if (f_30b7_a1_i("map_chertez_state") <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_3462_a2_v(object a0, object a1)
{
	f_3a8d_a3_v(f_3a7c_a0_o(), "pt_map_aglaja", -1);
	a1->ShowMap(f_3a7c_a0_o());
}

void f_3472_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_30f0_a2_v(a0, L0 + 2000);
}

void f_347d_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_30f0_a2_v(a0, L0 + 3000);
}

void f_3488_a2_v(object a0, object a1)
{
	@Trace("blackvaccine2 is given");
	f_3116_a3_v(a0, "black_vaccine", 2);
}

void f_3493_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "b4q01_sample", 1);
}

void f_3499_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_349f_a2_v(object a0, object a1)
{
	f_3a8d_a3_v(f_3a7c_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_3a7c_a0_o());
}

void f_34af_a2_v(object a0, object a1)
{
	f_3a8d_a3_v(f_3a7c_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_3a7c_a0_o());
}

void f_34bf_a2_v(object a0, object a1)
{
	f_3a8d_a3_v(f_3a7c_a0_o(), "pt_map_lara", 2);
	a1->ShowMap(f_3a7c_a0_o());
}

void f_34cf_a2_v(object a0, object a1)
{
	f_313b_a2_b(a0, 0.30000001192092896);
}

void f_34d6_a2_v(object a0, object a1)
{
	@Trace("feromicin is given");
	f_3116_a3_v(a0, "feromicin", 1);
}

void f_34e1_a2_v(object a0, object a1)
{
	f_3a8d_a3_v(f_3a7c_a0_o(), "pt_map_andrei", 2);
	a1->ShowMap(f_3a7c_a0_o());
}

void f_34f1_a2_v(object a0, object a1)
{
	@Trace("morfin is given");
	f_3116_a3_v(a0, "morfin", 1);
}

void f_34fc_a2_v(object a0, object a1)
{
	@Trace("etorfin is given");
	f_3116_a3_v(a0, "etorfin", 1);
}

void f_3507_a2_v(object a0, object a1)
{
	@Trace("novocaine is given");
	f_3116_a3_v(a0, "novocaine", 1);
}

void f_3512_a2_v(object a0, object a1)
{
	@Trace("delta_pills is given");
	f_3116_a3_v(a0, "delta_pills", 1);
}

void f_351d_a2_v(object a0, object a1)
{
	@Trace("neomicin is given");
	f_3116_a3_v(a0, "neomicin", 1);
}

void f_3528_a2_v(object a0, object a1)
{
	@Trace("monomicin is given");
	f_3116_a3_v(a0, "monomicin", 1);
}

void f_3533_a2_v(object a0, object a1)
{
	f_30c7_a2_v("sobor@door1", false);
}

void f_353a_a2_v(object a0, object a1)
{
	@SetVariable("b3q02", 3);
	f_399d_a0_v();
}

bool f_3543_a1_b(object a0)
{
	if (f_30b7_a1_i("b8q01") == 0) {
		return true;
	}
	return false;
}

bool f_354f_a1_b(object a0)
{
	if (f_30b7_a1_i("oob8Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_355b_a1_b(object a0)
{
	if (f_30b7_a1_i("b8q01") != 0 && f_30b7_a1_i("b8q01") != 1000 && f_30b7_a1_i("b8q01") != -1) {
		return true;
	}
	return false;
}

bool f_357d_a1_b(object a0)
{
	if (f_30b7_a1_i("oob8DankoStop") != 0) {
		return true;
	}
	return false;
}

bool f_3589_a1_b(object a0)
{
	if (f_30b7_a1_i("oob8Danko2") == 0) {
		return true;
	}
	return false;
}

bool f_3595_a1_b(object a0)
{
	if (f_30b7_a1_i("b8q01KnowSgustki") != 0) {
		return true;
	}
	return false;
}

bool f_35a1_a1_b(object a0)
{
	if (f_30b7_a1_i("b10q01") == 0) {
		return true;
	}
	return false;
}

bool f_35ad_a1_b(object a0)
{
	if (f_30b7_a1_i("oob10Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_35b9_a1_b(object a0)
{
	if (f_30b7_a1_i("b10q01") == 3) {
		return true;
	}
	return false;
}

bool f_35c5_a1_b(object a0)
{
	if (f_30b7_a1_i("b10q01") == 4) {
		return true;
	}
	return false;
}

bool f_35d1_a1_b(object a0)
{
	if (f_30b7_a1_i("b10q01TalkKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_35dd_a1_b(object a0)
{
	if (f_30b7_a1_i("b10q01TalkKapella") == 1) {
		return true;
	}
	return false;
}

bool f_35e9_a1_b(object a0)
{
	if (f_30b7_a1_i("b11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_35f5_a1_b(object a0)
{
	if (f_30b7_a1_i("oob11Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_3601_a1_b(object a0)
{
	if (f_30b7_a1_i("oob12Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_360d_a1_b(object a0)
{
	if (f_30b7_a1_i("b12q01ChildsAreVisited") != 0) {
		return true;
	}
	return false;
}

bool f_3619_a1_b(object a0)
{
	if (f_30b7_a1_i("oob12Danko2") == 0) {
		return true;
	}
	return false;
}

bool f_3625_a1_b(object a0)
{
	if (f_30b7_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_3631_a1_b(object a0)
{
	if (f_30b7_a1_i("b12q01MariaFinalTalk") != 0) {
		return true;
	}
	return false;
}

bool f_363d_a1_b(object a0)
{
	if (f_30b7_a1_i("oob12Danko3") == 0) {
		return true;
	}
	return false;
}

bool f_3649_a1_b(object a0)
{
	if (f_38eb_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3653_a1_b(object a0)
{
	if (f_30b7_a1_i("oob11Danko2") == 0) {
		return true;
	}
	return false;
}

bool f_365f_a1_b(object a0)
{
	if (f_3123_a2_b(a0, "b6q01_bull_blood")) {
		return true;
	}
	return false;
}

bool f_366a_a1_b(object a0)
{
	if (f_30b7_a1_i("oob6Danko2") == 0) {
		return true;
	}
	return false;
}

bool f_3676_a1_b(object a0)
{
	if (f_30b7_a1_i("b6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_3682_a1_b(object a0)
{
	if (f_30b7_a1_i("b5q01MicroscopeCS") != 0) {
		return true;
	}
	return false;
}

bool f_368e_a1_b(object a0)
{
	if (f_30b7_a1_i("b5q01") == 1000) {
		return true;
	}
	return false;
}

bool f_369a_a1_b(object a0)
{
	if (f_30b7_a1_i("b11q04") == 3) {
		return true;
	}
	return false;
}

bool f_36a6_a1_b(object a0)
{
	if (f_30b7_a1_i("b2q01") < 3) {
		return true;
	}
	return false;
}

bool f_36b2_a1_b(object a0)
{
	if (f_30b7_a1_i("b2q01") == 3) {
		return true;
	}
	return false;
}

bool f_36be_a1_b(object a0)
{
	if (f_30b7_a1_i("b2q01") == 4) {
		return true;
	}
	return false;
}

bool f_36ca_a1_b(object a0)
{
	if (f_30b7_a1_i("b2q01MicroscopeCS") != 0) {
		return true;
	}
	return false;
}

bool f_36d6_a1_b(object a0)
{
	if (f_3123_a2_b(a0, "organ_combination")) {
		return true;
	}
	return false;
}

bool f_36e1_a1_b(object a0)
{
	if (f_30b7_a1_i("b6q01MicroscopeCS") != 0) {
		return true;
	}
	return false;
}

bool f_36ed_a1_b(object a0)
{
	if (f_30b7_a1_i("b11q02") == 1) {
		return true;
	}
	return false;
}

bool f_36f9_a1_b(object a0)
{
	if (f_30b7_a1_i("oob3Danko3") == 0) {
		return true;
	}
	return false;
}

bool f_3705_a1_b(object a0)
{
	if (f_30b7_a1_i("b12q01DankoInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_3711_a1_b(object a0)
{
	if (f_3123_a2_b(a0, "diseased_blood") || f_3123_a2_b(a0, "diseased_heart") || f_3123_a2_b(a0, "diseased_kidney") || f_3123_a2_b(a0, "diseased_liver") || f_3123_a2_b(a0, "d3q01_blood")) {
		return true;
	}
	return false;
}

bool f_3744_a1_b(object a0)
{
	if (f_30b7_a1_i("b3q04") == 0) {
		return true;
	}
	return false;
}

bool f_3750_a1_b(object a0)
{
	if (f_30b7_a1_i("b3q04") == 1) {
		return true;
	}
	return false;
}

bool f_375c_a1_b(object a0)
{
	if (f_30b7_a1_i("b8DankoLetter2") != 0) {
		return true;
	}
	return false;
}

bool f_3768_a1_b(object a0)
{
	if (f_30b7_a1_i("oob8Danko3") == 0) {
		return true;
	}
	return false;
}

bool f_3774_a1_b(object a0)
{
	if (f_38f1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_377e_a1_b(object a0)
{
	if (f_30b7_a1_i("b3q02") == 2) {
		return true;
	}
	return false;
}

bool f_378a_a1_b(object a0)
{
	if (f_30b7_a1_i("b4q01") == 0) {
		return true;
	}
	return false;
}

bool f_3796_a1_b(object a0)
{
	if (f_30b7_a1_i("oob4Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_37a2_a1_b(object a0)
{
	if (f_30b7_a1_i("microscope_b4q01_sample") != 0) {
		return true;
	}
	return false;
}

bool f_37ae_a1_b(object a0)
{
	if (f_3123_a2_b(a0, "b4q01_sample")) {
		return true;
	}
	return false;
}

bool f_37b9_a1_b(object a0)
{
	if (f_30b7_a1_i("oob4Danko2") == 0) {
		return true;
	}
	return false;
}

bool f_37c5_a1_b(object a0)
{
	if (f_30b7_a1_i("oob4Danko3") == 0) {
		return true;
	}
	return false;
}

bool f_37d1_a1_b(object a0)
{
	if (f_30b7_a1_i("oob5Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_37dd_a1_b(object a0)
{
	if (f_30b7_a1_i("b5q01") == 0) {
		return true;
	}
	return false;
}

bool f_37e9_a1_b(object a0)
{
	if (f_30b7_a1_i("b5q01TalkToVera") == 1) {
		return true;
	}
	return false;
}

bool f_37f5_a1_b(object a0)
{
	if (f_30b7_a1_i("b5q01VeraDead") != 0) {
		return true;
	}
	return false;
}

bool f_3801_a1_b(object a0)
{
	if (f_3123_a2_b(a0, "b5q01_heart_vera")) {
		return true;
	}
	return false;
}

bool f_380c_a1_b(object a0)
{
	if (f_3123_a2_b(a0, "b5q01_heart_nude")) {
		return true;
	}
	return false;
}

bool f_3817_a1_b(object a0)
{
	if (f_3123_a2_b(a0, "b5q01_heart_butcher")) {
		return true;
	}
	return false;
}

bool f_3822_a1_b(object a0)
{
	if (f_30b7_a1_i("b5q01") == 1) {
		return true;
	}
	return false;
}

bool f_382e_a1_b(object a0)
{
	if (f_30b7_a1_i("oob5Danko2") == 0) {
		return true;
	}
	return false;
}

bool f_383a_a1_b(object a0)
{
	if (f_30b7_a1_i("oob3Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_3846_a1_b(object a0)
{
	if (f_30b7_a1_i("oob3Danko2") == 0) {
		return true;
	}
	return false;
}

bool f_3852_a1_b(object a0)
{
	if (f_30b7_a1_i("b1q01") == 0) {
		return true;
	}
	return false;
}

bool f_385e_a1_b(object a0)
{
	if (f_30b7_a1_i("b1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_386a_a1_b(object a0)
{
	if (f_30b7_a1_i("b2q01") == 0) {
		return true;
	}
	return false;
}

bool f_3876_a1_b(object a0)
{
	if (f_30b7_a1_i("b2MladVladBurahHomeTalk") == 1) {
		return true;
	}
	return false;
}

bool f_3882_a1_b(object a0)
{
	if (f_30b7_a1_i("oob6Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_388e_a1_b(object a0)
{
	if (f_30b7_a1_i("b2q01") == 1000) {
		return true;
	}
	return false;
}

bool f_389a_a1_b(object a0)
{
	if (f_30b7_a1_i("oob2Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_38a6_a1_b(object a0)
{
	if (f_30b7_a1_i("oob2Danko2") == 0) {
		return true;
	}
	return false;
}

bool f_38b2_a1_b(object a0)
{
	if (f_3123_a2_b(a0, "grass_combination") || f_3123_a2_b(a0, "organ_combination")) {
		return true;
	}
	return false;
}

bool f_38c7_a1_b(object a0)
{
	if (f_30b7_a1_i("oob2Danko3") == 0) {
		return true;
	}
	return false;
}

bool f_38d3_a1_b(object a0)
{
	if (f_30b7_a1_i("oob2Danko4") == 0) {
		return true;
	}
	return false;
}

bool f_38df_a1_b(object a0)
{
	if (f_30b7_a1_i("b7q01") == 0) {
		return true;
	}
	return false;
}

bool f_38eb_a1_b(object a0)
{
	return f_3af4_a0_b();
}

bool f_38f1_a1_b(object a0)
{
	return false;
}

void f_38f4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 305, 1, 521956);
	f_3a60_a2_b(L0, -1);
}

void f_3901_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 310, 1, 521961);
	f_3a60_a2_b(L0, 305);
}

void f_390e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 311, 1, 521962);
	f_3a60_a2_b(L0, 305);
}

void f_391b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 306, 1, 521957);
	f_3a60_a2_b(L0, 305);
}

void f_3928_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 315, 1, 522057);
	f_3a60_a2_b(L0, 313);
}

void f_3935_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 609, 2, 531504);
	f_3a60_a2_b(L0, 598);
}

void f_3942_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 600, 2, 531151);
	f_3a60_a2_b(L0, 598);
}

void f_394f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 555, 2, 530530);
	f_3a60_a2_b(L0, 551);
}

void f_395c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 614, 1, 532003);
	f_3a60_a2_b(L0, 613);
}

void f_3969_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 695, 1, 535403);
	f_3a60_a2_b(L0, 613);
}

void f_3976_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 244, 1, 520448);
	f_3a60_a2_b(L0, 242);
}

void f_3983_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 248, 1, 520469);
	f_3a60_a2_b(L0, 245);
}

void f_3990_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 573, 1, 530606);
	f_3a60_a2_b(L0, 245);
}

void f_399d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 230, 2, 519658);
	f_3a60_a2_b(L0, 227);
}

void f_39aa_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 631, 2, 532899);
	f_3a60_a2_b(L0, -1);
}

void f_39b7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 632, 2, 532900);
	f_3a60_a2_b(L0, 631);
}

void f_39c4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 216, 1, 518594);
	f_3a60_a2_b(L0, -1);
}

void f_39d1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 220, 1, 518598);
	f_3a60_a2_b(L0, 216);
}

void f_39de_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 633, 2, 532901);
	f_3a60_a2_b(L0, 631);
}

void f_39eb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 238, 1, 519743);
	f_3a60_a2_b(L0, -1);
}

void f_39f8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 241, 1, 519746);
	f_3a60_a2_b(L0, 238);
}

void f_3a05_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 239, 1, 519744);
	f_3a60_a2_b(L0, 238);
}

void f_3a12_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 265, 1, 521192);
	f_3a60_a2_b(L0, -1);
}

void f_3a1f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 366, 1, 525666);
	f_3a60_a2_b(L0, 265);
}

void f_3a2c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 360, 1, 525660);
	f_3a60_a2_b(L0, 265);
}

void f_3a39_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 253, 1, 521019);
	f_3a60_a2_b(L0, -1);
}

void f_3a46_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 254, 1, 521020);
	f_3a60_a2_b(L0, 253);
}

object f_3a53_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3a60_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_3a53_a0_o();
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

object f_3a7c_a0_o(void)
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

void f_3a8d_a3_v(object a0, string a1, float a2)
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

int f_3aae_a0_i(void)
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

void f_3abf_a3_v(object a0, bool a1, int a2)
{
	a0->add(6);
	a0->add(26);
	a0->add(2);
	a0->add(22);
	if (a1 == false) {
		a0->add(15);
		a0->add(5);
		a0->add(16);
	} else {
		if (a2 != 0) {
			a0->add(15);
		}
	}
}

bool f_3ae0_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_3aea_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_3af4_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_3abf_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_3aea_a1_b(L3) || f_3ae0_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

void f_3b1a_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_danko", L0);
	if (!L0) {
		t12{a0};
		@SetVariable("mt_danko", 1);
	}
	if (f_3188_a1_b(4)) {
		t24{a0};
		return;
	}
	if (f_3188_a1_b(5)) {
		t26{a0};
		return;
	}
	if (f_3188_a1_b(6)) {
		t28{a0};
		return;
	}
	if (f_3188_a1_b(7)) {
		t30{a0};
		return;
	}
	if (f_3188_a1_b(10)) {
		t32{a0};
		return;
	}
	if (f_3182_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_3182_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_3182_a1_b(3)) {
		t0{a0};
		return;
	}
	if (f_3182_a1_b(4)) {
		t2{a0};
		return;
	}
	if (f_3182_a1_b(5)) {
		t4{a0};
		return;
	}
	if (f_3182_a1_b(6)) {
		t10{a0};
		return;
	}
	if (f_3182_a1_b(7)) {
		t14{a0};
		return;
	}
	if (f_3182_a1_b(8)) {
		t16{a0};
		return;
	}
	if (f_3182_a1_b(10)) {
		t18{a0};
		return;
	}
	if (f_3182_a1_b(11)) {
		t20{a0};
		return;
	}
	if (f_3182_a1_b(12)) {
		t22{a0};
		return;
	}
	t34{a0};
}

