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
		f_22a1_a0_v();
		if (!f_1b94_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1bd5_a1_v("Neutral");
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
		f_22a5_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1b88_a1_b(a0);
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
		if (!f_1b99_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1c3c_a0_i());
		L0->SetPhoto(f_1c3e_a0_s());
		L0->SetPlayerName(f_21e0_a0_i());
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
		f_1bd1_a1_v(a0);
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
			f_1e2b_a2_v(tv1, tv0);
			f_1c80_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(416);
			tv0->ClearReplies();
			tv0->AddReply(417, 487, 485);
			tv0->AddReply(418, 9271, 486);
			break;
			return;
		}
		if (f_1c40_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1bd5_a1_v(tv2);
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

	void f_b4_a1_v(string a0)
	{
		if (!f_1c40_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1bd5_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1be7_a0_v();
			if (a0 == 484) {
				f_1e2b_a2_v(tv1, tv0);
				f_1c80_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(416);
				tv0->ClearReplies();
				tv0->AddReply(417, 487, 485);
				tv0->AddReply(418, 9271, 486);
				return;
			}
			if (a0 == 487) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(419);
				tv0->ClearReplies();
				tv0->AddReply(420, 9271, 488);
				tv0->AddReply(421, 9271, 489);
				tv0->AddReply(422, 9271, 490);
				return;
			}
			if (a0 == 9271) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(8445);
				tv0->ClearReplies();
				tv0->AddReply(8446, -1, 9275);
				tv0->AddReply(8447, -1, 9276);
				return;
			}
			tv3 = true;
			if (f_1c40_a0_b()) {
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
		if (!f_1b99_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1c3c_a0_i());
		L0->SetPhoto(f_1c3e_a0_s());
		L0->SetPlayerName(f_21e0_a0_i());
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
		f_1bd1_a1_v(a0);
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
			if (f_215d_a1_b(tv1) && f_1eba_a1_b(tv1)) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5694);
				tv0->ClearReplies();
				tv0->AddReply(5695, 6518, 6277);
				tv0->AddReply(5698, -1, 6280);
				tv0->AddReply(5930, 6526, 6525);
				break;
			}
			f_2b5_a1_v("Neutral");
			tv0->SetMessage(5699);
			tv0->ClearReplies();
			if (f_1ea2_a1_b(tv1) && f_1ec6_a1_b(tv1) && !f_1ed2_a1_b(tv1)) {
				tv0->AddReply(5697, 6705, 6279);
			}
			if (f_1eba_a1_b(tv1) && !f_215d_a1_b(tv1)) {
				tv0->AddReply(5700, 16487, 6282);
			}
			if (f_2175_a1_b(tv1) && f_1eae_a1_b(tv1)) {
				tv0->AddReply(8220, 6283, 9043);
			}
			if (f_2139_a1_b(tv1) && f_2169_a1_b(tv1)) {
				tv0->AddReply(8223, 6294, 9046);
			}
			if (f_20a9_a1_b(tv1) && f_20b5_a1_b(tv1)) {
				tv0->AddReply(8226, 9070, 9049);
			}
			if (f_2121_a1_b(tv1) && f_20c1_a1_b(tv1)) {
				tv0->AddReply(8229, 9071, 9052);
			}
			if (f_209d_a1_b(tv1) && f_20cd_a1_b(tv1)) {
				tv0->AddReply(8231, 9072, 9054);
			}
			if (f_2085_a1_b(tv1) && f_20d9_a1_b(tv1)) {
				tv0->AddReply(8234, 9073, 9057);
			}
			if (f_1f30_a1_b(tv1) && f_20e5_a1_b(tv1)) {
				tv0->AddReply(8235, 9074, 9058);
			}
			if (f_2091_a1_b(tv1) && f_20f1_a1_b(tv1)) {
				tv0->AddReply(8238, 9075, 9061);
			}
			if (f_212d_a1_b(tv1) && f_20fd_a1_b(tv1)) {
				tv0->AddReply(8241, 9076, 9064);
			}
			if (f_2115_a1_b(tv1) && f_2109_a1_b(tv1)) {
				tv0->AddReply(8246, 9077, 9069);
			}
			tv0->AddReply(6265, -1, 6932);
			break;
			return;
		}
		if (f_1c40_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1bd5_a1_v(tv2);
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

	void f_2b5_a1_v(string a0)
	{
		if (!f_1c40_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1bd5_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1be7_a0_v();
			if (a1 == 6555) {
				f_1e96_a2_v(tv1, tv0);
				f_1c54_a2_v(tv1, tv0);
				f_1cb4_a2_v(tv1, tv0);
			}
			if (a1 == 6567) {
				f_1e96_a2_v(tv1, tv0);
			}
			if (a1 == 6552) {
				f_1e96_a2_v(tv1, tv0);
			}
			if (a1 == 6553) {
				f_1e96_a2_v(tv1, tv0);
			}
			if (a1 == 6523) {
				f_1e90_a2_v(tv1, tv0);
			}
			if (a1 == 6710) {
				f_1c4e_a2_v(tv1, tv0);
				f_1c6f_a2_v(tv1, tv0);
				f_1c7a_a2_v(tv1, tv0);
			}
			if (a1 == 6711) {
				f_1c4e_a2_v(tv1, tv0);
				f_1c7a_a2_v(tv1, tv0);
				f_1c6f_a2_v(tv1, tv0);
			}
			if (a1 == 6712) {
				f_1c4e_a2_v(tv1, tv0);
			}
			if (a1 == 16488) {
				f_1c54_a2_v(tv1, tv0);
				f_1cb4_a2_v(tv1, tv0);
			}
			if (a1 == 9043) {
				f_1c42_a2_v(tv1, tv0);
			}
			if (a1 == 9046) {
				f_1e9c_a2_v(tv1, tv0);
			}
			if (a1 == 9049) {
				f_1e31_a2_v(tv1, tv0);
			}
			if (a1 == 9052) {
				f_1e37_a2_v(tv1, tv0);
			}
			if (a1 == 9054) {
				f_1e3d_a2_v(tv1, tv0);
			}
			if (a1 == 9057) {
				f_1e43_a2_v(tv1, tv0);
			}
			if (a1 == 9058) {
				f_1e49_a2_v(tv1, tv0);
			}
			if (a1 == 9061) {
				f_1e4f_a2_v(tv1, tv0);
			}
			if (a1 == 9064) {
				f_1e55_a2_v(tv1, tv0);
			}
			if (a0 == 6276) {
				if (f_215d_a1_b(tv1) && f_1eba_a1_b(tv1)) {
					f_2b5_a1_v("Neutral");
					tv0->SetMessage(5694);
					tv0->ClearReplies();
					tv0->AddReply(5695, 6518, 6277);
					tv0->AddReply(5698, -1, 6280);
					tv0->AddReply(5930, 6526, 6525);
					return;
				}
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5699);
				tv0->ClearReplies();
				if (f_1ea2_a1_b(tv1) && f_1ec6_a1_b(tv1) && !f_1ed2_a1_b(tv1)) {
					tv0->AddReply(5697, 6705, 6279);
				}
				if (f_1eba_a1_b(tv1) && !f_215d_a1_b(tv1)) {
					tv0->AddReply(5700, 16487, 6282);
				}
				if (f_2175_a1_b(tv1) && f_1eae_a1_b(tv1)) {
					tv0->AddReply(8220, 6283, 9043);
				}
				if (f_2139_a1_b(tv1) && f_2169_a1_b(tv1)) {
					tv0->AddReply(8223, 6294, 9046);
				}
				if (f_20a9_a1_b(tv1) && f_20b5_a1_b(tv1)) {
					tv0->AddReply(8226, 9070, 9049);
				}
				if (f_2121_a1_b(tv1) && f_20c1_a1_b(tv1)) {
					tv0->AddReply(8229, 9071, 9052);
				}
				if (f_209d_a1_b(tv1) && f_20cd_a1_b(tv1)) {
					tv0->AddReply(8231, 9072, 9054);
				}
				if (f_2085_a1_b(tv1) && f_20d9_a1_b(tv1)) {
					tv0->AddReply(8234, 9073, 9057);
				}
				if (f_1f30_a1_b(tv1) && f_20e5_a1_b(tv1)) {
					tv0->AddReply(8235, 9074, 9058);
				}
				if (f_2091_a1_b(tv1) && f_20f1_a1_b(tv1)) {
					tv0->AddReply(8238, 9075, 9061);
				}
				if (f_212d_a1_b(tv1) && f_20fd_a1_b(tv1)) {
					tv0->AddReply(8241, 9076, 9064);
				}
				if (f_2115_a1_b(tv1) && f_2109_a1_b(tv1)) {
					tv0->AddReply(8246, 9077, 9069);
				}
				tv0->AddReply(6265, -1, 6932);
				return;
			}
			if (a0 == 9077) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(8254);
				tv0->ClearReplies();
				tv0->AddReply(15212, -1, 16489);
				return;
			}
			if (a0 == 9076) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(8253);
				tv0->ClearReplies();
				tv0->AddReply(15213, -1, 16490);
				return;
			}
			if (a0 == 9075) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(8252);
				tv0->ClearReplies();
				tv0->AddReply(15214, -1, 16491);
				return;
			}
			if (a0 == 9074) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(8251);
				tv0->ClearReplies();
				tv0->AddReply(15215, -1, 16492);
				return;
			}
			if (a0 == 9073) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(8250);
				tv0->ClearReplies();
				tv0->AddReply(15216, -1, 16493);
				return;
			}
			if (a0 == 9072) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(8249);
				tv0->ClearReplies();
				tv0->AddReply(15217, -1, 16494);
				return;
			}
			if (a0 == 9071) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(8248);
				tv0->ClearReplies();
				tv0->AddReply(15218, -1, 16495);
				return;
			}
			if (a0 == 9070) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(8247);
				tv0->ClearReplies();
				tv0->AddReply(15219, -1, 16496);
				return;
			}
			if (a0 == 6294) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5711);
				tv0->ClearReplies();
				tv0->AddReply(5712, 6296, 6295);
				tv0->AddReply(5717, 6296, 6300);
				tv0->AddReply(5718, -1, 6302);
				return;
			}
			if (a0 == 6296) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5713);
				tv0->ClearReplies();
				tv0->AddReply(5714, 6298, 6297);
				tv0->AddReply(5716, -1, 6299);
				return;
			}
			if (a0 == 6298) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5715);
				tv0->ClearReplies();
				tv0->AddReply(5719, -1, 6303);
				return;
			}
			if (a0 == 6283) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5701);
				tv0->ClearReplies();
				tv0->AddReply(5702, 6285, 6284);
				return;
			}
			if (a0 == 6285) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5703);
				tv0->ClearReplies();
				tv0->AddReply(5704, 6287, 6286);
				tv0->AddReply(5710, 6287, 6292);
				return;
			}
			if (a0 == 6287) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5705);
				tv0->ClearReplies();
				tv0->AddReply(5706, 6289, 6288);
				return;
			}
			if (a0 == 6289) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5707);
				tv0->ClearReplies();
				tv0->AddReply(5708, -1, 6290);
				tv0->AddReply(5709, -1, 6291);
				return;
			}
			if (a0 == 16487) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(15210);
				tv0->ClearReplies();
				tv0->AddReply(15211, -1, 16488);
				return;
			}
			if (a0 == 6705) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(6076);
				tv0->ClearReplies();
				tv0->AddReply(6077, 6708, 6706);
				tv0->AddReply(6078, 6708, 6707);
				return;
			}
			if (a0 == 6708) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(6079);
				tv0->ClearReplies();
				tv0->AddReply(6080, -1, 6710);
				tv0->AddReply(6081, -1, 6711);
				tv0->AddReply(6082, -1, 6712);
				return;
			}
			if (a0 == 6526) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5931);
				tv0->ClearReplies();
				tv0->AddReply(5932, 6518, 6527);
				tv0->AddReply(5933, -1, 6528);
				return;
			}
			if (a0 == 6518) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5923);
				tv0->ClearReplies();
				if (f_2145_a1_b(tv1)) {
					tv0->AddReply(5924, 6530, 6519);
				}
				tv0->AddReply(5925, 6522, 6520);
				tv0->AddReply(5926, 6522, 6521);
				return;
			}
			if (a0 == 6522) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5927);
				tv0->ClearReplies();
				tv0->AddReply(5929, 6530, 6524);
				if (!f_2151_a1_b(tv1)) {
					tv0->AddReply(5928, 6934, 6523);
				}
				return;
			}
			if (a0 == 6934) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(6266);
				tv0->ClearReplies();
				tv0->AddReply(6267, 6530, 6935);
				return;
			}
			if (a0 == 6530) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5934);
				tv0->ClearReplies();
				tv0->AddReply(5937, 6535, 6534);
				tv0->AddReply(5935, 6533, 6532);
				return;
			}
			if (a0 == 6533) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5936);
				tv0->ClearReplies();
				tv0->AddReply(5939, 6535, 6536);
				return;
			}
			if (a0 == 6535) {
				f_1c48_a2_v(tv1, tv0);
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5938);
				tv0->ClearReplies();
				tv0->AddReply(5940, 6539, 6538);
				tv0->AddReply(5965, 6569, 6568);
				return;
			}
			if (a0 == 6569) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5966);
				tv0->ClearReplies();
				tv0->AddReply(5967, 6539, 6570);
				return;
			}
			if (a0 == 6539) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5941);
				tv0->ClearReplies();
				tv0->AddReply(5945, 6544, 6543);
				tv0->AddReply(5942, 6541, 6540);
				return;
			}
			if (a0 == 6541) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5943);
				tv0->ClearReplies();
				tv0->AddReply(5944, 6544, 6542);
				tv0->AddReply(5957, 6557, 6556);
				return;
			}
			if (a0 == 6557) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5958);
				tv0->ClearReplies();
				tv0->AddReply(5959, 6544, 6558);
				tv0->AddReply(5960, 6544, 6559);
				return;
			}
			if (a0 == 6544) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5946);
				tv0->ClearReplies();
				tv0->AddReply(5947, 6546, 6545);
				tv0->AddReply(5949, 6562, 6548);
				return;
			}
			if (a0 == 6562) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5961);
				tv0->ClearReplies();
				tv0->AddReply(5962, 6546, 6563);
				tv0->AddReply(5963, 6554, 6564);
				return;
			}
			if (a0 == 6546) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5948);
				tv0->ClearReplies();
				tv0->AddReply(5950, 6554, 6549);
				tv0->AddReply(5951, 6551, 6550);
				return;
			}
			if (a0 == 6551) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5952);
				tv0->ClearReplies();
				tv0->AddReply(5969, 6554, 6573);
				tv0->AddReply(5953, -1, 6552);
				tv0->AddReply(5954, -1, 6553);
				return;
			}
			if (a0 == 6554) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(5955);
				tv0->ClearReplies();
				tv0->AddReply(5956, -1, 6555);
				tv0->AddReply(5964, -1, 6567);
				return;
			}
			tv3 = true;
			if (f_1c40_a0_b()) {
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
		if (!f_1b99_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1c3c_a0_i());
		L0->SetPhoto(f_1c3e_a0_s());
		L0->SetPlayerName(f_21e0_a0_i());
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
		f_1bd1_a1_v(a0);
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
			if (f_1ef4_a1_b(tv1) && !f_1ee8_a1_b(tv1)) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(6935);
				tv0->ClearReplies();
				tv0->AddReply(7509, 8291, 8290);
				tv0->AddReply(7518, 8300, 8299);
				break;
			}
			f_876_a1_v("Neutral");
			tv0->SetMessage(6929);
			tv0->ClearReplies();
			if (f_1f00_a1_b(tv1) && f_1ee8_a1_b(tv1)) {
				tv0->AddReply(6930, 7637, 7636);
			}
			if (f_1f0c_a1_b(tv1)) {
				tv0->AddReply(6938, 7645, 7644);
			}
			if (f_1f18_a1_b(tv1)) {
				tv0->AddReply(6940, 7647, 7646);
			}
			if (f_1f24_a1_b(tv1)) {
				tv0->AddReply(7776, 8568, 8577);
			}
			tv0->AddReply(7746, -1, 8547);
			break;
			f_876_a1_v("Neutral");
			tv0->SetMessage(9500);
			tv0->ClearReplies();
			tv0->AddReply(9501, 10445, 10444);
			tv0->AddReply(9514, 10458, 10457);
			break;
			return;
		}
		if (f_1c40_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1bd5_a1_v(tv2);
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

	void f_876_a1_v(string a0)
	{
		if (!f_1c40_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1bd5_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1be7_a0_v();
			if (a1 == 8567) {
				f_1c86_a2_v(tv1, tv0);
				f_1c9e_a2_v(tv1, tv0);
			}
			if (a1 == 8569) {
				f_1c86_a2_v(tv1, tv0);
				f_1c9e_a2_v(tv1, tv0);
			}
			if (a1 == 8566) {
				f_1c86_a2_v(tv1, tv0);
			}
			if (a1 == 8574) {
				f_1c86_a2_v(tv1, tv0);
				f_1c9e_a2_v(tv1, tv0);
			}
			if (a1 == 8576) {
				f_1c9e_a2_v(tv1, tv0);
				f_1c86_a2_v(tv1, tv0);
			}
			if (a1 == 8572) {
				f_1c9e_a2_v(tv1, tv0);
				f_1c86_a2_v(tv1, tv0);
			}
			if (a1 == 8297) {
				f_1c8c_a2_v(tv1, tv0);
				f_1c6f_a2_v(tv1, tv0);
				f_1c7a_a2_v(tv1, tv0);
			}
			if (a1 == 8298) {
				f_1c8c_a2_v(tv1, tv0);
				f_1c6f_a2_v(tv1, tv0);
				f_1c7a_a2_v(tv1, tv0);
			}
			if (a1 == 8553) {
				f_1c8c_a2_v(tv1, tv0);
				f_1c6f_a2_v(tv1, tv0);
				f_1c7a_a2_v(tv1, tv0);
			}
			if (a1 == 8549) {
				f_1c92_a2_v(tv1, tv0);
			}
			if (a1 == 8552) {
				f_1c92_a2_v(tv1, tv0);
			}
			if (a1 == 8560) {
				f_1c98_a2_v(tv1, tv0);
			}
			if (a0 == 7641) {
				if (f_1ef4_a1_b(tv1) && !f_1ee8_a1_b(tv1)) {
					f_876_a1_v("Neutral");
					tv0->SetMessage(6935);
					tv0->ClearReplies();
					tv0->AddReply(7509, 8291, 8290);
					tv0->AddReply(7518, 8300, 8299);
					return;
				}
				f_876_a1_v("Neutral");
				tv0->SetMessage(6929);
				tv0->ClearReplies();
				if (f_1f00_a1_b(tv1) && f_1ee8_a1_b(tv1)) {
					tv0->AddReply(6930, 7637, 7636);
				}
				if (f_1f0c_a1_b(tv1)) {
					tv0->AddReply(6938, 7645, 7644);
				}
				if (f_1f18_a1_b(tv1)) {
					tv0->AddReply(6940, 7647, 7646);
				}
				if (f_1f24_a1_b(tv1)) {
					tv0->AddReply(7776, 8568, 8577);
				}
				tv0->AddReply(7746, -1, 8547);
				return;
				f_876_a1_v("Neutral");
				tv0->SetMessage(9500);
				tv0->ClearReplies();
				tv0->AddReply(9501, 10445, 10444);
				tv0->AddReply(9514, 10458, 10457);
				return;
			}
			if (a0 == 10458) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(9515);
				tv0->ClearReplies();
				tv0->AddReply(9516, -1, 10459);
				return;
			}
			if (a0 == 10445) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(9502);
				tv0->ClearReplies();
				tv0->AddReply(9503, 10447, 10446);
				tv0->AddReply(9510, -1, 10453);
				tv0->AddReply(9511, 10455, 10454);
				return;
			}
			if (a0 == 10455) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(9512);
				tv0->ClearReplies();
				tv0->AddReply(9513, -1, 10456);
				return;
			}
			if (a0 == 10447) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(9504);
				tv0->ClearReplies();
				tv0->AddReply(9505, 10449, 10448);
				tv0->AddReply(9509, -1, 10452);
				return;
			}
			if (a0 == 10449) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(9506);
				tv0->ClearReplies();
				tv0->AddReply(9507, -1, 10450);
				tv0->AddReply(9508, -1, 10451);
				return;
			}
			if (a0 == 7647) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(6941);
				tv0->ClearReplies();
				tv0->AddReply(7755, 8557, 8556);
				return;
			}
			if (a0 == 8557) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7756);
				tv0->ClearReplies();
				tv0->AddReply(7757, 8559, 8558);
				return;
			}
			if (a0 == 8559) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7758);
				tv0->ClearReplies();
				tv0->AddReply(7759, -1, 8560);
				return;
			}
			if (a0 == 7645) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(6939);
				tv0->ClearReplies();
				tv0->AddReply(7748, -1, 8549);
				tv0->AddReply(7749, 8551, 8550);
				return;
			}
			if (a0 == 8551) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7750);
				tv0->ClearReplies();
				tv0->AddReply(7751, -1, 8552);
				return;
			}
			if (a0 == 7637) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(6931);
				tv0->ClearReplies();
				tv0->AddReply(6932, 7639, 7638);
				tv0->AddReply(7752, -1, 8553);
				return;
			}
			if (a0 == 7639) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(6933);
				tv0->ClearReplies();
				tv0->AddReply(7753, 8555, 8554);
				return;
			}
			if (a0 == 8555) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7754);
				tv0->ClearReplies();
				tv0->AddReply(6934, 8296, 7640);
				return;
			}
			if (a0 == 8296) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7515);
				tv0->ClearReplies();
				tv0->AddReply(7516, -1, 8297);
				tv0->AddReply(7517, -1, 8298);
				return;
			}
			if (a0 == 8300) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7519);
				tv0->ClearReplies();
				tv0->AddReply(7520, 8295, 8301);
				return;
			}
			if (a0 == 8291) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7510);
				tv0->ClearReplies();
				tv0->AddReply(7511, 8293, 8292);
				return;
			}
			if (a0 == 8293) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7512);
				tv0->ClearReplies();
				tv0->AddReply(7513, 8295, 8294);
				return;
			}
			if (a0 == 8295) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7514);
				tv0->ClearReplies();
				tv0->AddReply(7760, 8562, 8561);
				return;
			}
			if (a0 == 8562) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7761);
				tv0->ClearReplies();
				tv0->AddReply(7762, 8565, 8563);
				tv0->AddReply(7763, 8568, 8564);
				return;
			}
			if (a0 == 8568) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7767);
				tv0->ClearReplies();
				tv0->AddReply(7769, 8571, 8570);
				tv0->AddReply(7772, 8575, 8573);
				if (f_1ef4_a1_b(tv1)) {
					tv0->AddReply(7771, -1, 8572);
				}
				return;
			}
			if (a0 == 8575) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7774);
				tv0->ClearReplies();
				if (f_1ef4_a1_b(tv1)) {
					tv0->AddReply(7775, -1, 8576);
				}
				return;
			}
			if (a0 == 8571) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7770);
				tv0->ClearReplies();
				tv0->AddReply(7773, -1, 8574);
				return;
			}
			if (a0 == 8565) {
				f_876_a1_v("Neutral");
				tv0->SetMessage(7764);
				tv0->ClearReplies();
				tv0->AddReply(7766, -1, 8567);
				tv0->AddReply(7768, -1, 8569);
				tv0->AddReply(7765, -1, 8566);
				return;
			}
			tv3 = true;
			if (f_1c40_a0_b()) {
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
		if (!f_1b99_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1c3c_a0_i());
		L0->SetPhoto(f_1c3e_a0_s());
		L0->SetPlayerName(f_21e0_a0_i());
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
		f_1bd1_a1_v(a0);
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
			f_c1a_a1_v("Neutral");
			tv0->SetMessage(10212);
			tv0->ClearReplies();
			if (f_1f3c_a1_b(tv1) && f_1f48_a1_b(tv1)) {
				tv0->AddReply(10213, 11260, 11259);
			}
			tv0->AddReply(10302, 11359, 11358);
			tv0->AddReply(10334, 11395, 11394);
			break;
			return;
		}
		if (f_1c40_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1bd5_a1_v(tv2);
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

	void f_c1a_a1_v(string a0)
	{
		if (!f_1c40_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1bd5_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1be7_a0_v();
			if (a1 == 11379) {
				f_1cd4_a2_v(tv1, tv0);
				f_1cd6_a2_v(tv1, tv0);
				f_1cc4_a2_v(tv1, tv0);
			}
			if (a1 == 11380) {
				f_1cd4_a2_v(tv1, tv0);
				f_1cd6_a2_v(tv1, tv0);
				f_1cc4_a2_v(tv1, tv0);
			}
			if (a1 == 11383) {
				f_1cd6_a2_v(tv1, tv0);
				f_1cc4_a2_v(tv1, tv0);
				f_1cd4_a2_v(tv1, tv0);
			}
			if (a0 == 11258) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10212);
				tv0->ClearReplies();
				if (f_1f3c_a1_b(tv1) && f_1f48_a1_b(tv1)) {
					tv0->AddReply(10213, 11260, 11259);
				}
				tv0->AddReply(10302, 11359, 11358);
				tv0->AddReply(10334, 11395, 11394);
				return;
			}
			if (a0 == 11395) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10335);
				tv0->ClearReplies();
				tv0->AddReply(10336, 11399, 11396);
				tv0->AddReply(10337, 11398, 11397);
				return;
			}
			if (a0 == 11398) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10338);
				tv0->ClearReplies();
				tv0->AddReply(10341, 11402, 11401);
				return;
			}
			if (a0 == 11399) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10339);
				tv0->ClearReplies();
				tv0->AddReply(10340, 11402, 11400);
				return;
			}
			if (a0 == 11402) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10342);
				tv0->ClearReplies();
				tv0->AddReply(10343, -1, 11404);
				tv0->AddReply(10344, 11406, 11405);
				return;
			}
			if (a0 == 11406) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10345);
				tv0->ClearReplies();
				tv0->AddReply(10346, -1, 11407);
				return;
			}
			if (a0 == 11359) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10303);
				tv0->ClearReplies();
				tv0->AddReply(10304, 11039, 11360);
				return;
			}
			if (a0 == 11039) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10017);
				tv0->ClearReplies();
				tv0->AddReply(10018, 11041, 11040);
				tv0->AddReply(10028, -1, 11050);
				return;
			}
			if (a0 == 11041) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10019);
				tv0->ClearReplies();
				tv0->AddReply(10020, 11043, 11042);
				tv0->AddReply(10027, -1, 11049);
				return;
			}
			if (a0 == 11043) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10021);
				tv0->ClearReplies();
				tv0->AddReply(10022, 11045, 11044);
				tv0->AddReply(10026, -1, 11048);
				return;
			}
			if (a0 == 11045) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10023);
				tv0->ClearReplies();
				tv0->AddReply(10024, -1, 11046);
				tv0->AddReply(10025, -1, 11047);
				return;
			}
			if (a0 == 11260) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10214);
				tv0->ClearReplies();
				tv0->AddReply(10305, 11364, 11361);
				tv0->AddReply(10306, 11363, 11362);
				return;
			}
			if (a0 == 11363) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10307);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 11364) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10308);
				tv0->ClearReplies();
				tv0->AddReply(10309, 11370, 11365);
				tv0->AddReply(10311, 11366, 11367);
				return;
			}
			if (a0 == 11366) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10310);
				tv0->ClearReplies();
				tv0->AddReply(10312, 11371, 11369);
				return;
			}
			if (a0 == 11370) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10313);
				tv0->ClearReplies();
				tv0->AddReply(10315, 11371, 11372);
				tv0->AddReply(10316, -1, 11373);
				return;
			}
			if (a0 == 11371) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10314);
				tv0->ClearReplies();
				tv0->AddReply(10317, 11376, 11375);
				tv0->AddReply(10323, 11376, 11381);
				return;
			}
			if (a0 == 11376) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10318);
				tv0->ClearReplies();
				tv0->AddReply(10319, 11378, 11377);
				tv0->AddReply(10324, -1, 11383);
				return;
			}
			if (a0 == 11378) {
				f_c1a_a1_v("Neutral");
				tv0->SetMessage(10320);
				tv0->ClearReplies();
				tv0->AddReply(10321, -1, 11379);
				tv0->AddReply(10322, -1, 11380);
				return;
			}
			tv3 = true;
			if (f_1c40_a0_b()) {
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
		if (!f_1b99_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1c3c_a0_i());
		L0->SetPhoto(f_1c3e_a0_s());
		L0->SetPlayerName(f_21e0_a0_i());
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
		f_1bd1_a1_v(a0);
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
			if (f_1f65_a1_b(tv1) && !f_1f4d_a1_b(tv1)) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11395);
				tv0->ClearReplies();
				tv0->AddReply(11396, 12594, 12593);
				break;
			}
			f_eda_a1_v("Neutral");
			tv0->SetMessage(10814);
			tv0->ClearReplies();
			if (f_1f59_a1_b(tv1) && f_1f4d_a1_b(tv1)) {
				tv0->AddReply(10815, 11956, 11955);
			}
			if (f_1ede_a1_b(tv1)) {
				tv0->AddReply(11403, 12601, 12600);
			}
			if (f_1f7d_a1_b(tv1) && f_1f71_a1_b(tv1)) {
				tv0->AddReply(11862, 13076, 13075);
			}
			tv0->AddReply(11408, -1, 12605);
			break;
			return;
		}
		if (f_1c40_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1bd5_a1_v(tv2);
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

	void f_eda_a1_v(string a0)
	{
		if (!f_1c40_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1bd5_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1be7_a0_v();
			if (a1 == 12610) {
				f_1d27_a2_v(tv1, tv0);
				f_1d2d_a2_v(tv1, tv0);
				f_1ca4_a2_v(tv1, tv0);
			}
			if (a1 == 12613) {
				f_1d27_a2_v(tv1, tv0);
				f_1d2d_a2_v(tv1, tv0);
				f_1ca4_a2_v(tv1, tv0);
			}
			if (a1 == 12243) {
				f_1ced_a2_v(tv1, tv0);
				f_1cf3_a2_v(tv1, tv0);
				f_1d13_a2_v(tv1, tv0);
				f_1cc4_a2_v(tv1, tv0);
			}
			if (a1 == 12244) {
				f_1ced_a2_v(tv1, tv0);
				f_1cf3_a2_v(tv1, tv0);
				f_1d13_a2_v(tv1, tv0);
				f_1cc4_a2_v(tv1, tv0);
			}
			if (a1 == 13077) {
				f_1d62_a2_v(tv1, tv0);
			}
			if (a0 == 12592) {
				if (f_1f65_a1_b(tv1) && !f_1f4d_a1_b(tv1)) {
					f_eda_a1_v("Neutral");
					tv0->SetMessage(11395);
					tv0->ClearReplies();
					tv0->AddReply(11396, 12594, 12593);
					return;
				}
				f_eda_a1_v("Neutral");
				tv0->SetMessage(10814);
				tv0->ClearReplies();
				if (f_1f59_a1_b(tv1) && f_1f4d_a1_b(tv1)) {
					tv0->AddReply(10815, 11956, 11955);
				}
				if (f_1ede_a1_b(tv1)) {
					tv0->AddReply(11403, 12601, 12600);
				}
				if (f_1f7d_a1_b(tv1) && f_1f71_a1_b(tv1)) {
					tv0->AddReply(11862, 13076, 13075);
				}
				tv0->AddReply(11408, -1, 12605);
				return;
			}
			if (a0 == 13076) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11863);
				tv0->ClearReplies();
				tv0->AddReply(11864, -1, 13077);
				return;
			}
			if (a0 == 12601) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11404);
				tv0->ClearReplies();
				tv0->AddReply(11405, 12603, 12602);
				return;
			}
			if (a0 == 12603) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11406);
				tv0->ClearReplies();
				tv0->AddReply(11407, -1, 12604);
				return;
			}
			if (a0 == 11956) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(10816);
				tv0->ClearReplies();
				tv0->AddReply(10817, 11958, 11957);
				tv0->AddReply(11019, 12191, 12190);
				return;
			}
			if (a0 == 12191) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11020);
				tv0->ClearReplies();
				tv0->AddReply(11021, 12193, 12192);
				return;
			}
			if (a0 == 12193) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11022);
				tv0->ClearReplies();
				tv0->AddReply(11023, 12202, 12194);
				tv0->AddReply(11024, 12196, 12195);
				return;
			}
			if (a0 == 12196) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11025);
				tv0->ClearReplies();
				tv0->AddReply(11026, 12198, 12197);
				tv0->AddReply(11028, 12198, 12199);
				return;
			}
			if (a0 == 12198) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11027);
				tv0->ClearReplies();
				tv0->AddReply(11029, 12202, 12201);
				return;
			}
			if (a0 == 12202) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11030);
				tv0->ClearReplies();
				tv0->AddReply(11031, 12205, 12203);
				tv0->AddReply(11032, 12205, 12204);
				return;
			}
			if (a0 == 12205) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11033);
				tv0->ClearReplies();
				tv0->AddReply(11034, 12208, 12207);
				tv0->AddReply(11037, 12211, 12210);
				return;
			}
			if (a0 == 12211) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11038);
				tv0->ClearReplies();
				tv0->AddReply(11039, 12213, 12212);
				tv0->AddReply(11054, 12222, 12231);
				return;
			}
			if (a0 == 12213) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11040);
				tv0->ClearReplies();
				tv0->AddReply(11041, 12215, 12214);
				return;
			}
			if (a0 == 12215) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11042);
				tv0->ClearReplies();
				tv0->AddReply(11043, 12222, 12216);
				return;
			}
			if (a0 == 12208) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11035);
				tv0->ClearReplies();
				tv0->AddReply(11036, 12217, 12209);
				return;
			}
			if (a0 == 12217) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11044);
				tv0->ClearReplies();
				tv0->AddReply(11045, 12222, 12218);
				tv0->AddReply(11046, 12220, 12219);
				return;
			}
			if (a0 == 12220) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11047);
				tv0->ClearReplies();
				tv0->AddReply(11048, 12222, 12221);
				return;
			}
			if (a0 == 11958) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(10818);
				tv0->ClearReplies();
				tv0->AddReply(10819, 12222, 11959);
				tv0->AddReply(10830, 11971, 11970);
				return;
			}
			if (a0 == 11971) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(10831);
				tv0->ClearReplies();
				tv0->AddReply(10832, 12222, 11972);
				tv0->AddReply(10833, 12227, 11974);
				return;
			}
			if (a0 == 12227) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11052);
				tv0->ClearReplies();
				tv0->AddReply(11053, 12198, 12228);
				return;
			}
			if (a0 == 12222) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11049);
				tv0->ClearReplies();
				tv0->AddReply(11050, 12233, 12223);
				tv0->AddReply(11051, 12233, 12224);
				tv0->AddReply(11059, 12240, 12239);
				return;
			}
			if (a0 == 12240) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11060);
				tv0->ClearReplies();
				tv0->AddReply(11061, 12233, 12241);
				return;
			}
			if (a0 == 12233) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11055);
				tv0->ClearReplies();
				tv0->AddReply(11056, 12237, 12235);
				tv0->AddReply(11057, 12237, 12236);
				return;
			}
			if (a0 == 12237) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11058);
				tv0->ClearReplies();
				tv0->AddReply(11062, -1, 12243);
				tv0->AddReply(11063, -1, 12244);
				return;
			}
			if (a0 == 12594) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11397);
				tv0->ClearReplies();
				tv0->AddReply(11398, 12596, 12595);
				return;
			}
			if (a0 == 12596) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11399);
				tv0->ClearReplies();
				tv0->AddReply(11400, 12598, 12597);
				return;
			}
			if (a0 == 12598) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11401);
				tv0->ClearReplies();
				tv0->AddReply(11409, 12607, 12606);
				return;
			}
			if (a0 == 12607) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11410);
				tv0->ClearReplies();
				tv0->AddReply(11411, 12609, 12608);
				return;
			}
			if (a0 == 12609) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11412);
				tv0->ClearReplies();
				tv0->AddReply(11413, -1, 12610);
				tv0->AddReply(11414, 12612, 12611);
				return;
			}
			if (a0 == 12612) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(11415);
				tv0->ClearReplies();
				tv0->AddReply(11416, -1, 12613);
				return;
			}
			tv3 = true;
			if (f_1c40_a0_b()) {
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
		if (!f_1b99_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1c3c_a0_i());
		L0->SetPhoto(f_1c3e_a0_s());
		L0->SetPlayerName(f_21e0_a0_i());
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
		f_1bd1_a1_v(a0);
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
			if (f_2001_a1_b(tv1) && !f_1fc5_a1_b(tv1) && !f_1fd1_a1_b(tv1)) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(11741);
				tv0->ClearReplies();
				tv0->AddReply(11743, 12951, 12949);
				tv0->AddReply(11742, 12950, 12948);
				if (!f_1f89_a1_b(tv1)) {
					tv0->AddReply(12586, 13766, 13753);
				}
				break;
			}
			f_12d9_a1_v("Neutral");
			tv0->SetMessage(12573);
			tv0->ClearReplies();
			if (f_1fdd_a1_b(tv1) && f_1fe9_a1_b(tv1)) {
				tv0->AddReply(12574, 13744, 13743);
			}
			if (f_1fc5_a1_b(tv1) && f_1ff5_a1_b(tv1)) {
				tv0->AddReply(12577, 13747, 13746);
			}
			tv0->AddReply(12580, -1, 13749);
			break;
			return;
		}
		if (f_1c40_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1bd5_a1_v(tv2);
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

	void f_12d9_a1_v(string a0)
	{
		if (!f_1c40_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1bd5_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1be7_a0_v();
			if (a1 == 12969) {
				f_1dd8_a2_v(tv1, tv0);
				f_1e5b_a2_v(tv1, tv0);
			}
			if (a1 == 12970) {
				f_1dd8_a2_v(tv1, tv0);
				f_1e5b_a2_v(tv1, tv0);
			}
			if (a1 == 13745) {
				f_1dca_a2_v(tv1, tv0);
				f_1dbd_a2_v(tv1, tv0);
				f_1c7a_a2_v(tv1, tv0);
			}
			if (a1 == 13748) {
				f_1dd0_a2_v(tv1, tv0);
				f_1dc8_a2_v(tv1, tv0);
				f_1dd6_a2_v(tv1, tv0);
			}
			if (a0 == 12947) {
				if (f_2001_a1_b(tv1) && !f_1fc5_a1_b(tv1) && !f_1fd1_a1_b(tv1)) {
					f_12d9_a1_v("Neutral");
					tv0->SetMessage(11741);
					tv0->ClearReplies();
					tv0->AddReply(11743, 12951, 12949);
					tv0->AddReply(11742, 12950, 12948);
					if (!f_1f89_a1_b(tv1)) {
						tv0->AddReply(12586, 13766, 13753);
					}
					return;
				}
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(12573);
				tv0->ClearReplies();
				if (f_1fdd_a1_b(tv1) && f_1fe9_a1_b(tv1)) {
					tv0->AddReply(12574, 13744, 13743);
				}
				if (f_1fc5_a1_b(tv1) && f_1ff5_a1_b(tv1)) {
					tv0->AddReply(12577, 13747, 13746);
				}
				tv0->AddReply(12580, -1, 13749);
				return;
			}
			if (a0 == 13747) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(12578);
				tv0->ClearReplies();
				tv0->AddReply(12598, 13770, 13769);
				tv0->AddReply(12603, 13772, 13775);
				return;
			}
			if (a0 == 13770) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(12599);
				tv0->ClearReplies();
				tv0->AddReply(12600, 13772, 13771);
				tv0->AddReply(12602, 13772, 13773);
				return;
			}
			if (a0 == 13772) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(12601);
				tv0->ClearReplies();
				tv0->AddReply(12579, -1, 13748);
				return;
			}
			if (a0 == 13744) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(12575);
				tv0->ClearReplies();
				tv0->AddReply(12576, -1, 13745);
				return;
			}
			if (a0 == 13766) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(12596);
				tv0->ClearReplies();
				tv0->AddReply(12597, 12960, 13767);
				return;
			}
			if (a0 == 12950) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(11744);
				tv0->ClearReplies();
				tv0->AddReply(11746, 12954, 12952);
				return;
			}
			if (a0 == 12954) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(11748);
				tv0->ClearReplies();
				tv0->AddReply(11749, 12951, 12955);
				return;
			}
			if (a0 == 12951) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(11745);
				tv0->ClearReplies();
				tv0->AddReply(11747, 12957, 12953);
				return;
			}
			if (a0 == 12957) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(11750);
				tv0->ClearReplies();
				tv0->AddReply(11751, 12960, 12958);
				tv0->AddReply(11752, 12960, 12959);
				return;
			}
			if (a0 == 12960) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(11753);
				tv0->ClearReplies();
				tv0->AddReply(11754, 12964, 12962);
				return;
			}
			if (a0 == 12964) {
				f_12d9_a1_v("Neutral");
				tv0->SetMessage(11756);
				tv0->ClearReplies();
				tv0->AddReply(11761, -1, 12969);
				tv0->AddReply(11762, -1, 12970);
				return;
			}
			tv3 = true;
			if (f_1c40_a0_b()) {
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
		if (!f_1b99_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1c3c_a0_i());
		L0->SetPhoto(f_1c3e_a0_s());
		L0->SetPlayerName(f_21e0_a0_i());
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
		f_1bd1_a1_v(a0);
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
			if (f_1fa1_a1_b(tv1)) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12104);
				tv0->ClearReplies();
				tv0->AddReply(12105, 13334, 13331);
				tv0->AddReply(12106, 13333, 13332);
				break;
			}
			f_154b_a1_v("Neutral");
			tv0->SetMessage(12515);
			tv0->ClearReplies();
			if (f_1f95_a1_b(tv1)) {
				tv0->AddReply(12520, 13691, 13690);
			}
			if (f_1fad_a1_b(tv1) && f_200d_a1_b(tv1)) {
				tv0->AddReply(12516, 13688, 13686);
			}
			if (f_1fb9_a1_b(tv1) && f_2019_a1_b(tv1) && !f_200d_a1_b(tv1)) {
				tv0->AddReply(12526, 13697, 13696);
			}
			tv0->AddReply(12517, -1, 13687);
			break;
			return;
		}
		if (f_1c40_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1bd5_a1_v(tv2);
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

	void f_154b_a1_v(string a0)
	{
		if (!f_1c40_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1bd5_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1be7_a0_v();
			if (a1 == 13670) {
				f_1d9b_a2_v(tv1, tv0);
				f_1d73_a2_v(tv1, tv0);
				f_1da7_a2_v(tv1, tv0);
			}
			if (a1 == 13671) {
				f_1d9b_a2_v(tv1, tv0);
				f_1da7_a2_v(tv1, tv0);
			}
			if (a1 == 13692) {
				f_1d73_a2_v(tv1, tv0);
			}
			if (a1 == 13689) {
				f_1d68_a2_v(tv1, tv0);
				f_1c7a_a2_v(tv1, tv0);
				f_1da1_a2_v(tv1, tv0);
				f_1dde_a2_v(tv1, tv0);
			}
			if (a1 == 13698) {
				f_1dad_a2_v(tv1, tv0);
				f_1db3_a2_v(tv1, tv0);
			}
			if (a0 == 13330) {
				if (f_1fa1_a1_b(tv1)) {
					f_154b_a1_v("Neutral");
					tv0->SetMessage(12104);
					tv0->ClearReplies();
					tv0->AddReply(12105, 13334, 13331);
					tv0->AddReply(12106, 13333, 13332);
					return;
				}
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12515);
				tv0->ClearReplies();
				if (f_1f95_a1_b(tv1)) {
					tv0->AddReply(12520, 13691, 13690);
				}
				if (f_1fad_a1_b(tv1) && f_200d_a1_b(tv1)) {
					tv0->AddReply(12516, 13688, 13686);
				}
				if (f_1fb9_a1_b(tv1) && f_2019_a1_b(tv1) && !f_200d_a1_b(tv1)) {
					tv0->AddReply(12526, 13697, 13696);
				}
				tv0->AddReply(12517, -1, 13687);
				return;
			}
			if (a0 == 13697) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12527);
				tv0->ClearReplies();
				tv0->AddReply(12528, -1, 13698);
				return;
			}
			if (a0 == 13688) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12518);
				tv0->ClearReplies();
				tv0->AddReply(12519, -1, 13689);
				return;
			}
			if (a0 == 13691) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12521);
				tv0->ClearReplies();
				tv0->AddReply(12522, -1, 13692);
				return;
			}
			if (a0 == 13333) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12107);
				tv0->ClearReplies();
				tv0->AddReply(12493, 13334, 13662);
				return;
			}
			if (a0 == 13334) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12108);
				tv0->ClearReplies();
				tv0->AddReply(12109, 13336, 13335);
				return;
			}
			if (a0 == 13336) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12110);
				tv0->ClearReplies();
				tv0->AddReply(12111, 13338, 13337);
				return;
			}
			if (a0 == 13338) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12112);
				tv0->ClearReplies();
				tv0->AddReply(12494, 13665, 13664);
				return;
			}
			if (a0 == 13665) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12495);
				tv0->ClearReplies();
				tv0->AddReply(12496, 13667, 13666);
				return;
			}
			if (a0 == 13667) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12497);
				tv0->ClearReplies();
				tv0->AddReply(12498, 13669, 13668);
				return;
			}
			if (a0 == 13669) {
				f_154b_a1_v("Neutral");
				tv0->SetMessage(12499);
				tv0->ClearReplies();
				tv0->AddReply(12500, -1, 13670);
				tv0->AddReply(12501, -1, 13671);
				return;
			}
			tv3 = true;
			if (f_1c40_a0_b()) {
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
		if (!f_1b99_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1c3c_a0_i());
		L0->SetPhoto(f_1c3e_a0_s());
		L0->SetPlayerName(f_21e0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1bd1_a1_v(a0);
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
			f_17c7_a1_v("Neutral");
			tv0->SetMessage(12410);
			tv0->ClearReplies();
			if (f_2025_a1_b(tv1) && f_203d_a1_b(tv1) && !f_2031_a1_b(tv1)) {
				tv0->AddReply(12412, 13577, 13576);
			}
			if (f_2031_a1_b(tv1) && f_2049_a1_b(tv1)) {
				tv0->AddReply(13588, 14840, 14839);
			}
			if (f_2055_a1_b(tv1) && f_2031_a1_b(tv1) && f_2061_a1_b(tv1)) {
				tv0->AddReply(13607, 14868, 14862);
			}
			if (f_2055_a1_b(tv1) && f_2079_a1_b(tv1)) {
				tv0->AddReply(13618, 14874, 14873);
			}
			if (!f_2031_a1_b(tv1) && f_2025_a1_b(tv1) && f_206d_a1_b(tv1)) {
				tv0->AddReply(13612, 14863, 14867);
			}
			tv0->AddReply(12411, -1, 13575);
			break;
			return;
		}
		if (f_1c40_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1bd5_a1_v(tv2);
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

	void f_17c7_a1_v(string a0)
	{
		if (!f_1c40_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1bd5_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1be7_a0_v();
			if (a1 == 14856) {
				f_1e05_a2_v(tv1, tv0);
				f_1e8b_a2_v(tv1, tv0);
			}
			if (a1 == 14857) {
				f_1e05_a2_v(tv1, tv0);
				f_1e8b_a2_v(tv1, tv0);
			}
			if (a1 == 14858) {
				f_1e05_a2_v(tv1, tv0);
				f_1e8b_a2_v(tv1, tv0);
			}
			if (a1 == 14839) {
				f_1e0b_a2_v(tv1, tv0);
			}
			if (a1 == 14860) {
				f_1e11_a2_v(tv1, tv0);
			}
			if (a1 == 14862) {
				f_1e13_a2_v(tv1, tv0);
			}
			if (a1 == 14894) {
				f_1e19_a2_v(tv1, tv0);
			}
			if (a1 == 14873) {
				f_1e25_a2_v(tv1, tv0);
			}
			if (a1 == 14867) {
				f_1e1f_a2_v(tv1, tv0);
			}
			if (a0 == 13574) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12410);
				tv0->ClearReplies();
				if (f_2025_a1_b(tv1) && f_203d_a1_b(tv1) && !f_2031_a1_b(tv1)) {
					tv0->AddReply(12412, 13577, 13576);
				}
				if (f_2031_a1_b(tv1) && f_2049_a1_b(tv1)) {
					tv0->AddReply(13588, 14840, 14839);
				}
				if (f_2055_a1_b(tv1) && f_2031_a1_b(tv1) && f_2061_a1_b(tv1)) {
					tv0->AddReply(13607, 14868, 14862);
				}
				if (f_2055_a1_b(tv1) && f_2079_a1_b(tv1)) {
					tv0->AddReply(13618, 14874, 14873);
				}
				if (!f_2031_a1_b(tv1) && f_2025_a1_b(tv1) && f_206d_a1_b(tv1)) {
					tv0->AddReply(13612, 14863, 14867);
				}
				tv0->AddReply(12411, -1, 13575);
				return;
			}
			if (a0 == 14863) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13608);
				tv0->ClearReplies();
				tv0->AddReply(13609, 14865, 14864);
				return;
			}
			if (a0 == 14865) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13610);
				tv0->ClearReplies();
				tv0->AddReply(13611, 14869, 14866);
				return;
			}
			if (a0 == 14869) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13614);
				tv0->ClearReplies();
				tv0->AddReply(13615, 14871, 14870);
				return;
			}
			if (a0 == 14871) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13616);
				tv0->ClearReplies();
				tv0->AddReply(13617, -1, 14872);
				return;
			}
			if (a0 == 14874) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13619);
				tv0->ClearReplies();
				tv0->AddReply(13620, 14876, 14875);
				return;
			}
			if (a0 == 14876) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13621);
				tv0->ClearReplies();
				tv0->AddReply(13623, 14879, 14878);
				tv0->AddReply(13622, -1, 14877);
				return;
			}
			if (a0 == 14879) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13624);
				tv0->ClearReplies();
				tv0->AddReply(13626, 14882, 14881);
				tv0->AddReply(13625, -1, 14880);
				return;
			}
			if (a0 == 14882) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13627);
				tv0->ClearReplies();
				tv0->AddReply(13628, -1, 14883);
				return;
			}
			if (a0 == 14868) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13613);
				tv0->ClearReplies();
				tv0->AddReply(13629, 14885, 14884);
				return;
			}
			if (a0 == 14885) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13630);
				tv0->ClearReplies();
				tv0->AddReply(13631, 14889, 14886);
				tv0->AddReply(13632, 14888, 14887);
				return;
			}
			if (a0 == 14888) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13633);
				tv0->ClearReplies();
				tv0->AddReply(13636, 14889, 14891);
				return;
			}
			if (a0 == 14889) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13634);
				tv0->ClearReplies();
				tv0->AddReply(13635, 14893, 14890);
				return;
			}
			if (a0 == 14893) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13637);
				tv0->ClearReplies();
				tv0->AddReply(13638, -1, 14894);
				return;
			}
			if (a0 == 14840) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13589);
				tv0->ClearReplies();
				tv0->AddReply(13591, 14843, 14842);
				tv0->AddReply(13590, 14845, 14841);
				return;
			}
			if (a0 == 14845) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13594);
				tv0->ClearReplies();
				tv0->AddReply(13595, 14847, 14846);
				return;
			}
			if (a0 == 14847) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13596);
				tv0->ClearReplies();
				tv0->AddReply(13597, 14843, 14848);
				return;
			}
			if (a0 == 14843) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13592);
				tv0->ClearReplies();
				tv0->AddReply(13598, 14824, 14850);
				tv0->AddReply(13593, 13583, 14844);
				return;
			}
			if (a0 == 13583) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12419);
				tv0->ClearReplies();
				tv0->AddReply(12423, 13588, 13587);
				return;
			}
			if (a0 == 13588) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12424);
				tv0->ClearReplies();
				tv0->AddReply(12425, 13594, 13590);
				tv0->AddReply(12426, 13592, 13591);
				return;
			}
			if (a0 == 13592) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12427);
				tv0->ClearReplies();
				tv0->AddReply(12430, 13594, 13596);
				return;
			}
			if (a0 == 13594) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12428);
				tv0->ClearReplies();
				tv0->AddReply(12429, 13599, 13595);
				return;
			}
			if (a0 == 13599) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12432);
				tv0->ClearReplies();
				tv0->AddReply(12433, 13601, 13600);
				return;
			}
			if (a0 == 13601) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12434);
				tv0->ClearReplies();
				tv0->AddReply(13581, 14826, 14830);
				tv0->AddReply(12435, 14833, 13602);
				return;
			}
			if (a0 == 14824) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13575);
				tv0->ClearReplies();
				tv0->AddReply(13576, 14826, 14825);
				return;
			}
			if (a0 == 14826) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13577);
				tv0->ClearReplies();
				tv0->AddReply(13578, 14828, 14827);
				return;
			}
			if (a0 == 14828) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13579);
				tv0->ClearReplies();
				tv0->AddReply(13580, 14833, 14829);
				return;
			}
			if (a0 == 14833) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13582);
				tv0->ClearReplies();
				tv0->AddReply(13583, 14835, 14834);
				return;
			}
			if (a0 == 14835) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13584);
				tv0->ClearReplies();
				tv0->AddReply(13585, 14837, 14836);
				return;
			}
			if (a0 == 14837) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13586);
				tv0->ClearReplies();
				tv0->AddReply(13587, -1, 14838);
				tv0->AddReply(13606, -1, 14860);
				return;
			}
			if (a0 == 13577) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12413);
				tv0->ClearReplies();
				tv0->AddReply(12420, 13585, 13584);
				tv0->AddReply(12414, 13579, 13578);
				return;
			}
			if (a0 == 13579) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12415);
				tv0->ClearReplies();
				tv0->AddReply(12416, 13581, 13580);
				return;
			}
			if (a0 == 13581) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12417);
				tv0->ClearReplies();
				tv0->AddReply(12418, 14853, 13582);
				return;
			}
			if (a0 == 13585) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(12421);
				tv0->ClearReplies();
				tv0->AddReply(13574, 14851, 14823);
				tv0->AddReply(13602, 14853, 14854);
				return;
			}
			if (a0 == 14851) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13599);
				tv0->ClearReplies();
				tv0->AddReply(13600, 14853, 14852);
				return;
			}
			if (a0 == 14853) {
				f_17c7_a1_v("Neutral");
				tv0->SetMessage(13601);
				tv0->ClearReplies();
				tv0->AddReply(13603, -1, 14856);
				tv0->AddReply(13604, -1, 14857);
				tv0->AddReply(13605, -1, 14858);
				return;
			}
			tv3 = true;
			if (f_1c40_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_1b81_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1b88_a1_b(object a0)
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

bool f_1b94_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1b99_a1_b(object a0)
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
	L5 = L3 * 70 + f_1bee_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1bd1_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1bd5_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1be7_a0_v(void)
{
	if (f_1c40_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1bee_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1bf8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1bfd_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_1c08_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

bool f_1c13_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1c1f_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1c24_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1c2d_a1_b(int a0)
{
	return f_1c24_a0_i() == a0;
}

bool f_1c33_a0_b(void)
{
	bool L0;
	f_1bd5_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_1c3c_a0_i(void)
{
	return 2872;
}

string f_1c3e_a0_s(void)
{
	return "ui/NPC_MladVlad.png";
}

bool f_1c40_a0_b(void)
{
	return true;
}

void f_1c42_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad3", 1);
}

void f_1c48_a2_v(object a0, object a1)
{
	@SetVariable("KnowUklad", 1);
}

void f_1c4e_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad4", 1);
}

void f_1c54_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q03IsKapella", 0);
	L0 = f_21ae_a0_o();
	L0->AddMark("d1q03MladVladGotoOspina", "pt_map_ospina", 0, 8642, f_1c1f_a0_f());
	f_21f1_a0_v();
	f_1bfd_a1_o("quest_d1_03");
}

void f_1c6f_a2_v(object a0, object a1)
{
	@Trace("money500 is given");
	f_1b81_a3_v(a0, "money", 500);
}

void f_1c7a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1c80_a2_v(object a0, object a1)
{
	@SetVariable("KnowPochka", 1);
}

void f_1c86_a2_v(object a0, object a1)
{
	@SetVariable("ood2MladVlad1", 1);
}

void f_1c8c_a2_v(object a0, object a1)
{
	@SetVariable("ood2MladVlad2", 1);
}

void f_1c92_a2_v(object a0, object a1)
{
	@SetVariable("ood2MladVlad3", 1);
}

void f_1c98_a2_v(object a0, object a1)
{
	@SetVariable("ood2MladVlad4", 1);
}

void f_1c9e_a2_v(object a0, object a1)
{
	@SetVariable("d2q04", 1);
}

void f_1ca4_a2_v(object a0, object a1)
{
	f_21bf_a3_v(f_21ae_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_21ae_a0_o());
}

void f_1cb4_a2_v(object a0, object a1)
{
	f_21bf_a3_v(f_21ae_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_21ae_a0_o());
}

void f_1cc4_a2_v(object a0, object a1)
{
	f_21bf_a3_v(f_21ae_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_21ae_a0_o());
}

void f_1cd4_a2_v(object a0, object a1)
{
}

void f_1cd6_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q02", 2);
	L0 = f_21ae_a0_o();
	L0->AddMark("d3q02MladVladGotoBigVlad", "pt_map_bigvlad", 0, 11384, f_1c1f_a0_f());
	f_2201_a0_v();
}

void f_1ced_a2_v(object a0, object a1)
{
	@SetVariable("ood4MladVlad1", 1);
}

void f_1cf3_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01", 3);
	L0 = f_21ae_a0_o();
	L0->AddMark("d4q01MladVladGotoBigVlad", "pt_map_bigvlad", 1, 11507, f_1c1f_a0_f());
	L0->AddMark("d4q01MladVladGotoBigVladSelf", "pt_map_mladvlad", 1, 15322, f_1c1f_a0_f());
	f_2211_a0_v();
}

void f_1d13_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01_subquest", 1);
	L0 = f_21ae_a0_o();
	L0->AddMark("d4q01MladVladGotoOspina", "pt_map_ospina", 1, 11503, f_1c1f_a0_f());
}

void f_1d27_a2_v(object a0, object a1)
{
	@SetVariable("ood4MladVlad2", 1);
}

void f_1d2d_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_21ae_a0_o();
	L0->AddMark("d4q02MladVladGotoAnna", "pt_map_anna", 0, 11526, f_1c1f_a0_f());
	L0->AddMark("d4q02MladVladGotoJulia", "pt_map_julia", 0, 11524, f_1c1f_a0_f());
	L0->AddMark("d4q02MladVladGotoLara", "pt_map_lara", 0, 11525, f_1c1f_a0_f());
	L0->AddMark("d4q02MladVladGotoAJLSelf", "pt_map_mladvlad", 0, 15328, f_1c1f_a0_f());
	f_2221_a0_v();
	f_2231_a0_v();
	f_1c08_a1_o("quest_d4_02");
}

void f_1d62_a2_v(object a0, object a1)
{
	@SetVariable("ood4MladVlad3", 1);
}

void f_1d68_a2_v(object a0, object a1)
{
	@Trace("money 50000 is given");
	f_1b81_a3_v(a0, "money", 50000);
}

void f_1d73_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_21ae_a0_o();
	L0->AddMark("d6q02MladVladGotoBigVlad", "pt_map_bigvlad", 0, 15378, f_1c1f_a0_f());
	L0->AddMark("d6q02MladVladGotoBigVladSelf", "pt_map_mladvlad", 0, 15379, f_1c1f_a0_f());
	f_2251_a0_v();
	f_2271_a0_v();
	f_1bfd_a1_o("quest_d6_02");
	f_1c13_a2_b("quest_d6_02", "place_trigger");
}

void f_1d9b_a2_v(object a0, object a1)
{
	@SetVariable("ood6MladVlad1", 1);
}

void f_1da1_a2_v(object a0, object a1)
{
	@SetVariable("ood6MladVlad2", 1);
}

void f_1da7_a2_v(object a0, object a1)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}

void f_1dad_a2_v(object a0, object a1)
{
	@SetVariable("ood6MladVlad3", 1);
}

void f_1db3_a2_v(object a0, object a1)
{
	f_2281_a0_v();
	f_1c13_a2_b("quest_d6_03", "failed");
}

void f_1dbd_a2_v(object a0, object a1)
{
	@Trace("money30000 is given");
	f_1b81_a3_v(a0, "money", 30000);
}

void f_1dc8_a2_v(object a0, object a1)
{
}

void f_1dca_a2_v(object a0, object a1)
{
	@SetVariable("ood5MladVlad1", 1);
}

void f_1dd0_a2_v(object a0, object a1)
{
	@SetVariable("ood5MladVlad2", 1);
}

void f_1dd6_a2_v(object a0, object a1)
{
}

void f_1dd8_a2_v(object a0, object a1)
{
	@SetVariable("ood5MladVlad3", 1);
}

void f_1dde_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_21ae_a0_o();
	L0->FindMark(L1, "d6q02BigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q02KapellaGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q02MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q02MladVladGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	f_2261_a0_v();
}

void f_1e05_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad1", 1);
}

void f_1e0b_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad2", 1);
}

void f_1e11_a2_v(object a0, object a1)
{
}

void f_1e13_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad3", 1);
}

void f_1e19_a2_v(object a0, object a1)
{
	@SetVariable("d8q01MladVladIsVictim", 1);
}

void f_1e1f_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad4", 1);
}

void f_1e25_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad5", 1);
}

void f_1e2b_a2_v(object a0, object a1)
{
	@SetVariable("KnowMladVlad", 1);
}

void f_1e31_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad5", 1);
}

void f_1e37_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad6", 1);
}

void f_1e3d_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad7", 1);
}

void f_1e43_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad8", 1);
}

void f_1e49_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad9", 1);
}

void f_1e4f_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad10", 1);
}

void f_1e55_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad11", 1);
}

void f_1e5b_a2_v(object a0, object a1)
{
	if (f_1bf8_a1_i("d5q03") == 0) {
		object L0;
		@SetVariable("d5q03", 1);
		L0 = f_21ae_a0_o();
		L0->AddMark("d5q03MladVladSavePrisonersSelf", "pt_map_mladvlad", 0, 15369, f_1c1f_a0_f());
		L0->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 15370, f_1c1f_a0_f());
		f_2241_a0_v();
		f_1bfd_a1_o("quest_d5_03");
		f_1c13_a2_b("quest_d5_03", "place_prisoners");
	}
}

void f_1e8b_a2_v(object a0, object a1)
{
	f_2291_a0_v();
}

void f_1e90_a2_v(object a0, object a1)
{
	@SetVariable("KnowTaurusProject", 1);
}

void f_1e96_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad1", 1);
}

void f_1e9c_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad2", 1);
}

bool f_1ea2_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_1eae_a1_b(object a0)
{
	if (f_1bf8_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1eba_a1_b(object a0)
{
	if (f_1bf8_a1_i("d1q03") == 0) {
		return true;
	}
	return false;
}

bool f_1ec6_a1_b(object a0)
{
	if (f_1bf8_a1_i("d1q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1ed2_a1_b(object a0)
{
	if (f_1bf8_a1_i("d1q03IsKapella") == 1) {
		return true;
	}
	return false;
}

bool f_1ede_a1_b(object a0)
{
	if (f_2181_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1ee8_a1_b(object a0)
{
	if (f_1bf8_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_1ef4_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood2MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_1f00_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood2MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_1f0c_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood2MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_1f18_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood2MladVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_1f24_a1_b(object a0)
{
	if (f_1bf8_a1_i("d2q04") == 0) {
		return true;
	}
	return false;
}

bool f_1f30_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowViktor") == 1) {
		return true;
	}
	return false;
}

bool f_1f3c_a1_b(object a0)
{
	if (f_1bf8_a1_i("d3q02") == 1) {
		return true;
	}
	return false;
}

bool f_1f48_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1f4d_a1_b(object a0)
{
	if (f_1bf8_a1_i("d4q01") == 2) {
		return true;
	}
	return false;
}

bool f_1f59_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood4MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_1f65_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood4MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_1f71_a1_b(object a0)
{
	if (f_1bf8_a1_i("d4q02") == 1000) {
		return true;
	}
	return false;
}

bool f_1f7d_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood4MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_1f89_a1_b(object a0)
{
	if (f_1bf8_a1_i("d5q02") == 0) {
		return true;
	}
	return false;
}

bool f_1f95_a1_b(object a0)
{
	if (f_1bf8_a1_i("d6q02") == 0) {
		return true;
	}
	return false;
}

bool f_1fa1_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood6MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_1fad_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood6MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_1fb9_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood6MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_1fc5_a1_b(object a0)
{
	if (f_1bf8_a1_i("d5q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1fd1_a1_b(object a0)
{
	if (f_1bf8_a1_i("d5q03") == -1) {
		return true;
	}
	return false;
}

bool f_1fdd_a1_b(object a0)
{
	if (f_1bf8_a1_i("d5q03") == 2) {
		return true;
	}
	return false;
}

bool f_1fe9_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood5MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_1ff5_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood5MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2001_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood5MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_200d_a1_b(object a0)
{
	if (f_1bf8_a1_i("d6q02GorbunDeath") != 0) {
		return true;
	}
	return false;
}

bool f_2019_a1_b(object a0)
{
	if (f_1bf8_a1_i("d6q02Trigger") != 0) {
		return true;
	}
	return false;
}

bool f_2025_a1_b(object a0)
{
	if (f_1bf8_a1_i("d8q01") == 1) {
		return true;
	}
	return false;
}

bool f_2031_a1_b(object a0)
{
	if (f_1bf8_a1_i("d8q01MladVladIsBad") == 1) {
		return true;
	}
	return false;
}

bool f_203d_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood8MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2049_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood8MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2055_a1_b(object a0)
{
	if (f_1bf8_a1_i("d8q01BringBadBoy") == 1) {
		return true;
	}
	return false;
}

bool f_2061_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood8MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_206d_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood8MladVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_2079_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood8MladVlad5") == 0) {
		return true;
	}
	return false;
}

bool f_2085_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowBigVlad") == 1) {
		return true;
	}
	return false;
}

bool f_2091_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowGrif") == 1) {
		return true;
	}
	return false;
}

bool f_209d_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_20a9_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowLara") == 1) {
		return true;
	}
	return false;
}

bool f_20b5_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad5") == 0) {
		return true;
	}
	return false;
}

bool f_20c1_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad6") == 0) {
		return true;
	}
	return false;
}

bool f_20cd_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad7") == 0) {
		return true;
	}
	return false;
}

bool f_20d9_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad8") == 0) {
		return true;
	}
	return false;
}

bool f_20e5_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad9") == 0) {
		return true;
	}
	return false;
}

bool f_20f1_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad10") == 0) {
		return true;
	}
	return false;
}

bool f_20fd_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad11") == 0) {
		return true;
	}
	return false;
}

bool f_2109_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad12") == 0) {
		return true;
	}
	return false;
}

bool f_2115_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowMaria") == 1) {
		return true;
	}
	return false;
}

bool f_2121_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowOspina") == 1) {
		return true;
	}
	return false;
}

bool f_212d_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowKapella") == 1) {
		return true;
	}
	return false;
}

bool f_2139_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowMyth") == 1) {
		return true;
	}
	return false;
}

bool f_2145_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowTermitnik") == 1) {
		return true;
	}
	return false;
}

bool f_2151_a1_b(object a0)
{
	if (f_1bf8_a1_i("KnowTaurusProject") == 1) {
		return true;
	}
	return false;
}

bool f_215d_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2169_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2175_a1_b(object a0)
{
	if (f_1bf8_a1_i("ood1MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2181_a1_b(object a0)
{
	return false;
}

object f_2184_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2191_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2184_a0_o();
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

object f_21ae_a0_o(void)
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

void f_21bf_a3_v(object a0, string a1, float a2)
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

int f_21e0_a0_i(void)
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

void f_21f1_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 37, 2, 12119);
	f_2191_a2_b(L0, -1);
}

void f_2201_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 78, 2, 12160);
	f_2191_a2_b(L0, 26);
}

void f_2211_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 137, 1, 15323);
	f_2191_a2_b(L0, 20);
}

void f_2221_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 21, 2, 3361);
	f_2191_a2_b(L0, -1);
}

void f_2231_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 92, 2, 12174);
	f_2191_a2_b(L0, 21);
}

void f_2241_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 148, 2, 15354);
	f_2191_a2_b(L0, -1);
}

void f_2251_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 102, 2, 13725);
	f_2191_a2_b(L0, -1);
}

void f_2261_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 104, 2, 13727);
	f_2191_a2_b(L0, 102);
}

void f_2271_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 106, 2, 13729);
	f_2191_a2_b(L0, 102);
}

void f_2281_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 110, 2, 13733);
	f_2191_a2_b(L0, 107);
}

void f_2291_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 177, 1, 15436);
	f_2191_a2_b(L0, 175);
}

void f_22a1_a0_v(void)
{
	g1 = false;
}

void f_22a5_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_1c2d_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_1c2d_a1_b(2)) {
		t6{a0};
		return;
	}
	if (f_1c2d_a1_b(3)) {
		t8{a0};
		return;
	}
	if (f_1c2d_a1_b(4)) {
		t10{a0};
		return;
	}
	if (f_1c2d_a1_b(5)) {
		t12{a0};
		return;
	}
	if (f_1c2d_a1_b(6)) {
		t14{a0};
		return;
	}
	if (f_1c2d_a1_b(8)) {
		t16{a0};
		return;
	}
	f_1c33_a0_b();
}

