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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			if (f_21cb_a1_b(tv1)) {
				f_102_a1_v("Strict");
				tv0->SetMessage(524656);
				tv0->ClearReplies();
				tv0->AddReply(526341, 27627, 27626);
				break;
			}
			if (f_21ef_a1_b(tv1) && f_2207_a1_b(tv1)) {
				f_1fa5_a2_v(tv1, tv0);
				f_102_a1_v("Strict");
				tv0->SetMessage(524742);
				tv0->ClearReplies();
				tv0->AddReply(526324, 27607, 27606);
				tv0->AddReply(526540, 27607, 27809);
				break;
			}
			f_102_a1_v("Neutral");
			tv0->SetMessage(524660);
			tv0->ClearReplies();
			if (f_21d7_a1_b(tv1)) {
				tv0->AddReply(524664, 26004, 26003);
			}
			if (f_21e3_a1_b(tv1) && !f_21ef_a1_b(tv1)) {
				tv0->AddReply(524711, 26051, 26050);
			}
			if (f_21fb_a1_b(tv1) && !f_2207_a1_b(tv1)) {
				tv0->AddReply(524745, 27820, 26069);
			}
			if (f_2213_a1_b(tv1)) {
				tv0->AddReply(524768, 27831, 26092);
			}
			tv0->AddReply(524661, -1, 26000);
			tv0->AddReply(541719, -1, 43909);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_102_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a1 == 25998) {
				f_1f3c_a2_v(tv1, tv0);
				f_1f79_a2_v(tv1, tv0);
			}
			if (a1 == 26067) {
				f_1f99_a2_v(tv1, tv0);
			}
			if (a1 == 26005) {
				f_1f53_a2_v(tv1, tv0);
				f_1f89_a2_v(tv1, tv0);
			}
			if (a1 == 26052) {
				f_1f6f_a2_v(tv1, tv0);
				f_2179_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
				f_215c_a2_v(tv1, tv0);
			}
			if (a1 == 26071) {
				f_1f99_a2_v(tv1, tv0);
			}
			if (a1 == 26094) {
				f_1fab_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
			}
			if (a1 == 43919) {
				f_1fab_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
			}
			if (a0 == 25995) {
				if (f_21cb_a1_b(tv1)) {
					f_102_a1_v("Strict");
					tv0->SetMessage(524656);
					tv0->ClearReplies();
					tv0->AddReply(526341, 27627, 27626);
					return;
				}
				if (f_21ef_a1_b(tv1) && f_2207_a1_b(tv1)) {
					f_1fa5_a2_v(tv1, tv0);
					f_102_a1_v("Strict");
					tv0->SetMessage(524742);
					tv0->ClearReplies();
					tv0->AddReply(526324, 27607, 27606);
					tv0->AddReply(526540, 27607, 27809);
					return;
				}
				f_102_a1_v("Neutral");
				tv0->SetMessage(524660);
				tv0->ClearReplies();
				if (f_21d7_a1_b(tv1)) {
					tv0->AddReply(524664, 26004, 26003);
				}
				if (f_21e3_a1_b(tv1) && !f_21ef_a1_b(tv1)) {
					tv0->AddReply(524711, 26051, 26050);
				}
				if (f_21fb_a1_b(tv1) && !f_2207_a1_b(tv1)) {
					tv0->AddReply(524745, 27820, 26069);
				}
				if (f_2213_a1_b(tv1)) {
					tv0->AddReply(524768, 27831, 26092);
				}
				tv0->AddReply(524661, -1, 26000);
				tv0->AddReply(541719, -1, 43909);
				return;
			}
			if (a0 == 27831) {
				f_102_a1_v("Shock");
				tv0->SetMessage(526561);
				tv0->ClearReplies();
				tv0->AddReply(526562, 27833, 27832);
				tv0->AddReply(541720, 27833, 43910);
				return;
			}
			if (a0 == 27833) {
				f_102_a1_v("Grief");
				tv0->SetMessage(526563);
				tv0->ClearReplies();
				tv0->AddReply(526564, 26093, 27834);
				return;
			}
			if (a0 == 26093) {
				f_102_a1_v("Strict");
				tv0->SetMessage(524769);
				tv0->ClearReplies();
				tv0->AddReply(526565, 43913, 27835);
				tv0->AddReply(526567, 27836, 27837);
				return;
			}
			if (a0 == 43913) {
				f_102_a1_v("Shock");
				tv0->SetMessage(541722);
				tv0->ClearReplies();
				tv0->AddReply(541723, 27836, 43914);
				return;
			}
			if (a0 == 27836) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(526566);
				tv0->ClearReplies();
				tv0->AddReply(526568, 27840, 27839);
				return;
			}
			if (a0 == 27840) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(526569);
				tv0->ClearReplies();
				tv0->AddReply(541724, 43916, 43915);
				tv0->AddReply(541726, 43916, 43917);
				return;
			}
			if (a0 == 43916) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(541725);
				tv0->ClearReplies();
				tv0->AddReply(524770, -1, 26094);
				tv0->AddReply(541727, -1, 43919);
				return;
			}
			if (a0 == 27820) {
				f_102_a1_v("Strict");
				tv0->SetMessage(526550);
				tv0->ClearReplies();
				tv0->AddReply(526613, 27887, 27886);
				return;
			}
			if (a0 == 27887) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(526614);
				tv0->ClearReplies();
				tv0->AddReply(526615, 27889, 27888);
				return;
			}
			if (a0 == 27889) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(526616);
				tv0->ClearReplies();
				tv0->AddReply(524747, -1, 26071);
				return;
			}
			if (a0 == 26051) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(524712);
				tv0->ClearReplies();
				tv0->AddReply(526534, 27803, 27802);
				tv0->AddReply(541728, 43921, 43920);
				return;
			}
			if (a0 == 43921) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(541729);
				tv0->ClearReplies();
				tv0->AddReply(541730, 43923, 43922);
				tv0->AddReply(541733, 43927, 43926);
				return;
			}
			if (a0 == 43927) {
				f_102_a1_v("Strict");
				tv0->SetMessage(541734);
				tv0->ClearReplies();
				tv0->AddReply(541735, 27803, 43928);
				return;
			}
			if (a0 == 43923) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(541731);
				tv0->ClearReplies();
				tv0->AddReply(541732, 27803, 43924);
				return;
			}
			if (a0 == 27803) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(526535);
				tv0->ClearReplies();
				tv0->AddReply(524713, -1, 26052);
				return;
			}
			if (a0 == 26004) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(524665);
				tv0->ClearReplies();
				tv0->AddReply(526349, 27635, 27634);
				tv0->AddReply(526347, 27633, 27632);
				return;
			}
			if (a0 == 27633) {
				f_102_a1_v("Grief");
				tv0->SetMessage(526348);
				tv0->ClearReplies();
				tv0->AddReply(526528, 27635, 27794);
				return;
			}
			if (a0 == 27635) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(526350);
				tv0->ClearReplies();
				tv0->AddReply(526526, 27793, 27792);
				return;
			}
			if (a0 == 27793) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(526527);
				tv0->ClearReplies();
				tv0->AddReply(526529, 27797, 27796);
				tv0->AddReply(526531, 27799, 27798);
				return;
			}
			if (a0 == 27799) {
				f_102_a1_v("Strict");
				tv0->SetMessage(526532);
				tv0->ClearReplies();
				tv0->AddReply(526533, 27797, 27800);
				return;
			}
			if (a0 == 27797) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(526530);
				tv0->ClearReplies();
				tv0->AddReply(524666, -1, 26005);
				return;
			}
			if (a0 == 27607) {
				f_102_a1_v("Strict");
				tv0->SetMessage(526325);
				tv0->ClearReplies();
				tv0->AddReply(526326, 27609, 27608);
				tv0->AddReply(526537, 27806, 27805);
				return;
			}
			if (a0 == 27806) {
				f_102_a1_v("Shock");
				tv0->SetMessage(526538);
				tv0->ClearReplies();
				tv0->AddReply(526539, 27609, 27807);
				return;
			}
			if (a0 == 27609) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(526327);
				tv0->ClearReplies();
				tv0->AddReply(526343, 27629, 27628);
				return;
			}
			if (a0 == 27629) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(526344);
				tv0->ClearReplies();
				tv0->AddReply(524743, 27631, 26067);
				tv0->AddReply(524744, -1, 26068);
				return;
			}
			if (a0 == 27631) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(526346);
				tv0->ClearReplies();
				tv0->AddReply(526345, 27883, 27630);
				return;
			}
			if (a0 == 27883) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(526610);
				tv0->ClearReplies();
				tv0->AddReply(526611, 27817, 27884);
				return;
			}
			if (a0 == 27817) {
				f_102_a1_v("Neutral");
				tv0->SetMessage(526547);
				tv0->ClearReplies();
				tv0->AddReply(526548, -1, 27818);
				tv0->AddReply(526549, -1, 27819);
				return;
			}
			if (a0 == 27627) {
				f_102_a1_v("Strict");
				tv0->SetMessage(526342);
				tv0->ClearReplies();
				tv0->AddReply(526328, 27611, 27610);
				tv0->AddReply(526332, 27615, 27614);
				return;
			}
			if (a0 == 27615) {
				f_102_a1_v("Grief");
				tv0->SetMessage(526333);
				tv0->ClearReplies();
				tv0->AddReply(526334, 27611, 27616);
				return;
			}
			if (a0 == 27611) {
				f_102_a1_v("Shock");
				tv0->SetMessage(526329);
				tv0->ClearReplies();
				tv0->AddReply(526330, 27597, 27612);
				tv0->AddReply(526335, 27597, 27618);
				return;
			}
			if (a0 == 27597) {
				f_102_a1_v("Strict");
				tv0->SetMessage(526315);
				tv0->ClearReplies();
				tv0->AddReply(526336, 27621, 27620);
				tv0->AddReply(541703, 27599, 43887);
				return;
			}
			if (a0 == 27621) {
				f_102_a1_v("Strict");
				tv0->SetMessage(526337);
				tv0->ClearReplies();
				tv0->AddReply(526316, 27599, 27598);
				return;
			}
			if (a0 == 27599) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(526317);
				tv0->ClearReplies();
				tv0->AddReply(526318, 27601, 27600);
				return;
			}
			if (a0 == 27601) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(526319);
				tv0->ClearReplies();
				tv0->AddReply(526320, 27603, 27602);
				tv0->AddReply(526340, 27603, 27624);
				return;
			}
			if (a0 == 27603) {
				f_102_a1_v("Strict");
				tv0->SetMessage(526321);
				tv0->ClearReplies();
				tv0->AddReply(526322, 27605, 27604);
				return;
			}
			if (a0 == 27605) {
				f_102_a1_v("Strict");
				tv0->SetMessage(526323);
				tv0->ClearReplies();
				tv0->AddReply(524657, 25997, 25996);
				return;
			}
			if (a0 == 25997) {
				f_102_a1_v("Gratitude");
				tv0->SetMessage(524658);
				tv0->ClearReplies();
				tv0->AddReply(524659, -1, 25998);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			if (f_222b_a1_b(tv1)) {
				f_1fce_a2_v(tv1, tv0);
				f_2156_a2_v(tv1, tv0);
				f_5d2_a1_v("Shock");
				tv0->SetMessage(525226);
				tv0->ClearReplies();
				tv0->AddReply(529130, 30577, 30576);
				tv0->AddReply(539466, 30579, 41389);
				tv0->AddReply(542127, 30579, 44434);
				break;
			}
			f_5d2_a1_v("Neutral");
			tv0->SetMessage(525231);
			tv0->ClearReplies();
			if (f_221f_a1_b(tv1)) {
				tv0->AddReply(525232, 44437, 26600);
			}
			if (f_2237_a1_b(tv1)) {
				tv0->AddReply(525274, 26643, 26642);
			}
			tv0->AddReply(525235, -1, 26603);
			tv0->AddReply(529138, -1, 30584);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_5d2_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a1 == 26597) {
				f_1fb4_a2_v(tv1, tv0);
				f_219d_a2_v(tv1, tv0);
			}
			if (a1 == 26602) {
				f_1fb4_a2_v(tv1, tv0);
				f_219d_a2_v(tv1, tv0);
			}
			if (a1 == 26647) {
				f_1fd4_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
			}
			if (a1 == 41419) {
				f_1fd4_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
			}
			if (a1 == 26645) {
				f_1fe3_a2_v(tv1, tv0);
				f_21c4_a2_v(tv1, tv0);
			}
			if (a1 == 41414) {
				f_1fe3_a2_v(tv1, tv0);
				f_21c4_a2_v(tv1, tv0);
			}
			if (a0 == 26594) {
				if (f_222b_a1_b(tv1)) {
					f_1fce_a2_v(tv1, tv0);
					f_2156_a2_v(tv1, tv0);
					f_5d2_a1_v("Shock");
					tv0->SetMessage(525226);
					tv0->ClearReplies();
					tv0->AddReply(529130, 30577, 30576);
					tv0->AddReply(539466, 30579, 41389);
					tv0->AddReply(542127, 30579, 44434);
					return;
				}
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(525231);
				tv0->ClearReplies();
				if (f_221f_a1_b(tv1)) {
					tv0->AddReply(525232, 44437, 26600);
				}
				if (f_2237_a1_b(tv1)) {
					tv0->AddReply(525274, 26643, 26642);
				}
				tv0->AddReply(525235, -1, 26603);
				tv0->AddReply(529138, -1, 30584);
				return;
			}
			if (a0 == 26643) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(525275);
				tv0->ClearReplies();
				tv0->AddReply(542136, 44448, 44447);
				tv0->AddReply(542138, 44448, 44449);
				tv0->AddReply(542139, 44448, 44450);
				return;
			}
			if (a0 == 44448) {
				f_5d2_a1_v("Gratitude");
				tv0->SetMessage(542137);
				tv0->ClearReplies();
				tv0->AddReply(525276, 26646, 26644);
				tv0->AddReply(529140, 30585, 30586);
				return;
			}
			if (a0 == 30585) {
				f_5d2_a1_v("Strict");
				tv0->SetMessage(529139);
				tv0->ClearReplies();
				tv0->AddReply(539481, 41411, 41410);
				tv0->AddReply(539483, 41411, 41412);
				return;
			}
			if (a0 == 41411) {
				f_5d2_a1_v("Grief");
				tv0->SetMessage(539482);
				tv0->ClearReplies();
				tv0->AddReply(525277, -1, 26645);
				tv0->AddReply(539484, -1, 41414);
				return;
			}
			if (a0 == 26646) {
				f_5d2_a1_v("Grief");
				tv0->SetMessage(525278);
				tv0->ClearReplies();
				tv0->AddReply(539485, 41416, 41415);
				tv0->AddReply(539487, 41416, 41417);
				return;
			}
			if (a0 == 41416) {
				f_5d2_a1_v("Gratitude");
				tv0->SetMessage(539486);
				tv0->ClearReplies();
				tv0->AddReply(525279, -1, 26647);
				tv0->AddReply(539488, -1, 41419);
				return;
			}
			if (a0 == 44437) {
				f_5d2_a1_v("Grief");
				tv0->SetMessage(542128);
				tv0->ClearReplies();
				tv0->AddReply(542129, 44439, 44438);
				tv0->AddReply(542132, 44439, 44441);
				return;
			}
			if (a0 == 44439) {
				f_5d2_a1_v("Grief");
				tv0->SetMessage(542130);
				tv0->ClearReplies();
				tv0->AddReply(542131, 26601, 44440);
				tv0->AddReply(542133, 44443, 44442);
				return;
			}
			if (a0 == 44443) {
				f_5d2_a1_v("Shock");
				tv0->SetMessage(542134);
				tv0->ClearReplies();
				tv0->AddReply(542135, 26601, 44444);
				return;
			}
			if (a0 == 26601) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(525233);
				tv0->ClearReplies();
				tv0->AddReply(525234, -1, 26602);
				return;
			}
			if (a0 == 30577) {
				f_5d2_a1_v("Strict");
				tv0->SetMessage(529131);
				tv0->ClearReplies();
				tv0->AddReply(529132, 30579, 30578);
				tv0->AddReply(539477, 41406, 41405);
				return;
			}
			if (a0 == 41406) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(539478);
				tv0->ClearReplies();
				tv0->AddReply(539479, 30579, 41407);
				return;
			}
			if (a0 == 30579) {
				f_5d2_a1_v("Grief");
				tv0->SetMessage(529133);
				tv0->ClearReplies();
				tv0->AddReply(525227, 26596, 26595);
				tv0->AddReply(539467, 41393, 41392);
				return;
			}
			if (a0 == 41393) {
				f_5d2_a1_v("Shock");
				tv0->SetMessage(539468);
				tv0->ClearReplies();
				tv0->AddReply(539469, 26596, 41394);
				tv0->AddReply(539470, 26596, 41396);
				return;
			}
			if (a0 == 26596) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(525228);
				tv0->ClearReplies();
				tv0->AddReply(539471, 41399, 41398);
				tv0->AddReply(539476, 41399, 41404);
				return;
			}
			if (a0 == 41399) {
				f_5d2_a1_v("Strict");
				tv0->SetMessage(539472);
				tv0->ClearReplies();
				tv0->AddReply(539473, 41401, 41400);
				tv0->AddReply(539475, 41401, 41402);
				return;
			}
			if (a0 == 41401) {
				f_5d2_a1_v("Grief");
				tv0->SetMessage(539474);
				tv0->ClearReplies();
				tv0->AddReply(529134, 30581, 30580);
				tv0->AddReply(539480, -1, 41409);
				return;
			}
			if (a0 == 30581) {
				f_5d2_a1_v("Grief");
				tv0->SetMessage(529135);
				tv0->ClearReplies();
				tv0->AddReply(529136, 30583, 30582);
				return;
			}
			if (a0 == 30583) {
				f_5d2_a1_v("Gratitude");
				tv0->SetMessage(529137);
				tv0->ClearReplies();
				tv0->AddReply(525229, -1, 26597);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			if (f_224f_a1_b(tv1)) {
				f_2006_a2_v(tv1, tv0);
				f_2161_a2_v(tv1, tv0);
				f_8fa_a1_v("Neutral");
				tv0->SetMessage(525397);
				tv0->ClearReplies();
				tv0->AddReply(542415, 44794, 44793);
				tv0->AddReply(542421, 44794, 44799);
				break;
			}
			f_8fa_a1_v("Grief");
			tv0->SetMessage(525400);
			tv0->ClearReplies();
			if (f_2243_a1_b(tv1)) {
				tv0->AddReply(525401, 26771, 26769);
			}
			if (f_225b_a1_b(tv1)) {
				tv0->AddReply(525435, 26804, 26803);
			}
			tv0->AddReply(525402, -1, 26770);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_8fa_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a1 == 26766) {
				f_1fec_a2_v(tv1, tv0);
				f_218d_a2_v(tv1, tv0);
			}
			if (a1 == 26772) {
				f_1fec_a2_v(tv1, tv0);
			}
			if (a1 == 26808) {
				f_200c_a2_v(tv1, tv0);
				f_2136_a2_v(tv1, tv0);
				f_2140_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
			}
			if (a1 == 26813) {
				f_201b_a2_v(tv1, tv0);
				f_21c4_a2_v(tv1, tv0);
			}
			if (a0 == 26765) {
				if (f_224f_a1_b(tv1)) {
					f_2006_a2_v(tv1, tv0);
					f_2161_a2_v(tv1, tv0);
					f_8fa_a1_v("Neutral");
					tv0->SetMessage(525397);
					tv0->ClearReplies();
					tv0->AddReply(542415, 44794, 44793);
					tv0->AddReply(542421, 44794, 44799);
					return;
				}
				f_8fa_a1_v("Grief");
				tv0->SetMessage(525400);
				tv0->ClearReplies();
				if (f_2243_a1_b(tv1)) {
					tv0->AddReply(525401, 26771, 26769);
				}
				if (f_225b_a1_b(tv1)) {
					tv0->AddReply(525435, 26804, 26803);
				}
				tv0->AddReply(525402, -1, 26770);
				return;
			}
			if (a0 == 26804) {
				f_8fa_a1_v("Gratitude");
				tv0->SetMessage(525436);
				tv0->ClearReplies();
				tv0->AddReply(525437, 26807, 26805);
				tv0->AddReply(525438, 30783, 26806);
				return;
			}
			if (a0 == 30783) {
				f_8fa_a1_v("Strict");
				tv0->SetMessage(529328);
				tv0->ClearReplies();
				tv0->AddReply(529329, 30785, 30784);
				return;
			}
			if (a0 == 30785) {
				f_8fa_a1_v("Shock");
				tv0->SetMessage(529330);
				tv0->ClearReplies();
				tv0->AddReply(529331, 26812, 30786);
				return;
			}
			if (a0 == 26812) {
				f_8fa_a1_v("Strict");
				tv0->SetMessage(525444);
				tv0->ClearReplies();
				tv0->AddReply(525445, -1, 26813);
				return;
			}
			if (a0 == 26807) {
				f_8fa_a1_v("Neutral");
				tv0->SetMessage(525439);
				tv0->ClearReplies();
				tv0->AddReply(525440, -1, 26808);
				return;
			}
			if (a0 == 26771) {
				f_8fa_a1_v("Grief");
				tv0->SetMessage(525403);
				tv0->ClearReplies();
				tv0->AddReply(525404, -1, 26772);
				return;
			}
			if (a0 == 44794) {
				f_8fa_a1_v("Shock");
				tv0->SetMessage(542416);
				tv0->ClearReplies();
				tv0->AddReply(542417, 44796, 44795);
				tv0->AddReply(542422, 44796, 44801);
				return;
			}
			if (a0 == 44796) {
				f_8fa_a1_v("Shock");
				tv0->SetMessage(542418);
				tv0->ClearReplies();
				tv0->AddReply(542419, 44803, 44797);
				return;
			}
			if (a0 == 44803) {
				f_8fa_a1_v("Strict");
				tv0->SetMessage(542423);
				tv0->ClearReplies();
				tv0->AddReply(542424, 44805, 44804);
				tv0->AddReply(542427, 44805, 44807);
				return;
			}
			if (a0 == 44805) {
				f_8fa_a1_v("Gratitude");
				tv0->SetMessage(542425);
				tv0->ClearReplies();
				tv0->AddReply(542426, 44809, 44806);
				tv0->AddReply(542430, 44809, 44811);
				return;
			}
			if (a0 == 44809) {
				f_8fa_a1_v("Shock");
				tv0->SetMessage(542428);
				tv0->ClearReplies();
				tv0->AddReply(542429, 44798, 44810);
				tv0->AddReply(542431, 44798, 44813);
				return;
			}
			if (a0 == 44798) {
				f_8fa_a1_v("Strict");
				tv0->SetMessage(542420);
				tv0->ClearReplies();
				tv0->AddReply(529321, 30776, 30775);
				tv0->AddReply(529327, 30776, 30781);
				return;
			}
			if (a0 == 30776) {
				f_8fa_a1_v("Neutral");
				tv0->SetMessage(529322);
				tv0->ClearReplies();
				tv0->AddReply(529323, 30778, 30777);
				tv0->AddReply(542432, 30780, 44815);
				return;
			}
			if (a0 == 30778) {
				f_8fa_a1_v("Shock");
				tv0->SetMessage(529324);
				tv0->ClearReplies();
				tv0->AddReply(529325, 30780, 30779);
				return;
			}
			if (a0 == 30780) {
				f_8fa_a1_v("Strict");
				tv0->SetMessage(529326);
				tv0->ClearReplies();
				tv0->AddReply(525398, -1, 26766);
				tv0->AddReply(525399, -1, 26767);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			f_b66_a1_v("Neutral");
			tv0->SetMessage(525459);
			tv0->ClearReplies();
			tv0->AddReply(525460, 27525, 26816);
			tv0->AddReply(526255, 27525, 27528);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_b66_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a0 == 26815) {
				f_b66_a1_v("Neutral");
				tv0->SetMessage(525459);
				tv0->ClearReplies();
				tv0->AddReply(525460, 27525, 26816);
				tv0->AddReply(526255, 27525, 27528);
				return;
			}
			if (a0 == 27525) {
				f_b66_a1_v("Neutral");
				tv0->SetMessage(526252);
				tv0->ClearReplies();
				tv0->AddReply(526253, -1, 27526);
				tv0->AddReply(526254, -1, 27527);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			if (f_2273_a1_b(tv1)) {
				f_203e_a2_v(tv1, tv0);
				f_2167_a2_v(tv1, tv0);
				f_caf_a1_v("Neutral");
				tv0->SetMessage(525672);
				tv0->ClearReplies();
				tv0->AddReply(542240, 44577, 44576);
				tv0->AddReply(542244, 44579, 44580);
				break;
			}
			f_caf_a1_v("Gratitude");
			tv0->SetMessage(525675);
			tv0->ClearReplies();
			if (f_2267_a1_b(tv1)) {
				tv0->AddReply(525676, 27000, 26999);
			}
			if (f_228b_a1_b(tv1) && f_227f_a1_b(tv1)) {
				tv0->AddReply(525706, 44608, 27028);
			}
			if (f_2296_a1_b(tv1)) {
				tv0->AddReply(525717, 27040, 27039);
			}
			if (f_22a2_a1_b(tv1)) {
				tv0->AddReply(525801, 30716, 27107);
			}
			if (f_22ae_a1_b(tv1) && f_233e_a1_b(tv1)) {
				tv0->AddReply(525816, 44664, 27122);
			}
			tv0->AddReply(525679, -1, 27002);
			tv0->AddReply(542265, -1, 44607);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_caf_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a1 == 44605) {
				f_2024_a2_v(tv1, tv0);
			}
			if (a1 == 26996) {
				f_2024_a2_v(tv1, tv0);
				f_21ad_a2_v(tv1, tv0);
			}
			if (a1 == 27001) {
				f_2024_a2_v(tv1, tv0);
			}
			if (a1 == 27030) {
				f_2054_a2_v(tv1, tv0);
			}
			if (a1 == 27043) {
				f_2044_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
			}
			if (a1 == 27046) {
				f_2061_a2_v(tv1, tv0);
				f_21c4_a2_v(tv1, tv0);
			}
			if (a1 == 44652) {
				f_2044_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
			}
			if (a1 == 27111) {
				f_206b_a2_v(tv1, tv0);
				f_2146_a2_v(tv1, tv0);
			}
			if (a1 == 27112) {
				f_206b_a2_v(tv1, tv0);
				f_2146_a2_v(tv1, tv0);
			}
			if (a1 == 27122) {
				f_2130_a2_v(tv1, tv0);
			}
			if (a1 == 27124) {
				f_21bd_a2_v(tv1, tv0);
				f_2136_a2_v(tv1, tv0);
				f_2140_a2_v(tv1, tv0);
				f_2087_a2_v(tv1, tv0);
			}
			if (a0 == 26995) {
				if (f_2273_a1_b(tv1)) {
					f_203e_a2_v(tv1, tv0);
					f_2167_a2_v(tv1, tv0);
					f_caf_a1_v("Neutral");
					tv0->SetMessage(525672);
					tv0->ClearReplies();
					tv0->AddReply(542240, 44577, 44576);
					tv0->AddReply(542244, 44579, 44580);
					return;
				}
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(525675);
				tv0->ClearReplies();
				if (f_2267_a1_b(tv1)) {
					tv0->AddReply(525676, 27000, 26999);
				}
				if (f_228b_a1_b(tv1) && f_227f_a1_b(tv1)) {
					tv0->AddReply(525706, 44608, 27028);
				}
				if (f_2296_a1_b(tv1)) {
					tv0->AddReply(525717, 27040, 27039);
				}
				if (f_22a2_a1_b(tv1)) {
					tv0->AddReply(525801, 30716, 27107);
				}
				if (f_22ae_a1_b(tv1) && f_233e_a1_b(tv1)) {
					tv0->AddReply(525816, 44664, 27122);
				}
				tv0->AddReply(525679, -1, 27002);
				tv0->AddReply(542265, -1, 44607);
				return;
			}
			if (a0 == 44664) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(542309);
				tv0->ClearReplies();
				tv0->AddReply(542310, 27123, 44665);
				tv0->AddReply(542311, 27123, 44666);
				return;
			}
			if (a0 == 27123) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(525817);
				tv0->ClearReplies();
				tv0->AddReply(525818, -1, 27124);
				return;
			}
			if (a0 == 30716) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(529261);
				tv0->ClearReplies();
				tv0->AddReply(529262, 44668, 30717);
				return;
			}
			if (a0 == 44668) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(542312);
				tv0->ClearReplies();
				tv0->AddReply(542313, 27108, 44669);
				tv0->AddReply(542314, 44671, 44670);
				return;
			}
			if (a0 == 44671) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(542315);
				tv0->ClearReplies();
				tv0->AddReply(542316, 44673, 44672);
				return;
			}
			if (a0 == 44673) {
				f_caf_a1_v("Strict");
				tv0->SetMessage(542317);
				tv0->ClearReplies();
				tv0->AddReply(542318, 27108, 44674);
				return;
			}
			if (a0 == 27108) {
				f_caf_a1_v("Grief");
				tv0->SetMessage(525802);
				tv0->ClearReplies();
				tv0->AddReply(525803, 27110, 27109);
				tv0->AddReply(529263, 30719, 30718);
				return;
			}
			if (a0 == 30719) {
				f_caf_a1_v("Strict");
				tv0->SetMessage(529264);
				tv0->ClearReplies();
				tv0->AddReply(529267, 30721, 30722);
				tv0->AddReply(542319, 30721, 44675);
				tv0->AddReply(542322, 44678, 44679);
				return;
			}
			if (a0 == 27110) {
				f_caf_a1_v("Grief");
				tv0->SetMessage(525804);
				tv0->ClearReplies();
				tv0->AddReply(529265, 30721, 30720);
				tv0->AddReply(542320, 44678, 44677);
				return;
			}
			if (a0 == 44678) {
				f_caf_a1_v("Strict");
				tv0->SetMessage(542321);
				tv0->ClearReplies();
				tv0->AddReply(542323, 30721, 44681);
				return;
			}
			if (a0 == 30721) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(529266);
				tv0->ClearReplies();
				tv0->AddReply(525805, -1, 27111);
				tv0->AddReply(525806, -1, 27112);
				return;
			}
			if (a0 == 27040) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(525718);
				tv0->ClearReplies();
				tv0->AddReply(542296, 44653, 44649);
				tv0->AddReply(542297, 44651, 44650);
				return;
			}
			if (a0 == 44651) {
				f_caf_a1_v("Shock");
				tv0->SetMessage(542298);
				tv0->ClearReplies();
				tv0->AddReply(542299, -1, 44652);
				return;
			}
			if (a0 == 44653) {
				f_caf_a1_v("Grief");
				tv0->SetMessage(542300);
				tv0->ClearReplies();
				tv0->AddReply(542301, 44655, 44654);
				tv0->AddReply(542303, 44655, 44656);
				return;
			}
			if (a0 == 44655) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(542302);
				tv0->ClearReplies();
				tv0->AddReply(542304, 44659, 44657);
				tv0->AddReply(542305, 44661, 44658);
				return;
			}
			if (a0 == 44659) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(542306);
				tv0->ClearReplies();
				tv0->AddReply(542307, 44661, 44660);
				return;
			}
			if (a0 == 44661) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(542308);
				tv0->ClearReplies();
				tv0->AddReply(525719, 27042, 27041);
				tv0->AddReply(525722, 27045, 27044);
				return;
			}
			if (a0 == 27045) {
				f_caf_a1_v("Strict");
				tv0->SetMessage(525723);
				tv0->ClearReplies();
				tv0->AddReply(525724, -1, 27046);
				return;
			}
			if (a0 == 27042) {
				f_caf_a1_v("Grief");
				tv0->SetMessage(525720);
				tv0->ClearReplies();
				tv0->AddReply(525721, -1, 27043);
				return;
			}
			if (a0 == 44608) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(542266);
				tv0->ClearReplies();
				tv0->AddReply(542267, 44611, 44609);
				tv0->AddReply(542268, 44612, 44610);
				return;
			}
			if (a0 == 44612) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(542270);
				tv0->ClearReplies();
				tv0->AddReply(542271, 44615, 44613);
				tv0->AddReply(542272, 44615, 44614);
				return;
			}
			if (a0 == 44611) {
				f_caf_a1_v("Shock");
				tv0->SetMessage(542269);
				tv0->ClearReplies();
				tv0->AddReply(542288, 44638, 44637);
				return;
			}
			if (a0 == 44638) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(542289);
				tv0->ClearReplies();
				tv0->AddReply(542290, 44615, 44639);
				tv0->AddReply(542291, 44615, 44640);
				return;
			}
			if (a0 == 44615) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(542273);
				tv0->ClearReplies();
				tv0->AddReply(542274, 27029, 44617);
				return;
			}
			if (a0 == 27029) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(525707);
				tv0->ClearReplies();
				tv0->AddReply(542275, 44619, 44618);
				tv0->AddReply(542277, 44619, 44620);
				return;
			}
			if (a0 == 44619) {
				f_caf_a1_v("Shock");
				tv0->SetMessage(542276);
				tv0->ClearReplies();
				tv0->AddReply(529257, 30713, 30712);
				tv0->AddReply(542278, 30713, 44622);
				return;
			}
			if (a0 == 30713) {
				f_caf_a1_v("Shock");
				tv0->SetMessage(529258);
				tv0->ClearReplies();
				tv0->AddReply(529259, 30715, 30714);
				tv0->AddReply(542292, 30715, 44643);
				return;
			}
			if (a0 == 30715) {
				f_caf_a1_v("Strict");
				tv0->SetMessage(529260);
				tv0->ClearReplies();
				tv0->AddReply(525708, -1, 27030);
				return;
			}
			if (a0 == 27000) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(525677);
				tv0->ClearReplies();
				tv0->AddReply(525678, -1, 27001);
				return;
			}
			if (a0 == 44577) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(542241);
				tv0->ClearReplies();
				tv0->AddReply(542242, 44579, 44578);
				tv0->AddReply(542245, 44579, 44581);
				return;
			}
			if (a0 == 44579) {
				f_caf_a1_v("Grief");
				tv0->SetMessage(542243);
				tv0->ClearReplies();
				tv0->AddReply(529248, 44575, 30702);
				tv0->AddReply(529254, 30703, 30708);
				return;
			}
			if (a0 == 44575) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(542239);
				tv0->ClearReplies();
				tv0->AddReply(542246, 44585, 44584);
				tv0->AddReply(542250, 30703, 44588);
				return;
			}
			if (a0 == 44585) {
				f_caf_a1_v("Gratitude");
				tv0->SetMessage(542247);
				tv0->ClearReplies();
				tv0->AddReply(542248, 30703, 44586);
				tv0->AddReply(542249, 30703, 44587);
				return;
			}
			if (a0 == 30703) {
				f_caf_a1_v("Shock");
				tv0->SetMessage(529249);
				tv0->ClearReplies();
				tv0->AddReply(529250, 30705, 30704);
				tv0->AddReply(542251, 44592, 44591);
				return;
			}
			if (a0 == 44592) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(542252);
				tv0->ClearReplies();
				tv0->AddReply(542253, 30705, 44593);
				return;
			}
			if (a0 == 30705) {
				f_caf_a1_v("Shock");
				tv0->SetMessage(529251);
				tv0->ClearReplies();
				tv0->AddReply(529252, 30707, 30706);
				tv0->AddReply(542254, 44596, 44595);
				return;
			}
			if (a0 == 44596) {
				f_caf_a1_v("Grief");
				tv0->SetMessage(542255);
				tv0->ClearReplies();
				tv0->AddReply(542256, 30707, 44597);
				return;
			}
			if (a0 == 30707) {
				f_caf_a1_v("Strict");
				tv0->SetMessage(529253);
				tv0->ClearReplies();
				tv0->AddReply(542282, 44628, 44627);
				tv0->AddReply(529255, 30711, 30710);
				tv0->AddReply(525674, 30711, 26997);
				return;
			}
			if (a0 == 30711) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(529256);
				tv0->ClearReplies();
				tv0->AddReply(542257, 44628, 44599);
				return;
			}
			if (a0 == 44628) {
				f_caf_a1_v("Shock");
				tv0->SetMessage(542283);
				tv0->ClearReplies();
				tv0->AddReply(542284, 44630, 44629);
				tv0->AddReply(542287, 44630, 44634);
				return;
			}
			if (a0 == 44630) {
				f_caf_a1_v("Neutral");
				tv0->SetMessage(542285);
				tv0->ClearReplies();
				tv0->AddReply(542261, 44604, 44603);
				tv0->AddReply(525673, -1, 26996);
				return;
			}
			if (a0 == 44604) {
				f_caf_a1_v("Strict");
				tv0->SetMessage(542262);
				tv0->ClearReplies();
				tv0->AddReply(542263, -1, 44605);
				tv0->AddReply(542264, -1, 44606);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			if (f_22c6_a1_b(tv1)) {
				f_20ab_a2_v(tv1, tv0);
				f_216d_a2_v(tv1, tv0);
				f_121d_a1_v("Strict");
				tv0->SetMessage(525830);
				tv0->ClearReplies();
				tv0->AddReply(529038, 30480, 30479);
				break;
			}
			f_121d_a1_v("Neutral");
			tv0->SetMessage(525835);
			tv0->ClearReplies();
			if (f_22ba_a1_b(tv1)) {
				tv0->AddReply(525836, 27136, 27135);
			}
			if (f_22d2_a1_b(tv1)) {
				tv0->AddReply(525880, 30489, 27179);
			}
			if (f_22de_a1_b(tv1)) {
				tv0->AddReply(525913, 30495, 27205);
			}
			tv0->AddReply(525839, -1, 27138);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_121d_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a1 == 27132) {
				f_2091_a2_v(tv1, tv0);
				f_219d_a2_v(tv1, tv0);
			}
			if (a1 == 27137) {
				f_2091_a2_v(tv1, tv0);
				f_219d_a2_v(tv1, tv0);
			}
			if (a1 == 27181) {
				f_20b1_a2_v(tv1, tv0);
				f_21bd_a2_v(tv1, tv0);
			}
			if (a1 == 27209) {
				f_20ba_a2_v(tv1, tv0);
			}
			if (a0 == 27129) {
				if (f_22c6_a1_b(tv1)) {
					f_20ab_a2_v(tv1, tv0);
					f_216d_a2_v(tv1, tv0);
					f_121d_a1_v("Strict");
					tv0->SetMessage(525830);
					tv0->ClearReplies();
					tv0->AddReply(529038, 30480, 30479);
					return;
				}
				f_121d_a1_v("Neutral");
				tv0->SetMessage(525835);
				tv0->ClearReplies();
				if (f_22ba_a1_b(tv1)) {
					tv0->AddReply(525836, 27136, 27135);
				}
				if (f_22d2_a1_b(tv1)) {
					tv0->AddReply(525880, 30489, 27179);
				}
				if (f_22de_a1_b(tv1)) {
					tv0->AddReply(525913, 30495, 27205);
				}
				tv0->AddReply(525839, -1, 27138);
				return;
			}
			if (a0 == 30495) {
				f_121d_a1_v("Gratitude");
				tv0->SetMessage(529053);
				tv0->ClearReplies();
				tv0->AddReply(529054, 30497, 30496);
				return;
			}
			if (a0 == 30497) {
				f_121d_a1_v("Gratitude");
				tv0->SetMessage(529055);
				tv0->ClearReplies();
				tv0->AddReply(529056, 27206, 30498);
				return;
			}
			if (a0 == 27206) {
				f_121d_a1_v("Grief");
				tv0->SetMessage(525914);
				tv0->ClearReplies();
				tv0->AddReply(525915, 27208, 27207);
				return;
			}
			if (a0 == 27208) {
				f_121d_a1_v("Strict");
				tv0->SetMessage(525916);
				tv0->ClearReplies();
				tv0->AddReply(525917, -1, 27209);
				return;
			}
			if (a0 == 30489) {
				f_121d_a1_v("Neutral");
				tv0->SetMessage(529048);
				tv0->ClearReplies();
				tv0->AddReply(529049, 27180, 30490);
				tv0->AddReply(529050, 27180, 30491);
				return;
			}
			if (a0 == 27180) {
				f_121d_a1_v("Grief");
				tv0->SetMessage(525881);
				tv0->ClearReplies();
				tv0->AddReply(529051, 30494, 30493);
				return;
			}
			if (a0 == 30494) {
				f_121d_a1_v("Strict");
				tv0->SetMessage(529052);
				tv0->ClearReplies();
				tv0->AddReply(525882, -1, 27181);
				return;
			}
			if (a0 == 27136) {
				f_121d_a1_v("Gratitude");
				tv0->SetMessage(525837);
				tv0->ClearReplies();
				tv0->AddReply(525838, -1, 27137);
				return;
			}
			if (a0 == 30480) {
				f_121d_a1_v("Neutral");
				tv0->SetMessage(529039);
				tv0->ClearReplies();
				tv0->AddReply(529040, 30482, 30481);
				return;
			}
			if (a0 == 30482) {
				f_121d_a1_v("Neutral");
				tv0->SetMessage(529041);
				tv0->ClearReplies();
				tv0->AddReply(529042, 30484, 30483);
				return;
			}
			if (a0 == 30484) {
				f_121d_a1_v("Gratitude");
				tv0->SetMessage(529043);
				tv0->ClearReplies();
				tv0->AddReply(529044, 30486, 30485);
				return;
			}
			if (a0 == 30486) {
				f_121d_a1_v("Gratitude");
				tv0->SetMessage(529045);
				tv0->ClearReplies();
				tv0->AddReply(525831, 27131, 27130);
				return;
			}
			if (a0 == 27131) {
				f_121d_a1_v("Neutral");
				tv0->SetMessage(525832);
				tv0->ClearReplies();
				tv0->AddReply(525833, -1, 27132);
				tv0->AddReply(525834, 30487, 27133);
				return;
			}
			if (a0 == 30487) {
				f_121d_a1_v("Gratitude");
				tv0->SetMessage(529046);
				tv0->ClearReplies();
				tv0->AddReply(529047, -1, 30488);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			if (f_22ea_a1_b(tv1)) {
				f_20c8_a2_v(tv1, tv0);
				f_2173_a2_v(tv1, tv0);
				f_14ae_a1_v("Strict");
				tv0->SetMessage(526028);
				tv0->ClearReplies();
				tv0->AddReply(528888, 30316, 30315);
				break;
			}
			if (f_22f6_a1_b(tv1) && f_2302_a1_b(tv1)) {
				f_20df_a2_v(tv1, tv0);
				f_14ae_a1_v("Grief");
				tv0->SetMessage(526064);
				tv0->ClearReplies();
				tv0->AddReply(526067, 30327, 27352);
				break;
			}
			if (!f_2302_a1_b(tv1)) {
				f_14ae_a1_v("Neutral");
				tv0->SetMessage(526034);
				tv0->ClearReplies();
				tv0->AddReply(526035, -1, 27320);
				tv0->AddReply(528905, -1, 30334);
				break;
			}
			f_14ae_a1_v("Grief");
			tv0->SetMessage(526065);
			tv0->ClearReplies();
			tv0->AddReply(526066, -1, 27351);
			tv0->AddReply(528906, -1, 30335);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_14ae_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a1 == 27318) {
				f_20ce_a2_v(tv1, tv0);
			}
			if (a0 == 27313) {
				if (f_22ea_a1_b(tv1)) {
					f_20c8_a2_v(tv1, tv0);
					f_2173_a2_v(tv1, tv0);
					f_14ae_a1_v("Strict");
					tv0->SetMessage(526028);
					tv0->ClearReplies();
					tv0->AddReply(528888, 30316, 30315);
					return;
				}
				if (f_22f6_a1_b(tv1) && f_2302_a1_b(tv1)) {
					f_20df_a2_v(tv1, tv0);
					f_14ae_a1_v("Grief");
					tv0->SetMessage(526064);
					tv0->ClearReplies();
					tv0->AddReply(526067, 30327, 27352);
					return;
				}
				if (!f_2302_a1_b(tv1)) {
					f_14ae_a1_v("Neutral");
					tv0->SetMessage(526034);
					tv0->ClearReplies();
					tv0->AddReply(526035, -1, 27320);
					tv0->AddReply(528905, -1, 30334);
					return;
				}
				f_14ae_a1_v("Grief");
				tv0->SetMessage(526065);
				tv0->ClearReplies();
				tv0->AddReply(526066, -1, 27351);
				tv0->AddReply(528906, -1, 30335);
				return;
			}
			if (a0 == 30327) {
				f_14ae_a1_v("Strict");
				tv0->SetMessage(528899);
				tv0->ClearReplies();
				tv0->AddReply(528900, 30329, 30328);
				tv0->AddReply(528902, 30329, 30330);
				return;
			}
			if (a0 == 30329) {
				f_14ae_a1_v("Shock");
				tv0->SetMessage(528901);
				tv0->ClearReplies();
				tv0->AddReply(528904, -1, 30333);
				tv0->AddReply(528903, -1, 30332);
				return;
			}
			if (a0 == 30316) {
				f_14ae_a1_v("Strict");
				tv0->SetMessage(528889);
				tv0->ClearReplies();
				tv0->AddReply(528890, 30318, 30317);
				return;
			}
			if (a0 == 30318) {
				f_14ae_a1_v("Shock");
				tv0->SetMessage(528891);
				tv0->ClearReplies();
				tv0->AddReply(528892, 30320, 30319);
				return;
			}
			if (a0 == 30320) {
				f_14ae_a1_v("Shock");
				tv0->SetMessage(528893);
				tv0->ClearReplies();
				tv0->AddReply(526029, 27315, 27314);
				return;
			}
			if (a0 == 27315) {
				f_14ae_a1_v("Grief");
				tv0->SetMessage(526030);
				tv0->ClearReplies();
				tv0->AddReply(526031, 27317, 27316);
				tv0->AddReply(528894, 30322, 30321);
				return;
			}
			if (a0 == 30322) {
				f_14ae_a1_v("Grief");
				tv0->SetMessage(528895);
				tv0->ClearReplies();
				tv0->AddReply(528896, 30324, 30323);
				return;
			}
			if (a0 == 30324) {
				f_14ae_a1_v("Neutral");
				tv0->SetMessage(528897);
				tv0->ClearReplies();
				tv0->AddReply(528898, 27317, 30325);
				return;
			}
			if (a0 == 27317) {
				f_14ae_a1_v("Gratitude");
				tv0->SetMessage(526032);
				tv0->ClearReplies();
				tv0->AddReply(526033, -1, 27318);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			f_169b_a1_v("Grief");
			tv0->SetMessage(526152);
			tv0->ClearReplies();
			if (f_230e_a1_b(tv1)) {
				tv0->AddReply(526153, 29639, 27432);
			}
			if (f_231a_a1_b(tv1)) {
				tv0->AddReply(526182, 29651, 27463);
			}
			tv0->AddReply(526158, -1, 27437);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_169b_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a1 == 27436) {
				f_20e5_a2_v(tv1, tv0);
			}
			if (a1 == 27465) {
				f_20ee_a2_v(tv1, tv0);
			}
			if (a0 == 27431) {
				f_169b_a1_v("Grief");
				tv0->SetMessage(526152);
				tv0->ClearReplies();
				if (f_230e_a1_b(tv1)) {
					tv0->AddReply(526153, 29639, 27432);
				}
				if (f_231a_a1_b(tv1)) {
					tv0->AddReply(526182, 29651, 27463);
				}
				tv0->AddReply(526158, -1, 27437);
				return;
			}
			if (a0 == 29651) {
				f_169b_a1_v("Gratitude");
				tv0->SetMessage(528286);
				tv0->ClearReplies();
				tv0->AddReply(528287, 29653, 29652);
				tv0->AddReply(528623, 30028, 30026);
				return;
			}
			if (a0 == 30028) {
				f_169b_a1_v("Strict");
				tv0->SetMessage(528625);
				tv0->ClearReplies();
				tv0->AddReply(528705, 27464, 30122);
				tv0->AddReply(528626, 30030, 30029);
				return;
			}
			if (a0 == 29653) {
				f_169b_a1_v("Shock");
				tv0->SetMessage(528288);
				tv0->ClearReplies();
				tv0->AddReply(528289, 27464, 29654);
				return;
			}
			if (a0 == 27464) {
				f_169b_a1_v("Shock");
				tv0->SetMessage(526183);
				tv0->ClearReplies();
				tv0->AddReply(528706, 30125, 30124);
				return;
			}
			if (a0 == 30125) {
				f_169b_a1_v("Shock");
				tv0->SetMessage(528707);
				tv0->ClearReplies();
				tv0->AddReply(528624, 30030, 30027);
				tv0->AddReply(528708, 30030, 30126);
				return;
			}
			if (a0 == 30030) {
				f_169b_a1_v("Grief");
				tv0->SetMessage(528627);
				tv0->ClearReplies();
				tv0->AddReply(528628, 30033, 30032);
				return;
			}
			if (a0 == 30033) {
				f_169b_a1_v("Grief");
				tv0->SetMessage(528629);
				tv0->ClearReplies();
				tv0->AddReply(528631, 30036, 30035);
				tv0->AddReply(528630, 30036, 30034);
				return;
			}
			if (a0 == 30036) {
				f_169b_a1_v("Neutral");
				tv0->SetMessage(528632);
				tv0->ClearReplies();
				tv0->AddReply(528633, 30038, 30037);
				tv0->AddReply(528635, 30038, 30039);
				return;
			}
			if (a0 == 30038) {
				f_169b_a1_v("Neutral");
				tv0->SetMessage(528634);
				tv0->ClearReplies();
				tv0->AddReply(526184, -1, 27465);
				return;
			}
			if (a0 == 29639) {
				f_169b_a1_v("Grief");
				tv0->SetMessage(528275);
				tv0->ClearReplies();
				tv0->AddReply(528276, 27433, 29640);
				return;
			}
			if (a0 == 27433) {
				f_169b_a1_v("Neutral");
				tv0->SetMessage(526154);
				tv0->ClearReplies();
				tv0->AddReply(528277, 29642, 29641);
				return;
			}
			if (a0 == 29642) {
				f_169b_a1_v("Strict");
				tv0->SetMessage(528278);
				tv0->ClearReplies();
				tv0->AddReply(528279, 29644, 29643);
				tv0->AddReply(528283, 29646, 29647);
				return;
			}
			if (a0 == 29644) {
				f_169b_a1_v("Neutral");
				tv0->SetMessage(528280);
				tv0->ClearReplies();
				tv0->AddReply(528281, 29646, 29645);
				return;
			}
			if (a0 == 29646) {
				f_169b_a1_v("Neutral");
				tv0->SetMessage(528282);
				tv0->ClearReplies();
				tv0->AddReply(528284, 29650, 29649);
				return;
			}
			if (a0 == 29650) {
				f_169b_a1_v("Shock");
				tv0->SetMessage(528285);
				tv0->ClearReplies();
				tv0->AddReply(526155, 27435, 27434);
				return;
			}
			if (a0 == 27435) {
				f_169b_a1_v("Neutral");
				tv0->SetMessage(526156);
				tv0->ClearReplies();
				tv0->AddReply(526157, -1, 27436);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			f_18d6_a1_v("Neutral");
			tv0->SetMessage(527664);
			tv0->ClearReplies();
			if (f_2332_a1_b(tv1) && f_2326_a1_b(tv1)) {
				tv0->AddReply(527666, 29014, 29013);
			}
			tv0->AddReply(527665, -1, 29012);
			tv0->AddReply(527682, -1, 29030);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_18d6_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a1 == 29013) {
				f_212a_a2_v(tv1, tv0);
			}
			if (a1 == 29025) {
				f_20f7_a2_v(tv1, tv0);
			}
			if (a0 == 29011) {
				f_18d6_a1_v("Neutral");
				tv0->SetMessage(527664);
				tv0->ClearReplies();
				if (f_2332_a1_b(tv1) && f_2326_a1_b(tv1)) {
					tv0->AddReply(527666, 29014, 29013);
				}
				tv0->AddReply(527665, -1, 29012);
				tv0->AddReply(527682, -1, 29030);
				return;
			}
			if (a0 == 29014) {
				f_18d6_a1_v("Grief");
				tv0->SetMessage(527667);
				tv0->ClearReplies();
				tv0->AddReply(527683, 29032, 29031);
				return;
			}
			if (a0 == 29032) {
				f_18d6_a1_v("Grief");
				tv0->SetMessage(527684);
				tv0->ClearReplies();
				tv0->AddReply(527685, 29035, 29033);
				tv0->AddReply(527686, 29035, 29034);
				return;
			}
			if (a0 == 29035) {
				f_18d6_a1_v("Shock");
				tv0->SetMessage(527687);
				tv0->ClearReplies();
				tv0->AddReply(527688, 29038, 29037);
				tv0->AddReply(527690, 29038, 29039);
				return;
			}
			if (a0 == 29038) {
				f_18d6_a1_v("Grief");
				tv0->SetMessage(527689);
				tv0->ClearReplies();
				tv0->AddReply(527670, 29018, 29017);
				tv0->AddReply(527691, -1, 29041);
				return;
			}
			if (a0 == 29018) {
				f_18d6_a1_v("Neutral");
				tv0->SetMessage(527671);
				tv0->ClearReplies();
				tv0->AddReply(527672, 29020, 29019);
				return;
			}
			if (a0 == 29020) {
				f_18d6_a1_v("Gratitude");
				tv0->SetMessage(527673);
				tv0->ClearReplies();
				tv0->AddReply(527674, 29022, 29021);
				return;
			}
			if (a0 == 29022) {
				f_18d6_a1_v("Gratitude");
				tv0->SetMessage(527675);
				tv0->ClearReplies();
				tv0->AddReply(527676, 29024, 29023);
				return;
			}
			if (a0 == 29024) {
				f_18d6_a1_v("Neutral");
				tv0->SetMessage(527677);
				tv0->ClearReplies();
				tv0->AddReply(527678, -1, 29025);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t19{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			f_1a68_a1_v("Gratitude");
			tv0->SetMessage(539306);
			tv0->ClearReplies();
			tv0->AddReply(542527, 44924, 44922);
			tv0->AddReply(539307, -1, 41250);
			tv0->AddReply(542528, -1, 44923);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_1a68_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a0 == 41249) {
				f_1a68_a1_v("Gratitude");
				tv0->SetMessage(539306);
				tv0->ClearReplies();
				tv0->AddReply(542527, 44924, 44922);
				tv0->AddReply(539307, -1, 41250);
				tv0->AddReply(542528, -1, 44923);
				return;
			}
			if (a0 == 44924) {
				f_1a68_a1_v("Gratitude");
				tv0->SetMessage(542529);
				tv0->ClearReplies();
				tv0->AddReply(542530, 44927, 44925);
				tv0->AddReply(542531, -1, 44926);
				return;
			}
			if (a0 == 44927) {
				f_1a68_a1_v("Neutral");
				tv0->SetMessage(542532);
				tv0->ClearReplies();
				tv0->AddReply(542533, 44930, 44928);
				tv0->AddReply(542534, -1, 44929);
				return;
			}
			if (a0 == 44930) {
				f_1a68_a1_v("Neutral");
				tv0->SetMessage(542535);
				tv0->ClearReplies();
				tv0->AddReply(542536, 44933, 44931);
				tv0->AddReply(542537, -1, 44932);
				return;
			}
			if (a0 == 44933) {
				f_1a68_a1_v("Grief");
				tv0->SetMessage(542538);
				tv0->ClearReplies();
				tv0->AddReply(542539, 44935, 44934);
				tv0->AddReply(542546, 44942, 44941);
				return;
			}
			if (a0 == 44942) {
				f_1a68_a1_v("Grief");
				tv0->SetMessage(542547);
				tv0->ClearReplies();
				tv0->AddReply(542548, 44945, 44943);
				tv0->AddReply(542549, 44945, 44944);
				return;
			}
			if (a0 == 44945) {
				f_1a68_a1_v("Gratitude");
				tv0->SetMessage(542550);
				tv0->ClearReplies();
				tv0->AddReply(542551, 44935, 44947);
				tv0->AddReply(542552, -1, 44948);
				return;
			}
			if (a0 == 44935) {
				f_1a68_a1_v("Neutral");
				tv0->SetMessage(542540);
				tv0->ClearReplies();
				tv0->AddReply(542541, -1, 44936);
				tv0->AddReply(542542, -1, 44937);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
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
		if (!f_1d65_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f34_a0_i());
		L0->SetNPCDescription(f_1f32_a0_i());
		L0->SetPhoto(f_1f36_a0_s());
		L0->SetPhoto2(f_1f38_a0_s());
		L0->SetPlayerName(f_258a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1dbc_a1_b(f_1e7b_a0_o());
		t21{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1daa_a1_v(a0);
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
			f_1bd9_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_1f3a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e46_a1_v(tv2);
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

	void f_1bd9_a1_v(string a0)
	{
		if (!f_1f3a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e56_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e74_a0_v();
			if (a0 == 42554) {
				f_1bd9_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_1f3a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t22
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_1c20_a0_v();
	}

	void f_1c20_a0_v(void)
	{
		if (!f_1d60_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_1cd0_a0_v();
		}
	}

	bool f_1c2e_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1d57_a1_b(L0);
	}

	void f_1c3d_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1c42_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1d1c_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1c58_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1c61_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1c61_a0_v();
			if (f_1d60_a0_b() && f_1c42_a0_b()) {
				if (f_1c2e_a0_b()) {
					f_1df6_a1_b(f_1e7b_a0_o());
				}
			} else {
				f_1c3d_a0_v();
				f_1c58_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1d17_a0_v();
		f_1c61_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1c61_a0_v();
		f_1e46_a1_v("Neutral");
		f_1c58_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1c58_a0_v();
		} else {
			f_1e46_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1d17_a0_v();
			f_1d57_a1_b(a0);
			enable OnUse;
			f_259b_a1_v(a0);
			f_1e46_a1_v("Neutral");
			f_1c61_a0_v();
			f_1c58_a0_v();
		}
	}
}

void f_1cd0_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1d60_a0_b()) {
		return;
	}
	L0 = f_1f21_a0_i();
	for (L1 = 0; L1 < 5 && f_1d60_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1f1a_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1d15_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1d15_a0_b(void)
{
	return true;
}

void f_1d17_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1d1c_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1d24_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_1d30_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_1d24_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_1e8b_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_1d46_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1d4d_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1d57_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1d4d_a1_b(L0);
}

bool f_1d60_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1d65_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1e81_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1f3a_a0_b()) {
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

void f_1daa_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1f3a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1dbc_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1df6_a1_b(a0)) {
			if (!f_1e1b_a1_b(a0)) {
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
		if (!f_1e1b_a1_b(a0)) {
			if (!f_1df6_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1df6_a1_b(object a0)
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
	return f_1e65_a1_b(L4);
}

bool f_1e1b_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1f0b_a0_i() + "m";
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
	return f_1e65_a1_b(L4);
}

void f_1e46_a1_v(string a0)
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

void f_1e56_a2_v(string a0, bool a1)
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

bool f_1e65_a1_b(string a0)
{
	if (f_1f3a_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1e74_a0_v(void)
{
	if (f_1f3a_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1e7b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1e81_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1e8b_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_1e96_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1e9b_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1ea7_a2_v(object a0, int a1)
{
	f_1d46_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1e9b_a2_v(L0, a1);
	}
}

bool f_1eba_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_1ec1_a2_b(object a0, float a1)
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
	f_1ee4_a1_v(a1);
	f_1d30_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_1ee4_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_1eee_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_1efa_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

float f_1f06_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1f0b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1f14_a1_b(int a0)
{
	return f_1f0b_a0_i() == a0;
}

string f_1f1a_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1f21_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1f1a_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1f32_a0_i(void)
{
	return 515528;
}

int f_1f34_a0_i(void)
{
	return 502854;
}

string f_1f36_a0_s(void)
{
	return "ui/NPC_Alexandr.png";
}

string f_1f38_a0_s(void)
{
	return "ui/NPC_Alexandr_b.png";
}

bool f_1f3a_a0_b(void)
{
	return true;
}

void f_1f3c_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k1q01", 2);
	L0 = f_2558_a0_o();
	L0->AddMark("k1q01AlexandrGotoKaterina", "pt_map_katerina", 1, 524728, f_1f06_a0_f());
	f_23a5_a0_v();
}

void f_1f53_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k1q01", 4);
	L0 = f_2558_a0_o();
	L0->AddMark("k1q01AlexandrGotoStation", "pt_k1q01_doberman", 1, 524729, f_1f06_a0_f());
	f_23bf_a0_v();
	f_1eee_a2_b("quest_k1_01", "init_alexandr");
}

void f_1f6f_a2_v(object a0, object a1)
{
	f_23b2_a0_v();
	f_1eee_a2_b("quest_k1_01", "completed");
}

void f_1f79_a2_v(object a0, object a1)
{
	f_2569_a3_v(f_2558_a0_o(), "pt_map_katerina", 2);
	a1->ShowMap(f_2558_a0_o());
}

void f_1f89_a2_v(object a0, object a1)
{
	f_2569_a3_v(f_2558_a0_o(), "pt_k1q01_doberman", 2);
	a1->ShowMap(f_2558_a0_o());
}

void f_1f99_a2_v(object a0, object a1)
{
	@SetVariable("k1q02", 1);
	f_23cc_a0_v();
	f_23d9_a0_v();
}

void f_1fa5_a2_v(object a0, object a1)
{
	@SetVariable("ook1Alexandr1", 1);
}

void f_1fab_a2_v(object a0, object a1)
{
	@SetVariable("k1q02", 1000);
	f_23e6_a0_v();
}

void f_1fb4_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k2q01", 1);
	L0 = f_2558_a0_o();
	L0->AddMark("k2q01AlexandrGotoMladVlad", "pt_map_mladvlad", 1, 508648, f_1f06_a0_f());
	f_23f3_a0_v();
	f_2400_a0_v();
}

void f_1fce_a2_v(object a0, object a1)
{
	@SetVariable("ook2Alexandr1", 1);
}

void f_1fd4_a2_v(object a0, object a1)
{
	@SetVariable("k2q01", 1000);
	f_240d_a0_v();
	f_1efa_a3_b("volonteers_klara", "disease", "ospina");
}

void f_1fe3_a2_v(object a0, object a1)
{
	@SetVariable("k2q01", 1000);
	f_241a_a0_v();
}

void f_1fec_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k3q01", 1);
	L0 = f_2558_a0_o();
	L0->AddMark("k3q01AlexandrGotoAnna", "pt_map_anna", 1, 525453, f_1f06_a0_f());
	f_2427_a0_v();
	f_2434_a0_v();
}

void f_2006_a2_v(object a0, object a1)
{
	@SetVariable("ook3Alexandr1", 1);
}

void f_200c_a2_v(object a0, object a1)
{
	@SetVariable("k3q01", 1000);
	f_2441_a0_v();
	f_1efa_a3_b("volonteers_klara", "disease", "anna");
}

void f_201b_a2_v(object a0, object a1)
{
	@SetVariable("k3q01", 1000);
	f_244e_a0_v();
}

void f_2024_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q01", 1);
	L0 = f_2558_a0_o();
	L0->AddMark("k4q01AlexandrGotoGrif", "pt_map_grif", 1, 539601, f_1f06_a0_f());
	f_245b_a0_v();
	f_2468_a0_v();
}

void f_203e_a2_v(object a0, object a1)
{
	@SetVariable("ook4Alexandr1", 1);
}

void f_2044_a2_v(object a0, object a1)
{
	f_248f_a0_v();
	f_1efa_a3_b("volonteers_klara", "disease", "grif");
	f_1eee_a2_b("quest_k4_01", "completed");
}

void f_2054_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("k4q01", 5);
	f_2475_a0_v();
	a0->RemoveItemByType(L0, "k4q01_scull_bag", 1);
}

void f_2061_a2_v(object a0, object a1)
{
	f_2482_a0_v();
	f_1eee_a2_b("quest_k4_01", "completed");
}

void f_206b_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q03", 2);
	L0 = f_2558_a0_o();
	L0->AddMark("k4q03AlexandrGotoBurah", "pt_map_k4q03_burah", 0, 525827, f_1f06_a0_f());
	f_249c_a0_v();
	f_1eee_a2_b("quest_k4_03", "place_burah");
}

void f_2087_a2_v(object a0, object a1)
{
	f_24a9_a0_v();
	f_1eee_a2_b("quest_k4_03", "fail");
}

void f_2091_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k5q01", 1);
	L0 = f_2558_a0_o();
	L0->AddMark("k5q01AlexandrGotoMladVlad", "pt_map_mladvlad", 1, 515284, f_1f06_a0_f());
	f_24b6_a0_v();
	f_24c3_a0_v();
}

void f_20ab_a2_v(object a0, object a1)
{
	@SetVariable("ook5Alexandr1", 1);
}

void f_20b1_a2_v(object a0, object a1)
{
	@SetVariable("k5q01", 1000);
	f_24d0_a0_v();
}

void f_20ba_a2_v(object a0, object a1)
{
	@SetVariable("k5q02", 4);
	f_24dd_a0_v();
	f_1eee_a2_b("quest_k5_02", "place_andrei");
}

void f_20c8_a2_v(object a0, object a1)
{
	@SetVariable("ook6Alexandr1", 1);
}

void f_20ce_a2_v(object a0, object a1)
{
	@SetVariable("k6q01", 1);
	f_24ea_a0_v();
	f_24f7_a0_v();
	f_1eee_a2_b("quest_k6_01", "lock_danko");
}

void f_20df_a2_v(object a0, object a1)
{
	@SetVariable("ook6Alexandr2", 1);
}

void f_20e5_a2_v(object a0, object a1)
{
	@SetVariable("k7q01", 2);
	f_2504_a0_v();
}

void f_20ee_a2_v(object a0, object a1)
{
	@SetVariable("k7q01", 5);
	f_2511_a0_v();
}

void f_20f7_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	L0 = L0 + 1;
	@SetVariable("k11q01SoulCount", L0);
	if (L0 == 2) {
		f_2398_a0_v();
	} else {
		if (L0 == 3) {
			f_238b_a0_v();
		} else {
			if (L0 == 4) {
				f_237e_a0_v();
			} else {
				if (L0 == 5) {
					f_2371_a0_v();
				} else {
					if (L0 == 6) {
						f_2364_a0_v();
					} else {
						if (L0 == 7) {
							f_2357_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_212a_a2_v(object a0, object a1)
{
	@SetVariable("ook11Alexandr1", 1);
}

void f_2130_a2_v(object a0, object a1)
{
	@SetVariable("ook4Alexandr2", 1);
}

void f_2136_a2_v(object a0, object a1)
{
	@Trace("money500 is given");
	f_1ea7_a2_v(a0, 500);
}

void f_2140_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_2146_a2_v(object a0, object a1)
{
	f_2569_a3_v(f_2558_a0_o(), "pt_map_k4q03_burah", 2);
	a1->ShowMap(f_2558_a0_o());
}

void f_2156_a2_v(object a0, object a1)
{
	@SetVariable("k2AlexandrVisit", 1);
}

void f_215c_a2_v(object a0, object a1)
{
	a1->SetReturnValue(2);
}

void f_2161_a2_v(object a0, object a1)
{
	@SetVariable("k3AlexandrVisit", 1);
}

void f_2167_a2_v(object a0, object a1)
{
	@SetVariable("k4AlexandrVisit", 1);
}

void f_216d_a2_v(object a0, object a1)
{
	@SetVariable("k5AlexandrVisit", 1);
}

void f_2173_a2_v(object a0, object a1)
{
	@SetVariable("k6AlexandrVisit", 1);
}

void f_2179_a2_v(object a0, object a1)
{
	if (f_1e96_a1_i("K_Mission2") == 0) {
		@SetVariable("K_Mission2", 1);
		f_234a_a0_v();
		f_2547_a1_b(567);
	}
}

void f_218d_a2_v(object a0, object a1)
{
	f_2569_a3_v(f_2558_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_2558_a0_o());
}

void f_219d_a2_v(object a0, object a1)
{
	f_2569_a3_v(f_2558_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_2558_a0_o());
}

void f_21ad_a2_v(object a0, object a1)
{
	f_2569_a3_v(f_2558_a0_o(), "pt_map_grif", 2);
	a1->ShowMap(f_2558_a0_o());
}

void f_21bd_a2_v(object a0, object a1)
{
	f_1ec1_a2_b(a0, 0.10000000149011612);
}

void f_21c4_a2_v(object a0, object a1)
{
	f_1ec1_a2_b(a0, -0.10000000149011612);
}

bool f_21cb_a1_b(object a0)
{
	if (f_1e96_a1_i("k1q01") == 1) {
		return true;
	}
	return false;
}

bool f_21d7_a1_b(object a0)
{
	if (f_1e96_a1_i("k1q01") == 3) {
		return true;
	}
	return false;
}

bool f_21e3_a1_b(object a0)
{
	if (f_1e96_a1_i("k1q01Healed") != 0) {
		return true;
	}
	return false;
}

bool f_21ef_a1_b(object a0)
{
	if (f_1e96_a1_i("k1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_21fb_a1_b(object a0)
{
	if (f_1e96_a1_i("k1q02") == 0) {
		return true;
	}
	return false;
}

bool f_2207_a1_b(object a0)
{
	if (f_1e96_a1_i("ook1Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_2213_a1_b(object a0)
{
	if (f_1e96_a1_i("k1q02") == 5) {
		return true;
	}
	return false;
}

bool f_221f_a1_b(object a0)
{
	if (f_1e96_a1_i("k2q01") == 0) {
		return true;
	}
	return false;
}

bool f_222b_a1_b(object a0)
{
	if (f_1e96_a1_i("ook2Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_2237_a1_b(object a0)
{
	if (f_1e96_a1_i("k2q01") == 6) {
		return true;
	}
	return false;
}

bool f_2243_a1_b(object a0)
{
	if (f_1e96_a1_i("k3q01") == 0) {
		return true;
	}
	return false;
}

bool f_224f_a1_b(object a0)
{
	if (f_1e96_a1_i("ook3Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_225b_a1_b(object a0)
{
	if (f_1e96_a1_i("k3q01") == 3) {
		return true;
	}
	return false;
}

bool f_2267_a1_b(object a0)
{
	if (f_1e96_a1_i("k4q01") == 0) {
		return true;
	}
	return false;
}

bool f_2273_a1_b(object a0)
{
	if (f_1e96_a1_i("ook4Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_227f_a1_b(object a0)
{
	if (f_1e96_a1_i("k4q01") == 4) {
		return true;
	}
	return false;
}

bool f_228b_a1_b(object a0)
{
	if (f_1eba_a2_b(a0, "k4q01_scull_bag")) {
		return true;
	}
	return false;
}

bool f_2296_a1_b(object a0)
{
	if (f_1e96_a1_i("k4q01") == 6) {
		return true;
	}
	return false;
}

bool f_22a2_a1_b(object a0)
{
	if (f_1e96_a1_i("k4q03") == 1) {
		return true;
	}
	return false;
}

bool f_22ae_a1_b(object a0)
{
	if (f_1e96_a1_i("k4q03") == 4) {
		return true;
	}
	return false;
}

bool f_22ba_a1_b(object a0)
{
	if (f_1e96_a1_i("k5q01") == 0) {
		return true;
	}
	return false;
}

bool f_22c6_a1_b(object a0)
{
	if (f_1e96_a1_i("ook5Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_22d2_a1_b(object a0)
{
	if (f_1e96_a1_i("k5q01") == 4) {
		return true;
	}
	return false;
}

bool f_22de_a1_b(object a0)
{
	if (f_1e96_a1_i("k5q02") == 3) {
		return true;
	}
	return false;
}

bool f_22ea_a1_b(object a0)
{
	if (f_1e96_a1_i("ook6Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_22f6_a1_b(object a0)
{
	if (f_1e96_a1_i("ook6Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_2302_a1_b(object a0)
{
	if (f_1e96_a1_i("k6q01") > 1) {
		return true;
	}
	return false;
}

bool f_230e_a1_b(object a0)
{
	if (f_1e96_a1_i("k7q01") == 1) {
		return true;
	}
	return false;
}

bool f_231a_a1_b(object a0)
{
	if (f_1e96_a1_i("k7q01") == 4) {
		return true;
	}
	return false;
}

bool f_2326_a1_b(object a0)
{
	if (f_1e96_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_2332_a1_b(object a0)
{
	if (f_1e96_a1_i("ook11Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_233e_a1_b(object a0)
{
	if (f_1e96_a1_i("ook4Alexandr2") == 0) {
		return true;
	}
	return false;
}

void f_234a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 568, 0, 530582);
	f_252b_a2_b(L0, -1);
}

void f_2357_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_252b_a2_b(L0, 480);
}

void f_2364_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_252b_a2_b(L0, 480);
}

void f_2371_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_252b_a2_b(L0, 480);
}

void f_237e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_252b_a2_b(L0, 480);
}

void f_238b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_252b_a2_b(L0, 480);
}

void f_2398_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_252b_a2_b(L0, 480);
}

void f_23a5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 320, 1, 524736);
	f_252b_a2_b(L0, 318);
}

void f_23b2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 324, 1, 524740);
	f_252b_a2_b(L0, 318);
}

void f_23bf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 322, 1, 524738);
	f_252b_a2_b(L0, 318);
}

void f_23cc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 326, 2, 524771);
	f_252b_a2_b(L0, -1);
}

void f_23d9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 327, 2, 524772);
	f_252b_a2_b(L0, 326);
}

void f_23e6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 332, 2, 524777);
	f_252b_a2_b(L0, 326);
}

void f_23f3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 461, 1, 527777);
	f_252b_a2_b(L0, -1);
}

void f_2400_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 462, 1, 527778);
	f_252b_a2_b(L0, 461);
}

void f_240d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 468, 1, 527784);
	f_252b_a2_b(L0, 461);
}

void f_241a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 469, 1, 527785);
	f_252b_a2_b(L0, 461);
}

void f_2427_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 337, 1, 525446);
	f_252b_a2_b(L0, -1);
}

void f_2434_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 338, 1, 525447);
	f_252b_a2_b(L0, 337);
}

void f_2441_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 342, 1, 525451);
	f_252b_a2_b(L0, 337);
}

void f_244e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 343, 1, 525452);
	f_252b_a2_b(L0, 337);
}

void f_245b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 368, 1, 525725);
	f_252b_a2_b(L0, -1);
}

void f_2468_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 369, 1, 525726);
	f_252b_a2_b(L0, 368);
}

void f_2475_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 374, 1, 525731);
	f_252b_a2_b(L0, 368);
}

void f_2482_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 376, 1, 525733);
	f_252b_a2_b(L0, 368);
}

void f_248f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 375, 1, 525732);
	f_252b_a2_b(L0, 368);
}

void f_249c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 386, 2, 525824);
	f_252b_a2_b(L0, 384);
}

void f_24a9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 388, 2, 525826);
	f_252b_a2_b(L0, 384);
}

void f_24b6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 390, 1, 525883);
	f_252b_a2_b(L0, -1);
}

void f_24c3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 391, 1, 525884);
	f_252b_a2_b(L0, 390);
}

void f_24d0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 396, 1, 525889);
	f_252b_a2_b(L0, 390);
}

void f_24dd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 401, 2, 525939);
	f_252b_a2_b(L0, 397);
}

void f_24ea_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 408, 1, 526109);
	f_252b_a2_b(L0, -1);
}

void f_24f7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 409, 1, 526110);
	f_252b_a2_b(L0, 408);
}

void f_2504_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 418, 1, 526217);
	f_252b_a2_b(L0, 416);
}

void f_2511_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 423, 1, 526222);
	f_252b_a2_b(L0, 416);
}

object f_251e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_252b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_251e_a0_o();
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

bool f_2547_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_251e_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_2558_a0_o(void)
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

void f_2569_a3_v(object a0, string a1, float a2)
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

int f_258a_a0_i(void)
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

void f_259b_a1_v(object a0)
{
	if (!g1) {
		t6{a0};
		g1 = true;
	}
	if (f_1f14_a1_b(1)) {
		while (2 == t0{a0}) {
			@sync();
		}
		return;
	}
	if (f_1f14_a1_b(2)) {
		t2{a0};
		return;
	}
	if (f_1f14_a1_b(3)) {
		t4{a0};
		return;
	}
	if (f_1f14_a1_b(4)) {
		t8{a0};
		return;
	}
	if (f_1f14_a1_b(5)) {
		t10{a0};
		return;
	}
	if (f_1f14_a1_b(6)) {
		t12{a0};
		return;
	}
	if (f_1f14_a1_b(7)) {
		t14{a0};
		return;
	}
	if (f_1f14_a1_b(11)) {
		t16{a0};
		return;
	}
	if (f_1f14_a1_b(12)) {
		t18{a0};
		return;
	}
	t20{a0};
}

