event evt_11 11;
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			if (f_1caf_a1_b(tv1)) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(524653);
				tv0->ClearReplies();
				tv0->AddReply(526570, 27842, 27841);
				tv0->AddReply(526647, 27842, 27921);
				break;
			}
			if (!f_1cbb_a1_b(tv1) && f_1dab_a1_b(tv1)) {
				f_1bd6_a2_v(tv1, tv0);
				f_db_a1_v("Neutral");
				tv0->SetMessage(526576);
				tv0->ClearReplies();
				tv0->AddReply(526585, 27857, 27856);
				tv0->AddReply(541708, 27859, 43895);
				break;
			}
			f_db_a1_v("Neutral");
			tv0->SetMessage(524662);
			tv0->ClearReplies();
			if (f_1cbb_a1_b(tv1)) {
				tv0->AddReply(524748, 27892, 26072);
			}
			if (f_1db7_a1_b(tv1)) {
				tv0->AddReply(526625, 43897, 27899);
			}
			tv0->AddReply(524663, -1, 26002);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_db_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a1 == 25993) {
				f_1a86_a2_v(tv1, tv0);
			}
			if (a1 == 27866) {
				f_1c9a_a2_v(tv1, tv0);
				f_1c91_a2_v(tv1, tv0);
			}
			if (a1 == 27865) {
				f_1c91_a2_v(tv1, tv0);
				f_1c9a_a2_v(tv1, tv0);
			}
			if (a1 == 26076) {
				f_1a8f_a2_v(tv1, tv0);
				f_1bf2_a2_v(tv1, tv0);
			}
			if (a1 == 27899) {
				f_1bdc_a2_v(tv1, tv0);
			}
			if (a0 == 25992) {
				if (f_1caf_a1_b(tv1)) {
					f_db_a1_v("Neutral");
					tv0->SetMessage(524653);
					tv0->ClearReplies();
					tv0->AddReply(526570, 27842, 27841);
					tv0->AddReply(526647, 27842, 27921);
					return;
				}
				if (!f_1cbb_a1_b(tv1) && f_1dab_a1_b(tv1)) {
					f_1bd6_a2_v(tv1, tv0);
					f_db_a1_v("Neutral");
					tv0->SetMessage(526576);
					tv0->ClearReplies();
					tv0->AddReply(526585, 27857, 27856);
					tv0->AddReply(541708, 27859, 43895);
					return;
				}
				f_db_a1_v("Neutral");
				tv0->SetMessage(524662);
				tv0->ClearReplies();
				if (f_1cbb_a1_b(tv1)) {
					tv0->AddReply(524748, 27892, 26072);
				}
				if (f_1db7_a1_b(tv1)) {
					tv0->AddReply(526625, 43897, 27899);
				}
				tv0->AddReply(524663, -1, 26002);
				return;
			}
			if (a0 == 43897) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(541709);
				tv0->ClearReplies();
				tv0->AddReply(541710, 27900, 43898);
				tv0->AddReply(541711, -1, 43899);
				return;
			}
			if (a0 == 27900) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526626);
				tv0->ClearReplies();
				tv0->AddReply(526627, 27902, 27901);
				return;
			}
			if (a0 == 27902) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526628);
				tv0->ClearReplies();
				tv0->AddReply(526629, 27904, 27903);
				return;
			}
			if (a0 == 27904) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526630);
				tv0->ClearReplies();
				tv0->AddReply(526631, 27906, 27905);
				tv0->AddReply(541712, 27913, 43900);
				return;
			}
			if (a0 == 27906) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526632);
				tv0->ClearReplies();
				tv0->AddReply(526633, 27908, 27907);
				return;
			}
			if (a0 == 27908) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526634);
				tv0->ClearReplies();
				tv0->AddReply(526638, 27913, 27912);
				tv0->AddReply(541713, 27918, 43902);
				return;
			}
			if (a0 == 27913) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526639);
				tv0->ClearReplies();
				tv0->AddReply(526642, 27917, 27916);
				return;
			}
			if (a0 == 27917) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526643);
				tv0->ClearReplies();
				tv0->AddReply(526635, 27910, 27909);
				return;
			}
			if (a0 == 27910) {
				f_db_a1_v("Suffering");
				tv0->SetMessage(526636);
				tv0->ClearReplies();
				tv0->AddReply(526637, 27918, 27911);
				return;
			}
			if (a0 == 27918) {
				f_db_a1_v("Suffering");
				tv0->SetMessage(526644);
				tv0->ClearReplies();
				tv0->AddReply(526645, -1, 27919);
				return;
			}
			if (a0 == 27892) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526619);
				tv0->ClearReplies();
				tv0->AddReply(526620, 27894, 27893);
				tv0->AddReply(526623, 27894, 27896);
				return;
			}
			if (a0 == 27894) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526621);
				tv0->ClearReplies();
				tv0->AddReply(526622, 26073, 27895);
				return;
			}
			if (a0 == 26073) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(524749);
				tv0->ClearReplies();
				tv0->AddReply(526595, 27871, 27868);
				return;
			}
			if (a0 == 27871) {
				f_db_a1_v("Penetrating");
				tv0->SetMessage(526598);
				tv0->ClearReplies();
				tv0->AddReply(526599, 27873, 27872);
				return;
			}
			if (a0 == 27873) {
				f_db_a1_v("Fear");
				tv0->SetMessage(526600);
				tv0->ClearReplies();
				tv0->AddReply(526601, 27878, 27874);
				return;
			}
			if (a0 == 27878) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526605);
				tv0->ClearReplies();
				tv0->AddReply(526606, 26075, 27879);
				return;
			}
			if (a0 == 26075) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(524751);
				tv0->ClearReplies();
				tv0->AddReply(524752, -1, 26076);
				return;
			}
			if (a0 == 27857) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526586);
				tv0->ClearReplies();
				tv0->AddReply(526587, 27859, 27858);
				return;
			}
			if (a0 == 27859) {
				f_db_a1_v("Penetrating");
				tv0->SetMessage(526588);
				tv0->ClearReplies();
				tv0->AddReply(526577, 27849, 27848);
				tv0->AddReply(526589, 27849, 27860);
				return;
			}
			if (a0 == 27849) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526578);
				tv0->ClearReplies();
				tv0->AddReply(526579, 27851, 27850);
				tv0->AddReply(526592, -1, 27865);
				return;
			}
			if (a0 == 27851) {
				f_db_a1_v("Suffering");
				tv0->SetMessage(526580);
				tv0->ClearReplies();
				tv0->AddReply(526581, 27863, 27852);
				tv0->AddReply(526590, 27863, 27862);
				return;
			}
			if (a0 == 27863) {
				f_db_a1_v("Suffering");
				tv0->SetMessage(526591);
				tv0->ClearReplies();
				tv0->AddReply(526593, -1, 27866);
				return;
			}
			if (a0 == 27842) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526571);
				tv0->ClearReplies();
				tv0->AddReply(526572, 27922, 27843);
				tv0->AddReply(541704, 27922, 43889);
				return;
			}
			if (a0 == 27922) {
				f_db_a1_v("Penetrating");
				tv0->SetMessage(526648);
				tv0->ClearReplies();
				tv0->AddReply(526649, 27844, 27923);
				tv0->AddReply(526650, 27844, 27924);
				return;
			}
			if (a0 == 27844) {
				f_db_a1_v("Penetrating");
				tv0->SetMessage(526573);
				tv0->ClearReplies();
				tv0->AddReply(526574, 27853, 27845);
				tv0->AddReply(526651, 27853, 27926);
				return;
			}
			if (a0 == 27853) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526582);
				tv0->ClearReplies();
				tv0->AddReply(526583, 27855, 27854);
				return;
			}
			if (a0 == 27855) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526584);
				tv0->ClearReplies();
				tv0->AddReply(526652, 27929, 27928);
				tv0->AddReply(541705, 43892, 43891);
				return;
			}
			if (a0 == 43892) {
				f_db_a1_v("Grin");
				tv0->SetMessage(541706);
				tv0->ClearReplies();
				tv0->AddReply(541707, 27929, 43893);
				return;
			}
			if (a0 == 27929) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(526653);
				tv0->ClearReplies();
				tv0->AddReply(524654, -1, 25993);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			if (f_1cc7_a1_b(tv1)) {
				f_1aa6_a2_v(tv1, tv0);
				f_496_a1_v("Neutral");
				tv0->SetMessage(525282);
				tv0->ClearReplies();
				tv0->AddReply(529188, 30639, 30638);
				break;
			}
			f_496_a1_v("Neutral");
			tv0->SetMessage(525287);
			tv0->ClearReplies();
			if (f_1cd3_a1_b(tv1)) {
				tv0->AddReply(525288, 43687, 26656);
			}
			if (f_1cdf_a1_b(tv1)) {
				tv0->AddReply(525306, 26675, 26674);
			}
			tv0->AddReply(525291, -1, 26659);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_496_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a1 == 26651) {
				f_1aac_a2_v(tv1, tv0);
				f_1c73_a2_v(tv1, tv0);
			}
			if (a1 == 40863) {
				f_1aac_a2_v(tv1, tv0);
				f_1c73_a2_v(tv1, tv0);
			}
			if (a1 == 26658) {
				f_1aac_a2_v(tv1, tv0);
				f_1c73_a2_v(tv1, tv0);
			}
			if (a1 == 26676) {
				f_1ac6_a2_v(tv1, tv0);
				f_1c83_a2_v(tv1, tv0);
			}
			if (a1 == 26677) {
				f_1acf_a2_v(tv1, tv0);
				f_1c8a_a2_v(tv1, tv0);
			}
			if (a0 == 26650) {
				if (f_1cc7_a1_b(tv1)) {
					f_1aa6_a2_v(tv1, tv0);
					f_496_a1_v("Neutral");
					tv0->SetMessage(525282);
					tv0->ClearReplies();
					tv0->AddReply(529188, 30639, 30638);
					return;
				}
				f_496_a1_v("Neutral");
				tv0->SetMessage(525287);
				tv0->ClearReplies();
				if (f_1cd3_a1_b(tv1)) {
					tv0->AddReply(525288, 43687, 26656);
				}
				if (f_1cdf_a1_b(tv1)) {
					tv0->AddReply(525306, 26675, 26674);
				}
				tv0->AddReply(525291, -1, 26659);
				return;
			}
			if (a0 == 26675) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(525307);
				tv0->ClearReplies();
				tv0->AddReply(529203, 30656, 30654);
				tv0->AddReply(529204, 30657, 30655);
				return;
			}
			if (a0 == 30657) {
				f_496_a1_v("Fear");
				tv0->SetMessage(529206);
				tv0->ClearReplies();
				tv0->AddReply(538911, 40865, 40864);
				return;
			}
			if (a0 == 40865) {
				f_496_a1_v("Suffering");
				tv0->SetMessage(538912);
				tv0->ClearReplies();
				tv0->AddReply(525309, -1, 26677);
				return;
			}
			if (a0 == 30656) {
				f_496_a1_v("Penetrating");
				tv0->SetMessage(529205);
				tv0->ClearReplies();
				tv0->AddReply(525308, -1, 26676);
				return;
			}
			if (a0 == 43687) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(541524);
				tv0->ClearReplies();
				tv0->AddReply(541525, 26657, 43688);
				tv0->AddReply(541526, 43690, 43689);
				return;
			}
			if (a0 == 43690) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(541527);
				tv0->ClearReplies();
				tv0->AddReply(541528, 26657, 43691);
				return;
			}
			if (a0 == 26657) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(525289);
				tv0->ClearReplies();
				tv0->AddReply(525290, -1, 26658);
				return;
			}
			if (a0 == 30639) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(529189);
				tv0->ClearReplies();
				tv0->AddReply(529190, 30641, 30640);
				tv0->AddReply(538902, 30641, 40850);
				return;
			}
			if (a0 == 30641) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(529191);
				tv0->ClearReplies();
				tv0->AddReply(529192, 30643, 30642);
				tv0->AddReply(538903, 30643, 40852);
				return;
			}
			if (a0 == 30643) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(529193);
				tv0->ClearReplies();
				tv0->AddReply(529194, 30645, 30644);
				tv0->AddReply(538904, 30645, 40854);
				return;
			}
			if (a0 == 30645) {
				f_496_a1_v("Suffering");
				tv0->SetMessage(529195);
				tv0->ClearReplies();
				tv0->AddReply(529200, 30651, 30650);
				tv0->AddReply(538905, 40857, 40856);
				return;
			}
			if (a0 == 40857) {
				f_496_a1_v("Grin");
				tv0->SetMessage(538906);
				tv0->ClearReplies();
				tv0->AddReply(538907, 30647, 40858);
				return;
			}
			if (a0 == 30651) {
				f_496_a1_v("Suffering");
				tv0->SetMessage(529201);
				tv0->ClearReplies();
				tv0->AddReply(529196, 30647, 30646);
				tv0->AddReply(529202, 30647, 30652);
				return;
			}
			if (a0 == 30647) {
				f_496_a1_v("Suffering");
				tv0->SetMessage(529197);
				tv0->ClearReplies();
				tv0->AddReply(538899, 40847, 40846);
				tv0->AddReply(538908, 40861, 40860);
				return;
			}
			if (a0 == 40847) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(538900);
				tv0->ClearReplies();
				tv0->AddReply(538901, 40861, 40848);
				tv0->AddReply(525284, -1, 26652);
				return;
			}
			if (a0 == 40861) {
				f_496_a1_v("Penetrating");
				tv0->SetMessage(538909);
				tv0->ClearReplies();
				tv0->AddReply(529198, 30649, 30648);
				return;
			}
			if (a0 == 30649) {
				f_496_a1_v("Neutral");
				tv0->SetMessage(529199);
				tv0->ClearReplies();
				tv0->AddReply(525283, -1, 26651);
				tv0->AddReply(538910, -1, 40863);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			f_72e_a1_v("Neutral");
			tv0->SetMessage(525492);
			tv0->ClearReplies();
			tv0->AddReply(525493, -1, 26849);
			tv0->AddReply(526251, -1, 27524);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_72e_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a0 == 26848) {
				f_72e_a1_v("Neutral");
				tv0->SetMessage(525492);
				tv0->ClearReplies();
				tv0->AddReply(525493, -1, 26849);
				tv0->AddReply(526251, -1, 27524);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			if (f_1ceb_a1_b(tv1)) {
				f_1ad8_a2_v(tv1, tv0);
				f_1c02_a2_v(tv1, tv0);
				f_830_a1_v("Neutral");
				tv0->SetMessage(525536);
				tv0->ClearReplies();
				tv0->AddReply(540780, 42827, 42826);
				tv0->AddReply(540791, 42827, 42837);
				break;
			}
			f_830_a1_v("Neutral");
			tv0->SetMessage(525539);
			tv0->ClearReplies();
			if (f_1cf7_a1_b(tv1)) {
				tv0->AddReply(525559, 26916, 26915);
			}
			if (f_1d03_a1_b(tv1)) {
				tv0->AddReply(525562, 26919, 26918);
			}
			tv0->AddReply(525540, -1, 26896);
			tv0->AddReply(540788, -1, 42834);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_830_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a1 == 26893) {
				f_1ade_a2_v(tv1, tv0);
			}
			if (a1 == 26917) {
				f_1ade_a2_v(tv1, tv0);
			}
			if (a1 == 26920) {
				f_1af8_a2_v(tv1, tv0);
				f_1c83_a2_v(tv1, tv0);
				f_1be2_a2_v(tv1, tv0);
				f_1bec_a2_v(tv1, tv0);
			}
			if (a1 == 26921) {
				f_1b01_a2_v(tv1, tv0);
				f_1c8a_a2_v(tv1, tv0);
			}
			if (a0 == 26892) {
				if (f_1ceb_a1_b(tv1)) {
					f_1ad8_a2_v(tv1, tv0);
					f_1c02_a2_v(tv1, tv0);
					f_830_a1_v("Neutral");
					tv0->SetMessage(525536);
					tv0->ClearReplies();
					tv0->AddReply(540780, 42827, 42826);
					tv0->AddReply(540791, 42827, 42837);
					return;
				}
				f_830_a1_v("Neutral");
				tv0->SetMessage(525539);
				tv0->ClearReplies();
				if (f_1cf7_a1_b(tv1)) {
					tv0->AddReply(525559, 26916, 26915);
				}
				if (f_1d03_a1_b(tv1)) {
					tv0->AddReply(525562, 26919, 26918);
				}
				tv0->AddReply(525540, -1, 26896);
				tv0->AddReply(540788, -1, 42834);
				return;
			}
			if (a0 == 26919) {
				f_830_a1_v("Neutral");
				tv0->SetMessage(525563);
				tv0->ClearReplies();
				tv0->AddReply(540835, 42893, 42892);
				tv0->AddReply(540837, 42893, 42894);
				return;
			}
			if (a0 == 42893) {
				f_830_a1_v("Neutral");
				tv0->SetMessage(540836);
				tv0->ClearReplies();
				tv0->AddReply(525564, -1, 26920);
				tv0->AddReply(540838, 42897, 42896);
				return;
			}
			if (a0 == 42897) {
				f_830_a1_v("Suffering");
				tv0->SetMessage(540839);
				tv0->ClearReplies();
				tv0->AddReply(525565, -1, 26921);
				return;
			}
			if (a0 == 26916) {
				tv0->SetMessage(525560);
				tv0->ClearReplies();
				tv0->AddReply(540789, 42836, 42835);
				return;
			}
			if (a0 == 42836) {
				f_830_a1_v("Neutral");
				tv0->SetMessage(540790);
				tv0->ClearReplies();
				tv0->AddReply(525561, -1, 26917);
				return;
			}
			if (a0 == 42827) {
				f_830_a1_v("Neutral");
				tv0->SetMessage(540781);
				tv0->ClearReplies();
				tv0->AddReply(540782, 42829, 42828);
				tv0->AddReply(540792, 42829, 42839);
				return;
			}
			if (a0 == 42829) {
				f_830_a1_v("Suffering");
				tv0->SetMessage(540783);
				tv0->ClearReplies();
				tv0->AddReply(540784, 42831, 42830);
				return;
			}
			if (a0 == 42831) {
				f_830_a1_v("Neutral");
				tv0->SetMessage(540785);
				tv0->ClearReplies();
				tv0->AddReply(540786, 42833, 42832);
				tv0->AddReply(540793, 42833, 42841);
				return;
			}
			if (a0 == 42833) {
				f_830_a1_v("Neutral");
				tv0->SetMessage(540787);
				tv0->ClearReplies();
				tv0->AddReply(525537, -1, 26893);
				tv0->AddReply(525538, -1, 26894);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			if (f_1d0f_a1_b(tv1)) {
				f_1b0a_a2_v(tv1, tv0);
				f_1c08_a2_v(tv1, tv0);
				f_a4f_a1_v("Neutral");
				tv0->SetMessage(525736);
				tv0->ClearReplies();
				tv0->AddReply(540845, 42904, 42903);
				tv0->AddReply(529239, 30694, 30693);
				break;
			}
			f_a4f_a1_v("Neutral");
			tv0->SetMessage(525743);
			tv0->ClearReplies();
			if (f_1d1b_a1_b(tv1)) {
				tv0->AddReply(525744, 27057, 27056);
			}
			if (f_1d27_a1_b(tv1)) {
				tv0->AddReply(525781, 42916, 27093);
			}
			tv0->AddReply(525747, -1, 27059);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_a4f_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a1 == 27053) {
				f_1b10_a2_v(tv1, tv0);
				f_1c4d_a2_v(tv1, tv0);
			}
			if (a1 == 42915) {
				f_1b10_a2_v(tv1, tv0);
				f_1c4d_a2_v(tv1, tv0);
			}
			if (a1 == 27058) {
				f_1b10_a2_v(tv1, tv0);
			}
			if (a1 == 27095) {
				f_1b2e_a2_v(tv1, tv0);
				f_1c83_a2_v(tv1, tv0);
			}
			if (a1 == 42922) {
				f_1b2e_a2_v(tv1, tv0);
				f_1c83_a2_v(tv1, tv0);
			}
			if (a1 == 30699) {
				f_1b2e_a2_v(tv1, tv0);
				f_1a7f_a2_v(tv1, tv0);
			}
			if (a0 == 27048) {
				if (f_1d0f_a1_b(tv1)) {
					f_1b0a_a2_v(tv1, tv0);
					f_1c08_a2_v(tv1, tv0);
					f_a4f_a1_v("Neutral");
					tv0->SetMessage(525736);
					tv0->ClearReplies();
					tv0->AddReply(540845, 42904, 42903);
					tv0->AddReply(529239, 30694, 30693);
					return;
				}
				f_a4f_a1_v("Neutral");
				tv0->SetMessage(525743);
				tv0->ClearReplies();
				if (f_1d1b_a1_b(tv1)) {
					tv0->AddReply(525744, 27057, 27056);
				}
				if (f_1d27_a1_b(tv1)) {
					tv0->AddReply(525781, 42916, 27093);
				}
				tv0->AddReply(525747, -1, 27059);
				return;
			}
			if (a0 == 42916) {
				f_a4f_a1_v("Suffering");
				tv0->SetMessage(540855);
				tv0->ClearReplies();
				tv0->AddReply(540856, 42918, 42917);
				return;
			}
			if (a0 == 42918) {
				f_a4f_a1_v("Neutral");
				tv0->SetMessage(540857);
				tv0->ClearReplies();
				tv0->AddReply(540858, 30697, 42919);
				tv0->AddReply(540859, 30697, 42920);
				return;
			}
			if (a0 == 30697) {
				f_a4f_a1_v("Fear");
				tv0->SetMessage(529243);
				tv0->ClearReplies();
				tv0->AddReply(529244, 30700, 30698);
				tv0->AddReply(529245, -1, 30699);
				return;
			}
			if (a0 == 30700) {
				f_a4f_a1_v("Fear");
				tv0->SetMessage(529246);
				tv0->ClearReplies();
				tv0->AddReply(529247, 27094, 30701);
				tv0->AddReply(540860, -1, 42922);
				return;
			}
			if (a0 == 27094) {
				f_a4f_a1_v("Penetrating");
				tv0->SetMessage(525782);
				tv0->ClearReplies();
				tv0->AddReply(525783, -1, 27095);
				return;
			}
			if (a0 == 27057) {
				f_a4f_a1_v("Neutral");
				tv0->SetMessage(525745);
				tv0->ClearReplies();
				tv0->AddReply(525746, -1, 27058);
				return;
			}
			if (a0 == 30694) {
				f_a4f_a1_v("Suffering");
				tv0->SetMessage(529240);
				tv0->ClearReplies();
				tv0->AddReply(529241, 30696, 30695);
				tv0->AddReply(540848, 42908, 42907);
				return;
			}
			if (a0 == 42908) {
				f_a4f_a1_v("Neutral");
				tv0->SetMessage(540849);
				tv0->ClearReplies();
				tv0->AddReply(540850, 30696, 42909);
				tv0->AddReply(540851, 42911, 42910);
				return;
			}
			if (a0 == 42911) {
				f_a4f_a1_v("Neutral");
				tv0->SetMessage(540852);
				tv0->ClearReplies();
				tv0->AddReply(540853, 30696, 42912);
				return;
			}
			if (a0 == 30696) {
				f_a4f_a1_v("Suffering");
				tv0->SetMessage(529242);
				tv0->ClearReplies();
				tv0->AddReply(525737, 27050, 27049);
				return;
			}
			if (a0 == 27050) {
				f_a4f_a1_v("Suffering");
				tv0->SetMessage(525738);
				tv0->ClearReplies();
				tv0->AddReply(525739, 27052, 27051);
				tv0->AddReply(540854, -1, 42915);
				return;
			}
			if (a0 == 27052) {
				f_a4f_a1_v("Neutral");
				tv0->SetMessage(525740);
				tv0->ClearReplies();
				tv0->AddReply(525741, -1, 27053);
				tv0->AddReply(525742, -1, 27054);
				return;
			}
			if (a0 == 42904) {
				f_a4f_a1_v("Penetrating");
				tv0->SetMessage(540846);
				tv0->ClearReplies();
				tv0->AddReply(540847, 30694, 42905);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			if (f_1d33_a1_b(tv1)) {
				f_1b38_a2_v(tv1, tv0);
				f_1c0e_a2_v(tv1, tv0);
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(525891);
				tv0->ClearReplies();
				tv0->AddReply(540863, 42926, 42925);
				tv0->AddReply(540861, 42926, 42923);
				break;
			}
			f_cd9_a1_v("Neutral");
			tv0->SetMessage(525894);
			tv0->ClearReplies();
			if (f_1d3f_a1_b(tv1)) {
				tv0->AddReply(525895, 27188, 27187);
			}
			if (f_1d4b_a1_b(tv1)) {
				tv0->AddReply(525932, 30523, 27224);
			}
			tv0->AddReply(525898, -1, 27190);
			tv0->AddReply(529078, -1, 30522);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_cd9_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a1 == 27184) {
				f_1b3e_a2_v(tv1, tv0);
				f_1c9f_a2_v(tv1, tv0);
			}
			if (a1 == 27189) {
				f_1b3e_a2_v(tv1, tv0);
				f_1c9f_a2_v(tv1, tv0);
			}
			if (a1 == 27226) {
				f_1b58_a2_v(tv1, tv0);
				f_1c1a_a2_v(tv1, tv0);
			}
			if (a1 == 30529) {
				f_1b58_a2_v(tv1, tv0);
				f_1c1a_a2_v(tv1, tv0);
			}
			if (a0 == 27183) {
				if (f_1d33_a1_b(tv1)) {
					f_1b38_a2_v(tv1, tv0);
					f_1c0e_a2_v(tv1, tv0);
					f_cd9_a1_v("Neutral");
					tv0->SetMessage(525891);
					tv0->ClearReplies();
					tv0->AddReply(540863, 42926, 42925);
					tv0->AddReply(540861, 42926, 42923);
					return;
				}
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(525894);
				tv0->ClearReplies();
				if (f_1d3f_a1_b(tv1)) {
					tv0->AddReply(525895, 27188, 27187);
				}
				if (f_1d4b_a1_b(tv1)) {
					tv0->AddReply(525932, 30523, 27224);
				}
				tv0->AddReply(525898, -1, 27190);
				tv0->AddReply(529078, -1, 30522);
				return;
			}
			if (a0 == 30523) {
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(529079);
				tv0->ClearReplies();
				tv0->AddReply(529080, 30525, 30524);
				tv0->AddReply(529086, 30531, 30530);
				return;
			}
			if (a0 == 30531) {
				f_cd9_a1_v("Suffering");
				tv0->SetMessage(529087);
				tv0->ClearReplies();
				tv0->AddReply(529088, 30525, 30532);
				return;
			}
			if (a0 == 30525) {
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(529081);
				tv0->ClearReplies();
				tv0->AddReply(529082, 27225, 30526);
				return;
			}
			if (a0 == 27225) {
				f_cd9_a1_v("Fear");
				tv0->SetMessage(525933);
				tv0->ClearReplies();
				tv0->AddReply(529084, 30534, 30528);
				tv0->AddReply(529085, -1, 30529);
				return;
			}
			if (a0 == 30534) {
				f_cd9_a1_v("Fear");
				tv0->SetMessage(529089);
				tv0->ClearReplies();
				tv0->AddReply(525934, -1, 27226);
				return;
			}
			if (a0 == 27188) {
				f_cd9_a1_v("Penetrating");
				tv0->SetMessage(525896);
				tv0->ClearReplies();
				tv0->AddReply(525897, -1, 27189);
				return;
			}
			if (a0 == 42926) {
				f_cd9_a1_v("Suffering");
				tv0->SetMessage(540864);
				tv0->ClearReplies();
				tv0->AddReply(529070, 30515, 30514);
				tv0->AddReply(540865, 42929, 42928);
				return;
			}
			if (a0 == 42929) {
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(540866);
				tv0->ClearReplies();
				tv0->AddReply(540867, 30515, 42930);
				return;
			}
			if (a0 == 30515) {
				f_cd9_a1_v("Fear");
				tv0->SetMessage(529071);
				tv0->ClearReplies();
				tv0->AddReply(540868, 42932, 42931);
				tv0->AddReply(540884, 42932, 42952);
				return;
			}
			if (a0 == 42932) {
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(540869);
				tv0->ClearReplies();
				tv0->AddReply(529072, 30517, 30516);
				tv0->AddReply(540885, 42958, 42954);
				return;
			}
			if (a0 == 30517) {
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(529073);
				tv0->ClearReplies();
				tv0->AddReply(529074, 30519, 30518);
				tv0->AddReply(540886, 42956, 42955);
				return;
			}
			if (a0 == 42956) {
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(540887);
				tv0->ClearReplies();
				tv0->AddReply(540888, 42958, 42957);
				return;
			}
			if (a0 == 42958) {
				f_cd9_a1_v("Neutral");
				tv0->SetMessage(540889);
				tv0->ClearReplies();
				tv0->AddReply(540890, 30519, 42960);
				return;
			}
			if (a0 == 30519) {
				f_cd9_a1_v("Suffering");
				tv0->SetMessage(529075);
				tv0->ClearReplies();
				tv0->AddReply(525892, -1, 27184);
				tv0->AddReply(525893, 30520, 27185);
				return;
			}
			if (a0 == 30520) {
				f_cd9_a1_v("Grin");
				tv0->SetMessage(529076);
				tv0->ClearReplies();
				tv0->AddReply(529077, -1, 30521);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			f_f4f_a1_v("Neutral");
			tv0->SetMessage(526186);
			tv0->ClearReplies();
			if (f_1d57_a1_b(tv1)) {
				tv0->AddReply(526187, 30128, 27468);
			}
			if (f_1d63_a1_b(tv1)) {
				tv0->AddReply(526203, 30138, 27484);
			}
			tv0->AddReply(526190, -1, 27471);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_f4f_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a1 == 27470) {
				f_1b62_a2_v(tv1, tv0);
			}
			if (a1 == 27488) {
				f_1b6b_a2_v(tv1, tv0);
			}
			if (a0 == 27467) {
				f_f4f_a1_v("Neutral");
				tv0->SetMessage(526186);
				tv0->ClearReplies();
				if (f_1d57_a1_b(tv1)) {
					tv0->AddReply(526187, 30128, 27468);
				}
				if (f_1d63_a1_b(tv1)) {
					tv0->AddReply(526203, 30138, 27484);
				}
				tv0->AddReply(526190, -1, 27471);
				return;
			}
			if (a0 == 30138) {
				f_f4f_a1_v("Neutral");
				tv0->SetMessage(528718);
				tv0->ClearReplies();
				tv0->AddReply(528719, 30140, 30139);
				tv0->AddReply(528730, 30140, 30151);
				return;
			}
			if (a0 == 30140) {
				f_f4f_a1_v("Neutral");
				tv0->SetMessage(528720);
				tv0->ClearReplies();
				tv0->AddReply(528721, 30142, 30141);
				tv0->AddReply(528731, 30154, 30153);
				return;
			}
			if (a0 == 30154) {
				f_f4f_a1_v("Fear");
				tv0->SetMessage(528732);
				tv0->ClearReplies();
				tv0->AddReply(528733, 30142, 30155);
				return;
			}
			if (a0 == 30142) {
				f_f4f_a1_v("Fear");
				tv0->SetMessage(528722);
				tv0->ClearReplies();
				tv0->AddReply(528723, 27485, 30143);
				tv0->AddReply(528724, 27485, 30144);
				return;
			}
			if (a0 == 27485) {
				f_f4f_a1_v("Neutral");
				tv0->SetMessage(526204);
				tv0->ClearReplies();
				tv0->AddReply(528725, 30147, 30146);
				tv0->AddReply(528727, 30147, 30148);
				return;
			}
			if (a0 == 30147) {
				f_f4f_a1_v("Penetrating");
				tv0->SetMessage(528726);
				tv0->ClearReplies();
				tv0->AddReply(528728, 30150, 30149);
				return;
			}
			if (a0 == 30150) {
				f_f4f_a1_v("Penetrating");
				tv0->SetMessage(528729);
				tv0->ClearReplies();
				tv0->AddReply(526205, 27487, 27486);
				tv0->AddReply(528734, 27487, 30157);
				return;
			}
			if (a0 == 27487) {
				f_f4f_a1_v("Penetrating");
				tv0->SetMessage(526206);
				tv0->ClearReplies();
				tv0->AddReply(526207, -1, 27488);
				return;
			}
			if (a0 == 30128) {
				f_f4f_a1_v("Neutral");
				tv0->SetMessage(528709);
				tv0->ClearReplies();
				tv0->AddReply(528710, 30131, 30129);
				tv0->AddReply(528711, 30131, 30130);
				return;
			}
			if (a0 == 30131) {
				f_f4f_a1_v("Grin");
				tv0->SetMessage(528712);
				tv0->ClearReplies();
				tv0->AddReply(528713, 27469, 30133);
				return;
			}
			if (a0 == 27469) {
				f_f4f_a1_v("Penetrating");
				tv0->SetMessage(526188);
				tv0->ClearReplies();
				tv0->AddReply(528714, 30135, 30134);
				return;
			}
			if (a0 == 30135) {
				f_f4f_a1_v("Suffering");
				tv0->SetMessage(528715);
				tv0->ClearReplies();
				tv0->AddReply(528716, 30137, 30136);
				return;
			}
			if (a0 == 30137) {
				f_f4f_a1_v("Neutral");
				tv0->SetMessage(528717);
				tv0->ClearReplies();
				tv0->AddReply(526189, -1, 27470);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			if (f_1d93_a1_b(tv1) && !f_1dc3_a1_b(tv1)) {
				f_1bc7_a2_v(tv1, tv0);
				f_1c14_a2_v(tv1, tv0);
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526701);
				tv0->ClearReplies();
				tv0->AddReply(528907, 30337, 30336);
				break;
			}
			if (!f_1dc3_a1_b(tv1)) {
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526706);
				tv0->ClearReplies();
				if (f_1d87_a1_b(tv1)) {
					tv0->AddReply(526707, 27984, 27983);
				}
				if (f_1d9f_a1_b(tv1)) {
					tv0->AddReply(526710, 27987, 27986);
				}
				tv0->AddReply(526713, -1, 27989);
				break;
			}
			if (f_1dcf_a1_b(tv1)) {
				f_1c21_a2_v(tv1, tv0);
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526714);
				tv0->ClearReplies();
				tv0->AddReply(526715, 27992, 27991);
				tv0->AddReply(528913, 27992, 30342);
				break;
			}
			f_11b0_a1_v("Neutral");
			tv0->SetMessage(526724);
			tv0->ClearReplies();
			tv0->AddReply(526725, -1, 28002);
			tv0->AddReply(528916, -1, 30346);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_11b0_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a1 == 27980) {
				f_1bad_a2_v(tv1, tv0);
				f_1c63_a2_v(tv1, tv0);
			}
			if (a1 == 27985) {
				f_1bad_a2_v(tv1, tv0);
				f_1c5d_a2_v(tv1, tv0);
			}
			if (a1 == 27988) {
				f_1bcd_a2_v(tv1, tv0);
			}
			if (a1 == 44874) {
				f_1bcd_a2_v(tv1, tv0);
			}
			if (a1 == 44875) {
				f_1bcd_a2_v(tv1, tv0);
			}
			if (a1 == 27997) {
				f_1c27_a2_v(tv1, tv0);
			}
			if (a1 == 27998) {
				f_1c27_a2_v(tv1, tv0);
			}
			if (a0 == 27977) {
				if (f_1d93_a1_b(tv1) && !f_1dc3_a1_b(tv1)) {
					f_1bc7_a2_v(tv1, tv0);
					f_1c14_a2_v(tv1, tv0);
					f_11b0_a1_v("Neutral");
					tv0->SetMessage(526701);
					tv0->ClearReplies();
					tv0->AddReply(528907, 30337, 30336);
					return;
				}
				if (!f_1dc3_a1_b(tv1)) {
					f_11b0_a1_v("Neutral");
					tv0->SetMessage(526706);
					tv0->ClearReplies();
					if (f_1d87_a1_b(tv1)) {
						tv0->AddReply(526707, 27984, 27983);
					}
					if (f_1d9f_a1_b(tv1)) {
						tv0->AddReply(526710, 27987, 27986);
					}
					tv0->AddReply(526713, -1, 27989);
					return;
				}
				if (f_1dcf_a1_b(tv1)) {
					f_1c21_a2_v(tv1, tv0);
					f_11b0_a1_v("Neutral");
					tv0->SetMessage(526714);
					tv0->ClearReplies();
					tv0->AddReply(526715, 27992, 27991);
					tv0->AddReply(528913, 27992, 30342);
					return;
				}
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526724);
				tv0->ClearReplies();
				tv0->AddReply(526725, -1, 28002);
				tv0->AddReply(528916, -1, 30346);
				return;
			}
			if (a0 == 27992) {
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526716);
				tv0->ClearReplies();
				tv0->AddReply(526717, 27994, 27993);
				return;
			}
			if (a0 == 27994) {
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526718);
				tv0->ClearReplies();
				tv0->AddReply(526719, 44645, 27995);
				tv0->AddReply(526723, 30344, 27999);
				return;
			}
			if (a0 == 30344) {
				f_11b0_a1_v("Fear");
				tv0->SetMessage(528914);
				tv0->ClearReplies();
				tv0->AddReply(528915, 27996, 30345);
				return;
			}
			if (a0 == 44645) {
				f_11b0_a1_v("Penetrating");
				tv0->SetMessage(542293);
				tv0->ClearReplies();
				tv0->AddReply(542294, 27996, 44646);
				tv0->AddReply(542295, 27996, 44647);
				return;
			}
			if (a0 == 27996) {
				f_11b0_a1_v("Suffering");
				tv0->SetMessage(526720);
				tv0->ClearReplies();
				tv0->AddReply(526721, -1, 27997);
				tv0->AddReply(526722, -1, 27998);
				return;
			}
			if (a0 == 27987) {
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526711);
				tv0->ClearReplies();
				tv0->AddReply(526712, -1, 27988);
				tv0->AddReply(542486, 44873, 44872);
				return;
			}
			if (a0 == 44873) {
				f_11b0_a1_v("Fear");
				tv0->SetMessage(542487);
				tv0->ClearReplies();
				tv0->AddReply(542488, -1, 44874);
				tv0->AddReply(542489, -1, 44875);
				return;
			}
			if (a0 == 27984) {
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526708);
				tv0->ClearReplies();
				tv0->AddReply(526709, -1, 27985);
				return;
			}
			if (a0 == 30337) {
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(528908);
				tv0->ClearReplies();
				tv0->AddReply(528909, 30339, 30338);
				return;
			}
			if (a0 == 30339) {
				f_11b0_a1_v("Suffering");
				tv0->SetMessage(528910);
				tv0->ClearReplies();
				tv0->AddReply(526702, 30340, 27978);
				return;
			}
			if (a0 == 30340) {
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(528911);
				tv0->ClearReplies();
				tv0->AddReply(528912, 27979, 30341);
				tv0->AddReply(526705, -1, 27981);
				return;
			}
			if (a0 == 27979) {
				f_11b0_a1_v("Neutral");
				tv0->SetMessage(526703);
				tv0->ClearReplies();
				tv0->AddReply(526704, -1, 27980);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			f_1430_a1_v("Neutral");
			tv0->SetMessage(527640);
			tv0->ClearReplies();
			if (f_1d7b_a1_b(tv1) && f_1d6f_a1_b(tv1)) {
				tv0->AddReply(527642, 28990, 28989);
			}
			tv0->AddReply(527641, -1, 28988);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_1430_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a1 == 28989) {
				f_1ba7_a2_v(tv1, tv0);
			}
			if (a1 == 29001) {
				f_1b74_a2_v(tv1, tv0);
			}
			if (a1 == 29008) {
				f_1b74_a2_v(tv1, tv0);
			}
			if (a0 == 28987) {
				f_1430_a1_v("Neutral");
				tv0->SetMessage(527640);
				tv0->ClearReplies();
				if (f_1d7b_a1_b(tv1) && f_1d6f_a1_b(tv1)) {
					tv0->AddReply(527642, 28990, 28989);
				}
				tv0->AddReply(527641, -1, 28988);
				return;
			}
			if (a0 == 28990) {
				f_1430_a1_v("Penetrating");
				tv0->SetMessage(527643);
				tv0->ClearReplies();
				tv0->AddReply(527644, 28992, 28991);
				tv0->AddReply(527655, 29003, 29002);
				tv0->AddReply(527660, -1, 29007);
				return;
			}
			if (a0 == 29003) {
				f_1430_a1_v("Neutral");
				tv0->SetMessage(527656);
				tv0->ClearReplies();
				tv0->AddReply(527657, 28994, 29004);
				return;
			}
			if (a0 == 28992) {
				f_1430_a1_v("Neutral");
				tv0->SetMessage(527645);
				tv0->ClearReplies();
				tv0->AddReply(527646, 28994, 28993);
				return;
			}
			if (a0 == 28994) {
				f_1430_a1_v("Neutral");
				tv0->SetMessage(527647);
				tv0->ClearReplies();
				tv0->AddReply(527648, 28996, 28995);
				return;
			}
			if (a0 == 28996) {
				f_1430_a1_v("Neutral");
				tv0->SetMessage(527649);
				tv0->ClearReplies();
				tv0->AddReply(527650, 28998, 28997);
				tv0->AddReply(527659, -1, 29006);
				return;
			}
			if (a0 == 28998) {
				f_1430_a1_v("Penetrating");
				tv0->SetMessage(527651);
				tv0->ClearReplies();
				tv0->AddReply(527652, 29000, 28999);
				tv0->AddReply(527661, -1, 29008);
				return;
			}
			if (a0 == 29000) {
				f_1430_a1_v("Penetrating");
				tv0->SetMessage(527653);
				tv0->ClearReplies();
				tv0->AddReply(527654, -1, 29001);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t19{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			f_15b8_a1_v("Suffering");
			tv0->SetMessage(539309);
			tv0->ClearReplies();
			tv0->AddReply(542633, 45037, 45035);
			tv0->AddReply(539310, -1, 41253);
			tv0->AddReply(542634, -1, 45036);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_15b8_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a0 == 41252) {
				f_15b8_a1_v("Suffering");
				tv0->SetMessage(539309);
				tv0->ClearReplies();
				tv0->AddReply(542633, 45037, 45035);
				tv0->AddReply(539310, -1, 41253);
				tv0->AddReply(542634, -1, 45036);
				return;
			}
			if (a0 == 45037) {
				f_15b8_a1_v("Suffering");
				tv0->SetMessage(542635);
				tv0->ClearReplies();
				tv0->AddReply(542636, 45040, 45038);
				tv0->AddReply(542637, -1, 45039);
				return;
			}
			if (a0 == 45040) {
				f_15b8_a1_v("Penetrating");
				tv0->SetMessage(542638);
				tv0->ClearReplies();
				tv0->AddReply(542639, 45042, 45041);
				return;
			}
			if (a0 == 45042) {
				f_15b8_a1_v("Suffering");
				tv0->SetMessage(542640);
				tv0->ClearReplies();
				tv0->AddReply(542641, 45045, 45043);
				tv0->AddReply(542642, -1, 45044);
				return;
			}
			if (a0 == 45045) {
				f_15b8_a1_v("Penetrating");
				tv0->SetMessage(542643);
				tv0->ClearReplies();
				tv0->AddReply(542644, 45048, 45046);
				tv0->AddReply(542645, -1, 45047);
				return;
			}
			if (a0 == 45048) {
				f_15b8_a1_v("Penetrating");
				tv0->SetMessage(542646);
				tv0->ClearReplies();
				tv0->AddReply(542647, 45054, 45049);
				tv0->AddReply(542648, 45051, 45050);
				return;
			}
			if (a0 == 45051) {
				f_15b8_a1_v("Penetrating");
				tv0->SetMessage(542649);
				tv0->ClearReplies();
				tv0->AddReply(542650, -1, 45052);
				tv0->AddReply(542651, -1, 45053);
				return;
			}
			if (a0 == 45054) {
				f_15b8_a1_v("Penetrating");
				tv0->SetMessage(542652);
				tv0->ClearReplies();
				tv0->AddReply(542653, -1, 45055);
				tv0->AddReply(542654, -1, 45056);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		if (!f_18b0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1a77_a0_i());
		L0->SetNPCDescription(f_1a75_a0_i());
		L0->SetPhoto(f_1a79_a0_s());
		L0->SetPhoto2(f_1a7b_a0_s());
		L0->SetPlayerName(f_1fa2_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1907_a1_b(f_19c6_a0_o());
		t21{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18f5_a1_v(a0);
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
			f_1724_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_1a7d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1991_a1_v(tv2);
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

	void f_1724_a1_v(string a0)
	{
		if (!f_1a7d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_19a1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_19bf_a0_v();
			if (a0 == 42548) {
				f_1724_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_1a7d_a0_b()) {
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
		f_176b_a0_v();
	}

	void f_176b_a0_v(void)
	{
		if (!f_18ab_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_181b_a0_v();
		}
	}

	bool f_1779_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_18a2_a1_b(L0);
	}

	void f_1788_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_178d_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1867_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_17a3_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_17ac_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_17ac_a0_v();
			if (f_18ab_a0_b() && f_178d_a0_b()) {
				if (f_1779_a0_b()) {
					f_1941_a1_b(f_19c6_a0_o());
				}
			} else {
				f_1788_a0_v();
				f_17a3_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1862_a0_v();
		f_17ac_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_17ac_a0_v();
		f_1991_a1_v("Neutral");
		f_17a3_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_17a3_a0_v();
		} else {
			f_1991_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1862_a0_v();
			f_18a2_a1_b(a0);
			enable OnUse;
			f_1ffc_a1_v(a0);
			f_1991_a1_v("Neutral");
			f_17ac_a0_v();
			f_17a3_a0_v();
		}
	}
}

void f_181b_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_18ab_a0_b()) {
		return;
	}
	L0 = f_1a64_a0_i();
	for (L1 = 0; L1 < 5 && f_18ab_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1a5d_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1860_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1860_a0_b(void)
{
	return true;
}

void f_1862_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1867_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_186f_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_187b_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_186f_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_19d6_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_1891_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1898_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_18a2_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1898_a1_b(L0);
}

bool f_18ab_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_18b0_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_19cc_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1a7d_a0_b()) {
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

void f_18f5_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1a7d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1907_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1941_a1_b(a0)) {
			if (!f_1966_a1_b(a0)) {
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
		if (!f_1966_a1_b(a0)) {
			if (!f_1941_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1941_a1_b(object a0)
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
	return f_19b0_a1_b(L4);
}

bool f_1966_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1a4e_a0_i() + "m";
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
	return f_19b0_a1_b(L4);
}

void f_1991_a1_v(string a0)
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

void f_19a1_a2_v(string a0, bool a1)
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

bool f_19b0_a1_b(string a0)
{
	if (f_1a7d_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_19bf_a0_v(void)
{
	if (f_1a7d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_19c6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_19cc_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_19d6_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_19e1_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_19e6_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_19f1_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_19fd_a2_v(object a0, int a1)
{
	f_1891_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_19f1_a2_v(L0, a1);
	}
}

bool f_1a10_a2_b(object a0, float a1)
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
	f_1a33_a1_v(a1);
	f_187b_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_1a33_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_1a3d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1a49_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1a4e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1a57_a1_b(int a0)
{
	return f_1a4e_a0_i() == a0;
}

string f_1a5d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1a64_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1a5d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1a75_a0_i(void)
{
	return 515539;
}

int f_1a77_a0_i(void)
{
	return 502864;
}

string f_1a79_a0_s(void)
{
	return "ui/NPC_Katerina.png";
}

string f_1a7b_a0_s(void)
{
	return "ui/NPC_Katerina_b.png";
}

bool f_1a7d_a0_b(void)
{
	return true;
}

void f_1a7f_a2_v(object a0, object a1)
{
	f_1a10_a2_b(a0, 0.05000000074505806);
}

void f_1a86_a2_v(object a0, object a1)
{
	@SetVariable("k1q01", 3);
	f_1e29_a0_v();
}

void f_1a8f_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k1q02", 2);
	L0 = f_1f70_a0_o();
	L0->AddMark("k1q02KaterinaGotoGeorg", "pt_map_georg", 0, 524778, f_1a49_a0_f());
	f_1e36_a0_v();
}

void f_1aa6_a2_v(object a0, object a1)
{
	@SetVariable("ook2Katerina1", 1);
}

void f_1aac_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k2q02", 1);
	L0 = f_1f70_a0_o();
	L0->AddMark("k2q02KaterinaGotoLara", "pt_map_lara", 0, 539380, f_1a49_a0_f());
	f_1e43_a0_v();
	f_1e6a_a0_v();
}

void f_1ac6_a2_v(object a0, object a1)
{
	@SetVariable("k2q02", 1000);
	f_1e5d_a0_v();
}

void f_1acf_a2_v(object a0, object a1)
{
	@SetVariable("k2q02", 1000);
	f_1e50_a0_v();
}

void f_1ad8_a2_v(object a0, object a1)
{
	@SetVariable("ook3Katerina1", 1);
}

void f_1ade_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k3q02", 1);
	L0 = f_1f70_a0_o();
	L0->AddMark("k3q02KaterinaGotoJulia", "pt_map_julia", 0, 525572, f_1a49_a0_f());
	f_1e77_a0_v();
	f_1e9e_a0_v();
}

void f_1af8_a2_v(object a0, object a1)
{
	@SetVariable("k3q02", 1000);
	f_1e91_a0_v();
}

void f_1b01_a2_v(object a0, object a1)
{
	@SetVariable("k3q02", 1000);
	f_1e84_a0_v();
}

void f_1b0a_a2_v(object a0, object a1)
{
	@SetVariable("ook4Katerina1", 1);
}

void f_1b10_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q02", 1);
	L0 = f_1f70_a0_o();
	L0->AddMark("k4q02KaterinaGotoTheater", "pt_map_theater", 0, 515281, f_1a49_a0_f());
	f_1eab_a0_v();
	f_1ec5_a0_v();
	f_19e6_a1_o("quest_k4_02");
}

void f_1b2e_a2_v(object a0, object a1)
{
	f_1eb8_a0_v();
	f_1a3d_a2_b("quest_k4_02", "completed");
}

void f_1b38_a2_v(object a0, object a1)
{
	@SetVariable("ook5Katerina1", 1);
}

void f_1b3e_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1f70_a0_o();
	L0->AddMark("k5q02KaterinaGotoPetr", "pt_map_petr", 0, 515291, f_1a49_a0_f());
	f_1ed2_a0_v();
	f_1eec_a0_v();
	f_19e6_a1_o("quest_k5_02");
}

void f_1b58_a2_v(object a0, object a1)
{
	f_1edf_a0_v();
	f_1a3d_a2_b("quest_k5_02", "completed");
}

void f_1b62_a2_v(object a0, object a1)
{
	@SetVariable("k7q01", 6);
	f_1f3a_a0_v();
}

void f_1b6b_a2_v(object a0, object a1)
{
	@SetVariable("k7q01", 9);
	f_1f2d_a0_v();
}

void f_1b74_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	L0 = L0 + 1;
	@SetVariable("k11q01SoulCount", L0);
	if (L0 == 2) {
		f_1e1c_a0_v();
	} else {
		if (L0 == 3) {
			f_1e0f_a0_v();
		} else {
			if (L0 == 4) {
				f_1e02_a0_v();
			} else {
				if (L0 == 5) {
					f_1df5_a0_v();
				} else {
					if (L0 == 6) {
						f_1de8_a0_v();
					} else {
						if (L0 == 7) {
							f_1ddb_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_1ba7_a2_v(object a0, object a1)
{
	@SetVariable("ook11Katerina1", 1);
}

void f_1bad_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k6q02", 1);
	L0 = f_1f70_a0_o();
	L0->AddMark("k6q02GotoKapella", "pt_map_kapella", 0, 541595, f_1a49_a0_f());
	f_1ef9_a0_v();
	f_1f20_a0_v();
}

void f_1bc7_a2_v(object a0, object a1)
{
	@SetVariable("ook6Katerina1", 1);
}

void f_1bcd_a2_v(object a0, object a1)
{
	@SetVariable("k6q02", 1000);
	f_1f13_a0_v();
}

void f_1bd6_a2_v(object a0, object a1)
{
	@SetVariable("ook1Katerina1", 1);
}

void f_1bdc_a2_v(object a0, object a1)
{
	@SetVariable("ook1Katerina2", 1);
}

void f_1be2_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_19fd_a2_v(a0, 1000);
}

void f_1bec_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1bf2_a2_v(object a0, object a1)
{
	f_1f81_a3_v(f_1f70_a0_o(), "pt_map_georg", 2);
	a1->ShowMap(f_1f70_a0_o());
}

void f_1c02_a2_v(object a0, object a1)
{
	@SetVariable("k3KaterinaVisit", 1);
}

void f_1c08_a2_v(object a0, object a1)
{
	@SetVariable("k4KaterinaVisit", 1);
}

void f_1c0e_a2_v(object a0, object a1)
{
	@SetVariable("k5KaterinaVisit", 1);
}

void f_1c14_a2_v(object a0, object a1)
{
	@SetVariable("k6KaterinaVisit", 1);
}

void f_1c1a_a2_v(object a0, object a1)
{
	f_1a10_a2_b(a0, -0.019999999552965164);
}

void f_1c21_a2_v(object a0, object a1)
{
	@SetVariable("ook6Katerina2", 1);
}

void f_1c27_a2_v(object a0, object a1)
{
	if (f_19e1_a1_i("k6q02") != 0 && f_19e1_a1_i("k6q02") != -1 && f_19e1_a1_i("k6q02") != 1000) {
		@SetVariable("k6q02", 1000);
		f_1f06_a0_v();
	}
}

void f_1c4d_a2_v(object a0, object a1)
{
	f_1f81_a3_v(f_1f70_a0_o(), "pt_map_theater", 2);
	a1->ShowMap(f_1f70_a0_o());
}

void f_1c5d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_1c63_a2_v(object a0, object a1)
{
	f_1f81_a3_v(f_1f70_a0_o(), "pt_map_kapella", 2);
	a1->ShowMap(f_1f70_a0_o());
}

void f_1c73_a2_v(object a0, object a1)
{
	f_1f81_a3_v(f_1f70_a0_o(), "pt_map_lara", 2);
	a1->ShowMap(f_1f70_a0_o());
}

void f_1c83_a2_v(object a0, object a1)
{
	f_1a10_a2_b(a0, 0.10000000149011612);
}

void f_1c8a_a2_v(object a0, object a1)
{
	f_1a10_a2_b(a0, -0.10000000149011612);
}

void f_1c91_a2_v(object a0, object a1)
{
	@SetVariable("resque_list", 1);
	f_1ff8_a0_v();
}

void f_1c9a_a2_v(object a0, object a1)
{
	a1->SetReturnValue(2000);
}

void f_1c9f_a2_v(object a0, object a1)
{
	f_1f81_a3_v(f_1f70_a0_o(), "pt_map_petr", 2);
	a1->ShowMap(f_1f70_a0_o());
}

bool f_1caf_a1_b(object a0)
{
	if (f_19e1_a1_i("k1q01") == 2) {
		return true;
	}
	return false;
}

bool f_1cbb_a1_b(object a0)
{
	if (f_19e1_a1_i("k1q02") == 1) {
		return true;
	}
	return false;
}

bool f_1cc7_a1_b(object a0)
{
	if (f_19e1_a1_i("ook2Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1cd3_a1_b(object a0)
{
	if (f_19e1_a1_i("k2q02") == 0) {
		return true;
	}
	return false;
}

bool f_1cdf_a1_b(object a0)
{
	if (f_19e1_a1_i("k2q02") == 3) {
		return true;
	}
	return false;
}

bool f_1ceb_a1_b(object a0)
{
	if (f_19e1_a1_i("ook3Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1cf7_a1_b(object a0)
{
	if (f_19e1_a1_i("k3q02") == 0) {
		return true;
	}
	return false;
}

bool f_1d03_a1_b(object a0)
{
	if (f_19e1_a1_i("k3q02") == 3) {
		return true;
	}
	return false;
}

bool f_1d0f_a1_b(object a0)
{
	if (f_19e1_a1_i("ook4Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1d1b_a1_b(object a0)
{
	if (f_19e1_a1_i("k4q02") == 0) {
		return true;
	}
	return false;
}

bool f_1d27_a1_b(object a0)
{
	if (f_19e1_a1_i("k4q02") == 3) {
		return true;
	}
	return false;
}

bool f_1d33_a1_b(object a0)
{
	if (f_19e1_a1_i("ook5Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1d3f_a1_b(object a0)
{
	if (f_19e1_a1_i("k5q02") == 0) {
		return true;
	}
	return false;
}

bool f_1d4b_a1_b(object a0)
{
	if (f_19e1_a1_i("k5q02") == 6) {
		return true;
	}
	return false;
}

bool f_1d57_a1_b(object a0)
{
	if (f_19e1_a1_i("k7q01") == 5) {
		return true;
	}
	return false;
}

bool f_1d63_a1_b(object a0)
{
	if (f_19e1_a1_i("k7q01") == 8) {
		return true;
	}
	return false;
}

bool f_1d6f_a1_b(object a0)
{
	if (f_19e1_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_1d7b_a1_b(object a0)
{
	if (f_19e1_a1_i("ook11Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1d87_a1_b(object a0)
{
	if (f_19e1_a1_i("k6q02") == 0) {
		return true;
	}
	return false;
}

bool f_1d93_a1_b(object a0)
{
	if (f_19e1_a1_i("ook6Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1d9f_a1_b(object a0)
{
	if (f_19e1_a1_i("k6q02") == 3) {
		return true;
	}
	return false;
}

bool f_1dab_a1_b(object a0)
{
	if (f_19e1_a1_i("ook1Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1db7_a1_b(object a0)
{
	if (f_19e1_a1_i("ook1Katerina2") == 0) {
		return true;
	}
	return false;
}

bool f_1dc3_a1_b(object a0)
{
	if (f_19e1_a1_i("k6StopKaterinaTalks") != 0) {
		return true;
	}
	return false;
}

bool f_1dcf_a1_b(object a0)
{
	if (f_19e1_a1_i("ook6Katerina2") == 0) {
		return true;
	}
	return false;
}

void f_1ddb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_1f54_a2_b(L0, 480);
}

void f_1de8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_1f54_a2_b(L0, 480);
}

void f_1df5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_1f54_a2_b(L0, 480);
}

void f_1e02_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_1f54_a2_b(L0, 480);
}

void f_1e0f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_1f54_a2_b(L0, 480);
}

void f_1e1c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_1f54_a2_b(L0, 480);
}

void f_1e29_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 321, 1, 524737);
	f_1f54_a2_b(L0, 318);
}

void f_1e36_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 328, 2, 524773);
	f_1f54_a2_b(L0, 326);
}

void f_1e43_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 470, 2, 527786);
	f_1f54_a2_b(L0, -1);
}

void f_1e50_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 475, 2, 527791);
	f_1f54_a2_b(L0, 470);
}

void f_1e5d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 474, 2, 527790);
	f_1f54_a2_b(L0, 470);
}

void f_1e6a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 471, 2, 527787);
	f_1f54_a2_b(L0, 470);
}

void f_1e77_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 344, 2, 525566);
	f_1f54_a2_b(L0, -1);
}

void f_1e84_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 349, 2, 525571);
	f_1f54_a2_b(L0, 344);
}

void f_1e91_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 348, 2, 525570);
	f_1f54_a2_b(L0, 344);
}

void f_1e9e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 345, 2, 525567);
	f_1f54_a2_b(L0, 344);
}

void f_1eab_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 378, 2, 525784);
	f_1f54_a2_b(L0, -1);
}

void f_1eb8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 383, 2, 525789);
	f_1f54_a2_b(L0, 378);
}

void f_1ec5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 379, 2, 525785);
	f_1f54_a2_b(L0, 378);
}

void f_1ed2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 397, 2, 525935);
	f_1f54_a2_b(L0, -1);
}

void f_1edf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 404, 2, 525942);
	f_1f54_a2_b(L0, 397);
}

void f_1eec_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 398, 2, 525936);
	f_1f54_a2_b(L0, 397);
}

void f_1ef9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 500, 2, 528766);
	f_1f54_a2_b(L0, -1);
}

void f_1f06_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 504, 2, 528770);
	f_1f54_a2_b(L0, 500);
}

void f_1f13_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 793, 2, 543368);
	f_1f54_a2_b(L0, 500);
}

void f_1f20_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 501, 2, 528767);
	f_1f54_a2_b(L0, 500);
}

void f_1f2d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 427, 1, 526226);
	f_1f54_a2_b(L0, 416);
}

void f_1f3a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 424, 1, 526223);
	f_1f54_a2_b(L0, 416);
}

object f_1f47_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1f54_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1f47_a0_o();
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

object f_1f70_a0_o(void)
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

void f_1f81_a3_v(object a0, string a1, float a2)
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

int f_1fa2_a0_i(void)
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

void f_1fb3_a3_v(object a0, bool a1, int a2)
{
	a0->add(7);
	a0->add(23);
	a0->add(21);
	a0->add(9);
	a0->add(3);
	a0->add(1);
	a0->add(11);
	a0->add(13);
	if (a1 == false) {
		a0->add(25);
	}
}

void f_1fd3_a1_v(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	@SetVariable("vol_" + a0, L0 | 8);
}

void f_1fdf_a0_v(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_1fb3_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		f_1fd3_a1_v(L3);
	}
}

void f_1ff8_a0_v(void)
{
	f_1fdf_a0_v();
}

void f_1ffc_a1_v(object a0)
{
	if (!g1) {
		t4{a0};
		g1 = true;
	}
	if (f_1a57_a1_b(1)) {
		if (2000 == t0{a0}) {
			@ShowWindow("people.xml", true);
		}
		return;
	}
	if (f_1a57_a1_b(2)) {
		t2{a0};
		return;
	}
	if (f_1a57_a1_b(3)) {
		t6{a0};
		return;
	}
	if (f_1a57_a1_b(4)) {
		t8{a0};
		return;
	}
	if (f_1a57_a1_b(5)) {
		t10{a0};
		return;
	}
	if (f_1a57_a1_b(6)) {
		t14{a0};
		return;
	}
	if (f_1a57_a1_b(7)) {
		t12{a0};
		return;
	}
	if (f_1a57_a1_b(11)) {
		t16{a0};
		return;
	}
	if (f_1a57_a1_b(12)) {
		t18{a0};
		return;
	}
	t20{a0};
}

