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
		f_15f2_a0_v();
		if (!f_11a1_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_11e2_a1_v("Neutral");
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
		f_15f6_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1195_a1_b(a0);
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
		if (!f_11a6_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_123e_a0_i());
		L0->SetPhoto(f_1240_a0_s());
		L0->SetPlayerName(f_15a1_a0_i());
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
		f_11de_a1_v(a0);
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
			f_ea_a1_v("Neutral");
			tv0->SetMessage(12009);
			tv0->ClearReplies();
			if (f_1501_a1_b(tv1) && f_150d_a1_b(tv1)) {
				tv0->AddReply(12010, 13230, 13228);
			}
			if (!f_14c5_a1_b(tv1) && !f_14d1_a1_b(tv1) && !f_14dd_a1_b(tv1) && f_14e9_a1_b(tv1)) {
				tv0->AddReply(12014, 13233, 13232);
			}
			if (f_14f5_a1_b(tv1)) {
				tv0->AddReply(12018, 3560, 13236);
			}
			tv0->AddReply(12011, -1, 13229);
			break;
			return;
		}
		if (f_1242_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11e2_a1_v(tv2);
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

	void f_ea_a1_v(string a0)
	{
		if (!f_1242_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_11e2_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_11f4_a0_v();
			if (a1 == 13228) {
				f_13c5_a2_v(tv1, tv0);
			}
			if (a1 == 13232) {
				f_13b9_a2_v(tv1, tv0);
			}
			if (a1 == 13236) {
				f_13bf_a2_v(tv1, tv0);
			}
			if (a0 == 13227) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(12009);
				tv0->ClearReplies();
				if (f_1501_a1_b(tv1) && f_150d_a1_b(tv1)) {
					tv0->AddReply(12010, 13230, 13228);
				}
				if (!f_14c5_a1_b(tv1) && !f_14d1_a1_b(tv1) && !f_14dd_a1_b(tv1) && f_14e9_a1_b(tv1)) {
					tv0->AddReply(12014, 13233, 13232);
				}
				if (f_14f5_a1_b(tv1)) {
					tv0->AddReply(12018, 3560, 13236);
				}
				tv0->AddReply(12011, -1, 13229);
				return;
			}
			if (a0 == 3560) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(3289);
				tv0->ClearReplies();
				tv0->AddReply(3290, 3562, 3561);
				tv0->AddReply(3298, 3572, 3571);
				return;
			}
			if (a0 == 3572) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(3299);
				tv0->ClearReplies();
				tv0->AddReply(3300, 3562, 3573);
				tv0->AddReply(3301, 3564, 3575);
				return;
			}
			if (a0 == 3562) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(3291);
				tv0->ClearReplies();
				tv0->AddReply(3292, 3564, 3563);
				tv0->AddReply(3295, 3564, 3566);
				return;
			}
			if (a0 == 3564) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(3293);
				tv0->ClearReplies();
				tv0->AddReply(3294, 3568, 3565);
				tv0->AddReply(3297, 3568, 3569);
				return;
			}
			if (a0 == 3568) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(3296);
				tv0->ClearReplies();
				tv0->AddReply(3302, 3578, 3577);
				tv0->AddReply(3305, 3578, 3580);
				return;
			}
			if (a0 == 3578) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(3303);
				tv0->ClearReplies();
				tv0->AddReply(3304, -1, 3579);
				return;
			}
			if (a0 == 13233) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(12015);
				tv0->ClearReplies();
				tv0->AddReply(12016, 13235, 13234);
				return;
			}
			if (a0 == 13235) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(12017);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 13230) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(12012);
				tv0->ClearReplies();
				tv0->AddReply(12013, -1, 13231);
				return;
			}
			tv3 = true;
			if (f_1242_a0_b()) {
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
		if (!f_11a6_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_123e_a0_i());
		L0->SetPhoto(f_1240_a0_s());
		L0->SetPlayerName(f_15a1_a0_i());
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
		f_11de_a1_v(a0);
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
			if (f_1429_a1_b(tv1)) {
				f_12b3_a2_v(tv1, tv0);
				f_13b3_a2_v(tv1, tv0);
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4780);
				tv0->ClearReplies();
				tv0->AddReply(4781, 5240, 5234);
				tv0->AddReply(4782, 5240, 5235);
				tv0->AddReply(4786, 5240, 5239);
				break;
			}
			if (f_13ef_a1_b(tv1)) {
				f_13b3_a2_v(tv1, tv0);
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4783);
				tv0->ClearReplies();
				tv0->AddReply(4784, 5294, 5237);
				tv0->AddReply(4830, 5301, 5297);
				tv0->AddReply(4836, 5296, 5304);
				tv0->AddReply(4845, -1, 5317);
				break;
			}
			return;
		}
		if (f_1242_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11e2_a1_v(tv2);
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

	void f_2e7_a1_v(string a0)
	{
		if (!f_1242_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_11e2_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_11f4_a0_v();
			if (a1 == 5312) {
				f_132f_a2_v(tv1, tv0);
				f_1244_a2_v(tv1, tv0);
				f_12f6_a2_v(tv1, tv0);
			}
			if (a1 == 5313) {
				f_132f_a2_v(tv1, tv0);
				f_1244_a2_v(tv1, tv0);
				f_12f6_a2_v(tv1, tv0);
			}
			if (a1 == 5266) {
				f_132f_a2_v(tv1, tv0);
			}
			if (a1 == 5314) {
				f_1244_a2_v(tv1, tv0);
				f_12f6_a2_v(tv1, tv0);
			}
			if (a1 == 5315) {
				f_1244_a2_v(tv1, tv0);
				f_12f6_a2_v(tv1, tv0);
			}
			if (a0 == 5233) {
				if (f_1429_a1_b(tv1)) {
					f_12b3_a2_v(tv1, tv0);
					f_13b3_a2_v(tv1, tv0);
					f_2e7_a1_v("Neutral");
					tv0->SetMessage(4780);
					tv0->ClearReplies();
					tv0->AddReply(4781, 5240, 5234);
					tv0->AddReply(4782, 5240, 5235);
					tv0->AddReply(4786, 5240, 5239);
					return;
				}
				if (f_13ef_a1_b(tv1)) {
					f_13b3_a2_v(tv1, tv0);
					f_2e7_a1_v("Neutral");
					tv0->SetMessage(4783);
					tv0->ClearReplies();
					tv0->AddReply(4784, 5294, 5237);
					tv0->AddReply(4830, 5301, 5297);
					tv0->AddReply(4836, 5296, 5304);
					tv0->AddReply(4845, -1, 5317);
					return;
				}
			}
			if (a0 == 5301) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4834);
				tv0->ClearReplies();
				tv0->AddReply(4835, 5299, 5302);
				return;
			}
			if (a0 == 5294) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4827);
				tv0->ClearReplies();
				tv0->AddReply(4828, 5296, 5295);
				tv0->AddReply(4831, 5299, 5298);
				return;
			}
			if (a0 == 5299) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4832);
				tv0->ClearReplies();
				tv0->AddReply(4833, 5307, 5300);
				return;
			}
			if (a0 == 5296) {
				f_1335_a2_v(tv1, tv0);
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4829);
				tv0->ClearReplies();
				tv0->AddReply(4837, 5307, 5306);
				return;
			}
			if (a0 == 5307) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4838);
				tv0->ClearReplies();
				tv0->AddReply(4843, -1, 5314);
				tv0->AddReply(4844, -1, 5315);
				return;
			}
			if (a0 == 5240) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4787);
				tv0->ClearReplies();
				tv0->AddReply(4788, 5245, 5243);
				tv0->AddReply(4789, 5245, 5244);
				return;
			}
			if (a0 == 5245) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4790);
				tv0->ClearReplies();
				tv0->AddReply(4791, 5250, 5247);
				tv0->AddReply(4792, 5269, 5248);
				tv0->AddReply(4793, 5271, 5249);
				return;
			}
			if (a0 == 5271) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4811);
				tv0->ClearReplies();
				tv0->AddReply(4812, 5269, 5272);
				tv0->AddReply(4813, 5274, 5273);
				return;
			}
			if (a0 == 5274) {
				f_12d7_a2_v(tv1, tv0);
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4814);
				tv0->ClearReplies();
				tv0->AddReply(4815, 5269, 5276);
				return;
			}
			if (a0 == 5269) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4809);
				tv0->ClearReplies();
				tv0->AddReply(4810, 5278, 5270);
				tv0->AddReply(4824, 5278, 5287);
				return;
			}
			if (a0 == 5278) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4816);
				tv0->ClearReplies();
				tv0->AddReply(4817, 5280, 5279);
				tv0->AddReply(4825, 5257, 5289);
				return;
			}
			if (a0 == 5280) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4818);
				tv0->ClearReplies();
				tv0->AddReply(4819, 5282, 5281);
				tv0->AddReply(4826, 5282, 5291);
				return;
			}
			if (a0 == 5282) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4820);
				tv0->ClearReplies();
				tv0->AddReply(4821, 5253, 5283);
				tv0->AddReply(4823, 5253, 5285);
				return;
			}
			if (a0 == 5250) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4794);
				tv0->ClearReplies();
				tv0->AddReply(4795, 5253, 5251);
				tv0->AddReply(4796, 5253, 5252);
				return;
			}
			if (a0 == 5253) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4797);
				tv0->ClearReplies();
				tv0->AddReply(4798, 5257, 5254);
				tv0->AddReply(4799, 5257, 5256);
				return;
			}
			if (a0 == 5257) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4800);
				tv0->ClearReplies();
				tv0->AddReply(4801, 5259, 5258);
				tv0->AddReply(4803, 5264, 5260);
				return;
			}
			if (a0 == 5259) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4802);
				tv0->ClearReplies();
				tv0->AddReply(4804, 5264, 5262);
				tv0->AddReply(4805, 5264, 5263);
				return;
			}
			if (a0 == 5264) {
				f_1335_a2_v(tv1, tv0);
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4806);
				tv0->ClearReplies();
				tv0->AddReply(4807, 5310, 5265);
				tv0->AddReply(4808, -1, 5266);
				return;
			}
			if (a0 == 5310) {
				f_2e7_a1_v("Neutral");
				tv0->SetMessage(4840);
				tv0->ClearReplies();
				tv0->AddReply(4841, -1, 5312);
				tv0->AddReply(4842, -1, 5313);
				return;
			}
			tv3 = true;
			if (f_1242_a0_b()) {
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
		if (!f_11a6_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_123e_a0_i());
		L0->SetPhoto(f_1240_a0_s());
		L0->SetPlayerName(f_15a1_a0_i());
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
		f_11de_a1_v(a0);
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
			if (f_1435_a1_b(tv1) && f_14b9_a1_b(tv1)) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4850);
				tv0->ClearReplies();
				tv0->AddReply(4879, 5370, 5353);
				tv0->AddReply(4890, 5354, 5367);
				break;
			}
			f_615_a1_v("Neutral");
			tv0->SetMessage(7627);
			tv0->ClearReplies();
			if (f_144d_a1_b(tv1)) {
				tv0->AddReply(7629, 5329, 8418);
			}
			if (f_1459_a1_b(tv1)) {
				tv0->AddReply(7632, 5334, 8421);
			}
			if (f_147d_a1_b(tv1) && f_141d_a1_b(tv1)) {
				tv0->AddReply(7630, 8420, 8419);
			}
			tv0->AddReply(7658, -1, 8451);
			break;
			return;
		}
		if (f_1242_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11e2_a1_v(tv2);
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

	void f_615_a1_v(string a0)
	{
		if (!f_1242_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_11e2_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_11f4_a0_v();
			if (a1 == 5424) {
				f_1389_a2_v(tv1, tv0);
				f_1264_a2_v(tv1, tv0);
			}
			if (a1 == 5360) {
				f_1389_a2_v(tv1, tv0);
				f_12ad_a2_v(tv1, tv0);
			}
			if (a1 == 5359) {
				f_1389_a2_v(tv1, tv0);
				f_12ad_a2_v(tv1, tv0);
			}
			if (a1 == 5394) {
				f_138f_a2_v(tv1, tv0);
				f_12dd_a2_v(tv1, tv0);
				f_12f6_a2_v(tv1, tv0);
			}
			if (a1 == 5407) {
				f_138f_a2_v(tv1, tv0);
				f_12dd_a2_v(tv1, tv0);
				f_12f6_a2_v(tv1, tv0);
			}
			if (a1 == 5341) {
				f_1395_a2_v(tv1, tv0);
			}
			if (a1 == 5342) {
				f_1395_a2_v(tv1, tv0);
			}
			if (a1 == 5347) {
				f_1395_a2_v(tv1, tv0);
			}
			if (a1 == 8440) {
				f_1395_a2_v(tv1, tv0);
			}
			if (a1 == 8449) {
				f_12d1_a2_v(tv1, tv0);
			}
			if (a1 == 8450) {
				f_12d1_a2_v(tv1, tv0);
			}
			if (a1 == 8446) {
				f_12d1_a2_v(tv1, tv0);
			}
			if (a0 == 5322) {
				if (f_1435_a1_b(tv1) && f_14b9_a1_b(tv1)) {
					f_615_a1_v("Neutral");
					tv0->SetMessage(4850);
					tv0->ClearReplies();
					tv0->AddReply(4879, 5370, 5353);
					tv0->AddReply(4890, 5354, 5367);
					return;
				}
				f_615_a1_v("Neutral");
				tv0->SetMessage(7627);
				tv0->ClearReplies();
				if (f_144d_a1_b(tv1)) {
					tv0->AddReply(7629, 5329, 8418);
				}
				if (f_1459_a1_b(tv1)) {
					tv0->AddReply(7632, 5334, 8421);
				}
				if (f_147d_a1_b(tv1) && f_141d_a1_b(tv1)) {
					tv0->AddReply(7630, 8420, 8419);
				}
				tv0->AddReply(7658, -1, 8451);
				return;
			}
			if (a0 == 8420) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(7631);
				tv0->ClearReplies();
				tv0->AddReply(7633, 8445, 8422);
				return;
			}
			if (a0 == 8445) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(7652);
				tv0->ClearReplies();
				tv0->AddReply(7654, 8448, 8447);
				tv0->AddReply(7653, -1, 8446);
				return;
			}
			if (a0 == 8448) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(7655);
				tv0->ClearReplies();
				tv0->AddReply(7656, -1, 8449);
				tv0->AddReply(7657, -1, 8450);
				return;
			}
			if (a0 == 5334) {
				f_139b_a2_v(tv1, tv0);
				f_615_a1_v("Neutral");
				tv0->SetMessage(4862);
				tv0->ClearReplies();
				tv0->AddReply(4863, 5336, 5335);
				tv0->AddReply(4875, 5414, 5348);
				if (!f_1411_a1_b(tv1)) {
					tv0->AddReply(7643, 8435, 8434);
				}
				return;
			}
			if (a0 == 8435) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(7644);
				tv0->ClearReplies();
				tv0->AddReply(7645, 8437, 8436);
				return;
			}
			if (a0 == 8437) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(7646);
				tv0->ClearReplies();
				tv0->AddReply(7647, 5336, 8438);
				return;
			}
			if (a0 == 5414) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4926);
				tv0->ClearReplies();
				tv0->AddReply(4927, 8441, 5415);
				tv0->AddReply(7648, -1, 8440);
				return;
			}
			if (a0 == 8441) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(7649);
				tv0->ClearReplies();
				tv0->AddReply(7650, 5338, 8442);
				return;
			}
			if (a0 == 5336) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4864);
				tv0->ClearReplies();
				tv0->AddReply(4865, 5338, 5337);
				tv0->AddReply(4871, 5344, 5343);
				return;
			}
			if (a0 == 5344) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4872);
				tv0->ClearReplies();
				tv0->AddReply(4873, 5338, 5345);
				tv0->AddReply(4874, -1, 5347);
				return;
			}
			if (a0 == 5338) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4866);
				tv0->ClearReplies();
				tv0->AddReply(4867, 5340, 5339);
				return;
			}
			if (a0 == 5340) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4868);
				tv0->ClearReplies();
				tv0->AddReply(4869, -1, 5341);
				tv0->AddReply(4870, -1, 5342);
				return;
			}
			if (a0 == 5329) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4857);
				tv0->ClearReplies();
				tv0->AddReply(4858, 5374, 5330);
				return;
			}
			if (a0 == 5374) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4895);
				tv0->ClearReplies();
				tv0->AddReply(4896, 5377, 5375);
				tv0->AddReply(4897, 5377, 5376);
				return;
			}
			if (a0 == 5377) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4898);
				tv0->ClearReplies();
				tv0->AddReply(4899, 5380, 5378);
				tv0->AddReply(4913, 5396, 5395);
				return;
			}
			if (a0 == 5396) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4914);
				tv0->ClearReplies();
				tv0->AddReply(4915, 5380, 5397);
				return;
			}
			if (a0 == 5380) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4900);
				tv0->ClearReplies();
				tv0->AddReply(4901, 5382, 5381);
				tv0->AddReply(4916, 5382, 5399);
				tv0->AddReply(4917, 5402, 5401);
				return;
			}
			if (a0 == 5402) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4918);
				tv0->ClearReplies();
				tv0->AddReply(4919, 5382, 5403);
				return;
			}
			if (a0 == 5382) {
				f_13ad_a2_v(tv1, tv0);
				f_13a7_a2_v(tv1, tv0);
				f_13a1_a2_v(tv1, tv0);
				f_615_a1_v("Neutral");
				tv0->SetMessage(4902);
				tv0->ClearReplies();
				tv0->AddReply(4903, 5385, 5383);
				tv0->AddReply(4920, 5385, 5405);
				tv0->AddReply(4925, 5409, 5412);
				return;
			}
			if (a0 == 5385) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4905);
				tv0->ClearReplies();
				tv0->AddReply(4906, 5388, 5386);
				tv0->AddReply(4907, 5388, 5387);
				tv0->AddReply(4922, 5409, 5408);
				return;
			}
			if (a0 == 5409) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4923);
				tv0->ClearReplies();
				tv0->AddReply(4924, 5388, 5410);
				return;
			}
			if (a0 == 5388) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4908);
				tv0->ClearReplies();
				tv0->AddReply(4909, 5392, 5390);
				tv0->AddReply(4910, 5392, 5391);
				return;
			}
			if (a0 == 5392) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4911);
				tv0->ClearReplies();
				tv0->AddReply(4912, -1, 5394);
				tv0->AddReply(4921, -1, 5407);
				return;
			}
			if (a0 == 5354) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4880);
				tv0->ClearReplies();
				tv0->AddReply(4881, 5356, 5355);
				tv0->AddReply(4889, 5356, 5365);
				return;
			}
			if (a0 == 5356) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4882);
				tv0->ClearReplies();
				tv0->AddReply(4883, 5358, 5357);
				tv0->AddReply(4887, 5358, 5361);
				return;
			}
			if (a0 == 5358) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4884);
				tv0->ClearReplies();
				tv0->AddReply(4886, -1, 5360);
				tv0->AddReply(4885, -1, 5359);
				return;
			}
			if (a0 == 5370) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4892);
				tv0->ClearReplies();
				tv0->AddReply(4928, 5421, 5416);
				tv0->AddReply(4929, 5418, 5417);
				return;
			}
			if (a0 == 5418) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4930);
				tv0->ClearReplies();
				tv0->AddReply(4931, 5358, 5419);
				return;
			}
			if (a0 == 5421) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4932);
				tv0->ClearReplies();
				tv0->AddReply(4893, 5354, 5371);
				tv0->AddReply(4933, 5423, 5422);
				return;
			}
			if (a0 == 5423) {
				f_615_a1_v("Neutral");
				tv0->SetMessage(4934);
				tv0->ClearReplies();
				tv0->AddReply(4935, -1, 5424);
				return;
			}
			tv3 = true;
			if (f_1242_a0_b()) {
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
		if (!f_11a6_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_123e_a0_i());
		L0->SetPhoto(f_1240_a0_s());
		L0->SetPlayerName(f_15a1_a0_i());
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
		f_11de_a1_v(a0);
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
			if (f_13d7_a1_b(tv1) && f_1405_a1_b(tv1)) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(6829);
				tv0->ClearReplies();
				tv0->AddReply(6830, 7531, 7530);
				tv0->AddReply(6844, 7547, 7546);
				tv0->AddReply(6848, 7547, 7552);
				tv0->AddReply(6849, 7535, 7554);
				break;
			}
			f_a72_a1_v("Neutral");
			tv0->SetMessage(6850);
			tv0->ClearReplies();
			if (f_13e3_a1_b(tv1) && f_13f9_a1_b(tv1)) {
				tv0->AddReply(6851, 7835, 7557);
			}
			tv0->AddReply(7536, -1, 8318);
			break;
			return;
		}
		if (f_1242_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11e2_a1_v(tv2);
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

	void f_a72_a1_v(string a0)
	{
		if (!f_1242_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_11e2_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_11f4_a0_v();
			if (a1 == 7538) {
				f_12bf_a2_v(tv1, tv0);
				f_12cb_a2_v(tv1, tv0);
			}
			if (a1 == 7539) {
				f_12bf_a2_v(tv1, tv0);
				f_12cb_a2_v(tv1, tv0);
			}
			if (a1 == 7542) {
				f_12bf_a2_v(tv1, tv0);
				f_12cb_a2_v(tv1, tv0);
			}
			if (a1 == 7543) {
				f_12bf_a2_v(tv1, tv0);
				f_12cb_a2_v(tv1, tv0);
			}
			if (a1 == 7841) {
				f_12c5_a2_v(tv1, tv0);
			}
			if (a1 == 7842) {
				f_12c5_a2_v(tv1, tv0);
			}
			if (a1 == 7839) {
				f_12c5_a2_v(tv1, tv0);
				f_12cb_a2_v(tv1, tv0);
			}
			if (a1 == 7843) {
				f_12c5_a2_v(tv1, tv0);
				f_12cb_a2_v(tv1, tv0);
			}
			if (a0 == 7529) {
				if (f_13d7_a1_b(tv1) && f_1405_a1_b(tv1)) {
					f_a72_a1_v("Neutral");
					tv0->SetMessage(6829);
					tv0->ClearReplies();
					tv0->AddReply(6830, 7531, 7530);
					tv0->AddReply(6844, 7547, 7546);
					tv0->AddReply(6848, 7547, 7552);
					tv0->AddReply(6849, 7535, 7554);
					return;
				}
				f_a72_a1_v("Neutral");
				tv0->SetMessage(6850);
				tv0->ClearReplies();
				if (f_13e3_a1_b(tv1) && f_13f9_a1_b(tv1)) {
					tv0->AddReply(6851, 7835, 7557);
				}
				tv0->AddReply(7536, -1, 8318);
				return;
			}
			if (a0 == 7835) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(7116);
				tv0->ClearReplies();
				tv0->AddReply(7117, 7840, 7836);
				tv0->AddReply(7118, 7838, 7837);
				return;
			}
			if (a0 == 7838) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(7119);
				tv0->ClearReplies();
				tv0->AddReply(7120, -1, 7839);
				tv0->AddReply(7124, -1, 7843);
				return;
			}
			if (a0 == 7840) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(7121);
				tv0->ClearReplies();
				tv0->AddReply(7125, 7845, 7844);
				tv0->AddReply(7127, 7847, 7846);
				return;
			}
			if (a0 == 7847) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(7128);
				tv0->ClearReplies();
				tv0->AddReply(7129, 7845, 7848);
				return;
			}
			if (a0 == 7845) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(7126);
				tv0->ClearReplies();
				tv0->AddReply(7122, -1, 7841);
				tv0->AddReply(7123, -1, 7842);
				return;
			}
			if (a0 == 7547) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(6845);
				tv0->ClearReplies();
				tv0->AddReply(6846, 7533, 7548);
				tv0->AddReply(6847, 7533, 7550);
				return;
			}
			if (a0 == 7531) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(6831);
				tv0->ClearReplies();
				tv0->AddReply(6832, 7533, 7532);
				return;
			}
			if (a0 == 7533) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(6833);
				tv0->ClearReplies();
				tv0->AddReply(6834, 7535, 7534);
				tv0->AddReply(6843, 7535, 7544);
				tv0->AddReply(6842, -1, 7543);
				return;
			}
			if (a0 == 7535) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(6835);
				tv0->ClearReplies();
				tv0->AddReply(6836, 7537, 7536);
				tv0->AddReply(6840, 7537, 7540);
				tv0->AddReply(6841, -1, 7542);
				return;
			}
			if (a0 == 7537) {
				f_a72_a1_v("Neutral");
				tv0->SetMessage(6837);
				tv0->ClearReplies();
				tv0->AddReply(6838, -1, 7538);
				tv0->AddReply(6839, -1, 7539);
				return;
			}
			tv3 = true;
			if (f_1242_a0_b()) {
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
		if (!f_11a6_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_123e_a0_i());
		L0->SetPhoto(f_1240_a0_s());
		L0->SetPlayerName(f_15a1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11de_a1_v(a0);
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
			if (!f_1465_a1_b(tv1) && f_1489_a1_b(tv1)) {
				f_13d1_a2_v(tv1, tv0);
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9043);
				tv0->ClearReplies();
				tv0->AddReply(9044, 9921, 9920);
				break;
			}
			f_13d1_a2_v(tv1, tv0);
			f_d05_a1_v("Neutral");
			tv0->SetMessage(9024);
			tv0->ClearReplies();
			if (f_1441_a1_b(tv1) && !f_1465_a1_b(tv1)) {
				tv0->AddReply(11376, 12576, 12575);
			}
			if (f_1465_a1_b(tv1) && f_1471_a1_b(tv1)) {
				tv0->AddReply(9042, 9941, 9918);
			}
			if (f_14a1_a1_b(tv1) && f_14ad_a1_b(tv1)) {
				tv0->AddReply(10442, 11512, 11511);
			}
			tv0->AddReply(9041, 9899, 9917);
			tv0->AddReply(11147, -1, 12337);
			break;
			return;
		}
		if (f_1242_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11e2_a1_v(tv2);
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

	void f_d05_a1_v(string a0)
	{
		if (!f_1242_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_11e2_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_11f4_a0_v();
			if (a1 == 11255) {
				f_133b_a2_v(tv1, tv0);
				f_1341_a2_v(tv1, tv0);
				f_12fc_a2_v(tv1, tv0);
			}
			if (a1 == 11278) {
				f_133b_a2_v(tv1, tv0);
			}
			if (a1 == 9939) {
				f_133b_a2_v(tv1, tv0);
				f_1341_a2_v(tv1, tv0);
				f_12fc_a2_v(tv1, tv0);
			}
			if (a1 == 11274) {
				f_137c_a2_v(tv1, tv0);
			}
			if (a1 == 11275) {
				f_133b_a2_v(tv1, tv0);
			}
			if (a1 == 11276) {
				f_133b_a2_v(tv1, tv0);
			}
			if (a1 == 12577) {
				f_1341_a2_v(tv1, tv0);
			}
			if (a1 == 9954) {
				f_130c_a2_v(tv1, tv0);
				f_1329_a2_v(tv1, tv0);
			}
			if (a1 == 9955) {
				f_130c_a2_v(tv1, tv0);
				f_1329_a2_v(tv1, tv0);
			}
			if (a1 == 12338) {
				f_130c_a2_v(tv1, tv0);
				f_1329_a2_v(tv1, tv0);
			}
			if (a1 == 11515) {
				f_1383_a2_v(tv1, tv0);
				f_1371_a2_v(tv1, tv0);
				f_12b9_a2_v(tv1, tv0);
				f_137c_a2_v(tv1, tv0);
			}
			if (a1 == 9915) {
				f_1371_a2_v(tv1, tv0);
				f_12b9_a2_v(tv1, tv0);
			}
			if (a0 == 9919) {
				if (!f_1465_a1_b(tv1) && f_1489_a1_b(tv1)) {
					f_13d1_a2_v(tv1, tv0);
					f_d05_a1_v("Neutral");
					tv0->SetMessage(9043);
					tv0->ClearReplies();
					tv0->AddReply(9044, 9921, 9920);
					return;
				}
				f_13d1_a2_v(tv1, tv0);
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9024);
				tv0->ClearReplies();
				if (f_1441_a1_b(tv1) && !f_1465_a1_b(tv1)) {
					tv0->AddReply(11376, 12576, 12575);
				}
				if (f_1465_a1_b(tv1) && f_1471_a1_b(tv1)) {
					tv0->AddReply(9042, 9941, 9918);
				}
				if (f_14a1_a1_b(tv1) && f_14ad_a1_b(tv1)) {
					tv0->AddReply(10442, 11512, 11511);
				}
				tv0->AddReply(9041, 9899, 9917);
				tv0->AddReply(11147, -1, 12337);
				return;
			}
			if (a0 == 9899) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9025);
				tv0->ClearReplies();
				tv0->AddReply(9026, 9901, 9900);
				tv0->AddReply(9033, -1, 9908);
				if (f_1495_a1_b(tv1)) {
					tv0->AddReply(9034, 9910, 9909);
				}
				return;
			}
			if (a0 == 9910) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9035);
				tv0->ClearReplies();
				tv0->AddReply(9036, 9901, 9911);
				tv0->AddReply(9037, 9914, 9913);
				return;
			}
			if (a0 == 9914) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9038);
				tv0->ClearReplies();
				tv0->AddReply(9039, -1, 9915);
				tv0->AddReply(9040, -1, 9916);
				return;
			}
			if (a0 == 9901) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9027);
				tv0->ClearReplies();
				tv0->AddReply(9028, 9903, 9902);
				tv0->AddReply(9032, 9903, 9906);
				return;
			}
			if (a0 == 9903) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9029);
				tv0->ClearReplies();
				tv0->AddReply(9030, -1, 9904);
				tv0->AddReply(9031, -1, 9905);
				return;
			}
			if (a0 == 11512) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(10443);
				tv0->ClearReplies();
				tv0->AddReply(10444, 11514, 11513);
				return;
			}
			if (a0 == 11514) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(10445);
				tv0->ClearReplies();
				tv0->AddReply(10446, -1, 11515);
				return;
			}
			if (a0 == 9941) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9064);
				tv0->ClearReplies();
				tv0->AddReply(9065, 9943, 9942);
				return;
			}
			if (a0 == 9943) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9066);
				tv0->ClearReplies();
				tv0->AddReply(9067, 9946, 9944);
				tv0->AddReply(9068, 9949, 9945);
				return;
			}
			if (a0 == 9949) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9072);
				tv0->ClearReplies();
				tv0->AddReply(9073, 9948, 9950);
				return;
			}
			if (a0 == 9946) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9069);
				tv0->ClearReplies();
				tv0->AddReply(9074, 9953, 9952);
				tv0->AddReply(9070, 9948, 9947);
				return;
			}
			if (a0 == 9948) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9071);
				tv0->ClearReplies();
				tv0->AddReply(11149, -1, 12338);
				return;
			}
			if (a0 == 9953) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9075);
				tv0->ClearReplies();
				tv0->AddReply(9076, -1, 9954);
				tv0->AddReply(9077, -1, 9955);
				return;
			}
			if (a0 == 12576) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(11377);
				tv0->ClearReplies();
				tv0->AddReply(11378, -1, 12577);
				return;
			}
			if (a0 == 9921) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9045);
				tv0->ClearReplies();
				tv0->AddReply(10222, 11270, 11269);
				return;
			}
			if (a0 == 11270) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(10223);
				tv0->ClearReplies();
				tv0->AddReply(9046, 11280, 9922);
				tv0->AddReply(10224, 9929, 11271);
				if (f_1495_a1_b(tv1)) {
					tv0->AddReply(9047, 9924, 9923);
				}
				return;
			}
			if (a0 == 9924) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9048);
				tv0->ClearReplies();
				tv0->AddReply(9049, 9929, 9925);
				tv0->AddReply(10225, 11273, 11272);
				return;
			}
			if (a0 == 11273) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(10226);
				tv0->ClearReplies();
				tv0->AddReply(10227, -1, 11274);
				tv0->AddReply(10228, -1, 11275);
				tv0->AddReply(10229, -1, 11276);
				return;
			}
			if (a0 == 9929) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9053);
				tv0->ClearReplies();
				tv0->AddReply(9060, 9938, 9937);
				return;
			}
			if (a0 == 9938) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(9061);
				tv0->ClearReplies();
				tv0->AddReply(9063, 11254, 9940);
				tv0->AddReply(9062, -1, 9939);
				return;
			}
			if (a0 == 11254) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(10208);
				tv0->ClearReplies();
				tv0->AddReply(10209, -1, 11255);
				tv0->AddReply(10231, -1, 11278);
				return;
			}
			if (a0 == 11280) {
				f_d05_a1_v("Neutral");
				tv0->SetMessage(10232);
				tv0->ClearReplies();
				tv0->AddReply(10233, 9938, 11281);
				tv0->AddReply(10234, 9938, 11282);
				return;
			}
			tv3 = true;
			if (f_1242_a0_b()) {
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
		if (!f_11a6_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_123e_a0_i());
		L0->SetPhoto(f_1240_a0_s());
		L0->SetPlayerName(f_15a1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11de_a1_v(a0);
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
			if (f_1519_a1_b(tv1) && f_1525_a1_b(tv1)) {
				f_13cb_a2_v(tv1, tv0);
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(12258);
				tv0->ClearReplies();
				tv0->AddReply(12259, 13417, 13416);
				break;
			}
			f_10b9_a1_v("Neutral");
			tv0->SetMessage(13775);
			tv0->ClearReplies();
			tv0->AddReply(13776, -1, 15012);
			break;
			return;
		}
		if (f_1242_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11e2_a1_v(tv2);
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

	void f_10b9_a1_v(string a0)
	{
		if (!f_1242_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_11e2_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_11f4_a0_v();
			if (a0 == 13415) {
				if (f_1519_a1_b(tv1) && f_1525_a1_b(tv1)) {
					f_13cb_a2_v(tv1, tv0);
					f_10b9_a1_v("Neutral");
					tv0->SetMessage(12258);
					tv0->ClearReplies();
					tv0->AddReply(12259, 13417, 13416);
					return;
				}
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(13775);
				tv0->ClearReplies();
				tv0->AddReply(13776, -1, 15012);
				return;
			}
			if (a0 == 13417) {
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(12260);
				tv0->ClearReplies();
				tv0->AddReply(12261, 13419, 13418);
				return;
			}
			if (a0 == 13419) {
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(12262);
				tv0->ClearReplies();
				tv0->AddReply(12263, 13421, 13420);
				return;
			}
			if (a0 == 13421) {
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(12264);
				tv0->ClearReplies();
				tv0->AddReply(12265, 13423, 13422);
				return;
			}
			if (a0 == 13423) {
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(12266);
				tv0->ClearReplies();
				tv0->AddReply(12267, 13425, 13424);
				return;
			}
			if (a0 == 13425) {
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(12268);
				tv0->ClearReplies();
				tv0->AddReply(12269, 13427, 13426);
				return;
			}
			if (a0 == 13427) {
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(12270);
				tv0->ClearReplies();
				tv0->AddReply(12271, 13429, 13428);
				return;
			}
			if (a0 == 13429) {
				f_10b9_a1_v("Neutral");
				tv0->SetMessage(12272);
				tv0->ClearReplies();
				tv0->AddReply(12273, -1, 13430);
				return;
			}
			tv3 = true;
			if (f_1242_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_118e_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1195_a1_b(object a0)
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

bool f_11a1_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_11a6_a1_b(object a0)
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
	L5 = L3 * 70 + f_11fb_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_11de_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_11e2_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_11f4_a0_v(void)
{
	if (f_1242_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_11fb_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1205_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_120a_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

bool f_1215_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1221_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1226_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_122f_a1_b(int a0)
{
	return f_1226_a0_i() == a0;
}

bool f_1235_a0_b(void)
{
	bool L0;
	f_11e2_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_123e_a0_i(void)
{
	return 2859;
}

string f_1240_a0_s(void)
{
	return "ui/NPC_Georg.png";
}

bool f_1242_a0_b(void)
{
	return true;
}

void f_1244_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q01", 1);
	L0 = f_156f_a0_o();
	L0->AddMark("d1GeorgInfo", "pt_map_georg", 3, 8631, f_1221_a0_f());
	L0->AddMark("d1GeorgGotoViktor", "pt_map_viktor", 3, 8629, f_1221_a0_f());
	f_15b2_a0_v();
}

void f_1264_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	@SetVariable("d1q01", 1000);
	L0 = f_156f_a0_o();
	L0->FindMark(L1, "d1q01EvaAboutMark");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01EvaGotoSimon");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01GrifAboutRubin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01MarkAboutJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01MarkAboutLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01NotkinAboutRubin");
	if (L1) {
		L1->Remove();
	}
	f_15c2_a0_v();
	f_155e_a1_b(31);
	f_155e_a1_b(32);
	f_155e_a1_b(33);
	f_155e_a1_b(34);
}

void f_12ad_a2_v(object a0, object a1)
{
	@SetVariable("d1q01TeloNedostupno", 1);
}

void f_12b3_a2_v(object a0, object a1)
{
	@SetVariable("d1q01FirstGeorgVisit", 1);
}

void f_12b9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_12bf_a2_v(object a0, object a1)
{
	@SetVariable("ood2Georg1", 1);
}

void f_12c5_a2_v(object a0, object a1)
{
	@SetVariable("ood2Georg2", 1);
}

void f_12cb_a2_v(object a0, object a1)
{
	@SetVariable("d2q01GeorgVisit", 1);
}

void f_12d1_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg4", 1);
}

void f_12d7_a2_v(object a0, object a1)
{
	@SetVariable("KnowGorny", 1);
}

void f_12dd_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_156f_a0_o();
	L0->AddMark("d1GeorgAboutAlexandr", "pt_map_alexandr", 3, 8632, f_1221_a0_f());
	L0->AddMark("d1GeorgAboutBigVlad", "pt_map_bigvlad", 3, 8633, f_1221_a0_f());
}

void f_12f6_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_12fc_a2_v(object a0, object a1)
{
	f_1580_a3_v(f_156f_a0_o(), "pt_map_mishka", 2);
	a1->ShowMap(f_156f_a0_o());
}

void f_130c_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 5);
	L0 = f_156f_a0_o();
	L0->AddMark("d3q01GeorgAgreedSelf", "pt_map_georg", 1, 11154, f_1221_a0_f());
	L0->AddMark("d3q01GeorgAgreed", "pt_map_bigvlad", 1, 15299, f_1221_a0_f());
}

void f_1329_a2_v(object a0, object a1)
{
	@SetVariable("ood3Georg1", 1);
}

void f_132f_a2_v(object a0, object a1)
{
	@SetVariable("ood1GeorgMQ1", 1);
}

void f_1335_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktor", 1);
}

void f_133b_a2_v(object a0, object a1)
{
	@SetVariable("ood3Georg2", 1);
}

void f_1341_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q02", 1);
	L0 = f_156f_a0_o();
	L0->AddMark("d3q02GeorgGotoMishka", "pt_map_mishka", 0, 11375, f_1221_a0_f());
	L0->AddMark("d3q02GeorgSelf", "pt_map_georg", 0, 15304, f_1221_a0_f());
	L0->AddMark("d3q02GeorgGotoViktor", "pt_map_viktor", 0, 11379, f_1221_a0_f());
	f_15d2_a0_v();
	f_15e2_a0_v();
	f_120a_a1_o("quest_d3_02");
}

void f_1371_a2_v(object a0, object a1)
{
	@Trace("money3000 is given");
	f_118e_a3_v(a0, "money", 3000);
}

void f_137c_a2_v(object a0, object a1)
{
	f_1215_a2_b("quest_d3_02", "completed");
}

void f_1383_a2_v(object a0, object a1)
{
	@SetVariable("ood3Georg3", 1);
}

void f_1389_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg1", 1);
}

void f_138f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg2", 1);
}

void f_1395_a2_v(object a0, object a1)
{
	@SetVariable("ood1Georg3", 1);
}

void f_139b_a2_v(object a0, object a1)
{
	@SetVariable("KnowRubin", 1);
}

void f_13a1_a2_v(object a0, object a1)
{
	@SetVariable("KnowSaburivClan", 1);
}

void f_13a7_a2_v(object a0, object a1)
{
	@SetVariable("KnowOlgimskiClan", 1);
}

void f_13ad_a2_v(object a0, object a1)
{
	@SetVariable("KnowKainClan", 1);
}

void f_13b3_a2_v(object a0, object a1)
{
	@SetVariable("KnowGeorg", 1);
}

void f_13b9_a2_v(object a0, object a1)
{
	@SetVariable("ood6Georg1", 1);
}

void f_13bf_a2_v(object a0, object a1)
{
	@SetVariable("ood6Georg2", 1);
}

void f_13c5_a2_v(object a0, object a1)
{
	@SetVariable("ood6Georg3", 1);
}

void f_13cb_a2_v(object a0, object a1)
{
	@SetVariable("ood8Georg1", 1);
}

void f_13d1_a2_v(object a0, object a1)
{
	@SetVariable("d3GeorgVisit", 1);
}

bool f_13d7_a1_b(object a0)
{
	if (f_1205_a1_i("ood2Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_13e3_a1_b(object a0)
{
	if (f_1205_a1_i("ood2Georg2") == 0) {
		return true;
	}
	return false;
}

bool f_13ef_a1_b(object a0)
{
	if (f_1531_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_13f9_a1_b(object a0)
{
	if (f_1205_a1_i("d2q01") == 0) {
		return true;
	}
	return false;
}

bool f_1405_a1_b(object a0)
{
	if (f_1205_a1_i("d2q01") == 6) {
		return true;
	}
	return false;
}

bool f_1411_a1_b(object a0)
{
	if (f_1205_a1_i("KnowBurahDead") == 1) {
		return true;
	}
	return false;
}

bool f_141d_a1_b(object a0)
{
	if (f_1205_a1_i("ood1Georg4") == 0) {
		return true;
	}
	return false;
}

bool f_1429_a1_b(object a0)
{
	if (f_1205_a1_i("ood1GeorgMQ1") == 0) {
		return true;
	}
	return false;
}

bool f_1435_a1_b(object a0)
{
	if (f_1205_a1_i("ood1Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_1441_a1_b(object a0)
{
	if (f_1205_a1_i("d3q01") == 0) {
		return true;
	}
	return false;
}

bool f_144d_a1_b(object a0)
{
	if (f_1205_a1_i("ood1Georg2") == 0) {
		return true;
	}
	return false;
}

bool f_1459_a1_b(object a0)
{
	if (f_1205_a1_i("ood1Georg3") == 0) {
		return true;
	}
	return false;
}

bool f_1465_a1_b(object a0)
{
	if (f_1205_a1_i("d3q01") == 4) {
		return true;
	}
	return false;
}

bool f_1471_a1_b(object a0)
{
	if (f_1205_a1_i("ood3Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_147d_a1_b(object a0)
{
	if (f_1205_a1_i("KnowRubin") == 1) {
		return true;
	}
	return false;
}

bool f_1489_a1_b(object a0)
{
	if (f_1205_a1_i("ood3Georg2") == 0) {
		return true;
	}
	return false;
}

bool f_1495_a1_b(object a0)
{
	if (f_1205_a1_i("d3RubinToldWhereIsSimon") == 1) {
		return true;
	}
	return false;
}

bool f_14a1_a1_b(object a0)
{
	if (f_1205_a1_i("ood3Georg3") == 0) {
		return true;
	}
	return false;
}

bool f_14ad_a1_b(object a0)
{
	if (f_1205_a1_i("d3q02SeeCorpse") == 1) {
		return true;
	}
	return false;
}

bool f_14b9_a1_b(object a0)
{
	if (f_1205_a1_i("d1q01") == 2) {
		return true;
	}
	return false;
}

bool f_14c5_a1_b(object a0)
{
	if (f_1205_a1_i("d6q01") == 0) {
		return true;
	}
	return false;
}

bool f_14d1_a1_b(object a0)
{
	if (f_1205_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_14dd_a1_b(object a0)
{
	if (f_1205_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_14e9_a1_b(object a0)
{
	if (f_1205_a1_i("ood6Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_14f5_a1_b(object a0)
{
	if (f_1205_a1_i("ood6Georg2") == 0) {
		return true;
	}
	return false;
}

bool f_1501_a1_b(object a0)
{
	if (f_1205_a1_i("d6RubinGoesToGeorg") != 0) {
		return true;
	}
	return false;
}

bool f_150d_a1_b(object a0)
{
	if (f_1205_a1_i("ood6Georg3") == 0) {
		return true;
	}
	return false;
}

bool f_1519_a1_b(object a0)
{
	if (f_1205_a1_i("d8KainIsReason") == 1) {
		return true;
	}
	return false;
}

bool f_1525_a1_b(object a0)
{
	if (f_1205_a1_i("ood8Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_1531_a1_b(object a0)
{
	return false;
}

object f_1534_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1541_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1534_a0_o();
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

bool f_155e_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_1534_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_156f_a0_o(void)
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

void f_1580_a3_v(object a0, string a1, float a2)
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

int f_15a1_a0_i(void)
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

void f_15b2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 2, 1, 3073);
	f_1541_a2_b(L0, -1);
}

void f_15c2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 49, 1, 12131);
	f_1541_a2_b(L0, 2);
}

void f_15d2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 26, 2, 3366);
	f_1541_a2_b(L0, -1);
}

void f_15e2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 76, 2, 12158);
	f_1541_a2_b(L0, 26);
}

void f_15f2_a0_v(void)
{
	g1 = false;
}

void f_15f6_a1_v(object a0)
{
	if (f_122f_a1_b(1)) {
		if (f_1205_a1_i("d1q01") == 0) {
			t4{a0};
			return;
		}
		t6{a0};
		return;
	}
	if (f_122f_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_122f_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_122f_a1_b(6)) {
		t2{a0};
		return;
	}
	if (f_122f_a1_b(8)) {
		t12{a0};
		return;
	}
	f_1235_a0_b();
}

