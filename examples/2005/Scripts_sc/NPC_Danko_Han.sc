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
		} while (!f_ea9_a0_b());
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
		f_f03_a1_b(f_fb0_a0_o());
		if (!f_eae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1006_a0_i());
		L0->SetNPCDescription(f_1004_a0_i());
		L0->SetPhoto(f_1008_a0_s());
		L0->SetPhoto2(f_100a_a0_s());
		L0->SetPlayerName(f_11d2_a0_i());
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
		f_ef2_a1_v(a0);
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
			f_ab_a1_v("Neutral");
			tv0->SetMessage(534481);
			tv0->ClearReplies();
			if (f_10a2_a1_b(tv1) && f_10ae_a1_b(tv1)) {
				tv0->AddReply(534482, 38410, 36127);
			}
			tv0->AddReply(534489, -1, 36134);
			tv0->AddReply(536587, -1, 38409);
			break;
			return;
		}
		if (f_100c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f8d_a1_v(tv2);
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

	void f_ab_a1_v(string a0)
	{
		if (!f_100c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f94_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_fa9_a0_v();
			if (a1 == 36133) {
				f_1014_a2_v(tv1, tv0);
			}
			if (a1 == 38442) {
				f_1014_a2_v(tv1, tv0);
			}
			if (a1 == 41671) {
				f_1014_a2_v(tv1, tv0);
			}
			if (a0 == 36126) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(534481);
				tv0->ClearReplies();
				if (f_10a2_a1_b(tv1) && f_10ae_a1_b(tv1)) {
					tv0->AddReply(534482, 38410, 36127);
				}
				tv0->AddReply(534489, -1, 36134);
				tv0->AddReply(536587, -1, 38409);
				return;
			}
			if (a0 == 38410) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536588);
				tv0->ClearReplies();
				tv0->AddReply(536589, 38412, 38411);
				tv0->AddReply(536598, 38421, 38420);
				return;
			}
			if (a0 == 38421) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536599);
				tv0->ClearReplies();
				tv0->AddReply(536600, 36128, 38422);
				return;
			}
			if (a0 == 38412) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536590);
				tv0->ClearReplies();
				tv0->AddReply(536591, 38414, 38413);
				tv0->AddReply(536601, 38418, 38424);
				return;
			}
			if (a0 == 38414) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536592);
				tv0->ClearReplies();
				tv0->AddReply(536595, 38418, 38417);
				tv0->AddReply(539710, -1, 41668);
				return;
			}
			if (a0 == 38418) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536596);
				tv0->ClearReplies();
				tv0->AddReply(536610, 38437, 38436);
				tv0->AddReply(536612, 38437, 38438);
				return;
			}
			if (a0 == 38437) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536611);
				tv0->ClearReplies();
				tv0->AddReply(536603, 36130, 38427);
				tv0->AddReply(534484, 36132, 36129);
				return;
			}
			if (a0 == 36130) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(534485);
				tv0->ClearReplies();
				tv0->AddReply(534486, 36132, 36131);
				tv0->AddReply(536605, 41666, 38430);
				return;
			}
			if (a0 == 41666) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(539708);
				tv0->ClearReplies();
				tv0->AddReply(539709, 38431, 41667);
				tv0->AddReply(536593, 38416, 38415);
				return;
			}
			if (a0 == 38416) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536594);
				tv0->ClearReplies();
				tv0->AddReply(539711, 36132, 41669);
				return;
			}
			if (a0 == 38431) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536606);
				tv0->ClearReplies();
				tv0->AddReply(536607, 38433, 38432);
				tv0->AddReply(539712, -1, 41671);
				return;
			}
			if (a0 == 38433) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536608);
				tv0->ClearReplies();
				tv0->AddReply(536609, 36128, 38434);
				return;
			}
			if (a0 == 36132) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(534487);
				tv0->ClearReplies();
				tv0->AddReply(536597, 36128, 38419);
				return;
			}
			if (a0 == 36128) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(534483);
				tv0->ClearReplies();
				tv0->AddReply(534488, -1, 36133);
				tv0->AddReply(536613, 38441, 38440);
				return;
			}
			if (a0 == 38441) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(536614);
				tv0->ClearReplies();
				tv0->AddReply(536615, -1, 38442);
				return;
			}
			tv3 = true;
			if (f_100c_a0_b()) {
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
		f_f03_a1_b(f_fb0_a0_o());
		if (!f_eae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1006_a0_i());
		L0->SetNPCDescription(f_1004_a0_i());
		L0->SetPhoto(f_1008_a0_s());
		L0->SetPhoto2(f_100a_a0_s());
		L0->SetPlayerName(f_11d2_a0_i());
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
		f_ef2_a1_v(a0);
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
			f_2cf_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_100c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f8d_a1_v(tv2);
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

	void f_2cf_a1_v(string a0)
	{
		if (!f_100c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f94_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_fa9_a0_v();
			if (a0 == 36960) {
				f_2cf_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_2cf_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_2cf_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_100c_a0_b()) {
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
		f_f03_a1_b(f_fb0_a0_o());
		if (!f_eae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1006_a0_i());
		L0->SetNPCDescription(f_1004_a0_i());
		L0->SetPhoto(f_1008_a0_s());
		L0->SetPhoto2(f_100a_a0_s());
		L0->SetPlayerName(f_11d2_a0_i());
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
		f_ef2_a1_v(a0);
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
			if (f_10d6_a1_b(tv1) && f_10d1_a1_b(tv1)) {
				f_1056_a2_v(tv1, tv0);
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510420);
				tv0->ClearReplies();
				tv0->AddReply(510421, 11490, 11489);
				tv0->AddReply(534384, 36001, 35999);
				break;
			}
			f_3f4_a1_v("Neutral");
			tv0->SetMessage(534418);
			tv0->ClearReplies();
			tv0->AddReply(534419, -1, 36046);
			tv0->AddReply(536096, -1, 37848);
			break;
			return;
		}
		if (f_100c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f8d_a1_v(tv2);
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

	void f_3f4_a1_v(string a0)
	{
		if (!f_100c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f94_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_fa9_a0_v();
			if (a1 == 11509) {
				f_1058_a2_v(tv1, tv0);
			}
			if (a1 == 11510) {
				f_1058_a2_v(tv1, tv0);
			}
			if (a1 == 11505) {
				f_1058_a2_v(tv1, tv0);
			}
			if (a1 == 11498) {
				f_1058_a2_v(tv1, tv0);
			}
			if (a0 == 11488) {
				if (f_10d6_a1_b(tv1) && f_10d1_a1_b(tv1)) {
					f_1056_a2_v(tv1, tv0);
					f_3f4_a1_v("Neutral");
					tv0->SetMessage(510420);
					tv0->ClearReplies();
					tv0->AddReply(510421, 11490, 11489);
					tv0->AddReply(534384, 36001, 35999);
					return;
				}
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(534418);
				tv0->ClearReplies();
				tv0->AddReply(534419, -1, 36046);
				tv0->AddReply(536096, -1, 37848);
				return;
			}
			if (a0 == 36001) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(534386);
				tv0->ClearReplies();
				tv0->AddReply(534387, 36003, 36002);
				return;
			}
			if (a0 == 36003) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(534388);
				tv0->ClearReplies();
				tv0->AddReply(534389, 36006, 36004);
				tv0->AddReply(534390, 36006, 36005);
				return;
			}
			if (a0 == 36006) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(534391);
				tv0->ClearReplies();
				tv0->AddReply(534392, 36009, 36007);
				tv0->AddReply(534393, 36009, 36008);
				return;
			}
			if (a0 == 36009) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(534394);
				tv0->ClearReplies();
				tv0->AddReply(534395, 36013, 36012);
				return;
			}
			if (a0 == 36013) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(534396);
				tv0->ClearReplies();
				tv0->AddReply(534397, 11492, 36014);
				return;
			}
			if (a0 == 11490) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510422);
				tv0->ClearReplies();
				tv0->AddReply(510423, 11492, 11491);
				tv0->AddReply(534385, 11502, 36000);
				return;
			}
			if (a0 == 11492) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510424);
				tv0->ClearReplies();
				tv0->AddReply(510425, 11494, 11493);
				return;
			}
			if (a0 == 11494) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510426);
				tv0->ClearReplies();
				tv0->AddReply(510427, 11496, 11495);
				return;
			}
			if (a0 == 11496) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510428);
				tv0->ClearReplies();
				tv0->AddReply(510429, 11499, 11497);
				tv0->AddReply(510430, -1, 11498);
				return;
			}
			if (a0 == 11499) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510431);
				tv0->ClearReplies();
				tv0->AddReply(510432, 11502, 11500);
				tv0->AddReply(510433, 11502, 11501);
				return;
			}
			if (a0 == 11502) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510434);
				tv0->ClearReplies();
				tv0->AddReply(510435, 11504, 11503);
				tv0->AddReply(510437, -1, 11505);
				return;
			}
			if (a0 == 11504) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510436);
				tv0->ClearReplies();
				tv0->AddReply(510438, 11508, 11507);
				return;
			}
			if (a0 == 11508) {
				f_3f4_a1_v("Neutral");
				tv0->SetMessage(510439);
				tv0->ClearReplies();
				tv0->AddReply(510440, -1, 11509);
				tv0->AddReply(510441, -1, 11510);
				return;
			}
			tv3 = true;
			if (f_100c_a0_b()) {
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
		f_f03_a1_b(f_fb0_a0_o());
		if (!f_eae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1006_a0_i());
		L0->SetNPCDescription(f_1004_a0_i());
		L0->SetPhoto(f_1008_a0_s());
		L0->SetPhoto2(f_100a_a0_s());
		L0->SetPlayerName(f_11d2_a0_i());
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
		f_ef2_a1_v(a0);
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
			f_618_a1_v("Neutral");
			tv0->SetMessage(512232);
			tv0->ClearReplies();
			if (f_1096_a1_b(tv1)) {
				tv0->AddReply(512233, 13389, 13388);
			}
			tv0->AddReply(533144, -1, 34662);
			break;
			return;
		}
		if (f_100c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f8d_a1_v(tv2);
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

	void f_618_a1_v(string a0)
	{
		if (!f_100c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f94_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_fa9_a0_v();
			if (a1 == 13388) {
				f_100e_a2_v(tv1, tv0);
			}
			if (a0 == 13387) {
				f_618_a1_v("Neutral");
				tv0->SetMessage(512232);
				tv0->ClearReplies();
				if (f_1096_a1_b(tv1)) {
					tv0->AddReply(512233, 13389, 13388);
				}
				tv0->AddReply(533144, -1, 34662);
				return;
			}
			if (a0 == 13389) {
				f_618_a1_v("Neutral");
				tv0->SetMessage(512234);
				tv0->ClearReplies();
				tv0->AddReply(512235, 13393, 13390);
				tv0->AddReply(512236, 13393, 13391);
				tv0->AddReply(512237, 13393, 13392);
				return;
			}
			if (a0 == 13393) {
				f_618_a1_v("Neutral");
				tv0->SetMessage(512238);
				tv0->ClearReplies();
				tv0->AddReply(535824, 37518, 37517);
				tv0->AddReply(535826, 37518, 37519);
				return;
			}
			if (a0 == 37518) {
				f_618_a1_v("Neutral");
				tv0->SetMessage(535825);
				tv0->ClearReplies();
				tv0->AddReply(512240, 13397, 13396);
				return;
			}
			if (a0 == 13397) {
				f_618_a1_v("Neutral");
				tv0->SetMessage(512241);
				tv0->ClearReplies();
				tv0->AddReply(512242, -1, 13398);
				tv0->AddReply(535827, -1, 37521);
				return;
			}
			tv3 = true;
			if (f_100c_a0_b()) {
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
		f_f03_a1_b(f_fb0_a0_o());
		if (!f_eae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1006_a0_i());
		L0->SetNPCDescription(f_1004_a0_i());
		L0->SetPhoto(f_1008_a0_s());
		L0->SetPhoto2(f_100a_a0_s());
		L0->SetPlayerName(f_11d2_a0_i());
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
		f_ef2_a1_v(a0);
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
			if (f_10e2_a1_b(tv1)) {
				f_106f_a2_v(tv1, tv0);
				f_765_a1_v("Neutral");
				tv0->SetMessage(512330);
				tv0->ClearReplies();
				tv0->AddReply(512331, 13491, 13490);
				tv0->AddReply(512336, -1, 13495);
				break;
			}
			f_765_a1_v("Neutral");
			tv0->SetMessage(513781);
			tv0->ClearReplies();
			tv0->AddReply(513782, -1, 15018);
			break;
			return;
		}
		if (f_100c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f8d_a1_v(tv2);
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

	void f_765_a1_v(string a0)
	{
		if (!f_100c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f94_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_fa9_a0_v();
			if (a0 == 13489) {
				if (f_10e2_a1_b(tv1)) {
					f_106f_a2_v(tv1, tv0);
					f_765_a1_v("Neutral");
					tv0->SetMessage(512330);
					tv0->ClearReplies();
					tv0->AddReply(512331, 13491, 13490);
					tv0->AddReply(512336, -1, 13495);
					return;
				}
				f_765_a1_v("Neutral");
				tv0->SetMessage(513781);
				tv0->ClearReplies();
				tv0->AddReply(513782, -1, 15018);
				return;
			}
			if (a0 == 13491) {
				f_765_a1_v("Neutral");
				tv0->SetMessage(512332);
				tv0->ClearReplies();
				tv0->AddReply(512333, 13493, 13492);
				tv0->AddReply(512337, 13497, 13496);
				return;
			}
			if (a0 == 13497) {
				f_765_a1_v("Neutral");
				tv0->SetMessage(512338);
				tv0->ClearReplies();
				tv0->AddReply(512339, 13499, 13498);
				return;
			}
			if (a0 == 13499) {
				f_765_a1_v("Neutral");
				tv0->SetMessage(512340);
				tv0->ClearReplies();
				tv0->AddReply(512341, -1, 13500);
				tv0->AddReply(512342, 13502, 13501);
				return;
			}
			if (a0 == 13502) {
				f_765_a1_v("Neutral");
				tv0->SetMessage(512343);
				tv0->ClearReplies();
				tv0->AddReply(512344, -1, 13503);
				return;
			}
			if (a0 == 13493) {
				f_765_a1_v("Neutral");
				tv0->SetMessage(512334);
				tv0->ClearReplies();
				tv0->AddReply(512335, 13504, 13494);
				return;
			}
			if (a0 == 13504) {
				f_765_a1_v("Neutral");
				tv0->SetMessage(512345);
				tv0->ClearReplies();
				tv0->AddReply(512346, 13506, 13505);
				return;
			}
			if (a0 == 13506) {
				f_765_a1_v("Neutral");
				tv0->SetMessage(512347);
				tv0->ClearReplies();
				tv0->AddReply(512348, -1, 13507);
				return;
			}
			tv3 = true;
			if (f_100c_a0_b()) {
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
		f_f03_a1_b(f_fb0_a0_o());
		if (!f_eae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1006_a0_i());
		L0->SetNPCDescription(f_1004_a0_i());
		L0->SetPhoto(f_1008_a0_s());
		L0->SetPhoto2(f_100a_a0_s());
		L0->SetPlayerName(f_11d2_a0_i());
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
		f_ef2_a1_v(a0);
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
			if (f_10ee_a1_b(tv1) && f_10fa_a1_b(tv1)) {
				f_1075_a2_v(tv1, tv0);
				f_927_a1_v("Neutral");
				tv0->SetMessage(514041);
				tv0->ClearReplies();
				tv0->AddReply(514042, 15278, 15277);
				break;
			}
			f_927_a1_v("Neutral");
			tv0->SetMessage(514063);
			tv0->ClearReplies();
			if (f_1112_a1_b(tv1) && f_1106_a1_b(tv1)) {
				tv0->AddReply(514068, 40760, 15305);
			}
			if (f_111c_a1_b(tv1) && f_1106_a1_b(tv1)) {
				tv0->AddReply(514069, 15307, 15306);
			}
			if (f_10b9_a1_b(tv1) && f_10c5_a1_b(tv1)) {
				tv0->AddReply(538835, 40765, 40764);
			}
			tv0->AddReply(514064, -1, 15300);
			break;
			return;
		}
		if (f_100c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f8d_a1_v(tv2);
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

	void f_927_a1_v(string a0)
	{
		if (!f_100c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f94_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_fa9_a0_v();
			if (a1 == 15289) {
				f_107b_a2_v(tv1, tv0);
			}
			if (a1 == 15310) {
				f_1050_a2_v(tv1, tv0);
				f_1084_a2_v(tv1, tv0);
				f_1022_a2_v(tv1, tv0);
				f_108c_a2_v(tv1, tv0);
			}
			if (a1 == 40764) {
				f_104a_a2_v(tv1, tv0);
			}
			if (a1 == 40789) {
				f_1029_a2_v(tv1, tv0);
				f_103a_a2_v(tv1, tv0);
			}
			if (a1 == 40790) {
				f_1029_a2_v(tv1, tv0);
				f_103a_a2_v(tv1, tv0);
			}
			if (a1 == 40787) {
				f_1029_a2_v(tv1, tv0);
				f_103a_a2_v(tv1, tv0);
			}
			if (a0 == 15276) {
				if (f_10ee_a1_b(tv1) && f_10fa_a1_b(tv1)) {
					f_1075_a2_v(tv1, tv0);
					f_927_a1_v("Neutral");
					tv0->SetMessage(514041);
					tv0->ClearReplies();
					tv0->AddReply(514042, 15278, 15277);
					return;
				}
				f_927_a1_v("Neutral");
				tv0->SetMessage(514063);
				tv0->ClearReplies();
				if (f_1112_a1_b(tv1) && f_1106_a1_b(tv1)) {
					tv0->AddReply(514068, 40760, 15305);
				}
				if (f_111c_a1_b(tv1) && f_1106_a1_b(tv1)) {
					tv0->AddReply(514069, 15307, 15306);
				}
				if (f_10b9_a1_b(tv1) && f_10c5_a1_b(tv1)) {
					tv0->AddReply(538835, 40765, 40764);
				}
				tv0->AddReply(514064, -1, 15300);
				return;
			}
			if (a0 == 40765) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538836);
				tv0->ClearReplies();
				tv0->AddReply(538837, 40775, 40766);
				tv0->AddReply(538838, 40774, 40767);
				tv0->AddReply(538839, 40769, 40768);
				return;
			}
			if (a0 == 40769) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538840);
				tv0->ClearReplies();
				tv0->AddReply(538841, 40773, 40772);
				return;
			}
			if (a0 == 40773) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538842);
				tv0->ClearReplies();
				tv0->AddReply(538847, 40780, 40779);
				return;
			}
			if (a0 == 40774) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538843);
				tv0->ClearReplies();
				tv0->AddReply(538846, 40769, 40777);
				tv0->AddReply(538849, 40780, 40781);
				return;
			}
			if (a0 == 40775) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538844);
				tv0->ClearReplies();
				tv0->AddReply(538845, 40780, 40776);
				return;
			}
			if (a0 == 40780) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538848);
				tv0->ClearReplies();
				tv0->AddReply(538850, 40783, 40782);
				return;
			}
			if (a0 == 40783) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538851);
				tv0->ClearReplies();
				tv0->AddReply(538852, 40788, 40786);
				tv0->AddReply(538853, -1, 40787);
				return;
			}
			if (a0 == 40788) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538854);
				tv0->ClearReplies();
				tv0->AddReply(538855, -1, 40789);
				tv0->AddReply(538856, -1, 40790);
				return;
			}
			if (a0 == 15307) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514070);
				tv0->ClearReplies();
				tv0->AddReply(514071, -1, 15308);
				return;
			}
			if (a0 == 40760) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538831);
				tv0->ClearReplies();
				tv0->AddReply(538832, 40762, 40761);
				return;
			}
			if (a0 == 40762) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(538833);
				tv0->ClearReplies();
				tv0->AddReply(538834, 15309, 40763);
				return;
			}
			if (a0 == 15309) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514072);
				tv0->ClearReplies();
				tv0->AddReply(514073, -1, 15310);
				return;
			}
			if (a0 == 15278) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514043);
				tv0->ClearReplies();
				tv0->AddReply(514044, 15280, 15279);
				tv0->AddReply(538829, 15280, 40756);
				return;
			}
			if (a0 == 15280) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514045);
				tv0->ClearReplies();
				tv0->AddReply(514046, 15282, 15281);
				return;
			}
			if (a0 == 15282) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514047);
				tv0->ClearReplies();
				tv0->AddReply(514048, 15284, 15283);
				tv0->AddReply(514060, 15297, 15296);
				return;
			}
			if (a0 == 15297) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514061);
				tv0->ClearReplies();
				tv0->AddReply(514062, 15286, 15298);
				tv0->AddReply(538830, 15286, 40758);
				return;
			}
			if (a0 == 15284) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514049);
				tv0->ClearReplies();
				tv0->AddReply(514050, 15286, 15285);
				tv0->AddReply(514055, 15291, 15290);
				return;
			}
			if (a0 == 15291) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514056);
				tv0->ClearReplies();
				tv0->AddReply(514057, 15293, 15292);
				return;
			}
			if (a0 == 15293) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514058);
				tv0->ClearReplies();
				tv0->AddReply(514059, 15286, 15294);
				return;
			}
			if (a0 == 15286) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514051);
				tv0->ClearReplies();
				tv0->AddReply(514052, 15288, 15287);
				return;
			}
			if (a0 == 15288) {
				f_927_a1_v("Neutral");
				tv0->SetMessage(514053);
				tv0->ClearReplies();
				tv0->AddReply(514054, -1, 15289);
				return;
			}
			tv3 = true;
			if (f_100c_a0_b()) {
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
		f_f03_a1_b(f_fb0_a0_o());
		if (!f_eae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1006_a0_i());
		L0->SetNPCDescription(f_1004_a0_i());
		L0->SetPhoto(f_1008_a0_s());
		L0->SetPhoto2(f_100a_a0_s());
		L0->SetPlayerName(f_11d2_a0_i());
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
		f_ef2_a1_v(a0);
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
			f_c3d_a1_v("Neutral");
			tv0->SetMessage(518006);
			tv0->ClearReplies();
			tv0->AddReply(518007, 36191, 19140);
			tv0->AddReply(534556, 36189, 36188);
			break;
			return;
		}
		if (f_100c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f8d_a1_v(tv2);
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

	void f_c3d_a1_v(string a0)
	{
		if (!f_100c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f94_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_fa9_a0_v();
			if (a0 == 19139) {
				f_c3d_a1_v("Neutral");
				tv0->SetMessage(518006);
				tv0->ClearReplies();
				tv0->AddReply(518007, 36191, 19140);
				tv0->AddReply(534556, 36189, 36188);
				return;
			}
			if (a0 == 36189) {
				f_c3d_a1_v("Neutral");
				tv0->SetMessage(534557);
				tv0->ClearReplies();
				tv0->AddReply(534558, 36195, 36190);
				return;
			}
			if (a0 == 36195) {
				f_c3d_a1_v("Neutral");
				tv0->SetMessage(534562);
				tv0->ClearReplies();
				tv0->AddReply(534563, -1, 36196);
				tv0->AddReply(534565, -1, 36198);
				tv0->AddReply(534564, -1, 36197);
				return;
			}
			if (a0 == 36191) {
				f_c3d_a1_v("Neutral");
				tv0->SetMessage(534559);
				tv0->ClearReplies();
				tv0->AddReply(534560, 36189, 36192);
				return;
			}
			tv3 = true;
			if (f_100c_a0_b()) {
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
		f_f03_a1_b(f_fb0_a0_o());
		if (!f_eae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1006_a0_i());
		L0->SetNPCDescription(f_1004_a0_i());
		L0->SetPhoto(f_1008_a0_s());
		L0->SetPhoto2(f_100a_a0_s());
		L0->SetPlayerName(f_11d2_a0_i());
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
		f_ef2_a1_v(a0);
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
			f_d48_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_100c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f8d_a1_v(tv2);
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

	void f_d48_a1_v(string a0)
	{
		if (!f_100c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f94_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_fa9_a0_v();
			if (a0 == 42551) {
				f_d48_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_100c_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t17
{
	var Vector tv0;

	void init(void)
	{
		f_d8c_a0_v();
	}

	void f_d8c_a0_v(void)
	{
		if (!f_ea9_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_e42_a0_v();
		}
	}

	bool f_da0_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_ea0_a1_b(L0);
	}

	void f_daf_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_db4_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_e8e_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_dca_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_dd3_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_dd3_a0_v();
			if (f_ea9_a0_b() && f_db4_a0_b()) {
				if (f_da0_a0_b()) {
					f_f3d_a1_b(f_fb0_a0_o());
				}
			} else {
				f_daf_a0_v();
				f_dca_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_e89_a0_v();
		f_dd3_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_dd3_a0_v();
		f_f8d_a1_v("Neutral");
		f_dca_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_dca_a0_v();
		} else {
			f_f8d_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_e89_a0_v();
			f_ea0_a1_b(a0);
			enable OnUse;
			f_11e3_a1_v(a0);
			f_f8d_a1_v("Neutral");
			f_dd3_a0_v();
			f_dca_a0_v();
		}
	}
}

void f_e42_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_ea9_a0_b()) {
		return;
	}
	L0 = f_ff3_a0_i();
	for (L1 = 0; L1 < 5 && f_ea9_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_fec_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_e87_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_e87_a0_b(void)
{
	return true;
}

void f_e89_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_e8e_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_e96_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_ea0_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_e96_a1_b(L0);
}

bool f_ea9_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_eae_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_fb6_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_100c_a0_b()) {
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

void f_ef2_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_100c_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_f03_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_f3d_a1_b(a0)) {
			if (!f_f62_a1_b(a0)) {
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
		if (!f_f62_a1_b(a0)) {
			if (!f_f3d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_f3d_a1_b(object a0)
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
	return f_f9a_a1_b(L4);
}

bool f_f62_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_fdd_a0_i() + "m";
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
	return f_f9a_a1_b(L4);
}

void f_f8d_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_f94_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_f9a_a1_b(string a0)
{
	if (f_100c_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_fa9_a0_v(void)
{
	if (f_100c_a0_b()) {
		@lshStopSpeech();
	}
}

object f_fb0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_fb6_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_fc0_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_fc5_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_fcc_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_fd8_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_fdd_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_fe6_a1_b(int a0)
{
	return f_fdd_a0_i() == a0;
}

string f_fec_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_ff3_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_fec_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1004_a0_i(void)
{
	return 515536;
}

int f_1006_a0_i(void)
{
	return 502861;
}

string f_1008_a0_s(void)
{
	return "ui/NPC_Han.png";
}

string f_100a_a0_s(void)
{
	return "ui/NPC_Han_b.png";
}

bool f_100c_a0_b(void)
{
	return true;
}

void f_100e_a2_v(object a0, object a1)
{
	@SetVariable("ood7Han1", 1);
}

void f_1014_a2_v(object a0, object a1)
{
	@SetVariable("d11q05", 2);
	f_1143_a0_v();
	f_fcc_a2_b("quest_d11_05", "place_enemy_before");
}

void f_1022_a2_v(object a0, object a1)
{
	f_fcc_a2_b("quest_d9_01", "teleport_to_mnogogrannik");
}

void f_1029_a2_v(object a0, object a1)
{
	if (f_fc0_a1_i("map_chertez_state") <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_103a_a2_v(object a0, object a1)
{
	f_11b1_a3_v(f_11a0_a0_o(), "pt_map_aglaja", -1);
	a1->ShowMap(f_11a0_a0_o());
}

void f_104a_a2_v(object a0, object a1)
{
	@SetVariable("ood9Xan3", 1);
}

void f_1050_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1056_a2_v(object a0, object a1)
{
}

void f_1058_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q02", 4);
	L0 = f_11a0_a0_o();
	L0->AddMark("d3q02HanGotoMladVlad", "pt_map_mladvlad", 0, 511386, f_fd8_a0_f());
	f_1150_a0_v();
}

void f_106f_a2_v(object a0, object a1)
{
	@SetVariable("ood8Han1", 1);
}

void f_1075_a2_v(object a0, object a1)
{
	@SetVariable("ood9Xan1", 1);
}

void f_107b_a2_v(object a0, object a1)
{
	@SetVariable("d9q01", 2);
	f_116a_a0_v();
}

void f_1084_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "Rifle", 5);
	a0->SelectWeapon();
}

void f_108c_a2_v(object a0, object a1)
{
	f_115d_a0_v();
	f_fcc_a2_b("quest_d9_01", "completed");
}

bool f_1096_a1_b(object a0)
{
	if (f_fc0_a1_i("ood7Han1") == 0) {
		return true;
	}
	return false;
}

bool f_10a2_a1_b(object a0)
{
	if (f_fc0_a1_i("d11q05") == 1) {
		return true;
	}
	return false;
}

bool f_10ae_a1_b(object a0)
{
	if (f_fc5_a2_b(a0, "burah_serum")) {
		return true;
	}
	return false;
}

bool f_10b9_a1_b(object a0)
{
	if (f_fc0_a1_i("d9q01") == 1000) {
		return true;
	}
	return false;
}

bool f_10c5_a1_b(object a0)
{
	if (f_fc0_a1_i("ood9Xan3") == 0) {
		return true;
	}
	return false;
}

bool f_10d1_a1_b(object a0)
{
	return true;
	return false;
}

bool f_10d6_a1_b(object a0)
{
	if (f_fc0_a1_i("d3q02") == 3) {
		return true;
	}
	return false;
}

bool f_10e2_a1_b(object a0)
{
	if (f_fc0_a1_i("ood8Han1") == 0) {
		return true;
	}
	return false;
}

bool f_10ee_a1_b(object a0)
{
	if (f_fc0_a1_i("d9q01") == 1) {
		return true;
	}
	return false;
}

bool f_10fa_a1_b(object a0)
{
	if (f_fc0_a1_i("ood9Xan1") == 0) {
		return true;
	}
	return false;
}

bool f_1106_a1_b(object a0)
{
	if (f_fc0_a1_i("d9q01") == 2) {
		return true;
	}
	return false;
}

bool f_1112_a1_b(object a0)
{
	if (f_1126_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_111c_a1_b(object a0)
{
	if (f_1131_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1126_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "Rifle");
	if (L0 >= 5) {
		return true;
	}
	return false;
}

bool f_1131_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "Rifle");
	if (L0 > 0 && L0 < 5) {
		return true;
	}
	return false;
}

void f_1143_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 684, 2, 534499);
	f_1184_a2_b(L0, 682);
}

void f_1150_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 679, 2, 534420);
	f_1184_a2_b(L0, 26);
}

void f_115d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 185, 1, 515448);
	f_1184_a2_b(L0, 182);
}

void f_116a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 184, 1, 515447);
	f_1184_a2_b(L0, 182);
}

object f_1177_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1184_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1177_a0_o();
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

object f_11a0_a0_o(void)
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

void f_11b1_a3_v(object a0, string a1, float a2)
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

int f_11d2_a0_i(void)
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

void f_11e3_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_han", L0);
	if (!L0) {
		t13{a0};
		@SetVariable("mt_han", 1);
	}
	if (f_fe6_a1_b(1)) {
		return;
	}
	if (f_fe6_a1_b(3)) {
		t5{a0};
		return;
	}
	if (f_fe6_a1_b(7)) {
		t7{a0};
		return;
	}
	if (f_fe6_a1_b(8)) {
		t9{a0};
		return;
	}
	if (f_fe6_a1_b(9)) {
		t11{a0};
		return;
	}
	if (f_fe6_a1_b(11)) {
		t1{a0};
		return;
	}
	if (f_fe6_a1_b(12)) {
		t3{a0};
		return;
	}
	t15{a0};
}

