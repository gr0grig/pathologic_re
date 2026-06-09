event evt_11 11;
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
		if (!f_1153_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f4_a0_i());
		L0->SetNPCDescription(f_12f2_a0_i());
		L0->SetPhoto(f_12f6_a0_s());
		L0->SetPhoto2(f_12f8_a0_s());
		L0->SetPlayerName(f_167f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11aa_a1_b(f_1269_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1198_a1_v(a0);
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
			if (f_15b4_a1_b(tv1) && f_15c0_a1_b(tv1)) {
				f_1422_a2_v(tv1, tv0);
				f_b2_a1_v("Neutral");
				tv0->SetMessage(503926);
				tv0->ClearReplies();
				tv0->AddReply(503927, 4276, 4275);
				tv0->AddReply(503929, 4278, 4277);
				break;
			}
			f_b2_a1_v("Sexy");
			tv0->SetMessage(513718);
			tv0->ClearReplies();
			tv0->AddReply(513719, -1, 14985);
			tv0->AddReply(536133, -1, 37892);
			break;
			return;
		}
		if (f_12fa_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1234_a1_v(tv2);
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

	void f_b2_a1_v(string a0)
	{
		if (!f_12fa_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1244_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1262_a0_v();
			if (a0 == 4274) {
				if (f_15b4_a1_b(tv1) && f_15c0_a1_b(tv1)) {
					f_1422_a2_v(tv1, tv0);
					f_b2_a1_v("Neutral");
					tv0->SetMessage(503926);
					tv0->ClearReplies();
					tv0->AddReply(503927, 4276, 4275);
					tv0->AddReply(503929, 4278, 4277);
					return;
				}
				f_b2_a1_v("Sexy");
				tv0->SetMessage(513718);
				tv0->ClearReplies();
				tv0->AddReply(513719, -1, 14985);
				tv0->AddReply(536133, -1, 37892);
				return;
			}
			if (a0 == 4278) {
				f_b2_a1_v("Love");
				tv0->SetMessage(503930);
				tv0->ClearReplies();
				tv0->AddReply(503931, 4276, 4279);
				tv0->AddReply(503932, 4288, 4280);
				tv0->AddReply(503933, -1, 4281);
				return;
			}
			if (a0 == 4276) {
				f_b2_a1_v("Modesty");
				tv0->SetMessage(503928);
				tv0->ClearReplies();
				tv0->AddReply(503937, 4288, 4286);
				tv0->AddReply(503938, 4288, 4287);
				return;
			}
			if (a0 == 4288) {
				f_b2_a1_v("Modesty");
				tv0->SetMessage(503939);
				tv0->ClearReplies();
				tv0->AddReply(503940, 4297, 4291);
				tv0->AddReply(503941, 4294, 4292);
				tv0->AddReply(503942, -1, 4293);
				return;
			}
			if (a0 == 4294) {
				f_b2_a1_v("Love");
				tv0->SetMessage(503943);
				tv0->ClearReplies();
				tv0->AddReply(503944, -1, 4295);
				tv0->AddReply(503945, -1, 4296);
				return;
			}
			if (a0 == 4297) {
				f_b2_a1_v("Modesty");
				tv0->SetMessage(503946);
				tv0->ClearReplies();
				tv0->AddReply(503947, -1, 4298);
				tv0->AddReply(503948, -1, 4299);
				return;
			}
			tv3 = true;
			if (f_12fa_a0_b()) {
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
		if (!f_1153_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f4_a0_i());
		L0->SetNPCDescription(f_12f2_a0_i());
		L0->SetPhoto(f_12f6_a0_s());
		L0->SetPhoto2(f_12f8_a0_s());
		L0->SetPlayerName(f_167f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11aa_a1_b(f_1269_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1198_a1_v(a0);
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
			if (f_1464_a1_b(tv1) && f_147c_a1_b(tv1)) {
				f_1416_a2_v(tv1, tv0);
				f_301_a1_v("Fear");
				tv0->SetMessage(504496);
				tv0->ClearReplies();
				tv0->AddReply(504521, 22246, 4928);
				tv0->AddReply(521059, 22246, 22250);
				break;
			}
			if (f_15e4_a1_b(tv1) && f_14d0_a1_b(tv1) && f_147c_a1_b(tv1) || f_15e4_a1_b(tv1) && f_14ac_a1_b(tv1) && f_147c_a1_b(tv1)) {
				f_12fc_a2_v(tv1, tv0);
				f_301_a1_v("Neutral");
				tv0->SetMessage(532343);
				tv0->ClearReplies();
				tv0->AddReply(533604, 35125, 35124);
				tv0->AddReply(533608, 35129, 35128);
				break;
			}
			f_301_a1_v("Neutral");
			tv0->SetMessage(521052);
			tv0->ClearReplies();
			if (f_156c_a1_b(tv1) && f_14e8_a1_b(tv1)) {
				tv0->AddReply(535143, 36805, 36804);
			}
			if (f_14dc_a1_b(tv1)) {
				tv0->AddReply(535107, 36764, 36763);
			}
			if (f_14b8_a1_b(tv1) && f_150c_a1_b(tv1) && f_1488_a1_b(tv1)) {
				tv0->AddReply(531940, 33345, 33344);
			}
			if (f_1494_a1_b(tv1) && f_14c4_a1_b(tv1) && f_1488_a1_b(tv1)) {
				tv0->AddReply(532458, 33900, 33899);
			}
			if (f_14f4_a1_b(tv1) && f_14a0_a1_b(tv1)) {
				tv0->AddReply(533614, 35137, 35136);
			}
			if (!f_1470_a1_b(tv1)) {
				tv0->AddReply(521053, -1, 22244);
			}
			tv0->AddReply(521054, -1, 22245);
			break;
			return;
		}
		if (f_12fa_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1234_a1_v(tv2);
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

	void f_301_a1_v(string a0)
	{
		if (!f_12fa_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1244_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1262_a0_v();
			if (a1 == 4900) {
				f_13d7_a2_v(tv1, tv0);
				f_13de_a2_v(tv1, tv0);
				f_1373_a2_v(tv1, tv0);
			}
			if (a1 == 4915) {
				f_13d7_a2_v(tv1, tv0);
				f_13de_a2_v(tv1, tv0);
				f_1373_a2_v(tv1, tv0);
			}
			if (a1 == 33775) {
				f_1302_a2_v(tv1, tv0);
				f_1406_a2_v(tv1, tv0);
			}
			if (a1 == 33778) {
				f_1302_a2_v(tv1, tv0);
				f_1406_a2_v(tv1, tv0);
			}
			if (a1 == 36804) {
				f_1389_a2_v(tv1, tv0);
			}
			if (a1 == 36763) {
				f_1383_a2_v(tv1, tv0);
			}
			if (a1 == 33344) {
				f_141c_a2_v(tv1, tv0);
			}
			if (a1 == 33346) {
				f_1331_a2_v(tv1, tv0);
				f_1341_a2_v(tv1, tv0);
			}
			if (a1 == 33899) {
				f_1351_a2_v(tv1, tv0);
			}
			if (a1 == 33901) {
				f_1357_a2_v(tv1, tv0);
				f_1326_a2_v(tv1, tv0);
				f_1362_a2_v(tv1, tv0);
				f_1320_a2_v(tv1, tv0);
			}
			if (a1 == 35136) {
				f_138f_a2_v(tv1, tv0);
			}
			if (a0 == 4899) {
				if (f_1464_a1_b(tv1) && f_147c_a1_b(tv1)) {
					f_1416_a2_v(tv1, tv0);
					f_301_a1_v("Fear");
					tv0->SetMessage(504496);
					tv0->ClearReplies();
					tv0->AddReply(504521, 22246, 4928);
					tv0->AddReply(521059, 22246, 22250);
					return;
				}
				if (f_15e4_a1_b(tv1) && f_14d0_a1_b(tv1) && f_147c_a1_b(tv1) || f_15e4_a1_b(tv1) && f_14ac_a1_b(tv1) && f_147c_a1_b(tv1)) {
					f_12fc_a2_v(tv1, tv0);
					f_301_a1_v("Neutral");
					tv0->SetMessage(532343);
					tv0->ClearReplies();
					tv0->AddReply(533604, 35125, 35124);
					tv0->AddReply(533608, 35129, 35128);
					return;
				}
				f_301_a1_v("Neutral");
				tv0->SetMessage(521052);
				tv0->ClearReplies();
				if (f_156c_a1_b(tv1) && f_14e8_a1_b(tv1)) {
					tv0->AddReply(535143, 36805, 36804);
				}
				if (f_14dc_a1_b(tv1)) {
					tv0->AddReply(535107, 36764, 36763);
				}
				if (f_14b8_a1_b(tv1) && f_150c_a1_b(tv1) && f_1488_a1_b(tv1)) {
					tv0->AddReply(531940, 33345, 33344);
				}
				if (f_1494_a1_b(tv1) && f_14c4_a1_b(tv1) && f_1488_a1_b(tv1)) {
					tv0->AddReply(532458, 33900, 33899);
				}
				if (f_14f4_a1_b(tv1) && f_14a0_a1_b(tv1)) {
					tv0->AddReply(533614, 35137, 35136);
				}
				if (!f_1470_a1_b(tv1)) {
					tv0->AddReply(521053, -1, 22244);
				}
				tv0->AddReply(521054, -1, 22245);
				return;
			}
			if (a0 == 35137) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(533615);
				tv0->ClearReplies();
				tv0->AddReply(533616, 35140, 35138);
				tv0->AddReply(533617, -1, 35139);
				return;
			}
			if (a0 == 35140) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(533618);
				tv0->ClearReplies();
				tv0->AddReply(533619, 35142, 35141);
				return;
			}
			if (a0 == 35142) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(533620);
				tv0->ClearReplies();
				tv0->AddReply(533621, 35144, 35143);
				tv0->AddReply(533624, 35147, 35146);
				return;
			}
			if (a0 == 35147) {
				f_301_a1_v("Love");
				tv0->SetMessage(533625);
				tv0->ClearReplies();
				tv0->AddReply(533626, 35150, 35148);
				tv0->AddReply(533627, -1, 35149);
				return;
			}
			if (a0 == 35144) {
				f_301_a1_v("Love");
				tv0->SetMessage(533622);
				tv0->ClearReplies();
				tv0->AddReply(533623, 35150, 35145);
				tv0->AddReply(533637, -1, 35161);
				return;
			}
			if (a0 == 35150) {
				f_301_a1_v("Love");
				tv0->SetMessage(533628);
				tv0->ClearReplies();
				tv0->AddReply(533629, 35154, 35152);
				tv0->AddReply(533630, 35157, 35153);
				return;
			}
			if (a0 == 35154) {
				f_301_a1_v("Love");
				tv0->SetMessage(533631);
				tv0->ClearReplies();
				tv0->AddReply(533632, 35157, 35155);
				tv0->AddReply(533633, -1, 35156);
				return;
			}
			if (a0 == 35157) {
				f_301_a1_v("Neutral");
				tv0->SetMessage(533634);
				tv0->ClearReplies();
				tv0->AddReply(533635, -1, 35158);
				tv0->AddReply(533636, -1, 35159);
				return;
			}
			if (a0 == 33900) {
				f_301_a1_v("Neutral");
				tv0->SetMessage(532459);
				tv0->ClearReplies();
				tv0->AddReply(532460, -1, 33901);
				return;
			}
			if (a0 == 33345) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(531941);
				tv0->ClearReplies();
				tv0->AddReply(531942, -1, 33346);
				return;
			}
			if (a0 == 36764) {
				f_301_a1_v("Love");
				tv0->SetMessage(535108);
				tv0->ClearReplies();
				tv0->AddReply(535109, 36766, 36765);
				tv0->AddReply(535120, 36766, 36776);
				tv0->AddReply(535124, 36768, 36782);
				return;
			}
			if (a0 == 36766) {
				f_301_a1_v("Love");
				tv0->SetMessage(535110);
				tv0->ClearReplies();
				tv0->AddReply(535111, 36768, 36767);
				tv0->AddReply(535122, 36774, 36778);
				return;
			}
			if (a0 == 36774) {
				f_301_a1_v("Love");
				tv0->SetMessage(535118);
				tv0->ClearReplies();
				tv0->AddReply(535119, 36768, 36775);
				tv0->AddReply(535123, -1, 36780);
				return;
			}
			if (a0 == 36768) {
				f_301_a1_v("Love");
				tv0->SetMessage(535112);
				tv0->ClearReplies();
				tv0->AddReply(535113, 36770, 36769);
				return;
			}
			if (a0 == 36770) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(535114);
				tv0->ClearReplies();
				tv0->AddReply(535115, 36772, 36771);
				return;
			}
			if (a0 == 36772) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(535116);
				tv0->ClearReplies();
				tv0->AddReply(535117, -1, 36773);
				tv0->AddReply(535121, -1, 36777);
				return;
			}
			if (a0 == 36805) {
				f_301_a1_v("Love");
				tv0->SetMessage(535144);
				tv0->ClearReplies();
				tv0->AddReply(535145, 36807, 36806);
				return;
			}
			if (a0 == 36807) {
				f_301_a1_v("Love");
				tv0->SetMessage(535146);
				tv0->ClearReplies();
				tv0->AddReply(535147, 36809, 36808);
				tv0->AddReply(535152, 36814, 36813);
				return;
			}
			if (a0 == 36814) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(535153);
				tv0->ClearReplies();
				tv0->AddReply(535154, 36816, 36815);
				tv0->AddReply(535156, 36816, 36817);
				return;
			}
			if (a0 == 36816) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(535155);
				tv0->ClearReplies();
				tv0->AddReply(535157, 36811, 36819);
				return;
			}
			if (a0 == 36809) {
				f_301_a1_v("Neutral");
				tv0->SetMessage(535148);
				tv0->ClearReplies();
				tv0->AddReply(535149, 36811, 36810);
				return;
			}
			if (a0 == 36811) {
				f_301_a1_v("Neutral");
				tv0->SetMessage(535150);
				tv0->ClearReplies();
				tv0->AddReply(535151, 36821, 36812);
				tv0->AddReply(535166, 36831, 36830);
				return;
			}
			if (a0 == 36831) {
				tv0->SetMessage(535167);
				tv0->ClearReplies();
				tv0->AddReply(535168, 36823, 36832);
				return;
			}
			if (a0 == 36821) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(535158);
				tv0->ClearReplies();
				tv0->AddReply(535159, 36823, 36822);
				tv0->AddReply(535165, -1, 36828);
				return;
			}
			if (a0 == 36823) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(535160);
				tv0->ClearReplies();
				tv0->AddReply(535161, 36825, 36824);
				return;
			}
			if (a0 == 36825) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(535162);
				tv0->ClearReplies();
				tv0->AddReply(535163, -1, 36826);
				tv0->AddReply(535164, -1, 36827);
				return;
			}
			if (a0 == 35129) {
				f_301_a1_v("Neutral");
				tv0->SetMessage(533609);
				tv0->ClearReplies();
				tv0->AddReply(533610, 35125, 35130);
				return;
			}
			if (a0 == 35125) {
				f_301_a1_v("Neutral");
				tv0->SetMessage(533605);
				tv0->ClearReplies();
				tv0->AddReply(533606, 35127, 35126);
				tv0->AddReply(533611, 35133, 35132);
				return;
			}
			if (a0 == 35133) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(533612);
				tv0->ClearReplies();
				tv0->AddReply(533613, 35127, 35134);
				return;
			}
			if (a0 == 35127) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(533607);
				tv0->ClearReplies();
				tv0->AddReply(532344, 33774, 33773);
				return;
			}
			if (a0 == 33774) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(532345);
				tv0->ClearReplies();
				tv0->AddReply(532346, -1, 33775);
				tv0->AddReply(532347, 33777, 33776);
				return;
			}
			if (a0 == 33777) {
				f_301_a1_v("Fear");
				tv0->SetMessage(532348);
				tv0->ClearReplies();
				tv0->AddReply(532349, -1, 33778);
				tv0->AddReply(532350, -1, 33779);
				return;
			}
			if (a0 == 22246) {
				f_301_a1_v("Fear");
				tv0->SetMessage(521055);
				tv0->ClearReplies();
				tv0->AddReply(521056, 22248, 22247);
				tv0->AddReply(521060, 22253, 22251);
				return;
			}
			if (a0 == 22253) {
				f_301_a1_v("Love");
				tv0->SetMessage(521061);
				tv0->ClearReplies();
				tv0->AddReply(521062, 4905, 22254);
				return;
			}
			if (a0 == 22248) {
				f_301_a1_v("Love");
				tv0->SetMessage(521057);
				tv0->ClearReplies();
				tv0->AddReply(521058, 4905, 22249);
				tv0->AddReply(504517, 4923, 4922);
				return;
			}
			if (a0 == 4905) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(504502);
				tv0->ClearReplies();
				tv0->AddReply(504516, 4907, 4920);
				tv0->AddReply(504515, 4923, 4918);
				return;
			}
			if (a0 == 4923) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(504518);
				tv0->ClearReplies();
				tv0->AddReply(504519, 4909, 4924);
				tv0->AddReply(533368, 4907, 34866);
				return;
			}
			if (a0 == 4907) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(504504);
				tv0->ClearReplies();
				tv0->AddReply(504505, 4909, 4908);
				return;
			}
			if (a0 == 4909) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(504506);
				tv0->ClearReplies();
				tv0->AddReply(504507, 4911, 4910);
				tv0->AddReply(504514, 4911, 4917);
				return;
			}
			if (a0 == 4911) {
				f_301_a1_v("Modesty");
				tv0->SetMessage(504508);
				tv0->ClearReplies();
				tv0->AddReply(504509, 22257, 4912);
				tv0->AddReply(504513, 22257, 4916);
				return;
			}
			if (a0 == 22257) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(521063);
				tv0->ClearReplies();
				tv0->AddReply(521064, 22259, 22258);
				tv0->AddReply(521069, 4913, 22264);
				return;
			}
			if (a0 == 22259) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(521065);
				tv0->ClearReplies();
				tv0->AddReply(521066, 22262, 22260);
				return;
			}
			if (a0 == 22262) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(521067);
				tv0->ClearReplies();
				tv0->AddReply(521068, 4913, 22263);
				return;
			}
			if (a0 == 4913) {
				f_301_a1_v("Sexy");
				tv0->SetMessage(504510);
				tv0->ClearReplies();
				tv0->AddReply(504497, -1, 4900);
				tv0->AddReply(504512, -1, 4915);
				return;
			}
			tv3 = true;
			if (f_12fa_a0_b()) {
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
		if (!f_1153_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f4_a0_i());
		L0->SetNPCDescription(f_12f2_a0_i());
		L0->SetPhoto(f_12f6_a0_s());
		L0->SetPhoto2(f_12f8_a0_s());
		L0->SetPlayerName(f_167f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11aa_a1_b(f_1269_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1198_a1_v(a0);
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
			if (f_1518_a1_b(tv1)) {
				f_13a1_a2_v(tv1, tv0);
				f_136d_a2_v(tv1, tv0);
				f_937_a1_v("Fear");
				tv0->SetMessage(506853);
				tv0->ClearReplies();
				tv0->AddReply(506854, 7890, 7560);
				tv0->AddReply(507262, 7890, 8004);
				break;
			}
			f_937_a1_v("Neutral");
			tv0->SetMessage(506855);
			tv0->ClearReplies();
			if (f_1524_a1_b(tv1) && f_1554_a1_b(tv1)) {
				tv0->AddReply(506856, 7563, 7562);
			}
			if (f_1530_a1_b(tv1) && f_1560_a1_b(tv1)) {
				tv0->AddReply(506859, 7566, 7565);
			}
			if (f_153c_a1_b(tv1) && f_1548_a1_b(tv1)) {
				tv0->AddReply(506861, 7568, 7567);
			}
			if (f_1578_a1_b(tv1)) {
				tv0->AddReply(511392, 12590, 12589);
			}
			tv0->AddReply(507528, -1, 8310);
			break;
			return;
		}
		if (f_12fa_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1234_a1_v(tv2);
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

	void f_937_a1_v(string a0)
	{
		if (!f_12fa_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1244_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1262_a0_v();
			if (a1 == 8026) {
				f_13b9_a2_v(tv1, tv0);
				f_1428_a2_v(tv1, tv0);
			}
			if (a1 == 8027) {
				f_13b9_a2_v(tv1, tv0);
				f_1428_a2_v(tv1, tv0);
			}
			if (a1 == 8037) {
				f_13a7_a2_v(tv1, tv0);
				f_1438_a2_v(tv1, tv0);
				f_1448_a2_v(tv1, tv0);
			}
			if (a1 == 8033) {
				f_13a7_a2_v(tv1, tv0);
			}
			if (a1 == 8042) {
				f_13ad_a2_v(tv1, tv0);
			}
			if (a1 == 8045) {
				f_13b3_a2_v(tv1, tv0);
			}
			if (a1 == 8046) {
				f_13b3_a2_v(tv1, tv0);
			}
			if (a1 == 12591) {
				f_13b9_a2_v(tv1, tv0);
				f_1428_a2_v(tv1, tv0);
			}
			if (a0 == 7559) {
				if (f_1518_a1_b(tv1)) {
					f_13a1_a2_v(tv1, tv0);
					f_136d_a2_v(tv1, tv0);
					f_937_a1_v("Fear");
					tv0->SetMessage(506853);
					tv0->ClearReplies();
					tv0->AddReply(506854, 7890, 7560);
					tv0->AddReply(507262, 7890, 8004);
					return;
				}
				f_937_a1_v("Neutral");
				tv0->SetMessage(506855);
				tv0->ClearReplies();
				if (f_1524_a1_b(tv1) && f_1554_a1_b(tv1)) {
					tv0->AddReply(506856, 7563, 7562);
				}
				if (f_1530_a1_b(tv1) && f_1560_a1_b(tv1)) {
					tv0->AddReply(506859, 7566, 7565);
				}
				if (f_153c_a1_b(tv1) && f_1548_a1_b(tv1)) {
					tv0->AddReply(506861, 7568, 7567);
				}
				if (f_1578_a1_b(tv1)) {
					tv0->AddReply(511392, 12590, 12589);
				}
				tv0->AddReply(507528, -1, 8310);
				return;
			}
			if (a0 == 12590) {
				f_937_a1_v("Neutral");
				tv0->SetMessage(511393);
				tv0->ClearReplies();
				tv0->AddReply(511394, -1, 12591);
				return;
			}
			if (a0 == 7568) {
				f_937_a1_v("Neutral");
				tv0->SetMessage(506862);
				tv0->ClearReplies();
				tv0->AddReply(507296, 8044, 8043);
				return;
			}
			if (a0 == 8044) {
				f_937_a1_v("Neutral");
				tv0->SetMessage(507297);
				tv0->ClearReplies();
				tv0->AddReply(507298, -1, 8045);
				tv0->AddReply(507299, -1, 8046);
				return;
			}
			if (a0 == 7566) {
				f_139b_a2_v(tv1, tv0);
				f_937_a1_v("Neutral");
				tv0->SetMessage(506860);
				tv0->ClearReplies();
				tv0->AddReply(507295, -1, 8042);
				return;
			}
			if (a0 == 7563) {
				f_937_a1_v("Modesty");
				tv0->SetMessage(506857);
				tv0->ClearReplies();
				tv0->AddReply(506858, 8034, 7564);
				tv0->AddReply(507287, -1, 8033);
				return;
			}
			if (a0 == 8034) {
				f_937_a1_v("Modesty");
				tv0->SetMessage(507288);
				tv0->ClearReplies();
				tv0->AddReply(507289, 8036, 8035);
				tv0->AddReply(507292, 8039, 8038);
				return;
			}
			if (a0 == 8039) {
				f_937_a1_v("Modesty");
				tv0->SetMessage(507293);
				tv0->ClearReplies();
				tv0->AddReply(507294, 8036, 8040);
				return;
			}
			if (a0 == 8036) {
				f_937_a1_v("Modesty");
				tv0->SetMessage(507290);
				tv0->ClearReplies();
				tv0->AddReply(507291, -1, 8037);
				return;
			}
			if (a0 == 7890) {
				f_937_a1_v("Fear");
				tv0->SetMessage(507162);
				tv0->ClearReplies();
				tv0->AddReply(507264, 8010, 8007);
				tv0->AddReply(507265, 8010, 8008);
				tv0->AddReply(507266, -1, 8009);
				return;
			}
			if (a0 == 8010) {
				f_937_a1_v("Fear");
				tv0->SetMessage(507267);
				tv0->ClearReplies();
				tv0->AddReply(507268, 8015, 8012);
				tv0->AddReply(507269, 8014, 8013);
				return;
			}
			if (a0 == 8014) {
				f_937_a1_v("Love");
				tv0->SetMessage(507270);
				tv0->ClearReplies();
				tv0->AddReply(507272, 8019, 8016);
				tv0->AddReply(507273, 8015, 8017);
				tv0->AddReply(507274, -1, 8018);
				return;
			}
			if (a0 == 8019) {
				f_937_a1_v("Sexy");
				tv0->SetMessage(507275);
				tv0->ClearReplies();
				tv0->AddReply(507276, 8015, 8020);
				return;
			}
			if (a0 == 8015) {
				f_1400_a2_v(tv1, tv0);
				f_937_a1_v("Neutral");
				tv0->SetMessage(507271);
				tv0->ClearReplies();
				tv0->AddReply(533818, 35366, 35365);
				return;
			}
			if (a0 == 35366) {
				f_937_a1_v("Neutral");
				tv0->SetMessage(533819);
				tv0->ClearReplies();
				tv0->AddReply(507277, 8023, 8022);
				tv0->AddReply(507284, 8030, 8029);
				return;
			}
			if (a0 == 8030) {
				f_937_a1_v("Love");
				tv0->SetMessage(507285);
				tv0->ClearReplies();
				tv0->AddReply(507286, 8025, 8031);
				return;
			}
			if (a0 == 8023) {
				f_937_a1_v("Love");
				tv0->SetMessage(507278);
				tv0->ClearReplies();
				tv0->AddReply(507279, 8025, 8024);
				return;
			}
			if (a0 == 8025) {
				f_937_a1_v("Love");
				tv0->SetMessage(507280);
				tv0->ClearReplies();
				tv0->AddReply(533820, 35368, 35367);
				return;
			}
			if (a0 == 35368) {
				f_937_a1_v("Love");
				tv0->SetMessage(533821);
				tv0->ClearReplies();
				tv0->AddReply(507281, -1, 8026);
				tv0->AddReply(507282, -1, 8027);
				tv0->AddReply(507283, -1, 8028);
				return;
			}
			tv3 = true;
			if (f_12fa_a0_b()) {
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
		if (!f_1153_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f4_a0_i());
		L0->SetNPCDescription(f_12f2_a0_i());
		L0->SetPhoto(f_12f6_a0_s());
		L0->SetPhoto2(f_12f8_a0_s());
		L0->SetPlayerName(f_167f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11aa_a1_b(f_1269_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1198_a1_v(a0);
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
			f_c46_a1_v("Neutral");
			tv0->SetMessage(509840);
			tv0->ClearReplies();
			if (f_15cc_a1_b(tv1)) {
				tv0->AddReply(509841, 10821, 10840);
			}
			tv0->AddReply(511259, -1, 12449);
			break;
			return;
		}
		if (f_12fa_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1234_a1_v(tv2);
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

	void f_c46_a1_v(string a0)
	{
		if (!f_12fa_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1244_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1262_a0_v();
			if (a1 == 10840) {
				f_1458_a2_v(tv1, tv0);
			}
			if (a0 == 10839) {
				f_c46_a1_v("Neutral");
				tv0->SetMessage(509840);
				tv0->ClearReplies();
				if (f_15cc_a1_b(tv1)) {
					tv0->AddReply(509841, 10821, 10840);
				}
				tv0->AddReply(511259, -1, 12449);
				return;
			}
			if (a0 == 10821) {
				f_c46_a1_v("Sexy");
				tv0->SetMessage(509824);
				tv0->ClearReplies();
				tv0->AddReply(509825, 10823, 10822);
				tv0->AddReply(509829, 10828, 10827);
				tv0->AddReply(509836, 10835, 10834);
				return;
			}
			if (a0 == 10835) {
				f_c46_a1_v("Sexy");
				tv0->SetMessage(509837);
				tv0->ClearReplies();
				tv0->AddReply(509839, 10828, 10837);
				tv0->AddReply(509838, -1, 10836);
				return;
			}
			if (a0 == 10828) {
				f_c46_a1_v("Sexy");
				tv0->SetMessage(509830);
				tv0->ClearReplies();
				tv0->AddReply(509831, -1, 10829);
				tv0->AddReply(509832, 10831, 10830);
				return;
			}
			if (a0 == 10831) {
				f_c46_a1_v("Sexy");
				tv0->SetMessage(509833);
				tv0->ClearReplies();
				tv0->AddReply(509834, -1, 10832);
				tv0->AddReply(509835, -1, 10833);
				return;
			}
			if (a0 == 10823) {
				f_c46_a1_v("Sexy");
				tv0->SetMessage(509826);
				tv0->ClearReplies();
				tv0->AddReply(509827, 10828, 10824);
				tv0->AddReply(509828, -1, 10826);
				return;
			}
			tv3 = true;
			if (f_12fa_a0_b()) {
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
		if (!f_1153_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f4_a0_i());
		L0->SetNPCDescription(f_12f2_a0_i());
		L0->SetPhoto(f_12f6_a0_s());
		L0->SetPhoto2(f_12f8_a0_s());
		L0->SetPlayerName(f_167f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11aa_a1_b(f_1269_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1198_a1_v(a0);
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
			f_dd2_a1_v("Neutral");
			tv0->SetMessage(511255);
			tv0->ClearReplies();
			if (f_15d8_a1_b(tv1) && f_1590_a1_b(tv1) || f_15a8_a1_b(tv1) && f_15d8_a1_b(tv1) || f_159c_a1_b(tv1) && f_15d8_a1_b(tv1)) {
				tv0->AddReply(511257, 12448, 12447);
			}
			if (f_1500_a1_b(tv1)) {
				tv0->AddReply(535125, 36785, 36784);
			}
			tv0->AddReply(511256, -1, 12446);
			break;
			return;
		}
		if (f_12fa_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1234_a1_v(tv2);
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

	void f_dd2_a1_v(string a0)
	{
		if (!f_12fa_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1244_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1262_a0_v();
			if (a1 == 12447) {
				f_145e_a2_v(tv1, tv0);
			}
			if (a1 == 36784) {
				f_1395_a2_v(tv1, tv0);
			}
			if (a0 == 12445) {
				f_dd2_a1_v("Neutral");
				tv0->SetMessage(511255);
				tv0->ClearReplies();
				if (f_15d8_a1_b(tv1) && f_1590_a1_b(tv1) || f_15a8_a1_b(tv1) && f_15d8_a1_b(tv1) || f_159c_a1_b(tv1) && f_15d8_a1_b(tv1)) {
					tv0->AddReply(511257, 12448, 12447);
				}
				if (f_1500_a1_b(tv1)) {
					tv0->AddReply(535125, 36785, 36784);
				}
				tv0->AddReply(511256, -1, 12446);
				return;
			}
			if (a0 == 36785) {
				f_dd2_a1_v("Modesty");
				tv0->SetMessage(535126);
				tv0->ClearReplies();
				tv0->AddReply(535127, 36787, 36786);
				tv0->AddReply(535134, 36787, 36793);
				return;
			}
			if (a0 == 36787) {
				f_dd2_a1_v("Modesty");
				tv0->SetMessage(535128);
				tv0->ClearReplies();
				tv0->AddReply(535129, 36789, 36788);
				tv0->AddReply(535137, 36798, 36797);
				return;
			}
			if (a0 == 36798) {
				f_dd2_a1_v("Modesty");
				tv0->SetMessage(535138);
				tv0->ClearReplies();
				tv0->AddReply(535139, -1, 36799);
				tv0->AddReply(535140, 36789, 36800);
				return;
			}
			if (a0 == 36789) {
				f_dd2_a1_v("Modesty");
				tv0->SetMessage(535130);
				tv0->ClearReplies();
				tv0->AddReply(535131, 36791, 36790);
				if (f_1584_a1_b(tv1)) {
					tv0->AddReply(535135, -1, 36795);
				}
				return;
			}
			if (a0 == 36791) {
				f_dd2_a1_v("Modesty");
				tv0->SetMessage(535132);
				tv0->ClearReplies();
				tv0->AddReply(535133, -1, 36792);
				tv0->AddReply(535136, -1, 36796);
				return;
			}
			if (a0 == 12448) {
				f_dd2_a1_v("Neutral");
				tv0->SetMessage(511258);
				tv0->ClearReplies();
				tv0->AddReply(511267, 12458, 12457);
				tv0->AddReply(511260, 12451, 12450);
				return;
			}
			if (a0 == 12451) {
				f_dd2_a1_v("Love");
				tv0->SetMessage(511261);
				tv0->ClearReplies();
				tv0->AddReply(511262, 12453, 12452);
				return;
			}
			if (a0 == 12453) {
				f_dd2_a1_v("Love");
				tv0->SetMessage(511263);
				tv0->ClearReplies();
				tv0->AddReply(511264, 12455, 12454);
				return;
			}
			if (a0 == 12455) {
				f_dd2_a1_v("Love");
				tv0->SetMessage(511265);
				tv0->ClearReplies();
				tv0->AddReply(511266, 12458, 12456);
				return;
			}
			if (a0 == 12458) {
				f_dd2_a1_v("Neutral");
				tv0->SetMessage(511268);
				tv0->ClearReplies();
				tv0->AddReply(511269, 12463, 12459);
				tv0->AddReply(511270, 12461, 12460);
				return;
			}
			if (a0 == 12461) {
				f_dd2_a1_v("Love");
				tv0->SetMessage(511271);
				tv0->ClearReplies();
				tv0->AddReply(511273, 12463, 12464);
				tv0->AddReply(511274, -1, 12465);
				return;
			}
			if (a0 == 12463) {
				f_dd2_a1_v("Love");
				tv0->SetMessage(511272);
				tv0->ClearReplies();
				tv0->AddReply(511275, -1, 12467);
				tv0->AddReply(511276, -1, 12468);
				return;
			}
			tv3 = true;
			if (f_12fa_a0_b()) {
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
		if (!f_1153_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f4_a0_i());
		L0->SetNPCDescription(f_12f2_a0_i());
		L0->SetPhoto(f_12f6_a0_s());
		L0->SetPhoto2(f_12f8_a0_s());
		L0->SetPlayerName(f_167f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11aa_a1_b(f_1269_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1198_a1_v(a0);
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
			f_ff3_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_12fa_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1234_a1_v(tv2);
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

	void f_ff3_a1_v(string a0)
	{
		if (!f_12fa_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1244_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1262_a0_v();
			if (a0 == 42557) {
				f_ff3_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_12fa_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t12
{
	var Vector tv0;

	void init(void)
	{
		f_1037_a0_v();
	}

	void f_1037_a0_v(void)
	{
		if (!f_114e_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_10e7_a0_v();
		}
	}

	bool f_1045_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1145_a1_b(L0);
	}

	void f_1054_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1059_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1133_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_106f_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1078_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1078_a0_v();
			if (f_114e_a0_b() && f_1059_a0_b()) {
				if (f_1045_a0_b()) {
					f_11e4_a1_b(f_1269_a0_o());
				}
			} else {
				f_1054_a0_v();
				f_106f_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_112e_a0_v();
		f_1078_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1078_a0_v();
		f_1234_a1_v("Neutral");
		f_106f_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_106f_a0_v();
		} else {
			f_1234_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_112e_a0_v();
			f_1145_a1_b(a0);
			enable OnUse;
			f_1690_a1_v(a0);
			f_1234_a1_v("Neutral");
			f_1078_a0_v();
			f_106f_a0_v();
		}
	}
}

void f_10e7_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_114e_a0_b()) {
		return;
	}
	L0 = f_12e1_a0_i();
	for (L1 = 0; L1 < 5 && f_114e_a0_b(); L1++) {
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
			@PlayAnimation("all", f_12da_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_112c_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_112c_a0_b(void)
{
	return true;
}

void f_112e_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1133_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_113b_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1145_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_113b_a1_b(L0);
}

bool f_114e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1153_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_126f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_12fa_a0_b()) {
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

void f_1198_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_12fa_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_11aa_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_11e4_a1_b(a0)) {
			if (!f_1209_a1_b(a0)) {
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
		if (!f_1209_a1_b(a0)) {
			if (!f_11e4_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_11e4_a1_b(object a0)
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
	return f_1253_a1_b(L4);
}

bool f_1209_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_12cb_a0_i() + "m";
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
	return f_1253_a1_b(L4);
}

void f_1234_a1_v(string a0)
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

void f_1244_a2_v(string a0, bool a1)
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

bool f_1253_a1_b(string a0)
{
	if (f_12fa_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1262_a0_v(void)
{
	if (f_12fa_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1269_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_126f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1279_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_127e_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_1289_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_129a_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_12a6_a3_v(object a0, object a1, int a2)
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
		f_129a_a2_v(L0, a2);
	}
}

void f_12b9_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_12a6_a3_v(a0, L0, a2);
}

float f_12c6_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_12cb_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_12d4_a1_b(int a0)
{
	return f_12cb_a0_i() == a0;
}

string f_12da_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_12e1_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_12da_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_12f2_a0_i(void)
{
	return 515533;
}

int f_12f4_a0_i(void)
{
	return 502858;
}

string f_12f6_a0_s(void)
{
	return "ui/NPC_Eva.png";
}

string f_12f8_a0_s(void)
{
	return "ui/NPC_Eva_b.png";
}

bool f_12fa_a0_b(void)
{
	return true;
}

void f_12fc_a2_v(object a0, object a1)
{
	@SetVariable("ood1EvaIntro3", 1);
}

void f_1302_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q03IsKapella", 1);
	L0 = f_164d_a0_o();
	L0->AddMark("d1q03KapellaGotoOspina", "pt_map_ospina", 0, 508641, f_12c6_a0_f());
	f_15f0_a0_v();
	f_15fd_a0_v();
	f_127e_a1_o("quest_d1_03");
}

void f_1320_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1326_a2_v(object a0, object a1)
{
	@Trace("gold_ring is given");
	f_12b9_a3_v(a0, "gold_ring", 1);
}

void f_1331_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_164d_a0_o();
	L0->AddMark("d1q01EvaMapMarkMladVlad", "pt_map_mladvlad", 3, 518108, f_12c6_a0_f());
}

void f_1341_a2_v(object a0, object a1)
{
	f_165e_a3_v(f_164d_a0_o(), "pt_map_station", 2);
	a1->ShowMap(f_164d_a0_o());
}

void f_1351_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva4", 1);
}

void f_1357_a2_v(object a0, object a1)
{
	@Trace("bracelet is given");
	f_12b9_a3_v(a0, "bracelet", 1);
}

void f_1362_a2_v(object a0, object a1)
{
	@Trace("ear_ring is given");
	f_12b9_a3_v(a0, "ear_ring", 1);
}

void f_136d_a2_v(object a0, object a1)
{
	@SetVariable("d2EvaVisit", 1);
}

void f_1373_a2_v(object a0, object a1)
{
	f_165e_a3_v(f_164d_a0_o(), "pt_map_georg", 2);
	a1->ShowMap(f_164d_a0_o());
}

void f_1383_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva5", 1);
}

void f_1389_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva6", 1);
}

void f_138f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva7", 1);
}

void f_1395_a2_v(object a0, object a1)
{
	@SetVariable("ood4Eva2", 1);
}

void f_139b_a2_v(object a0, object a1)
{
	@SetVariable("KnowUzly", 1);
}

void f_13a1_a2_v(object a0, object a1)
{
	@SetVariable("ood2Eva1", 1);
}

void f_13a7_a2_v(object a0, object a1)
{
	@SetVariable("ood2Eva2", 1);
}

void f_13ad_a2_v(object a0, object a1)
{
	@SetVariable("ood2Eva3", 1);
}

void f_13b3_a2_v(object a0, object a1)
{
	@SetVariable("ood2Eva4", 1);
}

void f_13b9_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 1);
	L0 = f_164d_a0_o();
	L0->AddMark("d2q02EvaGotoAndrei", "pt_map_andrei", 0, 515272, f_12c6_a0_f());
	f_160a_a0_v();
	f_1617_a0_v();
	f_127e_a1_o("quest_d2_02");
}

void f_13d7_a2_v(object a0, object a1)
{
	f_1289_a2_v("icot_eva@door1", false);
}

void f_13de_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_164d_a0_o();
	L0->AddMark("d1q01EvaGotoSimon", "pt_map_georg", 1, 507778, f_12c6_a0_f());
	L0->AddMark("d1EvaGotoMaria", "pt_map_maria", 3, 508628, f_12c6_a0_f());
	L0->AddMark("d1EvaInfo", "pt_map_eva", 3, 508630, f_12c6_a0_f());
}

void f_1400_a2_v(object a0, object a1)
{
	@SetVariable("KnowStation", 1);
}

void f_1406_a2_v(object a0, object a1)
{
	f_165e_a3_v(f_164d_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_164d_a0_o());
}

void f_1416_a2_v(object a0, object a1)
{
	@SetVariable("ood1EvaIntro1", 1);
}

void f_141c_a2_v(object a0, object a1)
{
	@SetVariable("ood1EvaIntro2", 1);
}

void f_1422_a2_v(object a0, object a1)
{
	@SetVariable("ood6Eva1", 1);
}

void f_1428_a2_v(object a0, object a1)
{
	f_165e_a3_v(f_164d_a0_o(), "pt_map_andrei", 2);
	a1->ShowMap(f_164d_a0_o());
}

void f_1438_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_164d_a0_o();
	L0->AddMark("d2q02EvaGotoMaria", "pt_map_maria", 0, 515274, f_12c6_a0_f());
}

void f_1448_a2_v(object a0, object a1)
{
	f_165e_a3_v(f_164d_a0_o(), "pt_map_maria", 2);
	a1->ShowMap(f_164d_a0_o());
}

void f_1458_a2_v(object a0, object a1)
{
	@SetVariable("ood3Eva1", 1);
}

void f_145e_a2_v(object a0, object a1)
{
	@SetVariable("ood4Eva1", 1);
}

bool f_1464_a1_b(object a0)
{
	if (f_1279_a1_i("ood1EvaIntro1") == 0) {
		return true;
	}
	return false;
}

bool f_1470_a1_b(object a0)
{
	if (f_1279_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_147c_a1_b(object a0)
{
	if (f_1279_a1_i("d1q03") == 0) {
		return true;
	}
	return false;
}

bool f_1488_a1_b(object a0)
{
	if (f_1279_a1_i("d1q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1494_a1_b(object a0)
{
	if (f_1279_a1_i("d1q03IsKapella") == 1) {
		return true;
	}
	return false;
}

bool f_14a0_a1_b(object a0)
{
	if (f_1279_a1_i("d1q04") == 1) {
		return true;
	}
	return false;
}

bool f_14ac_a1_b(object a0)
{
	if (f_1279_a1_i("d1q01") == 5) {
		return true;
	}
	return false;
}

bool f_14b8_a1_b(object a0)
{
	if (f_1279_a1_i("d1q01") == 6) {
		return true;
	}
	return false;
}

bool f_14c4_a1_b(object a0)
{
	if (f_1279_a1_i("ood1Eva4") == 0) {
		return true;
	}
	return false;
}

bool f_14d0_a1_b(object a0)
{
	if (f_1279_a1_i("d1q01") >= 6) {
		return true;
	}
	return false;
}

bool f_14dc_a1_b(object a0)
{
	if (f_1279_a1_i("ood1Eva5") == 0) {
		return true;
	}
	return false;
}

bool f_14e8_a1_b(object a0)
{
	if (f_1279_a1_i("ood1Eva6") == 0) {
		return true;
	}
	return false;
}

bool f_14f4_a1_b(object a0)
{
	if (f_1279_a1_i("ood1Eva7") == 0) {
		return true;
	}
	return false;
}

bool f_1500_a1_b(object a0)
{
	if (f_1279_a1_i("ood4Eva2") == 0) {
		return true;
	}
	return false;
}

bool f_150c_a1_b(object a0)
{
	if (f_1279_a1_i("ood1EvaIntro2") == 0) {
		return true;
	}
	return false;
}

bool f_1518_a1_b(object a0)
{
	if (f_1279_a1_i("ood2Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_1524_a1_b(object a0)
{
	if (f_1279_a1_i("ood2Eva2") == 0) {
		return true;
	}
	return false;
}

bool f_1530_a1_b(object a0)
{
	if (f_1279_a1_i("ood2Eva3") == 0) {
		return true;
	}
	return false;
}

bool f_153c_a1_b(object a0)
{
	if (f_1279_a1_i("ood2Eva4") == 0) {
		return true;
	}
	return false;
}

bool f_1548_a1_b(object a0)
{
	if (f_1279_a1_i("d2q02") == 1000) {
		return true;
	}
	return false;
}

bool f_1554_a1_b(object a0)
{
	if (f_1279_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_1560_a1_b(object a0)
{
	if (f_1279_a1_i("d2q02") == 5) {
		return true;
	}
	return false;
}

bool f_156c_a1_b(object a0)
{
	if (f_1279_a1_i("d1q01") == 1) {
		return true;
	}
	return false;
}

bool f_1578_a1_b(object a0)
{
	if (f_1279_a1_i("d2q02") == 0) {
		return true;
	}
	return false;
}

bool f_1584_a1_b(object a0)
{
	if (f_1279_a1_i("d4q01") == 1) {
		return true;
	}
	return false;
}

bool f_1590_a1_b(object a0)
{
	if (f_1279_a1_i("d4q02") == 1) {
		return true;
	}
	return false;
}

bool f_159c_a1_b(object a0)
{
	if (f_1279_a1_i("d4q02LaraGivesMedcine") == 1) {
		return true;
	}
	return false;
}

bool f_15a8_a1_b(object a0)
{
	if (f_1279_a1_i("d4q02JuliaGivesMedcine") == 1) {
		return true;
	}
	return false;
}

bool f_15b4_a1_b(object a0)
{
	if (f_1279_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_15c0_a1_b(object a0)
{
	if (f_1279_a1_i("ood6Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_15cc_a1_b(object a0)
{
	if (f_1279_a1_i("ood3Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_15d8_a1_b(object a0)
{
	if (f_1279_a1_i("ood4Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_15e4_a1_b(object a0)
{
	if (f_1279_a1_i("ood1EvaIntro3") == 0) {
		return true;
	}
	return false;
}

void f_15f0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 37, 2, 512119);
	f_1631_a2_b(L0, -1);
}

void f_15fd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 680, 2, 534422);
	f_1631_a2_b(L0, 37);
}

void f_160a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 11, 2, 503095);
	f_1631_a2_b(L0, -1);
}

void f_1617_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 57, 2, 512139);
	f_1631_a2_b(L0, 11);
}

object f_1624_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1631_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1624_a0_o();
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

object f_164d_a0_o(void)
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

void f_165e_a3_v(object a0, string a1, float a2)
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

int f_167f_a0_i(void)
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

void f_1690_a1_v(object a0)
{
	if (f_12d4_a1_b(1)) {
		t2{a0};
		return;
	}
	if (f_12d4_a1_b(2)) {
		t4{a0};
		return;
	}
	if (f_12d4_a1_b(3)) {
		t6{a0};
		return;
	}
	if (f_12d4_a1_b(4)) {
		t8{a0};
		return;
	}
	if (f_12d4_a1_b(6)) {
		t0{a0};
		return;
	}
	t10{a0};
}

