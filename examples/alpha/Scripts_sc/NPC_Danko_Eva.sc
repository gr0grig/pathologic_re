event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;

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
		f_13ea_a0_v();
		if (!f_ffb_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_103c_a1_v("Neutral");
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
		f_13eb_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_fef_a1_b(a0);
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
		if (!f_1000_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_109c_a0_i());
		L0->SetPhoto(f_109e_a0_s());
		L0->SetPlayerName(f_13b9_a0_i());
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
		f_1038_a1_v(a0);
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
			if (f_12fd_a1_b(tv1) && f_1315_a1_b(tv1)) {
				f_11e3_a2_v(tv1, tv0);
				f_cc_a1_v("Neutral");
				tv0->SetMessage(3926);
				tv0->ClearReplies();
				tv0->AddReply(3927, 4276, 4275);
				tv0->AddReply(3929, 4278, 4277);
				break;
			}
			f_cc_a1_v("Neutral");
			tv0->SetMessage(13718);
			tv0->ClearReplies();
			tv0->AddReply(13719, -1, 14985);
			break;
			return;
		}
		if (f_10a0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_103c_a1_v(tv2);
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

	void f_cc_a1_v(string a0)
	{
		if (!f_10a0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_103c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_104e_a0_v();
			if (a0 == 4274) {
				if (f_12fd_a1_b(tv1) && f_1315_a1_b(tv1)) {
					f_11e3_a2_v(tv1, tv0);
					f_cc_a1_v("Neutral");
					tv0->SetMessage(3926);
					tv0->ClearReplies();
					tv0->AddReply(3927, 4276, 4275);
					tv0->AddReply(3929, 4278, 4277);
					return;
				}
				f_cc_a1_v("Neutral");
				tv0->SetMessage(13718);
				tv0->ClearReplies();
				tv0->AddReply(13719, -1, 14985);
				return;
			}
			if (a0 == 4278) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(3930);
				tv0->ClearReplies();
				tv0->AddReply(3931, 4276, 4279);
				tv0->AddReply(3932, 4288, 4280);
				tv0->AddReply(3933, -1, 4281);
				return;
			}
			if (a0 == 4276) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(3928);
				tv0->ClearReplies();
				tv0->AddReply(3937, 4288, 4286);
				tv0->AddReply(3938, 4288, 4287);
				return;
			}
			if (a0 == 4288) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(3939);
				tv0->ClearReplies();
				tv0->AddReply(3940, 4297, 4291);
				tv0->AddReply(3941, 4294, 4292);
				tv0->AddReply(3942, -1, 4293);
				return;
			}
			if (a0 == 4294) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(3943);
				tv0->ClearReplies();
				tv0->AddReply(3944, -1, 4295);
				tv0->AddReply(3945, -1, 4296);
				return;
			}
			if (a0 == 4297) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(3946);
				tv0->ClearReplies();
				tv0->AddReply(3947, -1, 4298);
				tv0->AddReply(3948, -1, 4299);
				return;
			}
			tv3 = true;
			if (f_10a0_a0_b()) {
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
		if (!f_1000_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_109c_a0_i());
		L0->SetPhoto(f_109e_a0_s());
		L0->SetPlayerName(f_13b9_a0_i());
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
		f_1038_a1_v(a0);
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
			if (f_123d_a1_b(tv1)) {
				f_11d7_a2_v(tv1, tv0);
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4496);
				tv0->ClearReplies();
				tv0->AddReply(4501, 4905, 4904);
				tv0->AddReply(4517, 4923, 4922);
				tv0->AddReply(4521, 4923, 4928);
				break;
			}
			if (f_126d_a1_b(tv1)) {
				f_11d7_a2_v(tv1, tv0);
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4590);
				tv0->ClearReplies();
				tv0->AddReply(4591, 5013, 5012);
				tv0->AddReply(4607, 5015, 5032);
				tv0->AddReply(4608, 5015, 5034);
				break;
			}
			f_115c_a2_v(tv1, tv0);
			f_11d7_a2_v(tv1, tv0);
			f_26e_a1_v("Neutral");
			tv0->SetMessage(4568);
			tv0->ClearReplies();
			tv0->AddReply(4569, 4989, 4988);
			tv0->AddReply(4586, 5007, 5006);
			break;
			return;
		}
		if (f_10a0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_103c_a1_v(tv2);
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

	void f_26e_a1_v(string a0)
	{
		if (!f_10a0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_103c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_104e_a0_v();
			if (a1 == 4915) {
				f_1127_a2_v(tv1, tv0);
				f_11a7_a2_v(tv1, tv0);
				f_1134_a2_v(tv1, tv0);
				f_10cc_a2_v(tv1, tv0);
			}
			if (a1 == 4900) {
				f_1127_a2_v(tv1, tv0);
				f_11a7_a2_v(tv1, tv0);
				f_1134_a2_v(tv1, tv0);
				f_10cc_a2_v(tv1, tv0);
			}
			if (a1 == 5020) {
				f_11c5_a2_v(tv1, tv0);
			}
			if (a1 == 5021) {
				f_11c5_a2_v(tv1, tv0);
			}
			if (a0 == 4899) {
				if (f_123d_a1_b(tv1)) {
					f_11d7_a2_v(tv1, tv0);
					f_26e_a1_v("Neutral");
					tv0->SetMessage(4496);
					tv0->ClearReplies();
					tv0->AddReply(4501, 4905, 4904);
					tv0->AddReply(4517, 4923, 4922);
					tv0->AddReply(4521, 4923, 4928);
					return;
				}
				if (f_126d_a1_b(tv1)) {
					f_11d7_a2_v(tv1, tv0);
					f_26e_a1_v("Neutral");
					tv0->SetMessage(4590);
					tv0->ClearReplies();
					tv0->AddReply(4591, 5013, 5012);
					tv0->AddReply(4607, 5015, 5032);
					tv0->AddReply(4608, 5015, 5034);
					return;
				}
				f_115c_a2_v(tv1, tv0);
				f_11d7_a2_v(tv1, tv0);
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4568);
				tv0->ClearReplies();
				tv0->AddReply(4569, 4989, 4988);
				tv0->AddReply(4586, 5007, 5006);
				return;
			}
			if (a0 == 5007) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4587);
				tv0->ClearReplies();
				tv0->AddReply(4588, 4993, 5008);
				tv0->AddReply(4589, 5001, 5009);
				return;
			}
			if (a0 == 4989) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4570);
				tv0->ClearReplies();
				tv0->AddReply(4571, 4991, 4990);
				tv0->AddReply(4580, 5001, 5000);
				return;
			}
			if (a0 == 5001) {
				f_11ad_a2_v(tv1, tv0);
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4581);
				tv0->ClearReplies();
				tv0->AddReply(4582, 5003, 5002);
				tv0->AddReply(4585, 4993, 5005);
				return;
			}
			if (a0 == 5003) {
				f_10fa_a2_v(tv1, tv0);
				f_11b3_a2_v(tv1, tv0);
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4583);
				tv0->ClearReplies();
				tv0->AddReply(4584, 4993, 5004);
				return;
			}
			if (a0 == 4991) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4572);
				tv0->ClearReplies();
				tv0->AddReply(4573, 4993, 4992);
				tv0->AddReply(4579, 4993, 4998);
				return;
			}
			if (a0 == 4993) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4574);
				tv0->ClearReplies();
				tv0->AddReply(4575, -1, 4994);
				tv0->AddReply(4576, 4996, 4995);
				return;
			}
			if (a0 == 4996) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4577);
				tv0->ClearReplies();
				tv0->AddReply(4578, -1, 4997);
				return;
			}
			if (a0 == 5013) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4592);
				tv0->ClearReplies();
				tv0->AddReply(4593, 5015, 5014);
				tv0->AddReply(4603, 5027, 5026);
				return;
			}
			if (a0 == 5027) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4604);
				tv0->ClearReplies();
				tv0->AddReply(4605, 5015, 5028);
				tv0->AddReply(4606, 5015, 5030);
				return;
			}
			if (a0 == 5015) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4594);
				tv0->ClearReplies();
				tv0->AddReply(4595, 5017, 5016);
				tv0->AddReply(4602, 5019, 5024);
				return;
			}
			if (a0 == 5017) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4596);
				tv0->ClearReplies();
				tv0->AddReply(4597, 5019, 5018);
				tv0->AddReply(4601, 5019, 5022);
				return;
			}
			if (a0 == 5019) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4598);
				tv0->ClearReplies();
				tv0->AddReply(4599, -1, 5020);
				tv0->AddReply(4600, -1, 5021);
				return;
			}
			if (a0 == 4923) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4518);
				tv0->ClearReplies();
				tv0->AddReply(4519, 4907, 4924);
				tv0->AddReply(4520, 4907, 4926);
				return;
			}
			if (a0 == 4905) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4502);
				tv0->ClearReplies();
				tv0->AddReply(4503, 4907, 4906);
				tv0->AddReply(4515, 4923, 4918);
				tv0->AddReply(4516, 4907, 4920);
				return;
			}
			if (a0 == 4907) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4504);
				tv0->ClearReplies();
				tv0->AddReply(4505, 4909, 4908);
				return;
			}
			if (a0 == 4909) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4506);
				tv0->ClearReplies();
				tv0->AddReply(4507, 4911, 4910);
				tv0->AddReply(4514, 4911, 4917);
				return;
			}
			if (a0 == 4911) {
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4508);
				tv0->ClearReplies();
				tv0->AddReply(4509, 4913, 4912);
				tv0->AddReply(4513, 4913, 4916);
				return;
			}
			if (a0 == 4913) {
				f_1156_a2_v(tv1, tv0);
				f_10ba_a2_v(tv1, tv0);
				f_11e9_a2_v(tv1, tv0);
				f_11b9_a2_v(tv1, tv0);
				f_11dd_a2_v(tv1, tv0);
				f_26e_a1_v("Neutral");
				tv0->SetMessage(4510);
				tv0->ClearReplies();
				tv0->AddReply(4512, -1, 4915);
				tv0->AddReply(4497, -1, 4900);
				return;
			}
			tv3 = true;
			if (f_10a0_a0_b()) {
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
		if (!f_1000_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_109c_a0_i());
		L0->SetPhoto(f_109e_a0_s());
		L0->SetPlayerName(f_13b9_a0_i());
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
		f_1038_a1_v(a0);
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
			f_5bd_a1_v("Neutral");
			tv0->SetMessage(4610);
			tv0->ClearReplies();
			if (f_12e5_a1_b(tv1)) {
				tv0->AddReply(4612, 5058, 5042);
			}
			if (f_12cd_a1_b(tv1)) {
				tv0->AddReply(4611, 5056, 5041);
			}
			if (f_1309_a1_b(tv1)) {
				tv0->AddReply(4613, 5097, 5043);
			}
			if (f_12d9_a1_b(tv1) && f_1249_a1_b(tv1)) {
				tv0->AddReply(4846, 5319, 5318);
			}
			if (f_1321_a1_b(tv1) && f_1255_a1_b(tv1)) {
				tv0->AddReply(6299, 6952, 6951);
			}
			if (f_1261_a1_b(tv1) && f_1351_a1_b(tv1)) {
				tv0->AddReply(6314, 6970, 6969);
			}
			tv0->AddReply(4614, -1, 5044);
			break;
			return;
		}
		if (f_10a0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_103c_a1_v(tv2);
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

	void f_5bd_a1_v(string a0)
	{
		if (!f_10a0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_103c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_104e_a0_v();
			if (a1 == 5094) {
				f_11d1_a2_v(tv1, tv0);
				f_1172_a2_v(tv1, tv0);
				f_1162_a2_v(tv1, tv0);
			}
			if (a1 == 5095) {
				f_11d1_a2_v(tv1, tv0);
				f_1172_a2_v(tv1, tv0);
				f_1162_a2_v(tv1, tv0);
			}
			if (a1 == 5096) {
				f_11d1_a2_v(tv1, tv0);
				f_1172_a2_v(tv1, tv0);
				f_1162_a2_v(tv1, tv0);
			}
			if (a1 == 5051) {
				f_11cb_a2_v(tv1, tv0);
			}
			if (a1 == 5082) {
				f_11cb_a2_v(tv1, tv0);
			}
			if (a1 == 5079) {
				f_11cb_a2_v(tv1, tv0);
			}
			if (a1 == 5078) {
				f_11cb_a2_v(tv1, tv0);
			}
			if (a1 == 5074) {
				f_11cb_a2_v(tv1, tv0);
			}
			if (a1 == 5075) {
				f_11cb_a2_v(tv1, tv0);
			}
			if (a1 == 5111) {
				f_10a2_a2_v(tv1, tv0);
				f_1182_a2_v(tv1, tv0);
				f_11a1_a2_v(tv1, tv0);
			}
			if (a1 == 5116) {
				f_10a2_a2_v(tv1, tv0);
				f_1182_a2_v(tv1, tv0);
				f_11a1_a2_v(tv1, tv0);
			}
			if (a1 == 5113) {
				f_10a2_a2_v(tv1, tv0);
				f_1182_a2_v(tv1, tv0);
				f_11a1_a2_v(tv1, tv0);
			}
			if (a1 == 5320) {
				f_11bf_a2_v(tv1, tv0);
			}
			if (a1 == 6967) {
				f_10c0_a2_v(tv1, tv0);
			}
			if (a1 == 6968) {
				f_10c0_a2_v(tv1, tv0);
			}
			if (a1 == 6977) {
				f_10c6_a2_v(tv1, tv0);
			}
			if (a0 == 5040) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4610);
				tv0->ClearReplies();
				if (f_12e5_a1_b(tv1)) {
					tv0->AddReply(4612, 5058, 5042);
				}
				if (f_12cd_a1_b(tv1)) {
					tv0->AddReply(4611, 5056, 5041);
				}
				if (f_1309_a1_b(tv1)) {
					tv0->AddReply(4613, 5097, 5043);
				}
				if (f_12d9_a1_b(tv1) && f_1249_a1_b(tv1)) {
					tv0->AddReply(4846, 5319, 5318);
				}
				if (f_1321_a1_b(tv1) && f_1255_a1_b(tv1)) {
					tv0->AddReply(6299, 6952, 6951);
				}
				if (f_1261_a1_b(tv1) && f_1351_a1_b(tv1)) {
					tv0->AddReply(6314, 6970, 6969);
				}
				tv0->AddReply(4614, -1, 5044);
				return;
			}
			if (a0 == 6970) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6315);
				tv0->ClearReplies();
				tv0->AddReply(6316, 6972, 6971);
				return;
			}
			if (a0 == 6972) {
				f_1237_a2_v(tv1, tv0);
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6317);
				tv0->ClearReplies();
				tv0->AddReply(6318, 6974, 6973);
				return;
			}
			if (a0 == 6974) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6319);
				tv0->ClearReplies();
				tv0->AddReply(6320, 6976, 6975);
				return;
			}
			if (a0 == 6976) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6321);
				tv0->ClearReplies();
				tv0->AddReply(6322, 5040, 6977);
				return;
			}
			if (a0 == 6952) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6300);
				tv0->ClearReplies();
				tv0->AddReply(6301, 6956, 6953);
				tv0->AddReply(6302, 6956, 6954);
				tv0->AddReply(6303, 6956, 6955);
				return;
			}
			if (a0 == 6956) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6304);
				tv0->ClearReplies();
				tv0->AddReply(6305, 6963, 6959);
				tv0->AddReply(6306, 6961, 6960);
				return;
			}
			if (a0 == 6961) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6307);
				tv0->ClearReplies();
				tv0->AddReply(6308, 6963, 6962);
				return;
			}
			if (a0 == 6963) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6309);
				tv0->ClearReplies();
				tv0->AddReply(6310, 6965, 6964);
				return;
			}
			if (a0 == 6965) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6311);
				tv0->ClearReplies();
				tv0->AddReply(6312, 5040, 6967);
				tv0->AddReply(6313, 5040, 6968);
				return;
			}
			if (a0 == 5319) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4847);
				tv0->ClearReplies();
				tv0->AddReply(6295, 6948, 6947);
				return;
			}
			if (a0 == 6948) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6296);
				tv0->ClearReplies();
				tv0->AddReply(6297, 6950, 6949);
				tv0->AddReply(6323, 6950, 6978);
				return;
			}
			if (a0 == 6950) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(6298);
				tv0->ClearReplies();
				tv0->AddReply(4848, 5040, 5320);
				return;
			}
			if (a0 == 5097) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4661);
				tv0->ClearReplies();
				tv0->AddReply(4662, 5100, 5098);
				tv0->AddReply(4663, 5100, 5099);
				return;
			}
			if (a0 == 5100) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4664);
				tv0->ClearReplies();
				tv0->AddReply(4665, 5103, 5102);
				tv0->AddReply(4667, 5105, 5104);
				return;
			}
			if (a0 == 5105) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4668);
				tv0->ClearReplies();
				tv0->AddReply(4669, 5103, 5106);
				return;
			}
			if (a0 == 5103) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4666);
				tv0->ClearReplies();
				tv0->AddReply(4670, 5108, 5107);
				tv0->AddReply(4675, 5040, 5113);
				return;
			}
			if (a0 == 5108) {
				f_10a8_a2_v(tv1, tv0);
				f_112e_a2_v(tv1, tv0);
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4671);
				tv0->ClearReplies();
				tv0->AddReply(4672, 5110, 5109);
				tv0->AddReply(4676, 5110, 5114);
				return;
			}
			if (a0 == 5110) {
				f_10ae_a2_v(tv1, tv0);
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4673);
				tv0->ClearReplies();
				tv0->AddReply(4674, 5040, 5111);
				tv0->AddReply(4677, 5040, 5116);
				return;
			}
			if (a0 == 5056) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4624);
				tv0->ClearReplies();
				tv0->AddReply(7659, 8453, 8452);
				return;
			}
			if (a0 == 8453) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(7660);
				tv0->ClearReplies();
				tv0->AddReply(7661, 8458, 8454);
				tv0->AddReply(7662, 8458, 8455);
				return;
			}
			if (a0 == 8458) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(7664);
				tv0->ClearReplies();
				tv0->AddReply(7665, 8456, 8459);
				return;
			}
			if (a0 == 8456) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(7663);
				tv0->ClearReplies();
				tv0->AddReply(4625, 5045, 5057);
				tv0->AddReply(4635, 5069, 5068);
				return;
			}
			if (a0 == 5069) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4636);
				tv0->ClearReplies();
				tv0->AddReply(4637, 5072, 5070);
				tv0->AddReply(4638, 5072, 5071);
				return;
			}
			if (a0 == 5072) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4639);
				tv0->ClearReplies();
				tv0->AddReply(4642, 5077, 5076);
				tv0->AddReply(4640, 5040, 5074);
				tv0->AddReply(4641, 5040, 5075);
				return;
			}
			if (a0 == 5077) {
				f_1231_a2_v(tv1, tv0);
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4643);
				tv0->ClearReplies();
				tv0->AddReply(4646, 5081, 5080);
				tv0->AddReply(4645, 5040, 5079);
				tv0->AddReply(4644, 5040, 5078);
				return;
			}
			if (a0 == 5081) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4647);
				tv0->ClearReplies();
				tv0->AddReply(4648, 5040, 5082);
				return;
			}
			if (a0 == 5045) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4615);
				tv0->ClearReplies();
				tv0->AddReply(4616, 5047, 5046);
				tv0->AddReply(4623, 5047, 5054);
				return;
			}
			if (a0 == 5047) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4617);
				tv0->ClearReplies();
				tv0->AddReply(4618, 5049, 5048);
				tv0->AddReply(4622, 5065, 5052);
				return;
			}
			if (a0 == 5065) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4633);
				tv0->ClearReplies();
				tv0->AddReply(4634, 5049, 5066);
				return;
			}
			if (a0 == 5049) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4619);
				tv0->ClearReplies();
				tv0->AddReply(4621, 5040, 5051);
				return;
			}
			if (a0 == 5058) {
				f_11ef_a2_v(tv1, tv0);
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4626);
				tv0->ClearReplies();
				tv0->AddReply(4627, 5086, 5059);
				tv0->AddReply(4628, 5061, 5060);
				return;
			}
			if (a0 == 5061) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4629);
				tv0->ClearReplies();
				tv0->AddReply(4630, 5086, 5062);
				return;
			}
			if (a0 == 5086) {
				f_10b4_a2_v(tv1, tv0);
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4652);
				tv0->ClearReplies();
				tv0->AddReply(4653, 5089, 5088);
				tv0->AddReply(4655, 5089, 5090);
				return;
			}
			if (a0 == 5089) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4654);
				tv0->ClearReplies();
				tv0->AddReply(4656, 5093, 5092);
				tv0->AddReply(4660, -1, 5096);
				return;
			}
			if (a0 == 5093) {
				f_5bd_a1_v("Neutral");
				tv0->SetMessage(4657);
				tv0->ClearReplies();
				tv0->AddReply(4658, -1, 5094);
				tv0->AddReply(4659, -1, 5095);
				return;
			}
			tv3 = true;
			if (f_10a0_a0_b()) {
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
		if (!f_1000_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_109c_a0_i());
		L0->SetPhoto(f_109e_a0_s());
		L0->SetPlayerName(f_13b9_a0_i());
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
		f_1038_a1_v(a0);
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
			if (f_1279_a1_b(tv1)) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(6853);
				tv0->ClearReplies();
				tv0->AddReply(6854, 7890, 7560);
				tv0->AddReply(7262, 7890, 8004);
				break;
			}
			f_ae1_a1_v("Neutral");
			tv0->SetMessage(6855);
			tv0->ClearReplies();
			if (f_1285_a1_b(tv1) && f_12b5_a1_b(tv1)) {
				tv0->AddReply(6856, 7563, 7562);
			}
			if (f_1291_a1_b(tv1) && f_12c1_a1_b(tv1)) {
				tv0->AddReply(6859, 7566, 7565);
			}
			if (f_129d_a1_b(tv1) && f_12a9_a1_b(tv1)) {
				tv0->AddReply(6861, 7568, 7567);
			}
			if (f_12f1_a1_b(tv1)) {
				tv0->AddReply(11392, 12590, 12589);
			}
			tv0->AddReply(7528, -1, 8310);
			break;
			return;
		}
		if (f_10a0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_103c_a1_v(tv2);
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

	void f_ae1_a1_v(string a0)
	{
		if (!f_10a0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_103c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_104e_a0_v();
			if (a1 == 8026) {
				f_10e2_a2_v(tv1, tv0);
				f_1100_a2_v(tv1, tv0);
				f_11f5_a2_v(tv1, tv0);
			}
			if (a1 == 8027) {
				f_10e2_a2_v(tv1, tv0);
				f_1100_a2_v(tv1, tv0);
			}
			if (a1 == 8028) {
				f_10e2_a2_v(tv1, tv0);
			}
			if (a1 == 8018) {
				f_10e2_a2_v(tv1, tv0);
			}
			if (a1 == 8009) {
				f_10e2_a2_v(tv1, tv0);
			}
			if (a1 == 8037) {
				f_10e8_a2_v(tv1, tv0);
				f_1205_a2_v(tv1, tv0);
				f_1215_a2_v(tv1, tv0);
			}
			if (a1 == 8033) {
				f_10e8_a2_v(tv1, tv0);
			}
			if (a1 == 8042) {
				f_10ee_a2_v(tv1, tv0);
			}
			if (a1 == 8045) {
				f_10f4_a2_v(tv1, tv0);
			}
			if (a1 == 8046) {
				f_10f4_a2_v(tv1, tv0);
			}
			if (a1 == 12591) {
				f_1100_a2_v(tv1, tv0);
				f_11f5_a2_v(tv1, tv0);
			}
			if (a0 == 7559) {
				if (f_1279_a1_b(tv1)) {
					f_ae1_a1_v("Neutral");
					tv0->SetMessage(6853);
					tv0->ClearReplies();
					tv0->AddReply(6854, 7890, 7560);
					tv0->AddReply(7262, 7890, 8004);
					return;
				}
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(6855);
				tv0->ClearReplies();
				if (f_1285_a1_b(tv1) && f_12b5_a1_b(tv1)) {
					tv0->AddReply(6856, 7563, 7562);
				}
				if (f_1291_a1_b(tv1) && f_12c1_a1_b(tv1)) {
					tv0->AddReply(6859, 7566, 7565);
				}
				if (f_129d_a1_b(tv1) && f_12a9_a1_b(tv1)) {
					tv0->AddReply(6861, 7568, 7567);
				}
				if (f_12f1_a1_b(tv1)) {
					tv0->AddReply(11392, 12590, 12589);
				}
				tv0->AddReply(7528, -1, 8310);
				return;
			}
			if (a0 == 12590) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(11393);
				tv0->ClearReplies();
				tv0->AddReply(11394, -1, 12591);
				return;
			}
			if (a0 == 7568) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(6862);
				tv0->ClearReplies();
				tv0->AddReply(7296, 8044, 8043);
				return;
			}
			if (a0 == 8044) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7297);
				tv0->ClearReplies();
				tv0->AddReply(7298, -1, 8045);
				tv0->AddReply(7299, -1, 8046);
				return;
			}
			if (a0 == 7566) {
				f_10dc_a2_v(tv1, tv0);
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(6860);
				tv0->ClearReplies();
				tv0->AddReply(7295, -1, 8042);
				return;
			}
			if (a0 == 7563) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(6857);
				tv0->ClearReplies();
				tv0->AddReply(6858, 8034, 7564);
				tv0->AddReply(7287, -1, 8033);
				return;
			}
			if (a0 == 8034) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7288);
				tv0->ClearReplies();
				tv0->AddReply(7289, 8036, 8035);
				tv0->AddReply(7292, 8039, 8038);
				return;
			}
			if (a0 == 8039) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7293);
				tv0->ClearReplies();
				tv0->AddReply(7294, 8036, 8040);
				return;
			}
			if (a0 == 8036) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7290);
				tv0->ClearReplies();
				tv0->AddReply(7291, -1, 8037);
				return;
			}
			if (a0 == 7890) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7162);
				tv0->ClearReplies();
				tv0->AddReply(7264, 8010, 8007);
				tv0->AddReply(7265, 8010, 8008);
				tv0->AddReply(7266, -1, 8009);
				return;
			}
			if (a0 == 8010) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7267);
				tv0->ClearReplies();
				tv0->AddReply(7268, 8015, 8012);
				tv0->AddReply(7269, 8014, 8013);
				return;
			}
			if (a0 == 8014) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7270);
				tv0->ClearReplies();
				tv0->AddReply(7272, 8019, 8016);
				tv0->AddReply(7273, 8015, 8017);
				tv0->AddReply(7274, -1, 8018);
				return;
			}
			if (a0 == 8019) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7275);
				tv0->ClearReplies();
				tv0->AddReply(7276, 8015, 8020);
				return;
			}
			if (a0 == 8015) {
				f_119b_a2_v(tv1, tv0);
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7271);
				tv0->ClearReplies();
				tv0->AddReply(7277, 8023, 8022);
				tv0->AddReply(7284, 8030, 8029);
				return;
			}
			if (a0 == 8030) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7285);
				tv0->ClearReplies();
				tv0->AddReply(7286, 8025, 8031);
				return;
			}
			if (a0 == 8023) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7278);
				tv0->ClearReplies();
				tv0->AddReply(7279, 8025, 8024);
				return;
			}
			if (a0 == 8025) {
				f_ae1_a1_v("Neutral");
				tv0->SetMessage(7280);
				tv0->ClearReplies();
				tv0->AddReply(7281, -1, 8026);
				tv0->AddReply(7282, -1, 8027);
				tv0->AddReply(7283, -1, 8028);
				return;
			}
			tv3 = true;
			if (f_10a0_a0_b()) {
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
		if (!f_1000_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_109c_a0_i());
		L0->SetPhoto(f_109e_a0_s());
		L0->SetPlayerName(f_13b9_a0_i());
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
		f_1038_a1_v(a0);
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
			f_dc7_a1_v("Neutral");
			tv0->SetMessage(9840);
			tv0->ClearReplies();
			if (f_132d_a1_b(tv1)) {
				tv0->AddReply(9841, 10821, 10840);
			}
			tv0->AddReply(11259, -1, 12449);
			break;
			return;
		}
		if (f_10a0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_103c_a1_v(tv2);
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

	void f_dc7_a1_v(string a0)
	{
		if (!f_10a0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_103c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_104e_a0_v();
			if (a1 == 10840) {
				f_1225_a2_v(tv1, tv0);
			}
			if (a0 == 10839) {
				f_dc7_a1_v("Neutral");
				tv0->SetMessage(9840);
				tv0->ClearReplies();
				if (f_132d_a1_b(tv1)) {
					tv0->AddReply(9841, 10821, 10840);
				}
				tv0->AddReply(11259, -1, 12449);
				return;
			}
			if (a0 == 10821) {
				f_dc7_a1_v("Neutral");
				tv0->SetMessage(9824);
				tv0->ClearReplies();
				tv0->AddReply(9825, 10823, 10822);
				tv0->AddReply(9829, 10828, 10827);
				tv0->AddReply(9836, 10835, 10834);
				return;
			}
			if (a0 == 10835) {
				f_dc7_a1_v("Neutral");
				tv0->SetMessage(9837);
				tv0->ClearReplies();
				tv0->AddReply(9839, 10828, 10837);
				tv0->AddReply(9838, -1, 10836);
				return;
			}
			if (a0 == 10828) {
				f_dc7_a1_v("Neutral");
				tv0->SetMessage(9830);
				tv0->ClearReplies();
				tv0->AddReply(9831, -1, 10829);
				tv0->AddReply(9832, 10831, 10830);
				return;
			}
			if (a0 == 10831) {
				f_dc7_a1_v("Neutral");
				tv0->SetMessage(9833);
				tv0->ClearReplies();
				tv0->AddReply(9834, -1, 10832);
				tv0->AddReply(9835, -1, 10833);
				return;
			}
			if (a0 == 10823) {
				f_dc7_a1_v("Neutral");
				tv0->SetMessage(9826);
				tv0->ClearReplies();
				tv0->AddReply(9827, 10828, 10824);
				tv0->AddReply(9828, -1, 10826);
				return;
			}
			tv3 = true;
			if (f_10a0_a0_b()) {
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
		if (!f_1000_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_109c_a0_i());
		L0->SetPhoto(f_109e_a0_s());
		L0->SetPlayerName(f_13b9_a0_i());
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
		f_1038_a1_v(a0);
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
			f_f0d_a1_v("Neutral");
			tv0->SetMessage(11255);
			tv0->ClearReplies();
			if (f_1345_a1_b(tv1) && f_1339_a1_b(tv1)) {
				tv0->AddReply(11257, 12448, 12447);
			}
			tv0->AddReply(11256, -1, 12446);
			break;
			return;
		}
		if (f_10a0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_103c_a1_v(tv2);
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

	void f_f0d_a1_v(string a0)
	{
		if (!f_10a0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_103c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_104e_a0_v();
			if (a1 == 12447) {
				f_122b_a2_v(tv1, tv0);
			}
			if (a0 == 12445) {
				f_f0d_a1_v("Neutral");
				tv0->SetMessage(11255);
				tv0->ClearReplies();
				if (f_1345_a1_b(tv1) && f_1339_a1_b(tv1)) {
					tv0->AddReply(11257, 12448, 12447);
				}
				tv0->AddReply(11256, -1, 12446);
				return;
			}
			if (a0 == 12448) {
				f_f0d_a1_v("Neutral");
				tv0->SetMessage(11258);
				tv0->ClearReplies();
				tv0->AddReply(11267, 12458, 12457);
				tv0->AddReply(11260, 12451, 12450);
				return;
			}
			if (a0 == 12451) {
				f_f0d_a1_v("Neutral");
				tv0->SetMessage(11261);
				tv0->ClearReplies();
				tv0->AddReply(11262, 12453, 12452);
				return;
			}
			if (a0 == 12453) {
				f_f0d_a1_v("Neutral");
				tv0->SetMessage(11263);
				tv0->ClearReplies();
				tv0->AddReply(11264, 12455, 12454);
				return;
			}
			if (a0 == 12455) {
				f_f0d_a1_v("Neutral");
				tv0->SetMessage(11265);
				tv0->ClearReplies();
				tv0->AddReply(11266, 12458, 12456);
				return;
			}
			if (a0 == 12458) {
				f_f0d_a1_v("Neutral");
				tv0->SetMessage(11268);
				tv0->ClearReplies();
				tv0->AddReply(11269, 12463, 12459);
				tv0->AddReply(11270, 12461, 12460);
				return;
			}
			if (a0 == 12461) {
				f_f0d_a1_v("Neutral");
				tv0->SetMessage(11271);
				tv0->ClearReplies();
				tv0->AddReply(11273, 12463, 12464);
				tv0->AddReply(11274, -1, 12465);
				return;
			}
			if (a0 == 12463) {
				f_f0d_a1_v("Neutral");
				tv0->SetMessage(11272);
				tv0->ClearReplies();
				tv0->AddReply(11275, -1, 12467);
				tv0->AddReply(11276, -1, 12468);
				return;
			}
			tv3 = true;
			if (f_10a0_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_fef_a1_b(object a0)
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

bool f_ffb_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1000_a1_b(object a0)
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
	L5 = L3 * 70 + f_1055_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1038_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_103c_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_104e_a0_v(void)
{
	if (f_10a0_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1055_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_105f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1064_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_106f_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

float f_107f_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1084_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_108d_a1_b(int a0)
{
	return f_1084_a0_i() == a0;
}

bool f_1093_a0_b(void)
{
	bool L0;
	f_103c_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_109c_a0_i(void)
{
	return 2858;
}

string f_109e_a0_s(void)
{
	return "ui/NPC_Eva.png";
}

bool f_10a0_a0_b(void)
{
	return true;
}

void f_10a2_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva3", 1);
}

void f_10a8_a2_v(object a0, object a1)
{
	@SetVariable("KnowKaterina", 1);
}

void f_10ae_a2_v(object a0, object a1)
{
	@SetVariable("KnowKapella", 1);
}

void f_10b4_a2_v(object a0, object a1)
{
	@SetVariable("KnowTheater", 1);
}

void f_10ba_a2_v(object a0, object a1)
{
	@SetVariable("KnowSquareMost", 1);
}

void f_10c0_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva5", 1);
}

void f_10c6_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva6", 1);
}

void f_10cc_a2_v(object a0, object a1)
{
	f_1398_a3_v(f_1387_a0_o(), "pt_map_georg", 2);
	a1->ShowMap(f_1387_a0_o());
}

void f_10dc_a2_v(object a0, object a1)
{
	@SetVariable("KnowUzly", 1);
}

void f_10e2_a2_v(object a0, object a1)
{
	@SetVariable("ood2Eva1", 1);
}

void f_10e8_a2_v(object a0, object a1)
{
	@SetVariable("ood2Eva2", 1);
}

void f_10ee_a2_v(object a0, object a1)
{
	@SetVariable("ood2Eva3", 1);
}

void f_10f4_a2_v(object a0, object a1)
{
	@SetVariable("ood2Eva4", 1);
}

void f_10fa_a2_v(object a0, object a1)
{
	@SetVariable("KnowRebro", 1);
}

void f_1100_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 1);
	L0 = f_1387_a0_o();
	L0->AddMark("d2q02EvaGotoAndrei", "pt_map_andrei", 0, 15272, f_107f_a0_f());
	L0->AddMark("d2q02EvaGotoAndreiSelf", "pt_map_eva", 0, 15278, f_107f_a0_f());
	f_13ca_a0_v();
	f_13da_a0_v();
	f_1064_a1_o("quest_d2_02");
}

void f_1127_a2_v(object a0, object a1)
{
	f_106f_a2_v("icot_eva@door1", false);
}

void f_112e_a2_v(object a0, object a1)
{
	@SetVariable("KnowDubilschikov", 1);
}

void f_1134_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1387_a0_o();
	L0->AddMark("d1q01EvaGotoSimon", "pt_map_georg", 1, 7778, f_107f_a0_f());
	L0->AddMark("d1EvaGotoMaria", "pt_map_maria", 3, 8628, f_107f_a0_f());
	L0->AddMark("d1EvaInfo", "pt_map_eva", 3, 8630, f_107f_a0_f());
}

void f_1156_a2_v(object a0, object a1)
{
	@SetVariable("KnowGorny", 1);
}

void f_115c_a2_v(object a0, object a1)
{
	@SetVariable("KnowSobor", 1);
}

void f_1162_a2_v(object a0, object a1)
{
	f_1398_a3_v(f_1387_a0_o(), "pt_map_theater", 2);
	a1->ShowMap(f_1387_a0_o());
}

void f_1172_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1387_a0_o();
	L0->AddMark("d1q01EvaAboutMark", "pt_map_theater", 1, 8636, f_107f_a0_f());
}

void f_1182_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1387_a0_o();
	L0->AddMark("d1EvaAboutKapella", "pt_map_kapella", 3, 8637, f_107f_a0_f());
	L0->AddMark("d1EvaAboutKaterina", "pt_map_katerina", 3, 8639, f_107f_a0_f());
}

void f_119b_a2_v(object a0, object a1)
{
	@SetVariable("KnowStation", 1);
}

void f_11a1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_11a7_a2_v(object a0, object a1)
{
	@SetVariable("ood1EvaIntro1", 1);
}

void f_11ad_a2_v(object a0, object a1)
{
	@SetVariable("KnowJulia", 1);
}

void f_11b3_a2_v(object a0, object a1)
{
	@SetVariable("KnowNevod", 1);
}

void f_11b9_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktor", 1);
}

void f_11bf_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva4", 1);
}

void f_11c5_a2_v(object a0, object a1)
{
	@SetVariable("ood1EvaIntro2", 1);
}

void f_11cb_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva1", 1);
}

void f_11d1_a2_v(object a0, object a1)
{
	@SetVariable("ood1Eva2", 1);
}

void f_11d7_a2_v(object a0, object a1)
{
	@SetVariable("KnowEva", 1);
}

void f_11dd_a2_v(object a0, object a1)
{
	@SetVariable("KnowGeorg", 1);
}

void f_11e3_a2_v(object a0, object a1)
{
	@SetVariable("ood6Eva1", 1);
}

void f_11e9_a2_v(object a0, object a1)
{
	@SetVariable("KnowMaria", 1);
}

void f_11ef_a2_v(object a0, object a1)
{
	@SetVariable("KnowMark", 1);
}

void f_11f5_a2_v(object a0, object a1)
{
	f_1398_a3_v(f_1387_a0_o(), "pt_map_andrei", 2);
	a1->ShowMap(f_1387_a0_o());
}

void f_1205_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1387_a0_o();
	L0->AddMark("d2q02EvaGotoMaria", "pt_map_maria", 0, 15274, f_107f_a0_f());
}

void f_1215_a2_v(object a0, object a1)
{
	f_1398_a3_v(f_1387_a0_o(), "pt_map_maria", 2);
	a1->ShowMap(f_1387_a0_o());
}

void f_1225_a2_v(object a0, object a1)
{
	@SetVariable("ood3Eva1", 1);
}

void f_122b_a2_v(object a0, object a1)
{
	@SetVariable("ood4Eva1", 1);
}

void f_1231_a2_v(object a0, object a1)
{
	@SetVariable("KnowStamatins", 1);
}

void f_1237_a2_v(object a0, object a1)
{
	@SetVariable("KnowMnogogrannik", 1);
}

bool f_123d_a1_b(object a0)
{
	if (f_105f_a1_i("ood1EvaIntro1") == 0) {
		return true;
	}
	return false;
}

bool f_1249_a1_b(object a0)
{
	if (f_105f_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1255_a1_b(object a0)
{
	if (f_105f_a1_i("ood1Eva5") == 0) {
		return true;
	}
	return false;
}

bool f_1261_a1_b(object a0)
{
	if (f_105f_a1_i("ood1Eva6") == 0) {
		return true;
	}
	return false;
}

bool f_126d_a1_b(object a0)
{
	if (f_105f_a1_i("ood1EvaIntro2") == 0) {
		return true;
	}
	return false;
}

bool f_1279_a1_b(object a0)
{
	if (f_105f_a1_i("ood2Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_1285_a1_b(object a0)
{
	if (f_105f_a1_i("ood2Eva2") == 0) {
		return true;
	}
	return false;
}

bool f_1291_a1_b(object a0)
{
	if (f_105f_a1_i("ood2Eva3") == 0) {
		return true;
	}
	return false;
}

bool f_129d_a1_b(object a0)
{
	if (f_105f_a1_i("ood2Eva4") == 0) {
		return true;
	}
	return false;
}

bool f_12a9_a1_b(object a0)
{
	if (f_105f_a1_i("d2q02") == 1000) {
		return true;
	}
	return false;
}

bool f_12b5_a1_b(object a0)
{
	if (f_105f_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_12c1_a1_b(object a0)
{
	if (f_105f_a1_i("d2q02") == 5) {
		return true;
	}
	return false;
}

bool f_12cd_a1_b(object a0)
{
	if (f_105f_a1_i("ood1Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_12d9_a1_b(object a0)
{
	if (f_105f_a1_i("ood1Eva4") == 0) {
		return true;
	}
	return false;
}

bool f_12e5_a1_b(object a0)
{
	if (f_105f_a1_i("ood1Eva2") == 0) {
		return true;
	}
	return false;
}

bool f_12f1_a1_b(object a0)
{
	if (f_105f_a1_i("d2q02") == 0) {
		return true;
	}
	return false;
}

bool f_12fd_a1_b(object a0)
{
	if (f_105f_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_1309_a1_b(object a0)
{
	if (f_105f_a1_i("ood1Eva3") == 0) {
		return true;
	}
	return false;
}

bool f_1315_a1_b(object a0)
{
	if (f_105f_a1_i("ood6Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_1321_a1_b(object a0)
{
	if (f_105f_a1_i("KnowJulia") == 1) {
		return true;
	}
	return false;
}

bool f_132d_a1_b(object a0)
{
	if (f_105f_a1_i("ood3Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_1339_a1_b(object a0)
{
	if (f_105f_a1_i("d4q02") == 0) {
		return true;
	}
	return false;
}

bool f_1345_a1_b(object a0)
{
	if (f_105f_a1_i("ood4Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_1351_a1_b(object a0)
{
	if (f_105f_a1_i("KnowStamatins") == 1) {
		return true;
	}
	return false;
}

object f_135d_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_136a_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_135d_a0_o();
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

object f_1387_a0_o(void)
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

void f_1398_a3_v(object a0, string a1, float a2)
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

int f_13b9_a0_i(void)
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

void f_13ca_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 11, 2, 3095);
	f_136a_a2_b(L0, -1);
}

void f_13da_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 57, 2, 12139);
	f_136a_a2_b(L0, 11);
}

void f_13ea_a0_v(void)
{
}

void f_13eb_a1_v(object a0)
{
	if (f_108d_a1_b(1)) {
		if (f_105f_a1_i("d1q01") == 0) {
			t4{a0};
			return;
		}
		t6{a0};
		return;
	}
	if (f_108d_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_108d_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_108d_a1_b(4)) {
		t12{a0};
		return;
	}
	if (f_108d_a1_b(6)) {
		t2{a0};
		return;
	}
	f_1093_a0_b();
}

