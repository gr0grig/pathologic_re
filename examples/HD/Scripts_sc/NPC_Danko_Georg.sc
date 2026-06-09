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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			f_cb_a1_v("Neutral");
			tv0->SetMessage(512009);
			tv0->ClearReplies();
			if (f_1e1b_a1_b(tv1) && f_1e27_a1_b(tv1)) {
				tv0->AddReply(512010, 13230, 13228);
			}
			if (!f_1ddf_a1_b(tv1) && !f_1deb_a1_b(tv1) && !f_1df7_a1_b(tv1) && f_1e03_a1_b(tv1)) {
				tv0->AddReply(512014, 13233, 13232);
			}
			if (f_1e0f_a1_b(tv1)) {
				tv0->AddReply(512018, 3560, 13236);
			}
			tv0->AddReply(512011, -1, 13229);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_cb_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a1 == 13228) {
				f_1c88_a2_v(tv1, tv0);
			}
			if (a1 == 13232) {
				f_1c7c_a2_v(tv1, tv0);
			}
			if (a1 == 13236) {
				f_1c82_a2_v(tv1, tv0);
			}
			if (a0 == 13227) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(512009);
				tv0->ClearReplies();
				if (f_1e1b_a1_b(tv1) && f_1e27_a1_b(tv1)) {
					tv0->AddReply(512010, 13230, 13228);
				}
				if (!f_1ddf_a1_b(tv1) && !f_1deb_a1_b(tv1) && !f_1df7_a1_b(tv1) && f_1e03_a1_b(tv1)) {
					tv0->AddReply(512014, 13233, 13232);
				}
				if (f_1e0f_a1_b(tv1)) {
					tv0->AddReply(512018, 3560, 13236);
				}
				tv0->AddReply(512011, -1, 13229);
				return;
			}
			if (a0 == 3560) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(503289);
				tv0->ClearReplies();
				tv0->AddReply(503290, 3562, 3561);
				tv0->AddReply(503298, 3572, 3571);
				return;
			}
			if (a0 == 3572) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(503299);
				tv0->ClearReplies();
				tv0->AddReply(503300, 3562, 3573);
				tv0->AddReply(503301, 3564, 3575);
				return;
			}
			if (a0 == 3562) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(503291);
				tv0->ClearReplies();
				tv0->AddReply(503292, 3564, 3563);
				tv0->AddReply(503295, 3564, 3566);
				return;
			}
			if (a0 == 3564) {
				f_cb_a1_v("Distrust");
				tv0->SetMessage(503293);
				tv0->ClearReplies();
				tv0->AddReply(503294, 3568, 3565);
				tv0->AddReply(503297, 3568, 3569);
				return;
			}
			if (a0 == 3568) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(503296);
				tv0->ClearReplies();
				tv0->AddReply(503302, 3578, 3577);
				tv0->AddReply(503305, 3578, 3580);
				return;
			}
			if (a0 == 3578) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(503303);
				tv0->ClearReplies();
				tv0->AddReply(503304, -1, 3579);
				return;
			}
			if (a0 == 13233) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(512015);
				tv0->ClearReplies();
				tv0->AddReply(512016, 13235, 13234);
				return;
			}
			if (a0 == 13235) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(512017);
				tv0->ClearReplies();
				tv0->AddReply(536134, -1, 37893);
				tv0->AddReply(536135, -1, 37894);
				return;
			}
			if (a0 == 13230) {
				f_cb_a1_v("Anger");
				tv0->SetMessage(512012);
				tv0->ClearReplies();
				tv0->AddReply(512013, -1, 13231);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			if (f_1d5b_a1_b(tv1)) {
				f_1c40_a2_v(tv1, tv0);
				f_1b73_a2_v(tv1, tv0);
				f_361_a1_v("Anger");
				tv0->SetMessage(531566);
				tv0->ClearReplies();
				tv0->AddReply(531567, 32927, 32926);
				tv0->AddReply(531608, 32978, 32977);
				tv0->AddReply(531614, 32986, 32985);
				break;
			}
			if (f_1cb2_a1_b(tv1)) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504850);
				tv0->ClearReplies();
				tv0->AddReply(504879, 5370, 5353);
				tv0->AddReply(504890, 5354, 5367);
				break;
			}
			f_361_a1_v("Neutral");
			tv0->SetMessage(507627);
			tv0->ClearReplies();
			if (f_1ca6_a1_b(tv1)) {
				tv0->AddReply(531617, 32990, 32989);
			}
			if (f_1d67_a1_b(tv1) && !f_1c9a_a1_b(tv1) && !f_1ca6_a1_b(tv1)) {
				tv0->AddReply(507629, 5329, 8418);
			}
			if (f_1d73_a1_b(tv1) && !f_1c9a_a1_b(tv1) && !f_1ca6_a1_b(tv1)) {
				tv0->AddReply(507632, 5334, 8421);
			}
			if (f_1d43_a1_b(tv1) && !f_1ca6_a1_b(tv1) && !f_1c9a_a1_b(tv1)) {
				tv0->AddReply(531620, 32993, 32992);
			}
			if (f_1cbe_a1_b(tv1) && f_1d4f_a1_b(tv1)) {
				tv0->AddReply(531622, 32995, 32994);
			}
			tv0->AddReply(507658, -1, 8451);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_361_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a1 == 32944) {
				f_1b40_a2_v(tv1, tv0);
				f_1c2a_a2_v(tv1, tv0);
			}
			if (a1 == 32945) {
				f_1b40_a2_v(tv1, tv0);
				f_1c2a_a2_v(tv1, tv0);
			}
			if (a1 == 34603) {
				f_1b40_a2_v(tv1, tv0);
				f_1c2a_a2_v(tv1, tv0);
			}
			if (a1 == 23067) {
				f_1b63_a2_v(tv1, tv0);
			}
			if (a1 == 23065) {
				f_1b63_a2_v(tv1, tv0);
			}
			if (a1 == 5360) {
				f_1b6d_a2_v(tv1, tv0);
				f_1b63_a2_v(tv1, tv0);
			}
			if (a1 == 5359) {
				f_1b6d_a2_v(tv1, tv0);
				f_1b63_a2_v(tv1, tv0);
			}
			if (a1 == 32991) {
				f_1b40_a2_v(tv1, tv0);
				f_1c2a_a2_v(tv1, tv0);
			}
			if (a1 == 8418) {
				f_1c46_a2_v(tv1, tv0);
			}
			if (a1 == 5341) {
				f_1c4c_a2_v(tv1, tv0);
			}
			if (a1 == 5342) {
				f_1c4c_a2_v(tv1, tv0);
			}
			if (a1 == 5347) {
				f_1c4c_a2_v(tv1, tv0);
			}
			if (a1 == 8440) {
				f_1c4c_a2_v(tv1, tv0);
			}
			if (a1 == 32992) {
				f_1bd2_a2_v(tv1, tv0);
			}
			if (a1 == 32994) {
				f_1ba0_a2_v(tv1, tv0);
			}
			if (a0 == 32925) {
				if (f_1d5b_a1_b(tv1)) {
					f_1c40_a2_v(tv1, tv0);
					f_1b73_a2_v(tv1, tv0);
					f_361_a1_v("Anger");
					tv0->SetMessage(531566);
					tv0->ClearReplies();
					tv0->AddReply(531567, 32927, 32926);
					tv0->AddReply(531608, 32978, 32977);
					tv0->AddReply(531614, 32986, 32985);
					return;
				}
				if (f_1cb2_a1_b(tv1)) {
					f_361_a1_v("Neutral");
					tv0->SetMessage(504850);
					tv0->ClearReplies();
					tv0->AddReply(504879, 5370, 5353);
					tv0->AddReply(504890, 5354, 5367);
					return;
				}
				f_361_a1_v("Neutral");
				tv0->SetMessage(507627);
				tv0->ClearReplies();
				if (f_1ca6_a1_b(tv1)) {
					tv0->AddReply(531617, 32990, 32989);
				}
				if (f_1d67_a1_b(tv1) && !f_1c9a_a1_b(tv1) && !f_1ca6_a1_b(tv1)) {
					tv0->AddReply(507629, 5329, 8418);
				}
				if (f_1d73_a1_b(tv1) && !f_1c9a_a1_b(tv1) && !f_1ca6_a1_b(tv1)) {
					tv0->AddReply(507632, 5334, 8421);
				}
				if (f_1d43_a1_b(tv1) && !f_1ca6_a1_b(tv1) && !f_1c9a_a1_b(tv1)) {
					tv0->AddReply(531620, 32993, 32992);
				}
				if (f_1cbe_a1_b(tv1) && f_1d4f_a1_b(tv1)) {
					tv0->AddReply(531622, 32995, 32994);
				}
				tv0->AddReply(507658, -1, 8451);
				return;
			}
			if (a0 == 32995) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531623);
				tv0->ClearReplies();
				tv0->AddReply(531624, 34337, 32996);
				return;
			}
			if (a0 == 34337) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(532852);
				tv0->ClearReplies();
				tv0->AddReply(532853, -1, 34338);
				return;
			}
			if (a0 == 32993) {
				f_361_a1_v("Jeer");
				tv0->SetMessage(531621);
				tv0->ClearReplies();
				tv0->AddReply(507630, 8420, 8419);
				tv0->AddReply(532849, 34334, 34333);
				return;
			}
			if (a0 == 8420) {
				f_361_a1_v("Jeer");
				tv0->SetMessage(507631);
				tv0->ClearReplies();
				tv0->AddReply(507633, 34334, 8422);
				return;
			}
			if (a0 == 34334) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(532850);
				tv0->ClearReplies();
				tv0->AddReply(532851, -1, 34336);
				return;
			}
			if (a0 == 5334) {
				f_1c52_a2_v(tv1, tv0);
				f_361_a1_v("Neutral");
				tv0->SetMessage(504862);
				tv0->ClearReplies();
				tv0->AddReply(504863, 5336, 5335);
				tv0->AddReply(504875, 5414, 5348);
				if (!f_1d37_a1_b(tv1)) {
					tv0->AddReply(507643, 8435, 8434);
				}
				return;
			}
			if (a0 == 8435) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(507644);
				tv0->ClearReplies();
				tv0->AddReply(507645, 8437, 8436);
				return;
			}
			if (a0 == 8437) {
				f_361_a1_v("Jeer");
				tv0->SetMessage(507646);
				tv0->ClearReplies();
				tv0->AddReply(507647, 5336, 8438);
				return;
			}
			if (a0 == 5414) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504926);
				tv0->ClearReplies();
				tv0->AddReply(504927, 8441, 5415);
				tv0->AddReply(507648, -1, 8440);
				return;
			}
			if (a0 == 8441) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(507649);
				tv0->ClearReplies();
				tv0->AddReply(507650, 5338, 8442);
				return;
			}
			if (a0 == 5336) {
				f_361_a1_v("Distrust");
				tv0->SetMessage(504864);
				tv0->ClearReplies();
				tv0->AddReply(504865, 5338, 5337);
				tv0->AddReply(504871, 5344, 5343);
				return;
			}
			if (a0 == 5344) {
				f_361_a1_v("Anger");
				tv0->SetMessage(504872);
				tv0->ClearReplies();
				tv0->AddReply(504873, 5338, 5345);
				tv0->AddReply(504874, -1, 5347);
				return;
			}
			if (a0 == 5338) {
				f_361_a1_v("Distrust");
				tv0->SetMessage(504866);
				tv0->ClearReplies();
				tv0->AddReply(504867, 5340, 5339);
				return;
			}
			if (a0 == 5340) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504868);
				tv0->ClearReplies();
				tv0->AddReply(504869, -1, 5341);
				tv0->AddReply(504870, -1, 5342);
				return;
			}
			if (a0 == 5329) {
				f_361_a1_v("Jeer");
				tv0->SetMessage(504857);
				tv0->ClearReplies();
				tv0->AddReply(504858, 5374, 5330);
				return;
			}
			if (a0 == 5374) {
				f_361_a1_v("Jeer");
				tv0->SetMessage(504895);
				tv0->ClearReplies();
				tv0->AddReply(504896, 5377, 5375);
				tv0->AddReply(504897, 5377, 5376);
				return;
			}
			if (a0 == 5377) {
				f_361_a1_v("Jeer");
				tv0->SetMessage(504898);
				tv0->ClearReplies();
				tv0->AddReply(504899, 5380, 5378);
				tv0->AddReply(504913, 5396, 5395);
				return;
			}
			if (a0 == 5396) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504914);
				tv0->ClearReplies();
				tv0->AddReply(504915, 5380, 5397);
				tv0->AddReply(532846, -1, 34330);
				return;
			}
			if (a0 == 5380) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504900);
				tv0->ClearReplies();
				tv0->AddReply(504901, 5382, 5381);
				tv0->AddReply(504916, 5382, 5399);
				tv0->AddReply(504917, 5402, 5401);
				return;
			}
			if (a0 == 5402) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504918);
				tv0->ClearReplies();
				tv0->AddReply(504919, 5382, 5403);
				tv0->AddReply(532847, -1, 34331);
				return;
			}
			if (a0 == 5382) {
				f_1c64_a2_v(tv1, tv0);
				f_1c5e_a2_v(tv1, tv0);
				f_1c58_a2_v(tv1, tv0);
				f_1c70_a2_v(tv1, tv0);
				f_1c76_a2_v(tv1, tv0);
				f_361_a1_v("Anger");
				tv0->SetMessage(504902);
				tv0->ClearReplies();
				tv0->AddReply(504903, 5385, 5383);
				tv0->AddReply(504925, 5409, 5412);
				tv0->AddReply(504920, 5385, 5405);
				return;
			}
			if (a0 == 5385) {
				f_361_a1_v("Anger");
				tv0->SetMessage(504905);
				tv0->ClearReplies();
				tv0->AddReply(504906, 5388, 5386);
				tv0->AddReply(504907, 5388, 5387);
				tv0->AddReply(504922, 5409, 5408);
				return;
			}
			if (a0 == 5409) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504923);
				tv0->ClearReplies();
				tv0->AddReply(504924, 5388, 5410);
				return;
			}
			if (a0 == 5388) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504908);
				tv0->ClearReplies();
				tv0->AddReply(504909, 5392, 5390);
				tv0->AddReply(504910, 5392, 5391);
				return;
			}
			if (a0 == 5392) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504911);
				tv0->ClearReplies();
				tv0->AddReply(504912, -1, 5394);
				tv0->AddReply(504921, -1, 5407);
				return;
			}
			if (a0 == 32990) {
				f_361_a1_v("Distrust");
				tv0->SetMessage(531618);
				tv0->ClearReplies();
				tv0->AddReply(532837, 34319, 34318);
				tv0->AddReply(532833, 34315, 34314);
				return;
			}
			if (a0 == 34315) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(532834);
				tv0->ClearReplies();
				tv0->AddReply(532843, 34327, 34326);
				tv0->AddReply(532839, 34321, 34320);
				return;
			}
			if (a0 == 34327) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(532844);
				tv0->ClearReplies();
				tv0->AddReply(532845, 34319, 34328);
				return;
			}
			if (a0 == 34319) {
				f_361_a1_v("Distrust");
				tv0->SetMessage(532838);
				tv0->ClearReplies();
				tv0->AddReply(532835, 34321, 34316);
				return;
			}
			if (a0 == 34321) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(532840);
				tv0->ClearReplies();
				tv0->AddReply(531619, -1, 32991);
				tv0->AddReply(532842, -1, 34325);
				return;
			}
			if (a0 == 5354) {
				f_361_a1_v("Distrust");
				tv0->SetMessage(504880);
				tv0->ClearReplies();
				tv0->AddReply(504881, 5356, 5355);
				tv0->AddReply(504889, 5356, 5365);
				return;
			}
			if (a0 == 5356) {
				f_361_a1_v("Anger");
				tv0->SetMessage(504882);
				tv0->ClearReplies();
				tv0->AddReply(504883, 5358, 5357);
				tv0->AddReply(504887, 5358, 5361);
				return;
			}
			if (a0 == 5358) {
				f_361_a1_v("Anger");
				tv0->SetMessage(504884);
				tv0->ClearReplies();
				tv0->AddReply(521895, 23069, 23068);
				return;
			}
			if (a0 == 23069) {
				f_361_a1_v("Distrust");
				tv0->SetMessage(521896);
				tv0->ClearReplies();
				tv0->AddReply(504886, -1, 5360);
				tv0->AddReply(504885, -1, 5359);
				return;
			}
			if (a0 == 5370) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504892);
				tv0->ClearReplies();
				tv0->AddReply(504928, 5421, 5416);
				tv0->AddReply(504929, 5418, 5417);
				return;
			}
			if (a0 == 5418) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504930);
				tv0->ClearReplies();
				tv0->AddReply(504931, 5358, 5419);
				return;
			}
			if (a0 == 5421) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504932);
				tv0->ClearReplies();
				tv0->AddReply(521889, 23062, 23061);
				tv0->AddReply(521891, 23062, 23063);
				return;
			}
			if (a0 == 23062) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(521890);
				tv0->ClearReplies();
				tv0->AddReply(504893, 5354, 5371);
				tv0->AddReply(504933, 5423, 5422);
				return;
			}
			if (a0 == 5423) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(504934);
				tv0->ClearReplies();
				tv0->AddReply(504935, 23066, 5424);
				tv0->AddReply(521892, -1, 23065);
				return;
			}
			if (a0 == 23066) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(521893);
				tv0->ClearReplies();
				tv0->AddReply(521894, -1, 23067);
				tv0->AddReply(542997, -1, 45445);
				return;
			}
			if (a0 == 32986) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531615);
				tv0->ClearReplies();
				tv0->AddReply(531616, 32927, 32987);
				return;
			}
			if (a0 == 32978) {
				f_361_a1_v("Anger");
				tv0->SetMessage(531609);
				tv0->ClearReplies();
				tv0->AddReply(531610, 32980, 32979);
				return;
			}
			if (a0 == 32980) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531611);
				tv0->ClearReplies();
				tv0->AddReply(531612, 32927, 32981);
				tv0->AddReply(531613, 32931, 32983);
				return;
			}
			if (a0 == 32927) {
				f_361_a1_v("Anger");
				tv0->SetMessage(531568);
				tv0->ClearReplies();
				tv0->AddReply(531569, 32929, 32928);
				tv0->AddReply(531595, 32960, 32959);
				return;
			}
			if (a0 == 32960) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531596);
				tv0->ClearReplies();
				tv0->AddReply(531597, 32962, 32961);
				tv0->AddReply(531607, 32962, 32975);
				return;
			}
			if (a0 == 32962) {
				f_361_a1_v("Anger");
				tv0->SetMessage(531598);
				tv0->ClearReplies();
				tv0->AddReply(531599, 32964, 32963);
				tv0->AddReply(531606, 32933, 32973);
				return;
			}
			if (a0 == 32964) {
				f_361_a1_v("Anger");
				tv0->SetMessage(531600);
				tv0->ClearReplies();
				tv0->AddReply(531601, 32966, 32965);
				tv0->AddReply(531605, 32966, 32971);
				return;
			}
			if (a0 == 32966) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531602);
				tv0->ClearReplies();
				tv0->AddReply(531603, 32931, 32967);
				tv0->AddReply(531604, 32931, 32969);
				return;
			}
			if (a0 == 32929) {
				f_361_a1_v("Anger");
				tv0->SetMessage(531570);
				tv0->ClearReplies();
				tv0->AddReply(531571, 32931, 32930);
				tv0->AddReply(531594, 32931, 32957);
				return;
			}
			if (a0 == 32931) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531572);
				tv0->ClearReplies();
				tv0->AddReply(531573, 32933, 32932);
				tv0->AddReply(531593, 32933, 32955);
				return;
			}
			if (a0 == 32933) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531574);
				tv0->ClearReplies();
				tv0->AddReply(531575, 32935, 32934);
				tv0->AddReply(531590, 32952, 32951);
				return;
			}
			if (a0 == 32952) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531591);
				tv0->ClearReplies();
				tv0->AddReply(531592, 32935, 32953);
				return;
			}
			if (a0 == 32935) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531576);
				tv0->ClearReplies();
				tv0->AddReply(531577, 32937, 32936);
				tv0->AddReply(531589, 32941, 32949);
				return;
			}
			if (a0 == 32937) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531578);
				tv0->ClearReplies();
				tv0->AddReply(531579, 32939, 32938);
				tv0->AddReply(531588, 32941, 32947);
				return;
			}
			if (a0 == 32939) {
				f_361_a1_v("Neutral");
				tv0->SetMessage(531580);
				tv0->ClearReplies();
				tv0->AddReply(531581, 32941, 32940);
				return;
			}
			if (a0 == 32941) {
				f_361_a1_v("Anger");
				tv0->SetMessage(531582);
				tv0->ClearReplies();
				tv0->AddReply(531583, 34601, 32942);
				tv0->AddReply(531587, -1, 32946);
				return;
			}
			if (a0 == 34601) {
				f_361_a1_v("Jeer");
				tv0->SetMessage(533090);
				tv0->ClearReplies();
				tv0->AddReply(533091, 32943, 34602);
				tv0->AddReply(533092, -1, 34603);
				return;
			}
			if (a0 == 32943) {
				f_361_a1_v("Jeer");
				tv0->SetMessage(531584);
				tv0->ClearReplies();
				tv0->AddReply(531585, -1, 32944);
				tv0->AddReply(531586, -1, 32945);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			if (f_1d07_a1_b(tv1) && f_1d2b_a1_b(tv1)) {
				f_ac8_a1_v("Neutral");
				tv0->SetMessage(506829);
				tv0->ClearReplies();
				tv0->AddReply(506830, 7531, 7530);
				tv0->AddReply(506844, 7547, 7546);
				tv0->AddReply(506849, 7535, 7554);
				tv0->AddReply(506848, 7547, 7552);
				break;
			}
			f_ac8_a1_v("Neutral");
			tv0->SetMessage(506850);
			tv0->ClearReplies();
			if (f_1d13_a1_b(tv1) && f_1d1f_a1_b(tv1)) {
				tv0->AddReply(506851, 7835, 7557);
			}
			tv0->AddReply(507536, -1, 8318);
			tv0->AddReply(533836, -1, 35386);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_ac8_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a1 == 7538) {
				f_1bbd_a2_v(tv1, tv0);
				f_1bc9_a2_v(tv1, tv0);
				f_1b83_a2_v(tv1, tv0);
			}
			if (a1 == 7539) {
				f_1bbd_a2_v(tv1, tv0);
				f_1bc9_a2_v(tv1, tv0);
				f_1b83_a2_v(tv1, tv0);
			}
			if (a1 == 7542) {
				f_1bbd_a2_v(tv1, tv0);
				f_1bc9_a2_v(tv1, tv0);
				f_1b83_a2_v(tv1, tv0);
			}
			if (a1 == 7543) {
				f_1bbd_a2_v(tv1, tv0);
				f_1bc9_a2_v(tv1, tv0);
				f_1b83_a2_v(tv1, tv0);
			}
			if (a1 == 7557) {
				f_1bc3_a2_v(tv1, tv0);
			}
			if (a1 == 7839) {
				f_1bc3_a2_v(tv1, tv0);
				f_1bc9_a2_v(tv1, tv0);
			}
			if (a1 == 7843) {
				f_1bc3_a2_v(tv1, tv0);
				f_1bc9_a2_v(tv1, tv0);
			}
			if (a0 == 7529) {
				if (f_1d07_a1_b(tv1) && f_1d2b_a1_b(tv1)) {
					f_ac8_a1_v("Neutral");
					tv0->SetMessage(506829);
					tv0->ClearReplies();
					tv0->AddReply(506830, 7531, 7530);
					tv0->AddReply(506844, 7547, 7546);
					tv0->AddReply(506849, 7535, 7554);
					tv0->AddReply(506848, 7547, 7552);
					return;
				}
				f_ac8_a1_v("Neutral");
				tv0->SetMessage(506850);
				tv0->ClearReplies();
				if (f_1d13_a1_b(tv1) && f_1d1f_a1_b(tv1)) {
					tv0->AddReply(506851, 7835, 7557);
				}
				tv0->AddReply(507536, -1, 8318);
				tv0->AddReply(533836, -1, 35386);
				return;
			}
			if (a0 == 7835) {
				f_ac8_a1_v("Anger");
				tv0->SetMessage(507116);
				tv0->ClearReplies();
				tv0->AddReply(507117, 7840, 7836);
				tv0->AddReply(507118, 7838, 7837);
				return;
			}
			if (a0 == 7838) {
				f_ac8_a1_v("Neutral");
				tv0->SetMessage(507119);
				tv0->ClearReplies();
				tv0->AddReply(507120, -1, 7839);
				tv0->AddReply(507124, -1, 7843);
				return;
			}
			if (a0 == 7840) {
				f_ac8_a1_v("Neutral");
				tv0->SetMessage(507121);
				tv0->ClearReplies();
				tv0->AddReply(507125, 7845, 7844);
				tv0->AddReply(507127, 7847, 7846);
				return;
			}
			if (a0 == 7847) {
				f_ac8_a1_v("Neutral");
				tv0->SetMessage(507128);
				tv0->ClearReplies();
				tv0->AddReply(507129, 7845, 7848);
				return;
			}
			if (a0 == 7845) {
				f_ac8_a1_v("Neutral");
				tv0->SetMessage(507126);
				tv0->ClearReplies();
				tv0->AddReply(507122, -1, 7841);
				tv0->AddReply(507123, -1, 7842);
				return;
			}
			if (a0 == 7547) {
				f_ac8_a1_v("Anger");
				tv0->SetMessage(506845);
				tv0->ClearReplies();
				tv0->AddReply(506846, 7533, 7548);
				tv0->AddReply(506847, 7533, 7550);
				return;
			}
			if (a0 == 7531) {
				f_ac8_a1_v("Anger");
				tv0->SetMessage(506831);
				tv0->ClearReplies();
				tv0->AddReply(506832, 7533, 7532);
				return;
			}
			if (a0 == 7533) {
				f_ac8_a1_v("Anger");
				tv0->SetMessage(506833);
				tv0->ClearReplies();
				tv0->AddReply(506834, 7535, 7534);
				tv0->AddReply(506843, 7535, 7544);
				tv0->AddReply(506842, -1, 7543);
				return;
			}
			if (a0 == 7535) {
				f_ac8_a1_v("Distrust");
				tv0->SetMessage(506835);
				tv0->ClearReplies();
				tv0->AddReply(506836, 7537, 7536);
				tv0->AddReply(506840, 7537, 7540);
				tv0->AddReply(506841, -1, 7542);
				return;
			}
			if (a0 == 7537) {
				f_ac8_a1_v("Neutral");
				tv0->SetMessage(506837);
				tv0->ClearReplies();
				tv0->AddReply(506838, -1, 7538);
				tv0->AddReply(506839, -1, 7539);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			if (f_1d8b_a1_b(tv1)) {
				f_1c94_a2_v(tv1, tv0);
				f_1bfc_a2_v(tv1, tv0);
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509043);
				tv0->ClearReplies();
				tv0->AddReply(509044, 9921, 9920);
				break;
			}
			f_1c94_a2_v(tv1, tv0);
			f_d8c_a1_v("Neutral");
			tv0->SetMessage(509024);
			tv0->ClearReplies();
			if (f_1da3_a1_b(tv1)) {
				tv0->AddReply(511376, 9899, 12575);
			}
			if (f_1d7f_a1_b(tv1) && f_1cd6_a1_b(tv1)) {
				tv0->AddReply(509042, 9941, 9918);
			}
			if (f_1daf_a1_b(tv1) && f_1dbb_a1_b(tv1) && f_1ce2_a1_b(tv1)) {
				tv0->AddReply(510442, 11512, 11511);
			}
			if (f_1d97_a1_b(tv1) && f_1ce2_a1_b(tv1)) {
				tv0->AddReply(509034, 9910, 9909);
			}
			tv0->AddReply(511147, -1, 12337);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_d8c_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a1 == 11255) {
				f_1c02_a2_v(tv1, tv0);
			}
			if (a1 == 9939) {
				f_1c02_a2_v(tv1, tv0);
			}
			if (a1 == 35971) {
				f_1bd8_a2_v(tv1, tv0);
				f_1b9a_a2_v(tv1, tv0);
				f_1be2_a2_v(tv1, tv0);
			}
			if (a1 == 35972) {
				f_1be2_a2_v(tv1, tv0);
			}
			if (a1 == 11275) {
				f_1be2_a2_v(tv1, tv0);
			}
			if (a1 == 9905) {
				f_1c02_a2_v(tv1, tv0);
			}
			if (a1 == 12577) {
				f_1c02_a2_v(tv1, tv0);
			}
			if (a1 == 9918) {
				f_1bf6_a2_v(tv1, tv0);
			}
			if (a1 == 11511) {
				f_1c3a_a2_v(tv1, tv0);
			}
			if (a1 == 11515) {
				f_1b9a_a2_v(tv1, tv0);
				f_1c20_a2_v(tv1, tv0);
				f_1b26_a2_v(tv1, tv0);
			}
			if (a1 == 35973) {
				f_1b26_a2_v(tv1, tv0);
				f_1b9a_a2_v(tv1, tv0);
				f_1c20_a2_v(tv1, tv0);
			}
			if (a1 == 9915) {
				f_1b9a_a2_v(tv1, tv0);
				f_1bd8_a2_v(tv1, tv0);
				f_1be2_a2_v(tv1, tv0);
			}
			if (a1 == 9916) {
				f_1be2_a2_v(tv1, tv0);
			}
			if (a0 == 9919) {
				if (f_1d8b_a1_b(tv1)) {
					f_1c94_a2_v(tv1, tv0);
					f_1bfc_a2_v(tv1, tv0);
					f_d8c_a1_v("Neutral");
					tv0->SetMessage(509043);
					tv0->ClearReplies();
					tv0->AddReply(509044, 9921, 9920);
					return;
				}
				f_1c94_a2_v(tv1, tv0);
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509024);
				tv0->ClearReplies();
				if (f_1da3_a1_b(tv1)) {
					tv0->AddReply(511376, 9899, 12575);
				}
				if (f_1d7f_a1_b(tv1) && f_1cd6_a1_b(tv1)) {
					tv0->AddReply(509042, 9941, 9918);
				}
				if (f_1daf_a1_b(tv1) && f_1dbb_a1_b(tv1) && f_1ce2_a1_b(tv1)) {
					tv0->AddReply(510442, 11512, 11511);
				}
				if (f_1d97_a1_b(tv1) && f_1ce2_a1_b(tv1)) {
					tv0->AddReply(509034, 9910, 9909);
				}
				tv0->AddReply(511147, -1, 12337);
				return;
			}
			if (a0 == 9910) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509035);
				tv0->ClearReplies();
				tv0->AddReply(509036, 9914, 9911);
				tv0->AddReply(509037, 9914, 9913);
				return;
			}
			if (a0 == 9914) {
				f_d8c_a1_v("Anger");
				tv0->SetMessage(509038);
				tv0->ClearReplies();
				tv0->AddReply(509039, -1, 9915);
				tv0->AddReply(509040, -1, 9916);
				return;
			}
			if (a0 == 11512) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(510443);
				tv0->ClearReplies();
				tv0->AddReply(510444, 11514, 11513);
				return;
			}
			if (a0 == 11514) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(510445);
				tv0->ClearReplies();
				tv0->AddReply(510446, -1, 11515);
				tv0->AddReply(534367, -1, 35973);
				return;
			}
			if (a0 == 9941) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509064);
				tv0->ClearReplies();
				tv0->AddReply(509065, 9943, 9942);
				return;
			}
			if (a0 == 9943) {
				f_d8c_a1_v("Anger");
				tv0->SetMessage(509066);
				tv0->ClearReplies();
				tv0->AddReply(509067, 9946, 9944);
				tv0->AddReply(509068, 9949, 9945);
				return;
			}
			if (a0 == 9949) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509072);
				tv0->ClearReplies();
				tv0->AddReply(509073, 9948, 9950);
				return;
			}
			if (a0 == 9946) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509069);
				tv0->ClearReplies();
				tv0->AddReply(509074, 9953, 9952);
				tv0->AddReply(509070, 9948, 9947);
				return;
			}
			if (a0 == 9948) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509071);
				tv0->ClearReplies();
				tv0->AddReply(511149, -1, 12338);
				return;
			}
			if (a0 == 9953) {
				f_d8c_a1_v("Anger");
				tv0->SetMessage(509075);
				tv0->ClearReplies();
				tv0->AddReply(509076, -1, 9954);
				tv0->AddReply(509077, -1, 9955);
				return;
			}
			if (a0 == 9899) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509025);
				tv0->ClearReplies();
				tv0->AddReply(509026, 9901, 9900);
				tv0->AddReply(509033, 9901, 9908);
				return;
			}
			if (a0 == 9901) {
				f_d8c_a1_v("Distrust");
				tv0->SetMessage(509027);
				tv0->ClearReplies();
				tv0->AddReply(509028, 9903, 9902);
				tv0->AddReply(509032, 9903, 9906);
				return;
			}
			if (a0 == 9903) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509029);
				tv0->ClearReplies();
				tv0->AddReply(509031, -1, 9905);
				tv0->AddReply(511378, -1, 12577);
				return;
			}
			if (a0 == 9921) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509045);
				tv0->ClearReplies();
				tv0->AddReply(510222, 11270, 11269);
				return;
			}
			if (a0 == 11270) {
				f_d8c_a1_v("Distrust");
				tv0->SetMessage(510223);
				tv0->ClearReplies();
				tv0->AddReply(509046, 11280, 9922);
				tv0->AddReply(510224, 9929, 11271);
				if (f_1d97_a1_b(tv1)) {
					tv0->AddReply(509047, 9924, 9923);
				}
				return;
			}
			if (a0 == 9924) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509048);
				tv0->ClearReplies();
				tv0->AddReply(509049, 9929, 9925);
				tv0->AddReply(510225, 11273, 11272);
				return;
			}
			if (a0 == 11273) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(510226);
				tv0->ClearReplies();
				tv0->AddReply(510227, 35970, 11274);
				tv0->AddReply(510228, -1, 11275);
				return;
			}
			if (a0 == 35970) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(534364);
				tv0->ClearReplies();
				tv0->AddReply(534365, -1, 35971);
				tv0->AddReply(534366, -1, 35972);
				return;
			}
			if (a0 == 9929) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(509053);
				tv0->ClearReplies();
				tv0->AddReply(509060, 9938, 9937);
				return;
			}
			if (a0 == 9938) {
				f_d8c_a1_v("Anger");
				tv0->SetMessage(509061);
				tv0->ClearReplies();
				tv0->AddReply(509063, 11254, 9940);
				tv0->AddReply(509062, -1, 9939);
				return;
			}
			if (a0 == 11254) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(510208);
				tv0->ClearReplies();
				tv0->AddReply(510209, -1, 11255);
				tv0->AddReply(510231, -1, 11278);
				return;
			}
			if (a0 == 11280) {
				f_d8c_a1_v("Neutral");
				tv0->SetMessage(510232);
				tv0->ClearReplies();
				tv0->AddReply(510233, 9938, 11281);
				tv0->AddReply(510234, 9938, 11282);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			f_114f_a1_v("Neutral");
			tv0->SetMessage(511791);
			tv0->ClearReplies();
			if (f_1dd3_a1_b(tv1) && f_1dc7_a1_b(tv1)) {
				tv0->AddReply(511792, 13003, 13002);
			}
			if (f_1e4b_a1_b(tv1)) {
				tv0->AddReply(515713, 16770, 16769);
			}
			tv0->AddReply(511794, -1, 13004);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_114f_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a1 == 13011) {
				f_1c6a_a2_v(tv1, tv0);
			}
			if (a1 == 16781) {
				f_1c6a_a2_v(tv1, tv0);
			}
			if (a1 == 16782) {
				f_1c6a_a2_v(tv1, tv0);
			}
			if (a1 == 16772) {
				f_1c6a_a2_v(tv1, tv0);
			}
			if (a0 == 13001) {
				f_114f_a1_v("Neutral");
				tv0->SetMessage(511791);
				tv0->ClearReplies();
				if (f_1dd3_a1_b(tv1) && f_1dc7_a1_b(tv1)) {
					tv0->AddReply(511792, 13003, 13002);
				}
				if (f_1e4b_a1_b(tv1)) {
					tv0->AddReply(515713, 16770, 16769);
				}
				tv0->AddReply(511794, -1, 13004);
				return;
			}
			if (a0 == 16770) {
				f_114f_a1_v("Neutral");
				tv0->SetMessage(515714);
				tv0->ClearReplies();
				tv0->AddReply(515717, 16774, 16773);
				tv0->AddReply(515719, 16774, 16775);
				return;
			}
			if (a0 == 16774) {
				f_114f_a1_v("Jeer");
				tv0->SetMessage(515718);
				tv0->ClearReplies();
				tv0->AddReply(515726, 16784, 16783);
				return;
			}
			if (a0 == 16784) {
				f_114f_a1_v("Jeer");
				tv0->SetMessage(515727);
				tv0->ClearReplies();
				tv0->AddReply(515728, 16787, 16786);
				return;
			}
			if (a0 == 16787) {
				f_114f_a1_v("Neutral");
				tv0->SetMessage(515729);
				tv0->ClearReplies();
				tv0->AddReply(515730, -1, 16788);
				tv0->AddReply(515731, -1, 16789);
				return;
			}
			if (a0 == 13003) {
				f_114f_a1_v("Jeer");
				tv0->SetMessage(511793);
				tv0->ClearReplies();
				tv0->AddReply(511795, 13006, 13005);
				tv0->AddReply(515711, 16768, 16767);
				return;
			}
			if (a0 == 16768) {
				f_114f_a1_v("Neutral");
				tv0->SetMessage(515712);
				tv0->ClearReplies();
				tv0->AddReply(515715, 13006, 16771);
				tv0->AddReply(515716, -1, 16772);
				return;
			}
			if (a0 == 13006) {
				f_114f_a1_v("Distrust");
				tv0->SetMessage(511796);
				tv0->ClearReplies();
				tv0->AddReply(511797, 13008, 13007);
				return;
			}
			if (a0 == 13008) {
				f_114f_a1_v("Distrust");
				tv0->SetMessage(511798);
				tv0->ClearReplies();
				tv0->AddReply(511799, 13010, 13009);
				tv0->AddReply(515720, 16778, 16777);
				return;
			}
			if (a0 == 16778) {
				f_114f_a1_v("Neutral");
				tv0->SetMessage(515721);
				tv0->ClearReplies();
				tv0->AddReply(515722, 16780, 16779);
				return;
			}
			if (a0 == 16780) {
				f_114f_a1_v("Neutral");
				tv0->SetMessage(515723);
				tv0->ClearReplies();
				tv0->AddReply(515724, -1, 16781);
				tv0->AddReply(515725, -1, 16782);
				return;
			}
			if (a0 == 13010) {
				f_114f_a1_v("Neutral");
				tv0->SetMessage(511800);
				tv0->ClearReplies();
				tv0->AddReply(511801, -1, 13011);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			if (f_1e33_a1_b(tv1) && f_1e3f_a1_b(tv1)) {
				f_1c8e_a2_v(tv1, tv0);
				f_135d_a1_v("Neutral");
				tv0->SetMessage(512258);
				tv0->ClearReplies();
				tv0->AddReply(512259, 13417, 13416);
				tv0->AddReply(541804, -1, 44016);
				break;
			}
			f_135d_a1_v("Neutral");
			tv0->SetMessage(513775);
			tv0->ClearReplies();
			tv0->AddReply(513776, -1, 15012);
			tv0->AddReply(541596, -1, 43760);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_135d_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a0 == 13415) {
				if (f_1e33_a1_b(tv1) && f_1e3f_a1_b(tv1)) {
					f_1c8e_a2_v(tv1, tv0);
					f_135d_a1_v("Neutral");
					tv0->SetMessage(512258);
					tv0->ClearReplies();
					tv0->AddReply(512259, 13417, 13416);
					tv0->AddReply(541804, -1, 44016);
					return;
				}
				f_135d_a1_v("Neutral");
				tv0->SetMessage(513775);
				tv0->ClearReplies();
				tv0->AddReply(513776, -1, 15012);
				tv0->AddReply(541596, -1, 43760);
				return;
			}
			if (a0 == 13417) {
				f_135d_a1_v("Neutral");
				tv0->SetMessage(512260);
				tv0->ClearReplies();
				tv0->AddReply(512261, 13419, 13418);
				tv0->AddReply(541805, 44029, 44017);
				return;
			}
			if (a0 == 44029) {
				f_135d_a1_v("Anger");
				tv0->SetMessage(541817);
				tv0->ClearReplies();
				tv0->AddReply(541818, 13421, 44030);
				return;
			}
			if (a0 == 13419) {
				f_135d_a1_v("Neutral");
				tv0->SetMessage(512262);
				tv0->ClearReplies();
				tv0->AddReply(512263, 13421, 13420);
				return;
			}
			if (a0 == 13421) {
				f_135d_a1_v("Neutral");
				tv0->SetMessage(512264);
				tv0->ClearReplies();
				tv0->AddReply(512265, 13423, 13422);
				return;
			}
			if (a0 == 13423) {
				f_135d_a1_v("Neutral");
				tv0->SetMessage(512266);
				tv0->ClearReplies();
				tv0->AddReply(512267, 13425, 13424);
				tv0->AddReply(541819, 44033, 44032);
				return;
			}
			if (a0 == 44033) {
				f_135d_a1_v("Neutral");
				tv0->SetMessage(541820);
				tv0->ClearReplies();
				tv0->AddReply(541821, 44035, 44034);
				return;
			}
			if (a0 == 44035) {
				f_135d_a1_v("Neutral");
				tv0->SetMessage(541822);
				tv0->ClearReplies();
				tv0->AddReply(541823, 44037, 44036);
				tv0->AddReply(541826, 13425, 44039);
				return;
			}
			if (a0 == 44037) {
				f_135d_a1_v("Neutral");
				tv0->SetMessage(541824);
				tv0->ClearReplies();
				tv0->AddReply(541825, 13425, 44038);
				return;
			}
			if (a0 == 13425) {
				f_135d_a1_v("Anger");
				tv0->SetMessage(512268);
				tv0->ClearReplies();
				tv0->AddReply(512269, 13427, 13426);
				return;
			}
			if (a0 == 13427) {
				f_135d_a1_v("Anger");
				tv0->SetMessage(512270);
				tv0->ClearReplies();
				tv0->AddReply(512271, 13429, 13428);
				return;
			}
			if (a0 == 13429) {
				f_135d_a1_v("Neutral");
				tv0->SetMessage(512272);
				tv0->ClearReplies();
				tv0->AddReply(512273, -1, 13430);
				tv0->AddReply(541827, -1, 44042);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			f_152e_a1_v("Neutral");
			tv0->SetMessage(534109);
			tv0->ClearReplies();
			if (f_1cca_a1_b(tv1)) {
				tv0->AddReply(534110, 38263, 35703);
			}
			tv0->AddReply(534111, -1, 35704);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_152e_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a1 == 35708) {
				f_1ba6_a2_v(tv1, tv0);
				f_1b30_a2_v(tv1, tv0);
			}
			if (a1 == 35709) {
				f_1ba6_a2_v(tv1, tv0);
				f_1b30_a2_v(tv1, tv0);
			}
			if (a0 == 35702) {
				f_152e_a1_v("Neutral");
				tv0->SetMessage(534109);
				tv0->ClearReplies();
				if (f_1cca_a1_b(tv1)) {
					tv0->AddReply(534110, 38263, 35703);
				}
				tv0->AddReply(534111, -1, 35704);
				return;
			}
			if (a0 == 38263) {
				f_152e_a1_v("Grin");
				tv0->SetMessage(536470);
				tv0->ClearReplies();
				tv0->AddReply(536471, 38265, 38264);
				tv0->AddReply(536477, 38271, 38270);
				return;
			}
			if (a0 == 38271) {
				f_152e_a1_v("Neutral");
				tv0->SetMessage(536478);
				tv0->ClearReplies();
				tv0->AddReply(536481, 38267, 38274);
				tv0->AddReply(536480, 35705, 38273);
				return;
			}
			if (a0 == 38265) {
				f_152e_a1_v("Jeer");
				tv0->SetMessage(536472);
				tv0->ClearReplies();
				tv0->AddReply(536473, 38267, 38266);
				tv0->AddReply(536479, 35705, 38272);
				return;
			}
			if (a0 == 38267) {
				f_152e_a1_v("Neutral");
				tv0->SetMessage(536474);
				tv0->ClearReplies();
				tv0->AddReply(536475, 35705, 38268);
				tv0->AddReply(536482, 38279, 38278);
				return;
			}
			if (a0 == 38279) {
				f_152e_a1_v("Neutral");
				tv0->SetMessage(536483);
				tv0->ClearReplies();
				tv0->AddReply(536484, 35705, 38280);
				tv0->AddReply(536485, 35705, 38281);
				return;
			}
			if (a0 == 35705) {
				f_152e_a1_v("Grin");
				tv0->SetMessage(534112);
				tv0->ClearReplies();
				tv0->AddReply(534445, 38305, 36078);
				tv0->AddReply(536486, 36079, 38284);
				return;
			}
			if (a0 == 38305) {
				f_152e_a1_v("Neutral");
				tv0->SetMessage(536505);
				tv0->ClearReplies();
				tv0->AddReply(536506, 36079, 38306);
				tv0->AddReply(536507, 36079, 38307);
				return;
			}
			if (a0 == 36079) {
				f_152e_a1_v("Grin");
				tv0->SetMessage(534446);
				tv0->ClearReplies();
				tv0->AddReply(534113, 35707, 35706);
				return;
			}
			if (a0 == 35707) {
				f_152e_a1_v("Grin");
				tv0->SetMessage(534114);
				tv0->ClearReplies();
				tv0->AddReply(534115, -1, 35708);
				tv0->AddReply(534116, -1, 35709);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			f_16e7_a1_v("Neutral");
			tv0->SetMessage(535662);
			tv0->ClearReplies();
			tv0->AddReply(535663, 42111, 37349);
			tv0->AddReply(540003, -1, 41974);
			tv0->AddReply(540138, -1, 42110);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_16e7_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a0 == 37348) {
				f_16e7_a1_v("Neutral");
				tv0->SetMessage(535662);
				tv0->ClearReplies();
				tv0->AddReply(535663, 42111, 37349);
				tv0->AddReply(540003, -1, 41974);
				tv0->AddReply(540138, -1, 42110);
				return;
			}
			if (a0 == 42111) {
				f_16e7_a1_v("Grin");
				tv0->SetMessage(540139);
				tv0->ClearReplies();
				tv0->AddReply(540219, 42200, 42199);
				tv0->AddReply(540221, 42202, 42201);
				return;
			}
			if (a0 == 42202) {
				f_16e7_a1_v("Grin");
				tv0->SetMessage(540222);
				tv0->ClearReplies();
				tv0->AddReply(540223, 42200, 42203);
				return;
			}
			if (a0 == 42200) {
				f_16e7_a1_v("Neutral");
				tv0->SetMessage(540220);
				tv0->ClearReplies();
				tv0->AddReply(540224, 42209, 42205);
				tv0->AddReply(540225, 42207, 42206);
				return;
			}
			if (a0 == 42207) {
				f_16e7_a1_v("Neutral");
				tv0->SetMessage(540226);
				tv0->ClearReplies();
				tv0->AddReply(540227, -1, 42208);
				tv0->AddReply(540231, -1, 42212);
				return;
			}
			if (a0 == 42209) {
				f_16e7_a1_v("Neutral");
				tv0->SetMessage(540228);
				tv0->ClearReplies();
				tv0->AddReply(540229, -1, 42210);
				tv0->AddReply(540230, -1, 42211);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		if (!f_198f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b1e_a0_i());
		L0->SetNPCDescription(f_1b1c_a0_i());
		L0->SetPhoto(f_1b20_a0_s());
		L0->SetPhoto2(f_1b22_a0_s());
		L0->SetPlayerName(f_1f34_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_19e6_a1_b(f_1aa5_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_19d4_a1_v(a0);
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
			f_1825_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_1b24_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a70_a1_v(tv2);
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

	void f_1825_a1_v(string a0)
	{
		if (!f_1b24_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a80_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a9e_a0_v();
			if (a0 == 42551) {
				f_1825_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_1b24_a0_b()) {
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
		f_186c_a0_v();
	}

	void f_186c_a0_v(void)
	{
		if (!f_198a_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_191c_a0_v();
		}
	}

	bool f_187a_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1981_a1_b(L0);
	}

	void f_1889_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_188e_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1968_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_18a4_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_18ad_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_18ad_a0_v();
			if (f_198a_a0_b() && f_188e_a0_b()) {
				if (f_187a_a0_b()) {
					f_1a20_a1_b(f_1aa5_a0_o());
				}
			} else {
				f_1889_a0_v();
				f_18a4_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1963_a0_v();
		f_18ad_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_18ad_a0_v();
		f_1a70_a1_v("Neutral");
		f_18a4_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_18a4_a0_v();
		} else {
			f_1a70_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1963_a0_v();
			f_1981_a1_b(a0);
			enable OnUse;
			f_1f45_a1_v(a0);
			f_1a70_a1_v("Neutral");
			f_18ad_a0_v();
			f_18a4_a0_v();
		}
	}
}

void f_191c_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_198a_a0_b()) {
		return;
	}
	L0 = f_1b0b_a0_i();
	for (L1 = 0; L1 < 5 && f_198a_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1b04_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1961_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1961_a0_b(void)
{
	return true;
}

void f_1963_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1968_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_1970_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1977_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1981_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1977_a1_b(L0);
}

bool f_198a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_198f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1aab_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1b24_a0_b()) {
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

void f_19d4_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1b24_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_19e6_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1a20_a1_b(a0)) {
			if (!f_1a45_a1_b(a0)) {
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
		if (!f_1a45_a1_b(a0)) {
			if (!f_1a20_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1a20_a1_b(object a0)
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
	return f_1a8f_a1_b(L4);
}

bool f_1a45_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1af5_a0_i() + "m";
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
	return f_1a8f_a1_b(L4);
}

void f_1a70_a1_v(string a0)
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

void f_1a80_a2_v(string a0, bool a1)
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

bool f_1a8f_a1_b(string a0)
{
	if (f_1b24_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1a9e_a0_v(void)
{
	if (f_1b24_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1aa5_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1aab_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1ab5_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1aba_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_1ac5_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1ad1_a2_v(object a0, int a1)
{
	f_1970_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1ac5_a2_v(L0, a1);
	}
}

bool f_1ae4_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1af0_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1af5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1afe_a1_b(int a0)
{
	return f_1af5_a0_i() == a0;
}

string f_1b04_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1b0b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1b04_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1b1c_a0_i(void)
{
	return 515534;
}

int f_1b1e_a0_i(void)
{
	return 502859;
}

string f_1b20_a0_s(void)
{
	return "ui/NPC_Georg.png";
}

string f_1b22_a0_s(void)
{
	return "ui/NPC_Georg_b.png";
}

bool f_1b24_a0_b(void)
{
	return true;
}

void f_1b26_a2_v(object a0, object a1)
{
	@Trace("money 4000 is given");
	f_1ad1_a2_v(a0, 4000);
}

void f_1b30_a2_v(object a0, object a1)
{
	f_1f13_a3_v(f_1f02_a0_o(), "pt_map_aglaja", 2);
	a1->ShowMap(f_1f02_a0_o());
}

void f_1b40_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q01", 1);
	L0 = f_1f02_a0_o();
	L0->AddMark("d1GeorgInfo", "pt_map_georg", 3, 508631, f_1af0_a0_f());
	L0->AddMark("d1q01GeorgGotoViktor", "pt_map_viktor", 1, 508629, f_1af0_a0_f());
	f_1e64_a0_v();
	f_1e7e_a0_v();
}

void f_1b63_a2_v(object a0, object a1)
{
	f_1e71_a0_v();
	f_1ae4_a2_b("quest_d1_01", "completed");
}

void f_1b6d_a2_v(object a0, object a1)
{
	@SetVariable("d1q01TeloNedostupno", 1);
}

void f_1b73_a2_v(object a0, object a1)
{
	@SetVariable("d1q01FirstGeorgVisit", 1);
	f_1ae4_a2_b("quest_d1_01", "remove_cutscene");
	f_1ae4_a2_b("quest_d1_01", "unlock_doors");
}

void f_1b83_a2_v(object a0, object a1)
{
	if (f_1ab5_a1_i("d2q01BigVladVisit") != 0 && f_1ab5_a1_i("d2q01GeorgVisit") != 0) {
		f_1e8b_a0_v();
	}
}

void f_1b9a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1ba0_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg5", 1);
}

void f_1ba6_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d10q02", 4);
	L0 = f_1f02_a0_o();
	L0->AddMark("d10q02GeorgGotoAglaja", "pt_map_aglaja", 0, 515299, f_1af0_a0_f());
	f_1e57_a0_v();
}

void f_1bbd_a2_v(object a0, object a1)
{
	@SetVariable("ood2Georg1", 1);
}

void f_1bc3_a2_v(object a0, object a1)
{
	@SetVariable("ood2Georg2", 1);
}

void f_1bc9_a2_v(object a0, object a1)
{
	@SetVariable("d2q01GeorgVisit", 1);
	f_1e98_a0_v();
}

void f_1bd2_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg4", 1);
}

void f_1bd8_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_1ad1_a2_v(a0, 5000);
}

void f_1be2_a2_v(object a0, object a1)
{
	int L0;
	f_1eb2_a0_v();
	@GetVariable("d3q02", L0);
	if (L0) {
		f_1ae4_a2_b("quest_d3_02", "completed");
	} else {
		@SetVariable("d3q02", 1000);
	}
}

void f_1bf6_a2_v(object a0, object a1)
{
	@SetVariable("ood3Georg1", 1);
}

void f_1bfc_a2_v(object a0, object a1)
{
	@SetVariable("ood3Georg2", 1);
}

void f_1c02_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q02", 1);
	L0 = f_1f02_a0_o();
	L0->AddMark("d3q02GeorgGotoViktor", "pt_map_viktor", 0, 511379, f_1af0_a0_f());
	f_1ea5_a0_v();
	f_1ebf_a0_v();
	f_1aba_a1_o("quest_d3_02");
}

void f_1c20_a2_v(object a0, object a1)
{
	f_1ecc_a0_v();
	f_1ae4_a2_b("quest_d3_02", "completed");
}

void f_1c2a_a2_v(object a0, object a1)
{
	f_1f13_a3_v(f_1f02_a0_o(), "pt_map_viktor", 2);
	a1->ShowMap(f_1f02_a0_o());
}

void f_1c3a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Georg3", 1);
}

void f_1c40_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg1", 1);
}

void f_1c46_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg2", 1);
}

void f_1c4c_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg3", 1);
}

void f_1c52_a2_v(object a0, object a1)
{
	@SetVariable("KnowRubin", 1);
}

void f_1c58_a2_v(object a0, object a1)
{
	@SetVariable("KnowSaburivClan", 1);
}

void f_1c5e_a2_v(object a0, object a1)
{
	@SetVariable("KnowOlgimskiClan", 1);
}

void f_1c64_a2_v(object a0, object a1)
{
	@SetVariable("KnowKainClan", 1);
}

void f_1c6a_a2_v(object a0, object a1)
{
	@SetVariable("ood5Georg1", 1);
}

void f_1c70_a2_v(object a0, object a1)
{
	@SetVariable("KnowAlexandr", 1);
}

void f_1c76_a2_v(object a0, object a1)
{
	@SetVariable("KnowBigVlad", 1);
}

void f_1c7c_a2_v(object a0, object a1)
{
	@SetVariable("ood6Georg1", 1);
}

void f_1c82_a2_v(object a0, object a1)
{
	@SetVariable("ood6Georg2", 1);
}

void f_1c88_a2_v(object a0, object a1)
{
	@SetVariable("ood6Georg3", 1);
}

void f_1c8e_a2_v(object a0, object a1)
{
	@SetVariable("ood8Georg1", 1);
}

void f_1c94_a2_v(object a0, object a1)
{
	@SetVariable("d3GeorgVisit", 1);
}

bool f_1c9a_a1_b(object a0)
{
	if (f_1ab5_a1_i("d1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1ca6_a1_b(object a0)
{
	if (f_1ab5_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_1cb2_a1_b(object a0)
{
	if (f_1ab5_a1_i("d1q01") == 8) {
		return true;
	}
	return false;
}

bool f_1cbe_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood1Georg5") == 0) {
		return true;
	}
	return false;
}

bool f_1cca_a1_b(object a0)
{
	if (f_1ab5_a1_i("d10q02") == 3) {
		return true;
	}
	return false;
}

bool f_1cd6_a1_b(object a0)
{
	if (f_1ab5_a1_i("d3q01HelpBurah") != 0) {
		return true;
	}
	return false;
}

bool f_1ce2_a1_b(object a0)
{
	if (!(f_1ab5_a1_i("d3q02") == 1000) && !(f_1ab5_a1_i("d3q02") == 0) && !(f_1ab5_a1_i("d3q02") == -1)) {
		return true;
	}
	return false;
}

bool f_1d07_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood2Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_1d13_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood2Georg2") == 0) {
		return true;
	}
	return false;
}

bool f_1d1f_a1_b(object a0)
{
	if (f_1ab5_a1_i("d2q01") == 0) {
		return true;
	}
	return false;
}

bool f_1d2b_a1_b(object a0)
{
	if (f_1ab5_a1_i("d2q01") == 6) {
		return true;
	}
	return false;
}

bool f_1d37_a1_b(object a0)
{
	if (f_1ab5_a1_i("KnowBurahDead") == 1) {
		return true;
	}
	return false;
}

bool f_1d43_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood1Georg4") == 0) {
		return true;
	}
	return false;
}

bool f_1d4f_a1_b(object a0)
{
	if (f_1ab5_a1_i("d1q01") == 1) {
		return true;
	}
	return false;
}

bool f_1d5b_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood1Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_1d67_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood1Georg2") == 0) {
		return true;
	}
	return false;
}

bool f_1d73_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood1Georg3") == 0) {
		return true;
	}
	return false;
}

bool f_1d7f_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood3Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_1d8b_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood3Georg2") == 0) {
		return true;
	}
	return false;
}

bool f_1d97_a1_b(object a0)
{
	if (f_1ab5_a1_i("d3RubinToldWhereIsSimon") == 1) {
		return true;
	}
	return false;
}

bool f_1da3_a1_b(object a0)
{
	if (f_1ab5_a1_i("d3q02") == 0) {
		return true;
	}
	return false;
}

bool f_1daf_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood3Georg3") == 0) {
		return true;
	}
	return false;
}

bool f_1dbb_a1_b(object a0)
{
	if (f_1ab5_a1_i("d3q02SeeCorpse") == 1) {
		return true;
	}
	return false;
}

bool f_1dc7_a1_b(object a0)
{
	if (f_1ab5_a1_i("d5q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1dd3_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood5Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_1ddf_a1_b(object a0)
{
	if (f_1ab5_a1_i("d6q01") == 0) {
		return true;
	}
	return false;
}

bool f_1deb_a1_b(object a0)
{
	if (f_1ab5_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1df7_a1_b(object a0)
{
	if (f_1ab5_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_1e03_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood6Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_1e0f_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood6Georg2") == 0) {
		return true;
	}
	return false;
}

bool f_1e1b_a1_b(object a0)
{
	if (f_1ab5_a1_i("d6RubinGoesToGeorg") != 0) {
		return true;
	}
	return false;
}

bool f_1e27_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood6Georg3") == 0) {
		return true;
	}
	return false;
}

bool f_1e33_a1_b(object a0)
{
	if (f_1ab5_a1_i("d8KainIsReason") == 1) {
		return true;
	}
	return false;
}

bool f_1e3f_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood8Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_1e4b_a1_b(object a0)
{
	if (f_1ab5_a1_i("ood5Georg2") == 0) {
		return true;
	}
	return false;
}

void f_1e57_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 670, 2, 534124);
	f_1ee6_a2_b(L0, 666);
}

void f_1e64_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 2, 1, 503073);
	f_1ee6_a2_b(L0, -1);
}

void f_1e71_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 622, 1, 532196);
	f_1ee6_a2_b(L0, 2);
}

void f_1e7e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 31, 1, 512113);
	f_1ee6_a2_b(L0, 2);
}

void f_1e8b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 628, 1, 532757);
	f_1ee6_a2_b(L0, 10);
}

void f_1e98_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 626, 1, 532755);
	f_1ee6_a2_b(L0, 10);
}

void f_1ea5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 26, 2, 503366);
	f_1ee6_a2_b(L0, -1);
}

void f_1eb2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 678, 2, 534417);
	f_1ee6_a2_b(L0, 26);
}

void f_1ebf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 76, 2, 512158);
	f_1ee6_a2_b(L0, 26);
}

void f_1ecc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 81, 2, 512163);
	f_1ee6_a2_b(L0, 26);
}

object f_1ed9_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1ee6_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1ed9_a0_o();
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

object f_1f02_a0_o(void)
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

void f_1f13_a3_v(object a0, string a1, float a2)
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

int f_1f34_a0_i(void)
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

void f_1f45_a1_v(object a0)
{
	if (f_1afe_a1_b(1)) {
		t2{a0};
		return;
	}
	if (f_1afe_a1_b(2)) {
		t4{a0};
		return;
	}
	if (f_1afe_a1_b(3)) {
		t6{a0};
		return;
	}
	if (f_1afe_a1_b(5)) {
		t8{a0};
		return;
	}
	if (f_1afe_a1_b(6)) {
		t0{a0};
		return;
	}
	if (f_1afe_a1_b(8)) {
		t10{a0};
		return;
	}
	if (f_1afe_a1_b(10)) {
		t12{a0};
		return;
	}
	if (f_1afe_a1_b(12)) {
		t14{a0};
		return;
	}
	t16{a0};
}

