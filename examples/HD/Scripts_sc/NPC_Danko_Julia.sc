event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			f_1998_a2_v(tv1, tv0);
			f_95_a1_v("Neutral");
			tv0->SetMessage(500325);
			tv0->ClearReplies();
			tv0->AddReply(500326, 383, 380);
			tv0->AddReply(500327, 383, 381);
			tv0->AddReply(500328, 393, 382);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_95_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a0 == 379) {
				f_1998_a2_v(tv1, tv0);
				f_95_a1_v("Neutral");
				tv0->SetMessage(500325);
				tv0->ClearReplies();
				tv0->AddReply(500326, 383, 380);
				tv0->AddReply(500327, 383, 381);
				tv0->AddReply(500328, 393, 382);
				return;
			}
			if (a0 == 393) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(500338);
				tv0->ClearReplies();
				tv0->AddReply(500339, 396, 394);
				tv0->AddReply(533155, 34674, 34673);
				return;
			}
			if (a0 == 34674) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(533156);
				tv0->ClearReplies();
				tv0->AddReply(533161, 34677, 34679);
				tv0->AddReply(533157, -1, 34675);
				return;
			}
			if (a0 == 396) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(500341);
				tv0->ClearReplies();
				tv0->AddReply(533158, 34677, 34676);
				tv0->AddReply(533160, -1, 34678);
				return;
			}
			if (a0 == 34677) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(533159);
				tv0->ClearReplies();
				tv0->AddReply(500343, -1, 398);
				tv0->AddReply(500344, -1, 399);
				return;
			}
			if (a0 == 383) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(500329);
				tv0->ClearReplies();
				tv0->AddReply(500334, 390, 389);
				tv0->AddReply(500330, 386, 385);
				return;
			}
			if (a0 == 386) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(500331);
				tv0->ClearReplies();
				tv0->AddReply(500333, -1, 388);
				return;
			}
			if (a0 == 390) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(500335);
				tv0->ClearReplies();
				tv0->AddReply(500336, -1, 391);
				tv0->AddReply(500337, -1, 392);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			f_24e_a1_v("Neutral");
			tv0->SetMessage(503640);
			tv0->ClearReplies();
			if (f_1b5d_a1_b(tv1) && f_1b69_a1_b(tv1)) {
				tv0->AddReply(503641, 3945, 3943);
			}
			if (f_1b51_a1_b(tv1) && f_1b75_a1_b(tv1)) {
				tv0->AddReply(512733, 11803, 13927);
			}
			if (f_1b81_a1_b(tv1) && f_1b8d_a1_b(tv1) && !f_1b99_a1_b(tv1) && !f_1ba5_a1_b(tv1)) {
				tv0->AddReply(512734, 11840, 13928);
			}
			tv0->AddReply(503642, -1, 3944);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_24e_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a1 == 3943) {
				f_1a0e_a2_v(tv1, tv0);
			}
			if (a1 == 13927) {
				f_1a14_a2_v(tv1, tv0);
			}
			if (a1 == 11812) {
				f_1a1a_a2_v(tv1, tv0);
				f_1a28_a2_v(tv1, tv0);
			}
			if (a1 == 11813) {
				f_1a1a_a2_v(tv1, tv0);
				f_1a28_a2_v(tv1, tv0);
			}
			if (a1 == 11839) {
				f_1a14_a2_v(tv1, tv0);
				f_1a1a_a2_v(tv1, tv0);
				f_1a28_a2_v(tv1, tv0);
			}
			if (a1 == 13928) {
				f_1a3c_a2_v(tv1, tv0);
			}
			if (a1 == 11847) {
				f_1977_a2_v(tv1, tv0);
			}
			if (a1 == 11848) {
				f_1a2e_a2_v(tv1, tv0);
			}
			if (a1 == 11853) {
				f_1a2e_a2_v(tv1, tv0);
			}
			if (a1 == 11854) {
				f_1a2e_a2_v(tv1, tv0);
			}
			if (a0 == 3942) {
				f_24e_a1_v("Neutral");
				tv0->SetMessage(503640);
				tv0->ClearReplies();
				if (f_1b5d_a1_b(tv1) && f_1b69_a1_b(tv1)) {
					tv0->AddReply(503641, 3945, 3943);
				}
				if (f_1b51_a1_b(tv1) && f_1b75_a1_b(tv1)) {
					tv0->AddReply(512733, 11803, 13927);
				}
				if (f_1b81_a1_b(tv1) && f_1b8d_a1_b(tv1) && !f_1b99_a1_b(tv1) && !f_1ba5_a1_b(tv1)) {
					tv0->AddReply(512734, 11840, 13928);
				}
				tv0->AddReply(503642, -1, 3944);
				return;
			}
			if (a0 == 11840) {
				f_24e_a1_v("Hope");
				tv0->SetMessage(510719);
				tv0->ClearReplies();
				tv0->AddReply(510720, 11842, 11841);
				return;
			}
			if (a0 == 11842) {
				f_24e_a1_v("Hope");
				tv0->SetMessage(510721);
				tv0->ClearReplies();
				tv0->AddReply(510722, 11844, 11843);
				tv0->AddReply(510733, 11844, 11855);
				tv0->AddReply(510734, 11858, 11857);
				return;
			}
			if (a0 == 11858) {
				f_24e_a1_v("Neutral");
				tv0->SetMessage(510735);
				tv0->ClearReplies();
				tv0->AddReply(510736, 11844, 11859);
				tv0->AddReply(510737, 11844, 11861);
				return;
			}
			if (a0 == 11844) {
				f_24e_a1_v("Fear");
				tv0->SetMessage(510723);
				tv0->ClearReplies();
				tv0->AddReply(510724, 11846, 11845);
				tv0->AddReply(510728, 11846, 11849);
				tv0->AddReply(510729, 11852, 11851);
				return;
			}
			if (a0 == 11852) {
				f_24e_a1_v("Neutral");
				tv0->SetMessage(510730);
				tv0->ClearReplies();
				tv0->AddReply(510731, -1, 11853);
				tv0->AddReply(510732, -1, 11854);
				return;
			}
			if (a0 == 11846) {
				f_24e_a1_v("Neutral");
				tv0->SetMessage(510725);
				tv0->ClearReplies();
				tv0->AddReply(510726, -1, 11847);
				tv0->AddReply(510727, -1, 11848);
				return;
			}
			if (a0 == 11803) {
				f_24e_a1_v("Fear");
				tv0->SetMessage(510689);
				tv0->ClearReplies();
				tv0->AddReply(510690, 11805, 11804);
				tv0->AddReply(510715, 11807, 11835);
				tv0->AddReply(510716, 11838, 11837);
				return;
			}
			if (a0 == 11838) {
				f_24e_a1_v("Independence");
				tv0->SetMessage(510717);
				tv0->ClearReplies();
				tv0->AddReply(510718, -1, 11839);
				return;
			}
			if (a0 == 11805) {
				f_24e_a1_v("Fear");
				tv0->SetMessage(510691);
				tv0->ClearReplies();
				tv0->AddReply(510692, 11807, 11806);
				tv0->AddReply(510711, 11830, 11829);
				return;
			}
			if (a0 == 11830) {
				f_24e_a1_v("Fear");
				tv0->SetMessage(510712);
				tv0->ClearReplies();
				tv0->AddReply(510713, 11807, 11831);
				tv0->AddReply(510714, 11807, 11833);
				return;
			}
			if (a0 == 11807) {
				f_24e_a1_v("Untrust");
				tv0->SetMessage(510693);
				tv0->ClearReplies();
				tv0->AddReply(510694, 11809, 11808);
				tv0->AddReply(510701, 11809, 11816);
				tv0->AddReply(510702, 11818, 11817);
				return;
			}
			if (a0 == 11818) {
				f_24e_a1_v("Independence");
				tv0->SetMessage(510703);
				tv0->ClearReplies();
				tv0->AddReply(510704, 11820, 11819);
				tv0->AddReply(510710, 11820, 11827);
				return;
			}
			if (a0 == 11820) {
				f_24e_a1_v("Independence");
				tv0->SetMessage(510705);
				tv0->ClearReplies();
				tv0->AddReply(510706, 11822, 11821);
				tv0->AddReply(510709, 11809, 11825);
				return;
			}
			if (a0 == 11822) {
				f_24e_a1_v("Untrust");
				tv0->SetMessage(510707);
				tv0->ClearReplies();
				tv0->AddReply(510708, 11809, 11823);
				return;
			}
			if (a0 == 11809) {
				f_24e_a1_v("Untrust");
				tv0->SetMessage(510695);
				tv0->ClearReplies();
				tv0->AddReply(510696, 11811, 11810);
				tv0->AddReply(510700, 11811, 11814);
				return;
			}
			if (a0 == 11811) {
				f_24e_a1_v("Fear");
				tv0->SetMessage(510697);
				tv0->ClearReplies();
				tv0->AddReply(510698, -1, 11812);
				tv0->AddReply(510699, -1, 11813);
				return;
			}
			if (a0 == 3945) {
				f_24e_a1_v("Independence");
				tv0->SetMessage(503643);
				tv0->ClearReplies();
				tv0->AddReply(503644, 3948, 3946);
				tv0->AddReply(503645, 3951, 3947);
				return;
			}
			if (a0 == 3951) {
				f_24e_a1_v("Untrust");
				tv0->SetMessage(503648);
				tv0->ClearReplies();
				tv0->AddReply(503649, 3954, 3952);
				tv0->AddReply(503650, -1, 3953);
				return;
			}
			if (a0 == 3954) {
				f_24e_a1_v("Untrust");
				tv0->SetMessage(503651);
				tv0->ClearReplies();
				tv0->AddReply(503654, 3958, 3957);
				return;
			}
			if (a0 == 3958) {
				f_24e_a1_v("Neutral");
				tv0->SetMessage(503655);
				tv0->ClearReplies();
				tv0->AddReply(503656, 3948, 3959);
				return;
			}
			if (a0 == 3948) {
				f_24e_a1_v("Independence");
				tv0->SetMessage(503646);
				tv0->ClearReplies();
				tv0->AddReply(503647, 3955, 3950);
				tv0->AddReply(503657, 3955, 3961);
				return;
			}
			if (a0 == 3955) {
				f_24e_a1_v("Neutral");
				tv0->SetMessage(503652);
				tv0->ClearReplies();
				tv0->AddReply(503653, 3963, 3956);
				return;
			}
			if (a0 == 3963) {
				f_24e_a1_v("Neutral");
				tv0->SetMessage(503658);
				tv0->ClearReplies();
				tv0->AddReply(503659, -1, 3964);
				tv0->AddReply(503660, -1, 3965);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			f_5f2_a1_v("Neutral");
			tv0->SetMessage(506914);
			tv0->ClearReplies();
			if (f_1afd_a1_b(tv1) && f_1b09_a1_b(tv1)) {
				tv0->AddReply(506915, 7622, 7621);
			}
			if (f_1acf_a1_b(tv1) && f_1af1_a1_b(tv1)) {
				tv0->AddReply(533849, 10203, 35399);
			}
			tv0->AddReply(507747, -1, 8548);
			tv0->AddReply(533869, -1, 35422);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_5f2_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a1 == 8122) {
				f_197c_a2_v(tv1, tv0);
				f_18db_a2_v(tv1, tv0);
				f_19ae_a2_v(tv1, tv0);
			}
			if (a1 == 8131) {
				f_197c_a2_v(tv1, tv0);
				f_18db_a2_v(tv1, tv0);
				f_19ae_a2_v(tv1, tv0);
			}
			if (a1 == 35399) {
				f_1960_a2_v(tv1, tv0);
			}
			if (a0 == 7620) {
				f_5f2_a1_v("Neutral");
				tv0->SetMessage(506914);
				tv0->ClearReplies();
				if (f_1afd_a1_b(tv1) && f_1b09_a1_b(tv1)) {
					tv0->AddReply(506915, 7622, 7621);
				}
				if (f_1acf_a1_b(tv1) && f_1af1_a1_b(tv1)) {
					tv0->AddReply(533849, 10203, 35399);
				}
				tv0->AddReply(507747, -1, 8548);
				tv0->AddReply(533869, -1, 35422);
				return;
			}
			if (a0 == 10203) {
				f_5f2_a1_v("Neutral");
				tv0->SetMessage(509294);
				tv0->ClearReplies();
				tv0->AddReply(509295, 10205, 10204);
				tv0->AddReply(509306, 10205, 10216);
				return;
			}
			if (a0 == 10205) {
				f_5f2_a1_v("Neutral");
				tv0->SetMessage(509296);
				tv0->ClearReplies();
				tv0->AddReply(509297, 10207, 10206);
				tv0->AddReply(509305, 10207, 10214);
				return;
			}
			if (a0 == 10207) {
				f_5f2_a1_v("Fear");
				tv0->SetMessage(509298);
				tv0->ClearReplies();
				tv0->AddReply(509299, 10209, 10208);
				tv0->AddReply(509303, 10213, 10212);
				return;
			}
			if (a0 == 10213) {
				f_5f2_a1_v("Neutral");
				tv0->SetMessage(509304);
				tv0->ClearReplies();
				tv0->AddReply(535340, 10209, 37022);
				return;
			}
			if (a0 == 10209) {
				f_5f2_a1_v("Fear");
				tv0->SetMessage(509300);
				tv0->ClearReplies();
				tv0->AddReply(509301, -1, 10210);
				tv0->AddReply(509302, -1, 10211);
				return;
			}
			if (a0 == 7622) {
				f_5f2_a1_v("Untrust");
				tv0->SetMessage(506916);
				tv0->ClearReplies();
				tv0->AddReply(506917, 8117, 7623);
				tv0->AddReply(507365, 8124, 8123);
				return;
			}
			if (a0 == 8124) {
				f_5f2_a1_v("Untrust");
				tv0->SetMessage(507366);
				tv0->ClearReplies();
				tv0->AddReply(507367, 8121, 8125);
				tv0->AddReply(507368, 8127, 8126);
				return;
			}
			if (a0 == 8127) {
				f_5f2_a1_v("Neutral");
				tv0->SetMessage(507369);
				tv0->ClearReplies();
				tv0->AddReply(507370, 8121, 8128);
				return;
			}
			if (a0 == 8117) {
				f_5f2_a1_v("Fear");
				tv0->SetMessage(507359);
				tv0->ClearReplies();
				tv0->AddReply(507360, 35425, 8118);
				tv0->AddReply(507372, 8121, 8132);
				return;
			}
			if (a0 == 35425) {
				f_5f2_a1_v("Fear");
				tv0->SetMessage(533872);
				tv0->ClearReplies();
				tv0->AddReply(533873, 8119, 35426);
				tv0->AddReply(533874, 8121, 35427);
				return;
			}
			if (a0 == 8119) {
				f_5f2_a1_v("Fear");
				tv0->SetMessage(507361);
				tv0->ClearReplies();
				tv0->AddReply(507362, 8121, 8120);
				tv0->AddReply(533870, 35424, 35423);
				return;
			}
			if (a0 == 35424) {
				f_5f2_a1_v("Neutral");
				tv0->SetMessage(533871);
				tv0->ClearReplies();
				tv0->AddReply(533875, 8121, 35429);
				return;
			}
			if (a0 == 8121) {
				f_5f2_a1_v("Neutral");
				tv0->SetMessage(507363);
				tv0->ClearReplies();
				tv0->AddReply(507364, -1, 8122);
				tv0->AddReply(507371, -1, 8131);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			f_860_a1_v("Fear");
			tv0->SetMessage(511320);
			tv0->ClearReplies();
			if (f_1b21_a1_b(tv1) && f_1b15_a1_b(tv1)) {
				tv0->AddReply(511321, 12516, 12515);
			}
			if (!f_1b2d_a1_b(tv1) && f_1b15_a1_b(tv1)) {
				tv0->AddReply(511469, 12676, 12675);
			}
			if (f_1b45_a1_b(tv1) && f_1b39_a1_b(tv1)) {
				tv0->AddReply(511856, 13070, 13069);
			}
			tv0->AddReply(511472, -1, 12678);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_860_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a1 == 12515) {
				f_19b8_a2_v(tv1, tv0);
			}
			if (a1 == 12527) {
				f_19be_a2_v(tv1, tv0);
				f_19c4_a2_v(tv1, tv0);
				f_1a42_a2_v(tv1, tv0);
				f_1a4d_a2_v(tv1, tv0);
				f_1a58_a2_v(tv1, tv0);
				f_18e1_a2_v(tv1, tv0);
			}
			if (a1 == 12677) {
				f_19be_a2_v(tv1, tv0);
				f_19c4_a2_v(tv1, tv0);
				f_18e1_a2_v(tv1, tv0);
				f_1a42_a2_v(tv1, tv0);
				f_1a58_a2_v(tv1, tv0);
				f_1a4d_a2_v(tv1, tv0);
			}
			if (a1 == 13071) {
				f_1a08_a2_v(tv1, tv0);
				f_1966_a2_v(tv1, tv0);
				f_18e1_a2_v(tv1, tv0);
			}
			if (a0 == 12514) {
				f_860_a1_v("Fear");
				tv0->SetMessage(511320);
				tv0->ClearReplies();
				if (f_1b21_a1_b(tv1) && f_1b15_a1_b(tv1)) {
					tv0->AddReply(511321, 12516, 12515);
				}
				if (!f_1b2d_a1_b(tv1) && f_1b15_a1_b(tv1)) {
					tv0->AddReply(511469, 12676, 12675);
				}
				if (f_1b45_a1_b(tv1) && f_1b39_a1_b(tv1)) {
					tv0->AddReply(511856, 13070, 13069);
				}
				tv0->AddReply(511472, -1, 12678);
				return;
			}
			if (a0 == 13070) {
				f_860_a1_v("Neutral");
				tv0->SetMessage(511857);
				tv0->ClearReplies();
				tv0->AddReply(536100, 37854, 37852);
				tv0->AddReply(536101, 37854, 37853);
				return;
			}
			if (a0 == 37854) {
				f_860_a1_v("Hope");
				tv0->SetMessage(536102);
				tv0->ClearReplies();
				tv0->AddReply(511858, -1, 13071);
				return;
			}
			if (a0 == 12676) {
				f_860_a1_v("Neutral");
				tv0->SetMessage(511470);
				tv0->ClearReplies();
				tv0->AddReply(511471, -1, 12677);
				return;
			}
			if (a0 == 12516) {
				f_860_a1_v("Fear");
				tv0->SetMessage(511322);
				tv0->ClearReplies();
				tv0->AddReply(538498, 40388, 40387);
				tv0->AddReply(511323, 12518, 12517);
				return;
			}
			if (a0 == 12518) {
				f_860_a1_v("Fear");
				tv0->SetMessage(511324);
				tv0->ClearReplies();
				tv0->AddReply(511455, 12522, 12659);
				return;
			}
			if (a0 == 40388) {
				f_860_a1_v("Hope");
				tv0->SetMessage(538499);
				tv0->ClearReplies();
				tv0->AddReply(511429, 12522, 12629);
				return;
			}
			if (a0 == 12522) {
				f_860_a1_v("Hope");
				tv0->SetMessage(511328);
				tv0->ClearReplies();
				tv0->AddReply(538500, 40391, 40390);
				tv0->AddReply(511456, 12661, 12660);
				return;
			}
			if (a0 == 12661) {
				f_860_a1_v("Neutral");
				tv0->SetMessage(511457);
				tv0->ClearReplies();
				tv0->AddReply(511458, 12524, 12662);
				return;
			}
			if (a0 == 40391) {
				f_860_a1_v("Hope");
				tv0->SetMessage(538501);
				tv0->ClearReplies();
				tv0->AddReply(511329, 12524, 12523);
				return;
			}
			if (a0 == 12524) {
				f_860_a1_v("Neutral");
				tv0->SetMessage(511330);
				tv0->ClearReplies();
				tv0->AddReply(511331, 12526, 12525);
				return;
			}
			if (a0 == 12526) {
				f_860_a1_v("Neutral");
				tv0->SetMessage(511332);
				tv0->ClearReplies();
				tv0->AddReply(511333, -1, 12527);
				tv0->AddReply(511464, 12673, 12668);
				return;
			}
			if (a0 == 12673) {
				f_860_a1_v("Neutral");
				tv0->SetMessage(511467);
				tv0->ClearReplies();
				tv0->AddReply(511468, -1, 12674);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			f_af6_a1_v("Neutral");
			tv0->SetMessage(531655);
			tv0->ClearReplies();
			if (f_1a63_a1_b(tv1)) {
				tv0->AddReply(531693, 34875, 33077);
			}
			if (f_1ac3_a1_b(tv1) && f_1bb1_a1_b(tv1)) {
				tv0->AddReply(533163, 34683, 34682);
			}
			if (f_1a6f_a1_b(tv1) && f_1bb1_a1_b(tv1)) {
				tv0->AddReply(531692, 32998, 33076);
			}
			if (f_1a7b_a1_b(tv1) && !f_1ac3_a1_b(tv1)) {
				tv0->AddReply(533180, 34704, 34700);
			}
			if (f_1ab7_a1_b(tv1)) {
				tv0->AddReply(533375, 34878, 34877);
			}
			tv0->AddReply(531656, -1, 33037);
			tv0->AddReply(533162, -1, 34681);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_af6_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a1 == 33079) {
				f_18e7_a2_v(tv1, tv0);
				f_199e_a2_v(tv1, tv0);
			}
			if (a1 == 34682) {
				f_1941_a2_v(tv1, tv0);
			}
			if (a1 == 34711) {
				f_1947_a2_v(tv1, tv0);
				f_1992_a2_v(tv1, tv0);
			}
			if (a1 == 34710) {
				f_1947_a2_v(tv1, tv0);
				f_1992_a2_v(tv1, tv0);
			}
			if (a1 == 34969) {
				f_1947_a2_v(tv1, tv0);
				f_1992_a2_v(tv1, tv0);
			}
			if (a1 == 33076) {
				f_18fe_a2_v(tv1, tv0);
			}
			if (a1 == 33007) {
				f_18c1_a2_v(tv1, tv0);
				f_1982_a2_v(tv1, tv0);
			}
			if (a1 == 34700) {
				f_1904_a2_v(tv1, tv0);
			}
			if (a1 == 34877) {
				f_193b_a2_v(tv1, tv0);
			}
			if (a0 == 33036) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(531655);
				tv0->ClearReplies();
				if (f_1a63_a1_b(tv1)) {
					tv0->AddReply(531693, 34875, 33077);
				}
				if (f_1ac3_a1_b(tv1) && f_1bb1_a1_b(tv1)) {
					tv0->AddReply(533163, 34683, 34682);
				}
				if (f_1a6f_a1_b(tv1) && f_1bb1_a1_b(tv1)) {
					tv0->AddReply(531692, 32998, 33076);
				}
				if (f_1a7b_a1_b(tv1) && !f_1ac3_a1_b(tv1)) {
					tv0->AddReply(533180, 34704, 34700);
				}
				if (f_1ab7_a1_b(tv1)) {
					tv0->AddReply(533375, 34878, 34877);
				}
				tv0->AddReply(531656, -1, 33037);
				tv0->AddReply(533162, -1, 34681);
				return;
			}
			if (a0 == 34878) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533376);
				tv0->ClearReplies();
				tv0->AddReply(533377, 34880, 34879);
				tv0->AddReply(533453, -1, 34963);
				return;
			}
			if (a0 == 34880) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533378);
				tv0->ClearReplies();
				tv0->AddReply(533379, 34882, 34881);
				return;
			}
			if (a0 == 34882) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533380);
				tv0->ClearReplies();
				tv0->AddReply(533381, -1, 34883);
				return;
			}
			if (a0 == 34704) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533184);
				tv0->ClearReplies();
				tv0->AddReply(533382, 34885, 34884);
				tv0->AddReply(533452, -1, 34961);
				return;
			}
			if (a0 == 34885) {
				f_af6_a1_v("Independence");
				tv0->SetMessage(533383);
				tv0->ClearReplies();
				tv0->AddReply(533384, 34887, 34886);
				return;
			}
			if (a0 == 34887) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533385);
				tv0->ClearReplies();
				tv0->AddReply(533386, 34889, 34888);
				tv0->AddReply(533391, 34894, 34893);
				return;
			}
			if (a0 == 34894) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533392);
				tv0->ClearReplies();
				tv0->AddReply(533393, 34889, 34895);
				return;
			}
			if (a0 == 34889) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533387);
				tv0->ClearReplies();
				tv0->AddReply(533388, -1, 34890);
				return;
			}
			if (a0 == 32998) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(531626);
				tv0->ClearReplies();
				tv0->AddReply(531627, 33002, 32999);
				tv0->AddReply(531653, 33002, 33032);
				tv0->AddReply(531654, 33002, 33034);
				return;
			}
			if (a0 == 33002) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(531630);
				tv0->ClearReplies();
				tv0->AddReply(531631, 33004, 33003);
				tv0->AddReply(531647, 34896, 33022);
				return;
			}
			if (a0 == 34896) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533394);
				tv0->ClearReplies();
				tv0->AddReply(533395, 34898, 34897);
				tv0->AddReply(533457, 33006, 34970);
				return;
			}
			if (a0 == 34898) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533396);
				tv0->ClearReplies();
				tv0->AddReply(533397, 33006, 34899);
				tv0->AddReply(533399, 34902, 34901);
				return;
			}
			if (a0 == 34902) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533400);
				tv0->ClearReplies();
				tv0->AddReply(533401, 33006, 34903);
				return;
			}
			if (a0 == 33004) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(531632);
				tv0->ClearReplies();
				tv0->AddReply(531633, 33006, 33005);
				return;
			}
			if (a0 == 33006) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(531634);
				tv0->ClearReplies();
				tv0->AddReply(533458, 34975, 34974);
				return;
			}
			if (a0 == 34975) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533459);
				tv0->ClearReplies();
				tv0->AddReply(531635, -1, 33007);
				tv0->AddReply(531639, -1, 33011);
				return;
			}
			if (a0 == 34683) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533164);
				tv0->ClearReplies();
				tv0->AddReply(533169, 34687, 34688);
				tv0->AddReply(533165, 34685, 34684);
				return;
			}
			if (a0 == 34685) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533166);
				tv0->ClearReplies();
				tv0->AddReply(533422, 34927, 34926);
				tv0->AddReply(533167, 34687, 34686);
				return;
			}
			if (a0 == 34927) {
				f_af6_a1_v("Independence");
				tv0->SetMessage(533423);
				tv0->ClearReplies();
				tv0->AddReply(533424, 34929, 34928);
				tv0->AddReply(533435, 34929, 34940);
				return;
			}
			if (a0 == 34929) {
				f_af6_a1_v("Independence");
				tv0->SetMessage(533425);
				tv0->ClearReplies();
				tv0->AddReply(533426, 34931, 34930);
				tv0->AddReply(533432, 34937, 34936);
				return;
			}
			if (a0 == 34937) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533433);
				tv0->ClearReplies();
				tv0->AddReply(533434, 34931, 34938);
				return;
			}
			if (a0 == 34931) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533427);
				tv0->ClearReplies();
				tv0->AddReply(533428, 34933, 34932);
				tv0->AddReply(533454, 34687, 34964);
				return;
			}
			if (a0 == 34933) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533429);
				tv0->ClearReplies();
				tv0->AddReply(533431, 34687, 34935);
				tv0->AddReply(533430, -1, 34934);
				return;
			}
			if (a0 == 34687) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533168);
				tv0->ClearReplies();
				tv0->AddReply(533170, 34691, 34690);
				return;
			}
			if (a0 == 34691) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533171);
				tv0->ClearReplies();
				tv0->AddReply(533174, 34695, 34694);
				tv0->AddReply(533172, 34693, 34692);
				return;
			}
			if (a0 == 34693) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533173);
				tv0->ClearReplies();
				tv0->AddReply(533455, 34697, 34967);
				return;
			}
			if (a0 == 34695) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533175);
				tv0->ClearReplies();
				tv0->AddReply(533176, 34697, 34696);
				return;
			}
			if (a0 == 34697) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533177);
				tv0->ClearReplies();
				tv0->AddReply(533186, 34707, 34706);
				tv0->AddReply(533456, -1, 34969);
				return;
			}
			if (a0 == 34707) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533187);
				tv0->ClearReplies();
				tv0->AddReply(533188, 34709, 34708);
				return;
			}
			if (a0 == 34709) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533189);
				tv0->ClearReplies();
				tv0->AddReply(533191, -1, 34711);
				tv0->AddReply(533190, -1, 34710);
				return;
			}
			if (a0 == 34875) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533373);
				tv0->ClearReplies();
				tv0->AddReply(533374, 34714, 34876);
				tv0->AddReply(533408, 34911, 34910);
				return;
			}
			if (a0 == 34911) {
				f_af6_a1_v("Fear");
				tv0->SetMessage(533409);
				tv0->ClearReplies();
				tv0->AddReply(533410, 34913, 34912);
				return;
			}
			if (a0 == 34913) {
				f_af6_a1_v("Fear");
				tv0->SetMessage(533411);
				tv0->ClearReplies();
				tv0->AddReply(533412, 34915, 34914);
				return;
			}
			if (a0 == 34915) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533413);
				tv0->ClearReplies();
				tv0->AddReply(533414, 34917, 34916);
				tv0->AddReply(533419, 34917, 34922);
				return;
			}
			if (a0 == 34917) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533415);
				tv0->ClearReplies();
				tv0->AddReply(533416, 34919, 34918);
				tv0->AddReply(533460, 34919, 34976);
				return;
			}
			if (a0 == 34919) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533417);
				tv0->ClearReplies();
				tv0->AddReply(533418, 34714, 34920);
				tv0->AddReply(533461, 34945, 34978);
				return;
			}
			if (a0 == 34714) {
				f_af6_a1_v("Hope");
				tv0->SetMessage(533194);
				tv0->ClearReplies();
				tv0->AddReply(533405, 34908, 34907);
				tv0->AddReply(533439, 34947, 34946);
				return;
			}
			if (a0 == 34947) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533440);
				tv0->ClearReplies();
				tv0->AddReply(533441, 34908, 34948);
				return;
			}
			if (a0 == 34908) {
				f_af6_a1_v("Independence");
				tv0->SetMessage(533406);
				tv0->ClearReplies();
				tv0->AddReply(533442, 34951, 34950);
				return;
			}
			if (a0 == 34951) {
				f_af6_a1_v("Independence");
				tv0->SetMessage(533443);
				tv0->ClearReplies();
				tv0->AddReply(533444, 34953, 34952);
				return;
			}
			if (a0 == 34953) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533445);
				tv0->ClearReplies();
				tv0->AddReply(533437, 34981, 34944);
				tv0->AddReply(533446, 34955, 34954);
				return;
			}
			if (a0 == 34955) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533447);
				tv0->ClearReplies();
				tv0->AddReply(533448, 34957, 34956);
				return;
			}
			if (a0 == 34957) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533449);
				tv0->ClearReplies();
				tv0->AddReply(533450, 34945, 34958);
				tv0->AddReply(533466, 34986, 34985);
				return;
			}
			if (a0 == 34986) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533467);
				tv0->ClearReplies();
				tv0->AddReply(533468, 34981, 34987);
				return;
			}
			if (a0 == 34981) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533462);
				tv0->ClearReplies();
				tv0->AddReply(533463, 34983, 34982);
				tv0->AddReply(533469, 34990, 34989);
				return;
			}
			if (a0 == 34990) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533470);
				tv0->ClearReplies();
				tv0->AddReply(533471, 34983, 34991);
				return;
			}
			if (a0 == 34983) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533464);
				tv0->ClearReplies();
				tv0->AddReply(533465, 34945, 34984);
				tv0->AddReply(533472, 34945, 34994);
				return;
			}
			if (a0 == 34945) {
				f_af6_a1_v("Untrust");
				tv0->SetMessage(533438);
				tv0->ClearReplies();
				tv0->AddReply(533473, 34997, 34996);
				return;
			}
			if (a0 == 34997) {
				f_af6_a1_v("Neutral");
				tv0->SetMessage(533474);
				tv0->ClearReplies();
				tv0->AddReply(531695, -1, 33079);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			f_107c_a1_v("Hope");
			tv0->SetMessage(533355);
			tv0->ClearReplies();
			if (f_1a93_a1_b(tv1) && f_1a87_a1_b(tv1)) {
				tv0->AddReply(533356, 34861, 34860);
			}
			tv0->AddReply(533361, -1, 34865);
			tv0->AddReply(536071, -1, 37816);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_107c_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a1 == 34860) {
				f_190a_a2_v(tv1, tv0);
			}
			if (a0 == 34859) {
				f_107c_a1_v("Hope");
				tv0->SetMessage(533355);
				tv0->ClearReplies();
				if (f_1a93_a1_b(tv1) && f_1a87_a1_b(tv1)) {
					tv0->AddReply(533356, 34861, 34860);
				}
				tv0->AddReply(533361, -1, 34865);
				tv0->AddReply(536071, -1, 37816);
				return;
			}
			if (a0 == 34861) {
				f_107c_a1_v("Independence");
				tv0->SetMessage(533357);
				tv0->ClearReplies();
				tv0->AddReply(533358, 34863, 34862);
				tv0->AddReply(536072, 37818, 37817);
				return;
			}
			if (a0 == 37818) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(536073);
				tv0->ClearReplies();
				tv0->AddReply(536074, 34863, 37819);
				return;
			}
			if (a0 == 34863) {
				f_107c_a1_v("Untrust");
				tv0->SetMessage(533359);
				tv0->ClearReplies();
				tv0->AddReply(533360, 37822, 34864);
				tv0->AddReply(536075, 37822, 37821);
				tv0->AddReply(536077, 37824, 37823);
				return;
			}
			if (a0 == 37824) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(536078);
				tv0->ClearReplies();
				tv0->AddReply(536079, 37822, 37825);
				return;
			}
			if (a0 == 37822) {
				f_107c_a1_v("Fear");
				tv0->SetMessage(536076);
				tv0->ClearReplies();
				tv0->AddReply(536080, -1, 37828);
				tv0->AddReply(536081, -1, 37829);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			if (f_1a9f_a1_b(tv1)) {
				f_1910_a2_v(tv1, tv0);
				f_1971_a2_v(tv1, tv0);
				f_11f8_a1_v("Fear");
				tv0->SetMessage(533524);
				tv0->ClearReplies();
				tv0->AddReply(536154, 37921, 37920);
				break;
			}
			f_11f8_a1_v("Neutral");
			tv0->SetMessage(533532);
			tv0->ClearReplies();
			if (f_1aab_a1_b(tv1)) {
				tv0->AddReply(533533, 35066, 35065);
			}
			tv0->AddReply(533536, -1, 35068);
			tv0->AddReply(536193, -1, 37965);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_11f8_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a1 == 35061) {
				f_1916_a2_v(tv1, tv0);
			}
			if (a1 == 35062) {
				f_1916_a2_v(tv1, tv0);
			}
			if (a1 == 35063) {
				f_1916_a2_v(tv1, tv0);
			}
			if (a1 == 37964) {
				f_1926_a2_v(tv1, tv0);
			}
			if (a1 == 35067) {
				f_1930_a2_v(tv1, tv0);
				f_18e1_a2_v(tv1, tv0);
				f_1926_a2_v(tv1, tv0);
			}
			if (a0 == 35056) {
				if (f_1a9f_a1_b(tv1)) {
					f_1910_a2_v(tv1, tv0);
					f_1971_a2_v(tv1, tv0);
					f_11f8_a1_v("Fear");
					tv0->SetMessage(533524);
					tv0->ClearReplies();
					tv0->AddReply(536154, 37921, 37920);
					return;
				}
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(533532);
				tv0->ClearReplies();
				if (f_1aab_a1_b(tv1)) {
					tv0->AddReply(533533, 35066, 35065);
				}
				tv0->AddReply(533536, -1, 35068);
				tv0->AddReply(536193, -1, 37965);
				return;
			}
			if (a0 == 35066) {
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(533534);
				tv0->ClearReplies();
				tv0->AddReply(536187, 37959, 37958);
				tv0->AddReply(536194, 37962, 37966);
				return;
			}
			if (a0 == 37959) {
				f_11f8_a1_v("Fear");
				tv0->SetMessage(536188);
				tv0->ClearReplies();
				tv0->AddReply(536189, 37962, 37960);
				tv0->AddReply(536190, 37962, 37961);
				return;
			}
			if (a0 == 37962) {
				f_11f8_a1_v("Fear");
				tv0->SetMessage(536191);
				tv0->ClearReplies();
				tv0->AddReply(536192, -1, 37964);
				tv0->AddReply(533535, -1, 35067);
				return;
			}
			if (a0 == 37921) {
				f_11f8_a1_v("Fear");
				tv0->SetMessage(536155);
				tv0->ClearReplies();
				tv0->AddReply(536156, 37923, 37922);
				tv0->AddReply(536169, -1, 37937);
				return;
			}
			if (a0 == 37923) {
				f_11f8_a1_v("Independence");
				tv0->SetMessage(536157);
				tv0->ClearReplies();
				tv0->AddReply(536158, 37925, 37924);
				tv0->AddReply(536160, 37928, 37926);
				return;
			}
			if (a0 == 37928) {
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(536162);
				tv0->ClearReplies();
				tv0->AddReply(536163, 37932, 37929);
				tv0->AddReply(536164, 37931, 37930);
				return;
			}
			if (a0 == 37931) {
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(536165);
				tv0->ClearReplies();
				tv0->AddReply(536168, 37925, 37934);
				return;
			}
			if (a0 == 37932) {
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(536166);
				tv0->ClearReplies();
				tv0->AddReply(536167, 37925, 37933);
				return;
			}
			if (a0 == 37925) {
				f_11f8_a1_v("Independence");
				tv0->SetMessage(536159);
				tv0->ClearReplies();
				tv0->AddReply(533525, 37938, 35057);
				tv0->AddReply(536161, 37942, 37927);
				return;
			}
			if (a0 == 37942) {
				f_11f8_a1_v("Independence");
				tv0->SetMessage(536174);
				tv0->ClearReplies();
				tv0->AddReply(536175, 37938, 37943);
				return;
			}
			if (a0 == 37938) {
				f_11f8_a1_v("Hope");
				tv0->SetMessage(536170);
				tv0->ClearReplies();
				tv0->AddReply(536171, 37940, 37939);
				return;
			}
			if (a0 == 37940) {
				f_11f8_a1_v("Hope");
				tv0->SetMessage(536172);
				tv0->ClearReplies();
				tv0->AddReply(536173, 35058, 37941);
				tv0->AddReply(536176, 37946, 37945);
				return;
			}
			if (a0 == 37946) {
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(536177);
				tv0->ClearReplies();
				tv0->AddReply(536179, 35058, 37948);
				tv0->AddReply(536178, -1, 37947);
				return;
			}
			if (a0 == 35058) {
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(533526);
				tv0->ClearReplies();
				tv0->AddReply(533527, 35060, 35059);
				tv0->AddReply(536180, 37951, 37950);
				return;
			}
			if (a0 == 37951) {
				f_11f8_a1_v("Untrust");
				tv0->SetMessage(536181);
				tv0->ClearReplies();
				tv0->AddReply(536182, 37953, 37952);
				return;
			}
			if (a0 == 37953) {
				f_11f8_a1_v("Untrust");
				tv0->SetMessage(536183);
				tv0->ClearReplies();
				tv0->AddReply(536184, 37956, 37954);
				return;
			}
			if (a0 == 35060) {
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(533528);
				tv0->ClearReplies();
				tv0->AddReply(536185, 37956, 37955);
				return;
			}
			if (a0 == 37956) {
				f_11f8_a1_v("Neutral");
				tv0->SetMessage(536186);
				tv0->ClearReplies();
				tv0->AddReply(533529, -1, 35061);
				tv0->AddReply(533530, -1, 35062);
				tv0->AddReply(533531, -1, 35063);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			f_14a2_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_14a2_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a0 == 36971) {
				f_14a2_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_14a2_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_14a2_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
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
		if (!f_170a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18b9_a0_i());
		L0->SetNPCDescription(f_18b7_a0_i());
		L0->SetPhoto(f_18bb_a0_s());
		L0->SetPhoto2(f_18bd_a0_s());
		L0->SetPlayerName(f_1ca3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1761_a1_b(f_1820_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_174f_a1_v(a0);
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
			f_15a0_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_18bf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17eb_a1_v(tv2);
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

	void f_15a0_a1_v(string a0)
	{
		if (!f_18bf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1819_a0_v();
			if (a0 == 42557) {
				f_15a0_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_18bf_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t18
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_15e7_a0_v();
	}

	void f_15e7_a0_v(void)
	{
		if (!f_1705_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_1697_a0_v();
		}
	}

	bool f_15f5_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_16fc_a1_b(L0);
	}

	void f_1604_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1609_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_16e3_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_161f_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1628_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1628_a0_v();
			if (f_1705_a0_b() && f_1609_a0_b()) {
				if (f_15f5_a0_b()) {
					f_179b_a1_b(f_1820_a0_o());
				}
			} else {
				f_1604_a0_v();
				f_161f_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_16de_a0_v();
		f_1628_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1628_a0_v();
		f_17eb_a1_v("Neutral");
		f_161f_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_161f_a0_v();
		} else {
			f_17eb_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_16de_a0_v();
			f_16fc_a1_b(a0);
			enable OnUse;
			f_1cb4_a1_v(a0);
			f_17eb_a1_v("Neutral");
			f_1628_a0_v();
			f_161f_a0_v();
		}
	}
}

void f_1697_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1705_a0_b()) {
		return;
	}
	L0 = f_18a6_a0_i();
	for (L1 = 0; L1 < 5 && f_1705_a0_b(); L1++) {
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
			@PlayAnimation("all", f_189f_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_16dc_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_16dc_a0_b(void)
{
	return true;
}

void f_16de_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_16e3_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_16eb_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_16f2_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_16fc_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_16f2_a1_b(L0);
}

bool f_1705_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_170a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1826_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_18bf_a0_b()) {
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

void f_174f_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_18bf_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1761_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_179b_a1_b(a0)) {
			if (!f_17c0_a1_b(a0)) {
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
		if (!f_17c0_a1_b(a0)) {
			if (!f_179b_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_179b_a1_b(object a0)
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
	return f_180a_a1_b(L4);
}

bool f_17c0_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1890_a0_i() + "m";
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
	return f_180a_a1_b(L4);
}

void f_17eb_a1_v(string a0)
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

void f_17fb_a2_v(string a0, bool a1)
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

bool f_180a_a1_b(string a0)
{
	if (f_18bf_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1819_a0_v(void)
{
	if (f_18bf_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1820_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1826_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1830_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1835_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_1840_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_184c_a2_v(object a0, int a1)
{
	f_16eb_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1840_a2_v(L0, a1);
	}
}

void f_185f_a3_v(object a0, object a1, int a2)
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
		f_1840_a2_v(L0, a2);
	}
}

void f_1872_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_185f_a3_v(a0, L0, a2);
}

bool f_187f_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_188b_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1890_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1899_a1_b(int a0)
{
	return f_1890_a0_i() == a0;
}

string f_189f_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_18a6_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_189f_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_18b7_a0_i(void)
{
	return 515537;
}

int f_18b9_a0_i(void)
{
	return 502862;
}

string f_18bb_a0_s(void)
{
	return "ui/NPC_Julia.png";
}

string f_18bd_a0_s(void)
{
	return "ui/NPC_Julia_b.png";
}

bool f_18bf_a0_b(void)
{
	return true;
}

void f_18c1_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1c71_a0_o();
	L0->AddMark("d1q02JuliaGotoAnna", "pt_map_anna", 0, 508634, f_188b_a0_f());
	f_1be0_a0_v();
	f_1bed_a0_v();
	f_1835_a1_o("quest_d1_02");
}

void f_18db_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_18e1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_18e7_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q01", 5);
	L0 = f_1c71_a0_o();
	L0->AddMark("d1q01JuliaGotoBigVlad", "pt_map_bigvlad", 3, 508633, f_188b_a0_f());
	f_1bd3_a0_v();
}

void f_18fe_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia1", 1);
}

void f_1904_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia2", 1);
}

void f_190a_a2_v(object a0, object a1)
{
	@SetVariable("ood8Julia1", 1);
}

void f_1910_a2_v(object a0, object a1)
{
	@SetVariable("ood9Julia1", 1);
}

void f_1916_a2_v(object a0, object a1)
{
	@SetVariable("d9q02", 1);
	f_1c21_a0_v();
	f_1c3b_a0_v();
	f_1835_a1_o("quest_d9_02");
}

void f_1926_a2_v(object a0, object a1)
{
	f_1c2e_a0_v();
	f_187f_a2_b("quest_d9_02", "completed");
}

void f_1930_a2_v(object a0, object a1)
{
	@Trace("burah_serum is given");
	f_1872_a3_v(a0, "burah_serum", 1);
}

void f_193b_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia3", 1);
}

void f_1941_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia4", 1);
}

void f_1947_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1c71_a0_o();
	L0->AddMark("d1JuliaMapMarkEva", "pt_map_eva", 3, 508639, f_188b_a0_f());
	L0->AddMark("d1JuliaMapMarkLara", "pt_map_lara", 3, 508646, f_188b_a0_f());
}

void f_1960_a2_v(object a0, object a1)
{
	@SetVariable("ood2Julia2", 1);
}

void f_1966_a2_v(object a0, object a1)
{
	@Trace("raincoat_repel is given");
	f_1872_a3_v(a0, "raincoat_repel", 1);
}

void f_1971_a2_v(object a0, object a1)
{
	@SetVariable("d9JuliaVisit", 1);
}

void f_1977_a2_v(object a0, object a1)
{
	f_1c14_a0_v();
}

void f_197c_a2_v(object a0, object a1)
{
	@SetVariable("ood2Julia1", 1);
}

void f_1982_a2_v(object a0, object a1)
{
	f_1c82_a3_v(f_1c71_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_1c71_a0_o());
}

void f_1992_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_1998_a2_v(object a0, object a1)
{
	@SetVariable("KnowJulia", 1);
}

void f_199e_a2_v(object a0, object a1)
{
	f_1c82_a3_v(f_1c71_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_1c71_a0_o());
}

void f_19ae_a2_v(object a0, object a1)
{
	@Trace("money3000 is given");
	f_184c_a2_v(a0, 3000);
}

void f_19b8_a2_v(object a0, object a1)
{
	@SetVariable("ood4Julia1", 1);
}

void f_19be_a2_v(object a0, object a1)
{
	@SetVariable("d4q02JuliaGivesMedcine", 1);
}

void f_19c4_a2_v(object a0, object a1)
{
	if (f_1830_a1_i("d4q02AnnaGivesMedcine") == 1 && f_1830_a1_i("d4q02JuliaGivesMedcine") == 1 && f_1830_a1_i("d4q02LaraGivesMedcine") == 1) {
		object L0;
		@SetVariable("d4q02", 2);
		L0 = f_1c71_a0_o();
		L0->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 511842, f_188b_a0_f());
		f_187f_a2_b("quest_d4_02", "birdmask");
		f_1c82_a3_v(f_1c71_a0_o(), "pt_d4q02_birdmask", 2);
		a1->ShowMap(f_1c71_a0_o());
	}
}

void f_1a08_a2_v(object a0, object a1)
{
	@SetVariable("ood4Julia2", 1);
}

void f_1a0e_a2_v(object a0, object a1)
{
	@SetVariable("ood6Julia1", 1);
}

void f_1a14_a2_v(object a0, object a1)
{
	@SetVariable("ood6Julia2", 1);
}

void f_1a1a_a2_v(object a0, object a1)
{
	f_1bfa_a0_v();
	@Trace("julia blood is given");
	f_1872_a3_v(a0, "d6q01_julia_blood", 1);
}

void f_1a28_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1a2e_a2_v(object a0, object a1)
{
	@SetVariable("d6q01JuliaVolonteer", 1);
	f_1c07_a0_v();
	f_187f_a2_b("quest_d6_01", "completed");
}

void f_1a3c_a2_v(object a0, object a1)
{
	@SetVariable("ood6Julia3", 1);
}

void f_1a42_a2_v(object a0, object a1)
{
	@Trace("feromicin is given");
	f_1872_a3_v(a0, "feromicin", 1);
}

void f_1a4d_a2_v(object a0, object a1)
{
	@Trace("neomicin is given");
	f_1872_a3_v(a0, "neomicin", 1);
}

void f_1a58_a2_v(object a0, object a1)
{
	@Trace("monomicin is given");
	f_1872_a3_v(a0, "monomicin", 1);
}

bool f_1a63_a1_b(object a0)
{
	if (f_1830_a1_i("d1q01") == 4) {
		return true;
	}
	return false;
}

bool f_1a6f_a1_b(object a0)
{
	if (f_1830_a1_i("ood1Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_1a7b_a1_b(object a0)
{
	if (f_1830_a1_i("ood1Julia2") == 0) {
		return true;
	}
	return false;
}

bool f_1a87_a1_b(object a0)
{
	if (f_1830_a1_i("d8q04") == 1000) {
		return true;
	}
	return false;
}

bool f_1a93_a1_b(object a0)
{
	if (f_1830_a1_i("ood8Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_1a9f_a1_b(object a0)
{
	if (f_1830_a1_i("ood9Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_1aab_a1_b(object a0)
{
	if (f_1830_a1_i("d9q02") == 2) {
		return true;
	}
	return false;
}

bool f_1ab7_a1_b(object a0)
{
	if (f_1830_a1_i("ood1Julia3") == 0) {
		return true;
	}
	return false;
}

bool f_1ac3_a1_b(object a0)
{
	if (f_1830_a1_i("ood1Julia4") == 0) {
		return true;
	}
	return false;
}

bool f_1acf_a1_b(object a0)
{
	if (f_1830_a1_i("d2q01") != 0 && f_1830_a1_i("d2q01") != 1000 && f_1830_a1_i("d2q01") != -1) {
		return true;
	}
	return false;
}

bool f_1af1_a1_b(object a0)
{
	if (f_1830_a1_i("ood2Julia2") == 0) {
		return true;
	}
	return false;
}

bool f_1afd_a1_b(object a0)
{
	if (f_1830_a1_i("ood2Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_1b09_a1_b(object a0)
{
	if (f_1830_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_1b15_a1_b(object a0)
{
	if (f_1830_a1_i("d4q02") == 1) {
		return true;
	}
	return false;
}

bool f_1b21_a1_b(object a0)
{
	if (f_1830_a1_i("ood4Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_1b2d_a1_b(object a0)
{
	if (f_1830_a1_i("d4q02JuliaGivesMedcine") == 1) {
		return true;
	}
	return false;
}

bool f_1b39_a1_b(object a0)
{
	if (f_1830_a1_i("d4q02") == 1000) {
		return true;
	}
	return false;
}

bool f_1b45_a1_b(object a0)
{
	if (f_1830_a1_i("ood4Julia2") == 0) {
		return true;
	}
	return false;
}

bool f_1b51_a1_b(object a0)
{
	if (f_1830_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_1b5d_a1_b(object a0)
{
	if (f_1830_a1_i("d5q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1b69_a1_b(object a0)
{
	if (f_1830_a1_i("ood6Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_1b75_a1_b(object a0)
{
	if (f_1830_a1_i("ood6Julia2") == 0) {
		return true;
	}
	return false;
}

bool f_1b81_a1_b(object a0)
{
	if (f_1830_a1_i("microscope_d6q01_julia_blood") != 0) {
		return true;
	}
	return false;
}

bool f_1b8d_a1_b(object a0)
{
	if (f_1830_a1_i("ood6Julia3") == 0) {
		return true;
	}
	return false;
}

bool f_1b99_a1_b(object a0)
{
	if (f_1830_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1ba5_a1_b(object a0)
{
	if (f_1830_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_1bb1_a1_b(object a0)
{
	if (f_1830_a1_i("d1q01") != 0 && f_1830_a1_i("d1q01") != 1000 && f_1830_a1_i("d1q01") != -1) {
		return true;
	}
	return false;
}

void f_1bd3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 49, 1, 512131);
	f_1c55_a2_b(L0, 2);
}

void f_1be0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 7, 2, 503078);
	f_1c55_a2_b(L0, -1);
}

void f_1bed_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 624, 2, 532714);
	f_1c55_a2_b(L0, 7);
}

void f_1bfa_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 161, 1, 515394);
	f_1c55_a2_b(L0, 111);
}

void f_1c07_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 120, 1, 513743);
	f_1c55_a2_b(L0, 111);
}

void f_1c14_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 720, 1, 538784);
	f_1c55_a2_b(L0, 111);
}

void f_1c21_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 655, 2, 533573);
	f_1c55_a2_b(L0, -1);
}

void f_1c2e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 658, 2, 533576);
	f_1c55_a2_b(L0, 655);
}

void f_1c3b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 656, 2, 533574);
	f_1c55_a2_b(L0, 655);
}

object f_1c48_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1c55_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1c48_a0_o();
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

object f_1c71_a0_o(void)
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

void f_1c82_a3_v(object a0, string a1, float a2)
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

int f_1ca3_a0_i(void)
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

void f_1cb4_a1_v(object a0)
{
	if (!g1) {
		t0{a0};
		g1 = true;
	}
	if (f_1899_a1_b(1)) {
		t8{a0};
		return;
	}
	if (f_1899_a1_b(2)) {
		t4{a0};
		return;
	}
	if (f_1899_a1_b(4)) {
		t6{a0};
		return;
	}
	if (f_1899_a1_b(6)) {
		t2{a0};
		return;
	}
	if (f_1899_a1_b(8)) {
		t10{a0};
		return;
	}
	if (f_1899_a1_b(9)) {
		t12{a0};
		return;
	}
	if (f_1899_a1_b(12)) {
		t14{a0};
		return;
	}
	t16{a0};
}

