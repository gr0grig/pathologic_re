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
		f_1b4f_a0_v();
		if (!f_1552_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1593_a1_v("Neutral");
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
		f_1b53_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1546_a1_b(a0);
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
		if (!f_1557_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1609_a0_i());
		L0->SetPhoto(f_160b_a0_s());
		L0->SetPlayerName(f_1ace_a0_i());
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
		f_158f_a1_v(a0);
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
			f_17eb_a2_v(tv1, tv0);
			f_af_a1_v("Neutral");
			tv0->SetMessage(221);
			tv0->ClearReplies();
			tv0->AddReply(222, 263, 261);
			tv0->AddReply(223, 266, 262);
			break;
			return;
		}
		if (f_160d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1593_a1_v(tv2);
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

	void f_af_a1_v(string a0)
	{
		if (!f_160d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1593_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15a5_a0_v();
			if (a0 == 260) {
				f_17eb_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(221);
				tv0->ClearReplies();
				tv0->AddReply(222, 263, 261);
				tv0->AddReply(223, 266, 262);
				return;
			}
			if (a0 == 266) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(227);
				tv0->ClearReplies();
				tv0->AddReply(244, 268, 284);
				tv0->AddReply(245, -1, 286);
				return;
			}
			if (a0 == 263) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(224);
				tv0->ClearReplies();
				tv0->AddReply(228, 268, 267);
				tv0->AddReply(225, 265, 264);
				return;
			}
			if (a0 == 265) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(226);
				tv0->ClearReplies();
				tv0->AddReply(243, 268, 282);
				return;
			}
			if (a0 == 268) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(229);
				tv0->ClearReplies();
				tv0->AddReply(234, 274, 273);
				tv0->AddReply(230, 270, 269);
				return;
			}
			if (a0 == 270) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(231);
				tv0->ClearReplies();
				tv0->AddReply(233, -1, 272);
				return;
			}
			if (a0 == 274) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(235);
				tv0->ClearReplies();
				tv0->AddReply(236, 280, 275);
				tv0->AddReply(237, 277, 276);
				return;
			}
			if (a0 == 277) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(238);
				tv0->ClearReplies();
				tv0->AddReply(239, -1, 278);
				tv0->AddReply(240, -1, 279);
				return;
			}
			if (a0 == 280) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(241);
				tv0->ClearReplies();
				tv0->AddReply(242, -1, 281);
				return;
			}
			tv3 = true;
			if (f_160d_a0_b()) {
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
		if (!f_1557_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1609_a0_i());
		L0->SetPhoto(f_160b_a0_s());
		L0->SetPlayerName(f_1ace_a0_i());
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
		f_158f_a1_v(a0);
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
			f_258_a1_v("Neutral");
			tv0->SetMessage(12719);
			tv0->ClearReplies();
			if (f_199a_a1_b(tv1) && f_1976_a1_b(tv1)) {
				tv0->AddReply(12720, 4261, 13913);
			}
			if (f_1982_a1_b(tv1) && f_19a6_a1_b(tv1)) {
				tv0->AddReply(12721, 13915, 13914);
			}
			if (f_19d6_a1_b(tv1) && !f_19ee_a1_b(tv1) && !f_19fa_a1_b(tv1) && f_1a06_a1_b(tv1)) {
				tv0->AddReply(13747, 14993, 14992);
			}
			tv0->AddReply(12728, -1, 13921);
			break;
			return;
		}
		if (f_160d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1593_a1_v(tv2);
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

	void f_258_a1_v(string a0)
	{
		if (!f_160d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1593_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15a5_a0_v();
			if (a1 == 4268) {
				f_17b0_a2_v(tv1, tv0);
			}
			if (a1 == 4269) {
				f_17b0_a2_v(tv1, tv0);
			}
			if (a1 == 4266) {
				f_17b0_a2_v(tv1, tv0);
			}
			if (a1 == 13914) {
				f_17b6_a2_v(tv1, tv0);
			}
			if (a1 == 13920) {
				f_17bc_a2_v(tv1, tv0);
				f_17f1_a2_v(tv1, tv0);
				f_17ff_a2_v(tv1, tv0);
			}
			if (a1 == 14992) {
				f_1805_a2_v(tv1, tv0);
			}
			if (a0 == 13912) {
				f_258_a1_v("Neutral");
				tv0->SetMessage(12719);
				tv0->ClearReplies();
				if (f_199a_a1_b(tv1) && f_1976_a1_b(tv1)) {
					tv0->AddReply(12720, 4261, 13913);
				}
				if (f_1982_a1_b(tv1) && f_19a6_a1_b(tv1)) {
					tv0->AddReply(12721, 13915, 13914);
				}
				if (f_19d6_a1_b(tv1) && !f_19ee_a1_b(tv1) && !f_19fa_a1_b(tv1) && f_1a06_a1_b(tv1)) {
					tv0->AddReply(13747, 14993, 14992);
				}
				tv0->AddReply(12728, -1, 13921);
				return;
			}
			if (a0 == 14993) {
				f_258_a1_v("Neutral");
				tv0->SetMessage(13748);
				tv0->ClearReplies();
				tv0->AddReply(13749, -1, 14994);
				return;
			}
			if (a0 == 13915) {
				f_258_a1_v("Neutral");
				tv0->SetMessage(12722);
				tv0->ClearReplies();
				tv0->AddReply(12723, 13917, 13916);
				return;
			}
			if (a0 == 13917) {
				f_258_a1_v("Neutral");
				tv0->SetMessage(12724);
				tv0->ClearReplies();
				tv0->AddReply(12725, 13919, 13918);
				return;
			}
			if (a0 == 13919) {
				f_258_a1_v("Neutral");
				tv0->SetMessage(12726);
				tv0->ClearReplies();
				tv0->AddReply(12727, -1, 13920);
				return;
			}
			if (a0 == 4261) {
				f_258_a1_v("Neutral");
				tv0->SetMessage(3913);
				tv0->ClearReplies();
				tv0->AddReply(3914, -1, 4262);
				tv0->AddReply(3915, 4264, 4263);
				return;
			}
			if (a0 == 4264) {
				f_258_a1_v("Neutral");
				tv0->SetMessage(3916);
				tv0->ClearReplies();
				tv0->AddReply(3917, 4267, 4265);
				tv0->AddReply(3918, -1, 4266);
				return;
			}
			if (a0 == 4267) {
				f_258_a1_v("Neutral");
				tv0->SetMessage(3919);
				tv0->ClearReplies();
				tv0->AddReply(3920, -1, 4268);
				tv0->AddReply(3921, -1, 4269);
				return;
			}
			tv3 = true;
			if (f_160d_a0_b()) {
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
		if (!f_1557_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1609_a0_i());
		L0->SetPhoto(f_160b_a0_s());
		L0->SetPlayerName(f_1ace_a0_i());
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
		f_158f_a1_v(a0);
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
			if (f_196a_a1_b(tv1) && f_1856_a1_b(tv1)) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4938);
				tv0->ClearReplies();
				tv0->AddReply(4949, 5439, 5438);
				tv0->AddReply(4978, 5439, 5475);
				tv0->AddReply(4979, 5439, 5477);
				break;
			}
			if (f_18da_a1_b(tv1)) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4940);
				tv0->ClearReplies();
				tv0->AddReply(4981, 5480, 5479);
				tv0->AddReply(4985, -1, 5483);
				break;
			}
			if (f_198e_a1_b(tv1) && f_184a_a1_b(tv1)) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4943);
				tv0->ClearReplies();
				tv0->AddReply(4987, 5486, 5485);
				tv0->AddReply(4991, 5490, 5489);
				tv0->AddReply(4998, 5498, 5497);
				break;
			}
			f_502_a1_v("Neutral");
			tv0->SetMessage(6582);
			tv0->ClearReplies();
			if (f_1856_a1_b(tv1)) {
				tv0->AddReply(8690, 9528, 9527);
			}
			if (f_19b2_a1_b(tv1) && f_1862_a1_b(tv1)) {
				tv0->AddReply(6583, 5521, 7252);
			}
			if (f_1a12_a1_b(tv1) && f_19be_a1_b(tv1)) {
				tv0->AddReply(6590, 5533, 7259);
			}
			if (f_19ca_a1_b(tv1)) {
				tv0->AddReply(6586, 5503, 7255);
			}
			if (f_1a5a_a1_b(tv1) && f_186e_a1_b(tv1)) {
				tv0->AddReply(6592, 7679, 7261);
			}
			if (f_19e2_a1_b(tv1) && f_187a_a1_b(tv1)) {
				tv0->AddReply(6595, 7689, 7264);
			}
			if (f_1a66_a1_b(tv1) && f_1886_a1_b(tv1)) {
				tv0->AddReply(6602, 7697, 7271);
			}
			if (f_1a1e_a1_b(tv1) && f_1892_a1_b(tv1)) {
				tv0->AddReply(6605, 7703, 7274);
			}
			tv0->AddReply(7538, -1, 8320);
			break;
			return;
		}
		if (f_160d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1593_a1_v(tv2);
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

	void f_502_a1_v(string a0)
	{
		if (!f_160d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1593_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15a5_a0_v();
			if (a1 == 5450) {
				f_177f_a2_v(tv1, tv0);
				f_1679_a2_v(tv1, tv0);
				f_1689_a2_v(tv1, tv0);
				f_1699_a2_v(tv1, tv0);
			}
			if (a1 == 5453) {
				f_177f_a2_v(tv1, tv0);
			}
			if (a1 == 5454) {
				f_177f_a2_v(tv1, tv0);
			}
			if (a1 == 5481) {
				f_1785_a2_v(tv1, tv0);
			}
			if (a1 == 5482) {
				f_1785_a2_v(tv1, tv0);
			}
			if (a1 == 5483) {
				f_1785_a2_v(tv1, tv0);
			}
			if (a1 == 5488) {
				f_17a4_a2_v(tv1, tv0);
				f_1615_a2_v(tv1, tv0);
				f_1620_a2_v(tv1, tv0);
			}
			if (a1 == 5494) {
				f_17a4_a2_v(tv1, tv0);
				f_1615_a2_v(tv1, tv0);
				f_1620_a2_v(tv1, tv0);
			}
			if (a1 == 5501) {
				f_17a4_a2_v(tv1, tv0);
				f_1620_a2_v(tv1, tv0);
				f_1615_a2_v(tv1, tv0);
			}
			if (a1 == 9529) {
				f_1699_a2_v(tv1, tv0);
				f_1679_a2_v(tv1, tv0);
				f_1689_a2_v(tv1, tv0);
			}
			if (a1 == 5526) {
				f_17aa_a2_v(tv1, tv0);
			}
			if (a1 == 5539) {
				f_17df_a2_v(tv1, tv0);
			}
			if (a1 == 5542) {
				f_17df_a2_v(tv1, tv0);
			}
			if (a1 == 5540) {
				f_17df_a2_v(tv1, tv0);
			}
			if (a1 == 5541) {
				f_17df_a2_v(tv1, tv0);
			}
			if (a1 == 5508) {
				f_17e5_a2_v(tv1, tv0);
			}
			if (a1 == 5509) {
				f_17e5_a2_v(tv1, tv0);
			}
			if (a1 == 5512) {
				f_17e5_a2_v(tv1, tv0);
			}
			if (a1 == 5520) {
				f_17e5_a2_v(tv1, tv0);
			}
			if (a1 == 5517) {
				f_17e5_a2_v(tv1, tv0);
			}
			if (a1 == 7687) {
				f_1632_a2_v(tv1, tv0);
			}
			if (a1 == 7696) {
				f_1638_a2_v(tv1, tv0);
			}
			if (a1 == 7702) {
				f_163e_a2_v(tv1, tv0);
			}
			if (a1 == 7708) {
				f_1644_a2_v(tv1, tv0);
			}
			if (a0 == 5427) {
				if (f_196a_a1_b(tv1) && f_1856_a1_b(tv1)) {
					f_502_a1_v("Neutral");
					tv0->SetMessage(4938);
					tv0->ClearReplies();
					tv0->AddReply(4949, 5439, 5438);
					tv0->AddReply(4978, 5439, 5475);
					tv0->AddReply(4979, 5439, 5477);
					return;
				}
				if (f_18da_a1_b(tv1)) {
					f_502_a1_v("Neutral");
					tv0->SetMessage(4940);
					tv0->ClearReplies();
					tv0->AddReply(4981, 5480, 5479);
					tv0->AddReply(4985, -1, 5483);
					return;
				}
				if (f_198e_a1_b(tv1) && f_184a_a1_b(tv1)) {
					f_502_a1_v("Neutral");
					tv0->SetMessage(4943);
					tv0->ClearReplies();
					tv0->AddReply(4987, 5486, 5485);
					tv0->AddReply(4991, 5490, 5489);
					tv0->AddReply(4998, 5498, 5497);
					return;
				}
				f_502_a1_v("Neutral");
				tv0->SetMessage(6582);
				tv0->ClearReplies();
				if (f_1856_a1_b(tv1)) {
					tv0->AddReply(8690, 9528, 9527);
				}
				if (f_19b2_a1_b(tv1) && f_1862_a1_b(tv1)) {
					tv0->AddReply(6583, 5521, 7252);
				}
				if (f_1a12_a1_b(tv1) && f_19be_a1_b(tv1)) {
					tv0->AddReply(6590, 5533, 7259);
				}
				if (f_19ca_a1_b(tv1)) {
					tv0->AddReply(6586, 5503, 7255);
				}
				if (f_1a5a_a1_b(tv1) && f_186e_a1_b(tv1)) {
					tv0->AddReply(6592, 7679, 7261);
				}
				if (f_19e2_a1_b(tv1) && f_187a_a1_b(tv1)) {
					tv0->AddReply(6595, 7689, 7264);
				}
				if (f_1a66_a1_b(tv1) && f_1886_a1_b(tv1)) {
					tv0->AddReply(6602, 7697, 7271);
				}
				if (f_1a1e_a1_b(tv1) && f_1892_a1_b(tv1)) {
					tv0->AddReply(6605, 7703, 7274);
				}
				tv0->AddReply(7538, -1, 8320);
				return;
			}
			if (a0 == 7703) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6995);
				tv0->ClearReplies();
				tv0->AddReply(6996, 7705, 7704);
				return;
			}
			if (a0 == 7705) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6997);
				tv0->ClearReplies();
				tv0->AddReply(6998, 7707, 7706);
				return;
			}
			if (a0 == 7707) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6999);
				tv0->ClearReplies();
				tv0->AddReply(7000, -1, 7708);
				return;
			}
			if (a0 == 7697) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6989);
				tv0->ClearReplies();
				tv0->AddReply(6990, 7699, 7698);
				return;
			}
			if (a0 == 7699) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6991);
				tv0->ClearReplies();
				tv0->AddReply(6992, 7701, 7700);
				return;
			}
			if (a0 == 7701) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6993);
				tv0->ClearReplies();
				tv0->AddReply(6994, -1, 7702);
				return;
			}
			if (a0 == 7689) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6981);
				tv0->ClearReplies();
				tv0->AddReply(6982, 7691, 7690);
				return;
			}
			if (a0 == 7691) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6983);
				tv0->ClearReplies();
				tv0->AddReply(6984, 7693, 7692);
				return;
			}
			if (a0 == 7693) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6985);
				tv0->ClearReplies();
				tv0->AddReply(6986, 7695, 7694);
				return;
			}
			if (a0 == 7695) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6987);
				tv0->ClearReplies();
				tv0->AddReply(6988, -1, 7696);
				return;
			}
			if (a0 == 7679) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6972);
				tv0->ClearReplies();
				tv0->AddReply(6973, 7681, 7680);
				return;
			}
			if (a0 == 7681) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6974);
				tv0->ClearReplies();
				tv0->AddReply(6975, 7684, 7682);
				tv0->AddReply(6976, 7684, 7683);
				return;
			}
			if (a0 == 7684) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6977);
				tv0->ClearReplies();
				tv0->AddReply(6978, 7686, 7685);
				return;
			}
			if (a0 == 7686) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(6979);
				tv0->ClearReplies();
				tv0->AddReply(6980, -1, 7687);
				return;
			}
			if (a0 == 5503) {
				f_1673_a2_v(tv1, tv0);
				f_502_a1_v("Neutral");
				tv0->SetMessage(5004);
				tv0->ClearReplies();
				tv0->AddReply(5005, 5505, 5504);
				tv0->AddReply(5015, 5515, 5514);
				return;
			}
			if (a0 == 5515) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5016);
				tv0->ClearReplies();
				tv0->AddReply(5017, 5519, 5516);
				tv0->AddReply(5018, -1, 5517);
				return;
			}
			if (a0 == 5519) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5019);
				tv0->ClearReplies();
				tv0->AddReply(5020, -1, 5520);
				return;
			}
			if (a0 == 5505) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5006);
				tv0->ClearReplies();
				if (!f_1952_a1_b(tv1)) {
					tv0->AddReply(5007, 5507, 5506);
				}
				tv0->AddReply(5011, 5511, 5510);
				return;
			}
			if (a0 == 5511) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5012);
				tv0->ClearReplies();
				tv0->AddReply(5013, -1, 5512);
				return;
			}
			if (a0 == 5507) {
				f_176d_a2_v(tv1, tv0);
				f_1773_a2_v(tv1, tv0);
				f_1779_a2_v(tv1, tv0);
				f_502_a1_v("Neutral");
				tv0->SetMessage(5008);
				tv0->ClearReplies();
				tv0->AddReply(5009, -1, 5508);
				tv0->AddReply(5010, -1, 5509);
				return;
			}
			if (a0 == 5533) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5031);
				tv0->ClearReplies();
				tv0->AddReply(5032, 5535, 5534);
				tv0->AddReply(5039, -1, 5541);
				return;
			}
			if (a0 == 5535) {
				f_16a2_a2_v(tv1, tv0);
				f_502_a1_v("Neutral");
				tv0->SetMessage(5033);
				tv0->ClearReplies();
				tv0->AddReply(5034, 5537, 5536);
				tv0->AddReply(5038, -1, 5540);
				return;
			}
			if (a0 == 5537) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5035);
				tv0->ClearReplies();
				tv0->AddReply(5037, -1, 5539);
				tv0->AddReply(5040, -1, 5542);
				return;
			}
			if (a0 == 5521) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5021);
				tv0->ClearReplies();
				tv0->AddReply(5022, 5523, 5522);
				tv0->AddReply(5027, 5528, 5527);
				tv0->AddReply(5030, 5528, 5531);
				return;
			}
			if (a0 == 5528) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5028);
				tv0->ClearReplies();
				tv0->AddReply(5029, 5525, 5529);
				tv0->AddReply(5041, 5544, 5543);
				return;
			}
			if (a0 == 5544) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5042);
				tv0->ClearReplies();
				tv0->AddReply(5043, 5525, 5545);
				return;
			}
			if (a0 == 5523) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5023);
				tv0->ClearReplies();
				tv0->AddReply(5024, 5525, 5524);
				return;
			}
			if (a0 == 5525) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5025);
				tv0->ClearReplies();
				tv0->AddReply(5026, -1, 5526);
				return;
			}
			if (a0 == 9528) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(8691);
				tv0->ClearReplies();
				tv0->AddReply(8692, -1, 9529);
				return;
			}
			if (a0 == 5498) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4999);
				tv0->ClearReplies();
				tv0->AddReply(5000, 5500, 5499);
				return;
			}
			if (a0 == 5500) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(5001);
				tv0->ClearReplies();
				tv0->AddReply(5002, -1, 5501);
				return;
			}
			if (a0 == 5490) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4992);
				tv0->ClearReplies();
				tv0->AddReply(4993, 5492, 5491);
				tv0->AddReply(4997, 5492, 5495);
				return;
			}
			if (a0 == 5492) {
				f_502_a1_v("Crying");
				tv0->SetMessage(4994);
				tv0->ClearReplies();
				tv0->AddReply(4996, -1, 5494);
				return;
			}
			if (a0 == 5486) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4988);
				tv0->ClearReplies();
				tv0->AddReply(4990, -1, 5488);
				return;
			}
			if (a0 == 5480) {
				f_180b_a2_v(tv1, tv0);
				f_502_a1_v("Neutral");
				tv0->SetMessage(4982);
				tv0->ClearReplies();
				tv0->AddReply(4983, -1, 5481);
				tv0->AddReply(4984, -1, 5482);
				return;
			}
			if (a0 == 5439) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4950);
				tv0->ClearReplies();
				tv0->AddReply(4951, 5441, 5440);
				tv0->AddReply(4976, 5441, 5471);
				tv0->AddReply(4977, 5441, 5473);
				return;
			}
			if (a0 == 5441) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4952);
				tv0->ClearReplies();
				tv0->AddReply(4953, 5443, 5442);
				tv0->AddReply(4972, 5466, 5465);
				return;
			}
			if (a0 == 5466) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4973);
				tv0->ClearReplies();
				tv0->AddReply(4974, 5445, 5467);
				tv0->AddReply(4975, 5445, 5469);
				return;
			}
			if (a0 == 5443) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4954);
				tv0->ClearReplies();
				tv0->AddReply(4955, 5445, 5444);
				tv0->AddReply(4968, 5460, 5459);
				return;
			}
			if (a0 == 5460) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4969);
				tv0->ClearReplies();
				tv0->AddReply(4970, 5445, 5461);
				tv0->AddReply(4971, 5445, 5463);
				return;
			}
			if (a0 == 5445) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4956);
				tv0->ClearReplies();
				tv0->AddReply(4957, 5447, 5446);
				tv0->AddReply(4967, 5447, 5457);
				return;
			}
			if (a0 == 5447) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4958);
				tv0->ClearReplies();
				tv0->AddReply(4959, 5449, 5448);
				tv0->AddReply(4966, 5449, 5455);
				return;
			}
			if (a0 == 5449) {
				f_180b_a2_v(tv1, tv0);
				f_502_a1_v("Neutral");
				tv0->SetMessage(4960);
				tv0->ClearReplies();
				tv0->AddReply(4961, -1, 5450);
				tv0->AddReply(4962, 5452, 5451);
				return;
			}
			if (a0 == 5452) {
				f_502_a1_v("Neutral");
				tv0->SetMessage(4963);
				tv0->ClearReplies();
				tv0->AddReply(4964, -1, 5453);
				tv0->AddReply(4965, -1, 5454);
				return;
			}
			tv3 = true;
			if (f_160d_a0_b()) {
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
		if (!f_1557_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1609_a0_i());
		L0->SetPhoto(f_160b_a0_s());
		L0->SetPlayerName(f_1ace_a0_i());
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
		f_158f_a1_v(a0);
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
			f_b8d_a1_v("Neutral");
			tv0->SetMessage(6624);
			tv0->ClearReplies();
			if (f_189e_a1_b(tv1) && f_18ce_a1_b(tv1)) {
				tv0->AddReply(7217, 7952, 7953);
			}
			if (f_18aa_a1_b(tv1)) {
				tv0->AddReply(6949, 7656, 7655);
			}
			tv0->AddReply(6626, -1, 7295);
			break;
			f_b8d_a1_v("Neutral");
			tv0->SetMessage(9272);
			tv0->ClearReplies();
			tv0->AddReply(9273, 10180, 10179);
			tv0->AddReply(9280, 10180, 10186);
			break;
			f_b8d_a1_v("Neutral");
			tv0->SetMessage(9281);
			tv0->ClearReplies();
			tv0->AddReply(9282, 10190, 10189);
			tv0->AddReply(9292, 10190, 10199);
			tv0->AddReply(9293, 10190, 10201);
			break;
			return;
		}
		if (f_160d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1593_a1_v(tv2);
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

	void f_b8d_a1_v(string a0)
	{
		if (!f_160d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1593_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15a5_a0_v();
			if (a1 == 7333) {
				f_164a_a2_v(tv1, tv0);
				f_165c_a2_v(tv1, tv0);
				f_16c4_a2_v(tv1, tv0);
			}
			if (a1 == 7336) {
				f_164a_a2_v(tv1, tv0);
				f_165c_a2_v(tv1, tv0);
				f_16c4_a2_v(tv1, tv0);
			}
			if (a1 == 7337) {
				f_164a_a2_v(tv1, tv0);
				f_165c_a2_v(tv1, tv0);
				f_16c4_a2_v(tv1, tv0);
			}
			if (a1 == 7976) {
				f_1650_a2_v(tv1, tv0);
			}
			if (a1 == 7981) {
				f_1650_a2_v(tv1, tv0);
			}
			if (a1 == 7969) {
				f_1650_a2_v(tv1, tv0);
			}
			if (a0 == 7293) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(6624);
				tv0->ClearReplies();
				if (f_189e_a1_b(tv1) && f_18ce_a1_b(tv1)) {
					tv0->AddReply(7217, 7952, 7953);
				}
				if (f_18aa_a1_b(tv1)) {
					tv0->AddReply(6949, 7656, 7655);
				}
				tv0->AddReply(6626, -1, 7295);
				return;
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(9272);
				tv0->ClearReplies();
				tv0->AddReply(9273, 10180, 10179);
				tv0->AddReply(9280, 10180, 10186);
				return;
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(9281);
				tv0->ClearReplies();
				tv0->AddReply(9282, 10190, 10189);
				tv0->AddReply(9292, 10190, 10199);
				tv0->AddReply(9293, 10190, 10201);
				return;
			}
			if (a0 == 10190) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(9283);
				tv0->ClearReplies();
				tv0->AddReply(9284, 10192, 10191);
				tv0->AddReply(9288, 10196, 10195);
				return;
			}
			if (a0 == 10196) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(9289);
				tv0->ClearReplies();
				tv0->AddReply(9290, -1, 10197);
				tv0->AddReply(9291, -1, 10198);
				return;
			}
			if (a0 == 10192) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(9285);
				tv0->ClearReplies();
				tv0->AddReply(9286, -1, 10193);
				tv0->AddReply(9287, -1, 10194);
				return;
			}
			if (a0 == 10180) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(9274);
				tv0->ClearReplies();
				tv0->AddReply(9275, 10182, 10181);
				tv0->AddReply(9279, -1, 10185);
				return;
			}
			if (a0 == 10182) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(9276);
				tv0->ClearReplies();
				tv0->AddReply(9277, -1, 10183);
				tv0->AddReply(9278, -1, 10184);
				return;
			}
			if (a0 == 7656) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(6950);
				tv0->ClearReplies();
				tv0->AddReply(6951, 7957, 7657);
				return;
			}
			if (a0 == 7957) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7220);
				tv0->ClearReplies();
				tv0->AddReply(7221, 7962, 7958);
				tv0->AddReply(7222, 7960, 7959);
				return;
			}
			if (a0 == 7960) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7223);
				tv0->ClearReplies();
				tv0->AddReply(7224, 10153, 7961);
				return;
			}
			if (a0 == 7962) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7225);
				tv0->ClearReplies();
				tv0->AddReply(7226, 7965, 7964);
				if (f_18c2_a1_b(tv1)) {
					tv0->AddReply(7228, 7967, 7966);
				}
				return;
			}
			if (a0 == 7967) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7229);
				tv0->ClearReplies();
				tv0->AddReply(7230, 10155, 7968);
				tv0->AddReply(7231, -1, 7969);
				return;
			}
			if (a0 == 7965) {
				f_1811_a2_v(tv1, tv0);
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7227);
				tv0->ClearReplies();
				tv0->AddReply(7232, 7973, 7970);
				if (!f_1a2a_a1_b(tv1)) {
					tv0->AddReply(7233, 7972, 7971);
				}
				if (f_18c2_a1_b(tv1)) {
					tv0->AddReply(7236, 7975, 7974);
				}
				return;
			}
			if (a0 == 7975) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7237);
				tv0->ClearReplies();
				tv0->AddReply(7240, 10157, 7979);
				tv0->AddReply(7241, -1, 7981);
				return;
			}
			if (a0 == 7972) {
				f_1656_a2_v(tv1, tv0);
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7234);
				tv0->ClearReplies();
				tv0->AddReply(7239, 10157, 7977);
				return;
			}
			if (a0 == 7973) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7235);
				tv0->ClearReplies();
				tv0->AddReply(7238, -1, 7976);
				return;
			}
			if (a0 == 7952) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7216);
				tv0->ClearReplies();
				tv0->AddReply(6651, 7326, 7325);
				tv0->AddReply(6672, 7954, 7352);
				return;
			}
			if (a0 == 7954) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(7218);
				tv0->ClearReplies();
				tv0->AddReply(7219, 7326, 7955);
				return;
			}
			if (a0 == 7326) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(6652);
				tv0->ClearReplies();
				tv0->AddReply(6653, 7328, 7327);
				tv0->AddReply(6668, 7347, 7346);
				return;
			}
			if (a0 == 7347) {
				f_162c_a2_v(tv1, tv0);
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(6669);
				tv0->ClearReplies();
				tv0->AddReply(6670, 7332, 7348);
				tv0->AddReply(6671, 7328, 7350);
				return;
			}
			if (a0 == 7328) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(6654);
				tv0->ClearReplies();
				tv0->AddReply(6655, 7330, 7329);
				tv0->AddReply(6666, 7332, 7342);
				tv0->AddReply(6667, 7332, 7344);
				return;
			}
			if (a0 == 7330) {
				f_162c_a2_v(tv1, tv0);
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(6656);
				tv0->ClearReplies();
				tv0->AddReply(6657, 7332, 7331);
				tv0->AddReply(6664, 7332, 7338);
				tv0->AddReply(6665, 7332, 7340);
				return;
			}
			if (a0 == 7332) {
				f_160f_a2_v(tv1, tv0);
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(6658);
				tv0->ClearReplies();
				tv0->AddReply(6659, -1, 7333);
				if (!f_18b6_a1_b(tv1)) {
					tv0->AddReply(6660, 7335, 7334);
				}
				tv0->AddReply(6663, -1, 7337);
				return;
			}
			if (a0 == 7335) {
				f_b8d_a1_v("Neutral");
				tv0->SetMessage(6661);
				tv0->ClearReplies();
				tv0->AddReply(6662, -1, 7336);
				return;
			}
			tv3 = true;
			if (f_160d_a0_b()) {
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
		if (!f_1557_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1609_a0_i());
		L0->SetPhoto(f_160b_a0_s());
		L0->SetPlayerName(f_1ace_a0_i());
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
		f_158f_a1_v(a0);
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
			f_f14_a1_v("Neutral");
			tv0->SetMessage(9781);
			tv0->ClearReplies();
			if (f_18e6_a1_b(tv1) && f_18f2_a1_b(tv1)) {
				tv0->AddReply(10216, 11263, 11262);
			}
			if (f_1a36_a1_b(tv1)) {
				tv0->AddReply(9782, 10764, 10775);
			}
			if (f_1a42_a1_b(tv1)) {
				tv0->AddReply(10191, 11238, 11237);
			}
			tv0->AddReply(15312, -1, 16550);
			break;
			return;
		}
		if (f_160d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1593_a1_v(tv2);
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

	void f_f14_a1_v(string a0)
	{
		if (!f_160d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1593_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15a5_a0_v();
			if (a1 == 11262) {
				f_16b8_a2_v(tv1, tv0);
			}
			if (a1 == 11349) {
				f_16b8_a2_v(tv1, tv0);
				f_16be_a2_v(tv1, tv0);
				f_16a8_a2_v(tv1, tv0);
			}
			if (a1 == 11345) {
				f_16b8_a2_v(tv1, tv0);
			}
			if (a1 == 10775) {
				f_1817_a2_v(tv1, tv0);
			}
			if (a1 == 11237) {
				f_181d_a2_v(tv1, tv0);
			}
			if (a0 == 10774) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(9781);
				tv0->ClearReplies();
				if (f_18e6_a1_b(tv1) && f_18f2_a1_b(tv1)) {
					tv0->AddReply(10216, 11263, 11262);
				}
				if (f_1a36_a1_b(tv1)) {
					tv0->AddReply(9782, 10764, 10775);
				}
				if (f_1a42_a1_b(tv1)) {
					tv0->AddReply(10191, 11238, 11237);
				}
				tv0->AddReply(15312, -1, 16550);
				return;
			}
			if (a0 == 11238) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(10192);
				tv0->ClearReplies();
				tv0->AddReply(10295, 11351, 11350);
				return;
			}
			if (a0 == 11351) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(10296);
				tv0->ClearReplies();
				tv0->AddReply(10297, 11353, 11352);
				tv0->AddReply(10299, 11353, 11354);
				return;
			}
			if (a0 == 11353) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(10298);
				tv0->ClearReplies();
				tv0->AddReply(10300, -1, 11356);
				tv0->AddReply(10301, -1, 11357);
				return;
			}
			if (a0 == 10764) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(9773);
				tv0->ClearReplies();
				tv0->AddReply(9774, 10766, 10765);
				tv0->AddReply(9778, 10766, 10769);
				tv0->AddReply(9779, 10766, 10771);
				tv0->AddReply(9780, -1, 10773);
				return;
			}
			if (a0 == 10766) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(9775);
				tv0->ClearReplies();
				tv0->AddReply(9776, -1, 10767);
				tv0->AddReply(9777, -1, 10768);
				return;
			}
			if (a0 == 11263) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(10217);
				tv0->ClearReplies();
				tv0->AddReply(10287, 11343, 11342);
				return;
			}
			if (a0 == 11343) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(10288);
				tv0->ClearReplies();
				tv0->AddReply(10289, 11346, 11344);
				tv0->AddReply(10290, -1, 11345);
				return;
			}
			if (a0 == 11346) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(10291);
				tv0->ClearReplies();
				tv0->AddReply(10292, 11348, 11347);
				return;
			}
			if (a0 == 11348) {
				f_f14_a1_v("Neutral");
				tv0->SetMessage(10293);
				tv0->ClearReplies();
				tv0->AddReply(10294, -1, 11349);
				return;
			}
			tv3 = true;
			if (f_160d_a0_b()) {
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
		if (!f_1557_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1609_a0_i());
		L0->SetPhoto(f_160b_a0_s());
		L0->SetPlayerName(f_1ace_a0_i());
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
		f_158f_a1_v(a0);
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
			f_1115_a1_v("Neutral");
			tv0->SetMessage(11344);
			tv0->ClearReplies();
			if (f_18fe_a1_b(tv1) && f_190a_a1_b(tv1)) {
				tv0->AddReply(11346, 12544, 12543);
			}
			if (f_190a_a1_b(tv1) && !f_1916_a1_b(tv1)) {
				tv0->AddReply(11473, 12680, 12679);
			}
			if (f_192e_a1_b(tv1) && f_1922_a1_b(tv1)) {
				tv0->AddReply(11853, 13067, 13066);
			}
			tv0->AddReply(11345, -1, 12542);
			break;
			return;
		}
		if (f_160d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1593_a1_v(tv2);
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

	void f_1115_a1_v(string a0)
	{
		if (!f_160d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1593_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15a5_a0_v();
			if (a1 == 12557) {
				f_16d4_a2_v(tv1, tv0);
				f_16da_a2_v(tv1, tv0);
				f_16e0_a2_v(tv1, tv0);
				f_1823_a2_v(tv1, tv0);
				f_1839_a2_v(tv1, tv0);
				f_182e_a2_v(tv1, tv0);
				f_1626_a2_v(tv1, tv0);
			}
			if (a1 == 12559) {
				f_16d4_a2_v(tv1, tv0);
			}
			if (a1 == 12681) {
				f_16da_a2_v(tv1, tv0);
				f_16e0_a2_v(tv1, tv0);
				f_1626_a2_v(tv1, tv0);
				f_1823_a2_v(tv1, tv0);
				f_182e_a2_v(tv1, tv0);
				f_1839_a2_v(tv1, tv0);
			}
			if (a1 == 13068) {
				f_1724_a2_v(tv1, tv0);
			}
			if (a0 == 12541) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11344);
				tv0->ClearReplies();
				if (f_18fe_a1_b(tv1) && f_190a_a1_b(tv1)) {
					tv0->AddReply(11346, 12544, 12543);
				}
				if (f_190a_a1_b(tv1) && !f_1916_a1_b(tv1)) {
					tv0->AddReply(11473, 12680, 12679);
				}
				if (f_192e_a1_b(tv1) && f_1922_a1_b(tv1)) {
					tv0->AddReply(11853, 13067, 13066);
				}
				tv0->AddReply(11345, -1, 12542);
				return;
			}
			if (a0 == 13067) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11854);
				tv0->ClearReplies();
				tv0->AddReply(11855, -1, 13068);
				return;
			}
			if (a0 == 12680) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11474);
				tv0->ClearReplies();
				tv0->AddReply(11475, -1, 12681);
				return;
			}
			if (a0 == 12544) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11347);
				tv0->ClearReplies();
				tv0->AddReply(11348, 12550, 12545);
				tv0->AddReply(11367, 12566, 12565);
				return;
			}
			if (a0 == 12566) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11368);
				tv0->ClearReplies();
				tv0->AddReply(11369, 12614, 12567);
				tv0->AddReply(11419, 12554, 12616);
				return;
			}
			if (a0 == 12614) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11417);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 12550) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11353);
				tv0->ClearReplies();
				tv0->AddReply(11354, 12552, 12551);
				tv0->AddReply(11365, 12556, 12562);
				return;
			}
			if (a0 == 12552) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11355);
				tv0->ClearReplies();
				tv0->AddReply(11356, 12554, 12553);
				return;
			}
			if (a0 == 12554) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11357);
				tv0->ClearReplies();
				tv0->AddReply(11358, 12556, 12555);
				tv0->AddReply(11421, 12620, 12619);
				return;
			}
			if (a0 == 12620) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11422);
				tv0->ClearReplies();
				tv0->AddReply(11423, 12624, 12621);
				tv0->AddReply(11424, 12556, 12622);
				return;
			}
			if (a0 == 12624) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11425);
				tv0->ClearReplies();
				tv0->AddReply(11426, 12626, 12625);
				return;
			}
			if (a0 == 12626) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11427);
				tv0->ClearReplies();
				tv0->AddReply(11428, 12556, 12627);
				return;
			}
			if (a0 == 12556) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11359);
				tv0->ClearReplies();
				tv0->AddReply(11360, -1, 12557);
				tv0->AddReply(11362, -1, 12559);
				return;
			}
			tv3 = true;
			if (f_160d_a0_b()) {
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
		if (!f_1557_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1609_a0_i());
		L0->SetPhoto(f_160b_a0_s());
		L0->SetPlayerName(f_1ace_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_158f_a1_v(a0);
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
			if (f_193a_a1_b(tv1)) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11872);
				tv0->ClearReplies();
				tv0->AddReply(11873, 13087, 13086);
				break;
			}
			f_1371_a1_v("Neutral");
			tv0->SetMessage(11897);
			tv0->ClearReplies();
			if (f_1946_a1_b(tv1)) {
				tv0->AddReply(11898, 13115, 13114);
			}
			if (f_195e_a1_b(tv1) && f_1a4e_a1_b(tv1)) {
				tv0->AddReply(11907, 13124, 13123);
			}
			tv0->AddReply(11915, -1, 13131);
			break;
			return;
		}
		if (f_160d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1593_a1_v(tv2);
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

	void f_1371_a1_v(string a0)
	{
		if (!f_160d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1593_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15a5_a0_v();
			if (a1 == 13112) {
				f_172a_a2_v(tv1, tv0);
			}
			if (a1 == 13122) {
				f_1756_a2_v(tv1, tv0);
				f_178b_a2_v(tv1, tv0);
			}
			if (a1 == 13123) {
				f_1844_a2_v(tv1, tv0);
			}
			if (a0 == 13085) {
				if (f_193a_a1_b(tv1)) {
					f_1371_a1_v("Neutral");
					tv0->SetMessage(11872);
					tv0->ClearReplies();
					tv0->AddReply(11873, 13087, 13086);
					return;
				}
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11897);
				tv0->ClearReplies();
				if (f_1946_a1_b(tv1)) {
					tv0->AddReply(11898, 13115, 13114);
				}
				if (f_195e_a1_b(tv1) && f_1a4e_a1_b(tv1)) {
					tv0->AddReply(11907, 13124, 13123);
				}
				tv0->AddReply(11915, -1, 13131);
				return;
			}
			if (a0 == 13124) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11908);
				tv0->ClearReplies();
				tv0->AddReply(11909, 13126, 13125);
				return;
			}
			if (a0 == 13126) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11910);
				tv0->ClearReplies();
				tv0->AddReply(11911, 13128, 13127);
				return;
			}
			if (a0 == 13128) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11912);
				tv0->ClearReplies();
				tv0->AddReply(11913, -1, 13129);
				tv0->AddReply(11914, -1, 13130);
				return;
			}
			if (a0 == 13115) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11899);
				tv0->ClearReplies();
				tv0->AddReply(11900, 13117, 13116);
				return;
			}
			if (a0 == 13117) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11901);
				tv0->ClearReplies();
				tv0->AddReply(11902, 13119, 13118);
				return;
			}
			if (a0 == 13119) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11903);
				tv0->ClearReplies();
				tv0->AddReply(11904, 13121, 13120);
				return;
			}
			if (a0 == 13121) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11905);
				tv0->ClearReplies();
				tv0->AddReply(11906, -1, 13122);
				return;
			}
			if (a0 == 13087) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11874);
				tv0->ClearReplies();
				tv0->AddReply(11875, 13089, 13088);
				return;
			}
			if (a0 == 13089) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11876);
				tv0->ClearReplies();
				tv0->AddReply(11877, 13091, 13090);
				return;
			}
			if (a0 == 13091) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11878);
				tv0->ClearReplies();
				if (f_18c2_a1_b(tv1)) {
					tv0->AddReply(11879, 13093, 13092);
				}
				tv0->AddReply(11888, 13093, 13101);
				return;
			}
			if (a0 == 13093) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11880);
				tv0->ClearReplies();
				tv0->AddReply(11881, 13095, 13094);
				return;
			}
			if (a0 == 13095) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11882);
				tv0->ClearReplies();
				tv0->AddReply(11883, 13097, 13096);
				tv0->AddReply(11889, 13103, 13102);
				return;
			}
			if (a0 == 13103) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11890);
				tv0->ClearReplies();
				tv0->AddReply(11891, 13097, 13104);
				return;
			}
			if (a0 == 13097) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11884);
				tv0->ClearReplies();
				tv0->AddReply(11885, 13099, 13098);
				return;
			}
			if (a0 == 13099) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11886);
				tv0->ClearReplies();
				tv0->AddReply(11887, 13110, 13100);
				tv0->AddReply(11892, 13108, 13107);
				return;
			}
			if (a0 == 13108) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11893);
				tv0->ClearReplies();
				tv0->AddReply(11894, 13110, 13109);
				return;
			}
			if (a0 == 13110) {
				f_1371_a1_v("Neutral");
				tv0->SetMessage(11895);
				tv0->ClearReplies();
				tv0->AddReply(11896, -1, 13112);
				return;
			}
			tv3 = true;
			if (f_160d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_153f_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1546_a1_b(object a0)
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

bool f_1552_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1557_a1_b(object a0)
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
	L5 = L3 * 70 + f_15ac_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_158f_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1593_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_15a5_a0_v(void)
{
	if (f_160d_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_15ac_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_15b6_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_15bb_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_15c6_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

void f_15d3_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_15c6_a3_v(a0, L0, a2);
}

bool f_15e0_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_15ec_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_15f1_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_15fa_a1_b(int a0)
{
	return f_15f1_a0_i() == a0;
}

bool f_1600_a0_b(void)
{
	bool L0;
	f_1593_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_1609_a0_i(void)
{
	return 2856;
}

string f_160b_a0_s(void)
{
	return "ui/NPC_Anna.png";
}

bool f_160d_a0_b(void)
{
	return true;
}

void f_160f_a2_v(object a0, object a1)
{
	@SetVariable("KnowKapella", 1);
}

void f_1615_a2_v(object a0, object a1)
{
	@Trace("money100 is given");
	f_153f_a3_v(a0, "money", 100);
}

void f_1620_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1626_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_162c_a2_v(object a0, object a1)
{
	@SetVariable("KnowShabnak", 1);
}

void f_1632_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna7", 1);
}

void f_1638_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna8", 1);
}

void f_163e_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna9", 1);
}

void f_1644_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna10", 1);
}

void f_164a_a2_v(object a0, object a1)
{
	@SetVariable("ood2Anna1", 1);
}

void f_1650_a2_v(object a0, object a1)
{
	@SetVariable("ood2Anna2", 1);
}

void f_1656_a2_v(object a0, object a1)
{
	@SetVariable("KnowPochka", 1);
}

void f_165c_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 2);
	L0 = f_1a9c_a0_o();
	L0->AddMark("d2q01AnnaGotoKapella", "pt_map_kapella", 1, 11388, f_15ec_a0_f());
	f_1aef_a0_v();
}

void f_1673_a2_v(object a0, object a1)
{
	@SetVariable("KnowZemlja", 1);
}

void f_1679_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1a9c_a0_o();
	L0->AddMark("d1q02AnnaGotoLaska", "pt_map_laska", 0, 8635, f_15ec_a0_f());
}

void f_1689_a2_v(object a0, object a1)
{
	f_1aad_a3_v(f_1a9c_a0_o(), "pt_map_laska", 2);
	a1->ShowMap(f_1a9c_a0_o());
}

void f_1699_a2_v(object a0, object a1)
{
	@SetVariable("d1q02", 2);
	f_1adf_a0_v();
}

void f_16a2_a2_v(object a0, object a1)
{
	@SetVariable("KnowNevod", 1);
}

void f_16a8_a2_v(object a0, object a1)
{
	f_1aad_a3_v(f_1a9c_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_1a9c_a0_o());
}

void f_16b8_a2_v(object a0, object a1)
{
	@SetVariable("ood3Anna1", 1);
}

void f_16be_a2_v(object a0, object a1)
{
	@SetVariable("d3q02", 6);
}

void f_16c4_a2_v(object a0, object a1)
{
	f_1aad_a3_v(f_1a9c_a0_o(), "pt_map_kapella", 2);
	a1->ShowMap(f_1a9c_a0_o());
}

void f_16d4_a2_v(object a0, object a1)
{
	@SetVariable("ood4Anna1", 1);
}

void f_16da_a2_v(object a0, object a1)
{
	@SetVariable("d4q02AnnaGivesMedcine", 1);
}

void f_16e0_a2_v(object a0, object a1)
{
	if (f_15b6_a1_i("d4q02AnnaGivesMedcine") == 1 && f_15b6_a1_i("d4q02JuliaGivesMedcine") == 1 && f_15b6_a1_i("d4q02LaraGivesMedcine") == 1) {
		object L0;
		@SetVariable("d4q02", 2);
		L0 = f_1a9c_a0_o();
		L0->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 11842, f_15ec_a0_f());
		f_15e0_a2_b("quest_d4_02", "birdmask");
		f_1aad_a3_v(f_1a9c_a0_o(), "pt_d4q02_birdmask", 2);
		a1->ShowMap(f_1a9c_a0_o());
	}
}

void f_1724_a2_v(object a0, object a1)
{
	@SetVariable("ood4Anna2", 1);
}

void f_172a_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q02", 1);
	L0 = f_1a9c_a0_o();
	L0->AddMark("d5q02AnnaGotoGorbun", "pt_map_gorbun", 0, 15360, f_15ec_a0_f());
	L0->AddMark("d5q02AnnaGotoGorbunSelf", "pt_map_anna", 0, 15361, f_15ec_a0_f());
	f_1aff_a0_v();
	f_1b0f_a0_v();
	f_15bb_a1_o("quest_d5_02");
	f_15e0_a2_b("quest_d5_02", "place_gorbun");
}

void f_1756_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q02", 3);
	L0 = f_1a9c_a0_o();
	L0->AddMark("d5q02AnnaGotoKabak", "pt_map_andrei", 0, 15363, f_15ec_a0_f());
	f_1b1f_a0_v();
}

void f_176d_a2_v(object a0, object a1)
{
	@SetVariable("KnowMistresses", 1);
}

void f_1773_a2_v(object a0, object a1)
{
	@SetVariable("KnowNina", 1);
}

void f_1779_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktoria", 1);
}

void f_177f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna1", 1);
}

void f_1785_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna2", 1);
}

void f_178b_a2_v(object a0, object a1)
{
	if (f_15b6_a1_i("d5q01") < 7 && f_15b6_a1_i("d5q01") != -1) {
		f_15e0_a2_b("quest_d5_02", "place_girl");
	}
}

void f_17a4_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna3", 1);
}

void f_17aa_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna4", 1);
}

void f_17b0_a2_v(object a0, object a1)
{
	@SetVariable("ood6Anna1", 1);
}

void f_17b6_a2_v(object a0, object a1)
{
	@SetVariable("ood6Anna2", 1);
}

void f_17bc_a2_v(object a0, object a1)
{
	if (f_15b6_a1_i("d6q01KnowKillerIsKlara") == 0) {
		object L0;
		@SetVariable("d6q01KnowKillerIsKlara", 1);
		L0 = f_1a9c_a0_o();
		L0->AddMark("d6q01KillerIsKlara", "pt_map_alexandr", 1, 15396, f_15ec_a0_f());
		f_1b3f_a0_v();
		f_15e0_a2_b("quest_d6_01", "saburov_klara");
	}
}

void f_17df_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna5", 1);
}

void f_17e5_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna6", 1);
}

void f_17eb_a2_v(object a0, object a1)
{
	@SetVariable("KnowAnna", 1);
}

void f_17f1_a2_v(object a0, object a1)
{
	f_1b2f_a0_v();
	@Trace("anna blood is given");
	f_15d3_a3_v(a0, "d6q01_anna_blood", 1);
}

void f_17ff_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1805_a2_v(object a0, object a1)
{
	@SetVariable("ood6Anna3", 1);
}

void f_180b_a2_v(object a0, object a1)
{
	@SetVariable("KnowLaska", 1);
}

void f_1811_a2_v(object a0, object a1)
{
	@SetVariable("KnowMishka", 1);
}

void f_1817_a2_v(object a0, object a1)
{
	@SetVariable("ood3Anna2", 1);
}

void f_181d_a2_v(object a0, object a1)
{
	@SetVariable("ood3Anna3", 1);
}

void f_1823_a2_v(object a0, object a1)
{
	@Trace("beta_pills is given");
	f_15d3_a3_v(a0, "beta_pills", 1);
}

void f_182e_a2_v(object a0, object a1)
{
	@Trace("gamma_pills is given");
	f_15d3_a3_v(a0, "gamma_pills", 1);
}

void f_1839_a2_v(object a0, object a1)
{
	@Trace("delta_pills is given");
	f_15d3_a3_v(a0, "delta_pills", 1);
}

void f_1844_a2_v(object a0, object a1)
{
	@SetVariable("ood5Anna1", 1);
}

bool f_184a_a1_b(object a0)
{
	if (f_15b6_a1_i("d1q02") == 1000) {
		return true;
	}
	return false;
}

bool f_1856_a1_b(object a0)
{
	if (f_15b6_a1_i("d1q02") == 1) {
		return true;
	}
	return false;
}

bool f_1862_a1_b(object a0)
{
	if (f_15b6_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_186e_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna7") == 0) {
		return true;
	}
	return false;
}

bool f_187a_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna8") == 0) {
		return true;
	}
	return false;
}

bool f_1886_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna9") == 0) {
		return true;
	}
	return false;
}

bool f_1892_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna10") == 0) {
		return true;
	}
	return false;
}

bool f_189e_a1_b(object a0)
{
	if (f_15b6_a1_i("ood2Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_18aa_a1_b(object a0)
{
	if (f_15b6_a1_i("ood2Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_18b6_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowSgustok") == 1) {
		return true;
	}
	return false;
}

bool f_18c2_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowDiamAce") == 1) {
		return true;
	}
	return false;
}

bool f_18ce_a1_b(object a0)
{
	if (f_15b6_a1_i("d2q01") == 1) {
		return true;
	}
	return false;
}

bool f_18da_a1_b(object a0)
{
	if (f_15b6_a1_i("d1q02") == 2) {
		return true;
	}
	return false;
}

bool f_18e6_a1_b(object a0)
{
	if (f_15b6_a1_i("ood3Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_18f2_a1_b(object a0)
{
	if (f_15b6_a1_i("d3q02") == 5) {
		return true;
	}
	return false;
}

bool f_18fe_a1_b(object a0)
{
	if (f_15b6_a1_i("ood4Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_190a_a1_b(object a0)
{
	if (f_15b6_a1_i("d4q02") == 1) {
		return true;
	}
	return false;
}

bool f_1916_a1_b(object a0)
{
	if (f_15b6_a1_i("d4q02AnnaGivesMedcine") == 1) {
		return true;
	}
	return false;
}

bool f_1922_a1_b(object a0)
{
	if (f_15b6_a1_i("d4q02") == 1000) {
		return true;
	}
	return false;
}

bool f_192e_a1_b(object a0)
{
	if (f_15b6_a1_i("ood4Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_193a_a1_b(object a0)
{
	if (f_15b6_a1_i("d5q02") == 0) {
		return true;
	}
	return false;
}

bool f_1946_a1_b(object a0)
{
	if (f_15b6_a1_i("d5q02") == 2) {
		return true;
	}
	return false;
}

bool f_1952_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowMistresses") == 1) {
		return true;
	}
	return false;
}

bool f_195e_a1_b(object a0)
{
	if (f_15b6_a1_i("d5q02KnowNudeIsDead") == 1) {
		return true;
	}
	return false;
}

bool f_196a_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_1976_a1_b(object a0)
{
	if (f_15b6_a1_i("d6q01") == 0) {
		return true;
	}
	return false;
}

bool f_1982_a1_b(object a0)
{
	if (f_15b6_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_198e_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna3") == 0) {
		return true;
	}
	return false;
}

bool f_199a_a1_b(object a0)
{
	if (f_15b6_a1_i("ood6Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_19a6_a1_b(object a0)
{
	if (f_15b6_a1_i("ood6Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_19b2_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna4") == 0) {
		return true;
	}
	return false;
}

bool f_19be_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna5") == 0) {
		return true;
	}
	return false;
}

bool f_19ca_a1_b(object a0)
{
	if (f_15b6_a1_i("ood1Anna6") == 0) {
		return true;
	}
	return false;
}

bool f_19d6_a1_b(object a0)
{
	if (f_15b6_a1_i("microscope_d6q01_anna_blood") != 0) {
		return true;
	}
	return false;
}

bool f_19e2_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowAlexandr") == 1) {
		return true;
	}
	return false;
}

bool f_19ee_a1_b(object a0)
{
	if (f_15b6_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_19fa_a1_b(object a0)
{
	if (f_15b6_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_1a06_a1_b(object a0)
{
	if (f_15b6_a1_i("ood6Anna3") == 0) {
		return true;
	}
	return false;
}

bool f_1a12_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowJulia") == 1) {
		return true;
	}
	return false;
}

bool f_1a1e_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowLaska") == 1) {
		return true;
	}
	return false;
}

bool f_1a2a_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowMishka") == 1) {
		return true;
	}
	return false;
}

bool f_1a36_a1_b(object a0)
{
	if (f_15b6_a1_i("ood3Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_1a42_a1_b(object a0)
{
	if (f_15b6_a1_i("ood3Anna3") == 0) {
		return true;
	}
	return false;
}

bool f_1a4e_a1_b(object a0)
{
	if (f_15b6_a1_i("ood5Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_1a5a_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowOspina") == 1) {
		return true;
	}
	return false;
}

bool f_1a66_a1_b(object a0)
{
	if (f_15b6_a1_i("KnowStamatins") == 1) {
		return true;
	}
	return false;
}

object f_1a72_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1a7f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1a72_a0_o();
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

object f_1a9c_a0_o(void)
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

void f_1aad_a3_v(object a0, string a1, float a2)
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

int f_1ace_a0_i(void)
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

void f_1adf_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 35, 2, 12117);
	f_1a7f_a2_b(L0, 7);
}

void f_1aef_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 51, 1, 12133);
	f_1a7f_a2_b(L0, 10);
}

void f_1aff_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 148, 2, 15354);
	f_1a7f_a2_b(L0, -1);
}

void f_1b0f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 149, 2, 15355);
	f_1a7f_a2_b(L0, 148);
}

void f_1b1f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 151, 2, 15357);
	f_1a7f_a2_b(L0, 148);
}

void f_1b2f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 159, 1, 15392);
	f_1a7f_a2_b(L0, 111);
}

void f_1b3f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 116, 1, 13739);
	f_1a7f_a2_b(L0, 111);
}

void f_1b4f_a0_v(void)
{
	g1 = false;
}

void f_1b53_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_15fa_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_15fa_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_15fa_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_15fa_a1_b(4)) {
		t12{a0};
		return;
	}
	if (f_15fa_a1_b(5)) {
		t14{a0};
		return;
	}
	if (f_15fa_a1_b(6)) {
		t4{a0};
		return;
	}
	f_1600_a0_b();
}

