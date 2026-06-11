event OnLoad 5;
event OnDialogReply 11;
event OnUnload 6;
event OnUse 0;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_1d39_a0_b());
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
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
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
		f_1d82_a1_v(a0);
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
			if (!f_217b_a1_b(tv1)) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531697);
				tv0->ClearReplies();
				tv0->AddReply(531698, 33083, 33082);
				tv0->AddReply(531701, -1, 33085);
				break;
			}
			f_ef_a1_v("Neutral");
			tv0->SetMessage(531735);
			tv0->ClearReplies();
			if (f_2193_a1_b(tv1)) {
				tv0->AddReply(532945, 33336, 34434);
			}
			if (f_23d0_a1_b(tv1) && f_2187_a1_b(tv1)) {
				tv0->AddReply(531736, 33124, 33123);
			}
			if (f_2193_a1_b(tv1) && f_21d0_a1_b(tv1) || f_219f_a1_b(tv1) && f_21d0_a1_b(tv1)) {
				tv0->AddReply(533590, 35110, 35109);
			}
			tv0->AddReply(531813, -1, 33207);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_ef_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a1 == 33343) {
				f_216d_a2_v(tv1, tv0);
			}
			if (a1 == 35010) {
				f_216d_a2_v(tv1, tv0);
			}
			if (a1 == 33123) {
				f_1ec1_a2_v(tv1, tv0);
			}
			if (a0 == 33081) {
				if (!f_217b_a1_b(tv1)) {
					f_ef_a1_v("Neutral");
					tv0->SetMessage(531697);
					tv0->ClearReplies();
					tv0->AddReply(531698, 33083, 33082);
					tv0->AddReply(531701, -1, 33085);
					return;
				}
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531735);
				tv0->ClearReplies();
				if (f_2193_a1_b(tv1)) {
					tv0->AddReply(532945, 33336, 34434);
				}
				if (f_23d0_a1_b(tv1) && f_2187_a1_b(tv1)) {
					tv0->AddReply(531736, 33124, 33123);
				}
				if (f_2193_a1_b(tv1) && f_21d0_a1_b(tv1) || f_219f_a1_b(tv1) && f_21d0_a1_b(tv1)) {
					tv0->AddReply(533590, 35110, 35109);
				}
				tv0->AddReply(531813, -1, 33207);
				return;
			}
			if (a0 == 35110) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(533591);
				tv0->ClearReplies();
				tv0->AddReply(533593, 35115, 35112);
				tv0->AddReply(533592, 35113, 35111);
				return;
			}
			if (a0 == 35113) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(533594);
				tv0->ClearReplies();
				tv0->AddReply(533595, -1, 35114);
				return;
			}
			if (a0 == 35115) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(533596);
				tv0->ClearReplies();
				tv0->AddReply(533597, 35117, 35116);
				tv0->AddReply(533603, 35119, 35122);
				return;
			}
			if (a0 == 35117) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(533598);
				tv0->ClearReplies();
				tv0->AddReply(533599, 35119, 35118);
				return;
			}
			if (a0 == 35119) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(533600);
				tv0->ClearReplies();
				tv0->AddReply(533601, -1, 35120);
				tv0->AddReply(533602, -1, 35121);
				return;
			}
			if (a0 == 33124) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531737);
				tv0->ClearReplies();
				tv0->AddReply(531738, 33126, 33125);
				tv0->AddReply(531747, 33126, 33135);
				return;
			}
			if (a0 == 33126) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531739);
				tv0->ClearReplies();
				tv0->AddReply(531740, 33128, 33127);
				tv0->AddReply(531746, 33128, 33133);
				return;
			}
			if (a0 == 33128) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531741);
				tv0->ClearReplies();
				tv0->AddReply(531742, 33130, 33129);
				tv0->AddReply(531745, -1, 33132);
				return;
			}
			if (a0 == 33130) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531743);
				tv0->ClearReplies();
				tv0->AddReply(531744, -1, 33131);
				tv0->AddReply(532944, -1, 34433);
				return;
			}
			if (a0 == 33336) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531932);
				tv0->ClearReplies();
				tv0->AddReply(532961, 34454, 34453);
				tv0->AddReply(532963, 34456, 34455);
				return;
			}
			if (a0 == 34456) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(532964);
				tv0->ClearReplies();
				tv0->AddReply(532965, 34454, 34457);
				tv0->AddReply(532966, 34454, 34459);
				return;
			}
			if (a0 == 34454) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(532962);
				tv0->ClearReplies();
				tv0->AddReply(531933, 33338, 33337);
				tv0->AddReply(532967, 34462, 34461);
				return;
			}
			if (a0 == 34462) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(532968);
				tv0->ClearReplies();
				tv0->AddReply(532969, 33338, 34463);
				tv0->AddReply(532970, 33340, 34464);
				return;
			}
			if (a0 == 33338) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531934);
				tv0->ClearReplies();
				tv0->AddReply(531935, 33340, 33339);
				tv0->AddReply(532971, 33340, 34467);
				return;
			}
			if (a0 == 33340) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531936);
				tv0->ClearReplies();
				tv0->AddReply(531937, 33342, 33341);
				tv0->AddReply(532972, 33342, 34469);
				return;
			}
			if (a0 == 33342) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531938);
				tv0->ClearReplies();
				tv0->AddReply(531939, -1, 33343);
				tv0->AddReply(533484, -1, 35010);
				return;
			}
			if (a0 == 33083) {
				f_ef_a1_v("Neutral");
				tv0->SetMessage(531699);
				tv0->ClearReplies();
				tv0->AddReply(531700, -1, 33084);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
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
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
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
		f_1d82_a1_v(a0);
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
			f_3a6_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_3a6_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a0 == 36960) {
				f_3a6_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_3a6_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_3a6_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
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
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
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
		f_1d82_a1_v(a0);
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
			f_4a4_a1_v("Neutral");
			tv0->SetMessage(536225);
			tv0->ClearReplies();
			tv0->AddReply(536226, -1, 38001);
			tv0->AddReply(536227, -1, 38002);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_4a4_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a0 == 38000) {
				f_4a4_a1_v("Neutral");
				tv0->SetMessage(536225);
				tv0->ClearReplies();
				tv0->AddReply(536226, -1, 38001);
				tv0->AddReply(536227, -1, 38002);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
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
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
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
		f_1d82_a1_v(a0);
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
			f_2085_a2_v(tv1, tv0);
			f_579_a1_v("Neutral");
			tv0->SetMessage(500401);
			tv0->ClearReplies();
			tv0->AddReply(500402, 471, 468);
			tv0->AddReply(500403, 472, 469);
			tv0->AddReply(500404, -1, 470);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_579_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a0 == 467) {
				f_2085_a2_v(tv1, tv0);
				f_579_a1_v("Neutral");
				tv0->SetMessage(500401);
				tv0->ClearReplies();
				tv0->AddReply(500402, 471, 468);
				tv0->AddReply(500403, 472, 469);
				tv0->AddReply(500404, -1, 470);
				return;
			}
			if (a0 == 472) {
				f_579_a1_v("Neutral");
				tv0->SetMessage(500406);
				tv0->ClearReplies();
				tv0->AddReply(500413, 475, 480);
				tv0->AddReply(500414, -1, 481);
				return;
			}
			if (a0 == 471) {
				f_579_a1_v("Neutral");
				tv0->SetMessage(500405);
				tv0->ClearReplies();
				tv0->AddReply(500407, 475, 473);
				tv0->AddReply(500408, 475, 474);
				return;
			}
			if (a0 == 475) {
				f_579_a1_v("Neutral");
				tv0->SetMessage(500409);
				tv0->ClearReplies();
				tv0->AddReply(500410, -1, 477);
				tv0->AddReply(500411, -1, 478);
				tv0->AddReply(500412, -1, 479);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
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
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
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
		f_1d82_a1_v(a0);
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
			if (!f_2340_a1_b(tv1) && f_2394_a1_b(tv1)) {
				f_20a3_a2_v(tv1, tv0);
				f_2167_a2_v(tv1, tv0);
				f_70e_a1_v("Neutral");
				tv0->SetMessage(510676);
				tv0->ClearReplies();
				tv0->AddReply(510688, 11789, 11801);
				break;
			}
			if (f_23b8_a1_b(tv1)) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512502);
				tv0->ClearReplies();
				if (f_2340_a1_b(tv1) && f_234c_a1_b(tv1)) {
					tv0->AddReply(512027, 13248, 13245);
				}
				if (f_231c_a1_b(tv1) && f_2328_a1_b(tv1) && !f_2304_a1_b(tv1) && !f_2310_a1_b(tv1) && !f_2334_a1_b(tv1) && !f_22f8_a1_b(tv1)) {
					tv0->AddReply(512503, 13674, 13673);
				}
				tv0->AddReply(512514, -1, 13684);
				break;
			}
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_70e_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a1 == 13245) {
				f_207f_a2_v(tv1, tv0);
			}
			if (a1 == 13253) {
				f_20a9_a2_v(tv1, tv0);
				f_1f13_a2_v(tv1, tv0);
			}
			if (a1 == 13885) {
				f_20a9_a2_v(tv1, tv0);
				f_1f13_a2_v(tv1, tv0);
			}
			if (a1 == 13673) {
				f_2079_a2_v(tv1, tv0);
			}
			if (a1 == 13683) {
				f_2154_a2_v(tv1, tv0);
			}
			if (a0 == 11787) {
				if (!f_2340_a1_b(tv1) && f_2394_a1_b(tv1)) {
					f_20a3_a2_v(tv1, tv0);
					f_2167_a2_v(tv1, tv0);
					f_70e_a1_v("Neutral");
					tv0->SetMessage(510676);
					tv0->ClearReplies();
					tv0->AddReply(510688, 11789, 11801);
					return;
				}
				if (f_23b8_a1_b(tv1)) {
					f_70e_a1_v("Neutral");
					tv0->SetMessage(512502);
					tv0->ClearReplies();
					if (f_2340_a1_b(tv1) && f_234c_a1_b(tv1)) {
						tv0->AddReply(512027, 13248, 13245);
					}
					if (f_231c_a1_b(tv1) && f_2328_a1_b(tv1) && !f_2304_a1_b(tv1) && !f_2310_a1_b(tv1) && !f_2334_a1_b(tv1) && !f_22f8_a1_b(tv1)) {
						tv0->AddReply(512503, 13674, 13673);
					}
					tv0->AddReply(512514, -1, 13684);
					return;
				}
			}
			if (a0 == 13674) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512504);
				tv0->ClearReplies();
				tv0->AddReply(512505, 13676, 13675);
				return;
			}
			if (a0 == 13676) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512506);
				tv0->ClearReplies();
				tv0->AddReply(512507, 13678, 13677);
				return;
			}
			if (a0 == 13678) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512508);
				tv0->ClearReplies();
				tv0->AddReply(512509, 13680, 13679);
				return;
			}
			if (a0 == 13680) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512510);
				tv0->ClearReplies();
				tv0->AddReply(512511, 13682, 13681);
				return;
			}
			if (a0 == 13682) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512512);
				tv0->ClearReplies();
				tv0->AddReply(512513, -1, 13683);
				return;
			}
			if (a0 == 13248) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512030);
				tv0->ClearReplies();
				tv0->AddReply(512031, 13250, 13249);
				tv0->AddReply(512692, 3597, 13882);
				return;
			}
			if (a0 == 3597) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(503321);
				tv0->ClearReplies();
				tv0->AddReply(503322, 3599, 3598);
				tv0->AddReply(503535, 3817, 3816);
				return;
			}
			if (a0 == 3817) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(503536);
				tv0->ClearReplies();
				tv0->AddReply(503537, 3604, 3818);
				tv0->AddReply(503538, 3599, 3819);
				return;
			}
			if (a0 == 3599) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(503323);
				tv0->ClearReplies();
				tv0->AddReply(503324, 3604, 3600);
				tv0->AddReply(503325, 3604, 3601);
				return;
			}
			if (a0 == 3604) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(503327);
				tv0->ClearReplies();
				tv0->AddReply(503330, 3815, 3607);
				return;
			}
			if (a0 == 13250) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512032);
				tv0->ClearReplies();
				tv0->AddReply(512033, 13252, 13251);
				tv0->AddReply(503539, 3823, 3822);
				return;
			}
			if (a0 == 3823) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(503540);
				tv0->ClearReplies();
				tv0->AddReply(503541, 13252, 3824);
				tv0->AddReply(503533, 3815, 3814);
				return;
			}
			if (a0 == 3815) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(503534);
				tv0->ClearReplies();
				tv0->AddReply(512694, -1, 13885);
				return;
			}
			if (a0 == 13252) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(512034);
				tv0->ClearReplies();
				tv0->AddReply(512035, -1, 13253);
				return;
			}
			if (a0 == 11789) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(510678);
				tv0->ClearReplies();
				tv0->AddReply(510679, 11791, 11790);
				tv0->AddReply(510687, -1, 11800);
				return;
			}
			if (a0 == 11791) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(510680);
				tv0->ClearReplies();
				tv0->AddReply(510681, 11793, 11792);
				tv0->AddReply(510685, 11793, 11796);
				tv0->AddReply(510686, 11793, 11798);
				return;
			}
			if (a0 == 11793) {
				f_70e_a1_v("Neutral");
				tv0->SetMessage(510682);
				tv0->ClearReplies();
				tv0->AddReply(510683, -1, 11794);
				tv0->AddReply(510684, -1, 11795);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
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
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
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
		f_1d82_a1_v(a0);
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
			if (f_21e8_a1_b(tv1) && f_2222_a1_b(tv1)) {
				f_1eeb_a2_v(tv1, tv0);
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506797);
				tv0->ClearReplies();
				tv0->AddReply(506810, 7493, 7505);
				tv0->AddReply(506798, 7491, 7490);
				tv0->AddReply(506809, 7491, 7503);
				break;
			}
			if (f_21f4_a1_b(tv1) && f_222e_a1_b(tv1)) {
				f_1ef1_a2_v(tv1, tv0);
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506765);
				tv0->ClearReplies();
				tv0->AddReply(506777, 7457, 7467);
				tv0->AddReply(506766, 7459, 7456);
				break;
			}
			f_a59_a1_v("Neutral");
			tv0->SetMessage(506794);
			tv0->ClearReplies();
			if (f_2200_a1_b(tv1) && f_2222_a1_b(tv1)) {
				tv0->AddReply(507084, 7809, 7807);
			}
			if (f_220c_a1_b(tv1) && f_23c4_a1_b(tv1)) {
				tv0->AddReply(506795, 7469, 7487);
			}
			tv0->AddReply(507535, -1, 8317);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_a59_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a1 == 7460) {
				f_1f0a_a2_v(tv1, tv0);
				f_1eaa_a2_v(tv1, tv0);
			}
			if (a1 == 7461) {
				f_1f0a_a2_v(tv1, tv0);
				f_1eaa_a2_v(tv1, tv0);
			}
			if (a1 == 7465) {
				f_1f0a_a2_v(tv1, tv0);
				f_1eaa_a2_v(tv1, tv0);
			}
			if (a1 == 7466) {
				f_1f0a_a2_v(tv1, tv0);
				f_1eaa_a2_v(tv1, tv0);
			}
			if (a1 == 7807) {
				f_1ef7_a2_v(tv1, tv0);
			}
			if (a1 == 7487) {
				f_1efd_a2_v(tv1, tv0);
			}
			if (a0 == 7489) {
				if (f_21e8_a1_b(tv1) && f_2222_a1_b(tv1)) {
					f_1eeb_a2_v(tv1, tv0);
					f_a59_a1_v("Neutral");
					tv0->SetMessage(506797);
					tv0->ClearReplies();
					tv0->AddReply(506810, 7493, 7505);
					tv0->AddReply(506798, 7491, 7490);
					tv0->AddReply(506809, 7491, 7503);
					return;
				}
				if (f_21f4_a1_b(tv1) && f_222e_a1_b(tv1)) {
					f_1ef1_a2_v(tv1, tv0);
					f_a59_a1_v("Neutral");
					tv0->SetMessage(506765);
					tv0->ClearReplies();
					tv0->AddReply(506777, 7457, 7467);
					tv0->AddReply(506766, 7459, 7456);
					return;
				}
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506794);
				tv0->ClearReplies();
				if (f_2200_a1_b(tv1) && f_2222_a1_b(tv1)) {
					tv0->AddReply(507084, 7809, 7807);
				}
				if (f_220c_a1_b(tv1) && f_23c4_a1_b(tv1)) {
					tv0->AddReply(506795, 7469, 7487);
				}
				tv0->AddReply(507535, -1, 8317);
				return;
			}
			if (a0 == 7469) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506778);
				tv0->ClearReplies();
				tv0->AddReply(506779, 7471, 7470);
				tv0->AddReply(506793, 7476, 7485);
				return;
			}
			if (a0 == 7471) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506780);
				tv0->ClearReplies();
				tv0->AddReply(506781, 7473, 7472);
				tv0->AddReply(506788, -1, 7479);
				return;
			}
			if (a0 == 7473) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506782);
				tv0->ClearReplies();
				tv0->AddReply(506784, 7476, 7475);
				tv0->AddReply(506783, -1, 7474);
				return;
			}
			if (a0 == 7476) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506785);
				tv0->ClearReplies();
				tv0->AddReply(506786, -1, 7477);
				tv0->AddReply(506787, -1, 7478);
				return;
			}
			if (a0 == 7809) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(507085);
				tv0->ClearReplies();
				tv0->AddReply(507086, 7811, 7810);
				tv0->AddReply(507096, 7813, 7822);
				return;
			}
			if (a0 == 7811) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(507087);
				tv0->ClearReplies();
				tv0->AddReply(507088, 7813, 7812);
				tv0->AddReply(507092, 7813, 7816);
				tv0->AddReply(507093, 7819, 7818);
				return;
			}
			if (a0 == 7819) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(507094);
				tv0->ClearReplies();
				tv0->AddReply(507095, 7813, 7820);
				return;
			}
			if (a0 == 7813) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(507089);
				tv0->ClearReplies();
				tv0->AddReply(507090, -1, 7814);
				tv0->AddReply(507091, -1, 7815);
				return;
			}
			if (a0 == 7457) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506767);
				tv0->ClearReplies();
				tv0->AddReply(506768, 7459, 7458);
				tv0->AddReply(506773, 7464, 7463);
				return;
			}
			if (a0 == 7464) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506774);
				tv0->ClearReplies();
				tv0->AddReply(506775, -1, 7465);
				tv0->AddReply(506776, -1, 7466);
				return;
			}
			if (a0 == 7459) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506769);
				tv0->ClearReplies();
				tv0->AddReply(506770, -1, 7460);
				tv0->AddReply(506771, -1, 7461);
				return;
			}
			if (a0 == 7491) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506799);
				tv0->ClearReplies();
				tv0->AddReply(506800, 7493, 7492);
				tv0->AddReply(506807, 7493, 7500);
				return;
			}
			if (a0 == 7493) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506801);
				tv0->ClearReplies();
				tv0->AddReply(506802, 7495, 7494);
				tv0->AddReply(506806, 7495, 7498);
				return;
			}
			if (a0 == 7495) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(506803);
				tv0->ClearReplies();
				tv0->AddReply(507097, 7825, 7824);
				tv0->AddReply(506804, -1, 7496);
				tv0->AddReply(506805, -1, 7497);
				return;
			}
			if (a0 == 7825) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(507098);
				tv0->ClearReplies();
				tv0->AddReply(507099, 7827, 7826);
				return;
			}
			if (a0 == 7827) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(507100);
				tv0->ClearReplies();
				tv0->AddReply(507101, -1, 7828);
				tv0->AddReply(507102, 7830, 7829);
				return;
			}
			if (a0 == 7830) {
				f_a59_a1_v("Neutral");
				tv0->SetMessage(507103);
				tv0->ClearReplies();
				tv0->AddReply(507104, -1, 7831);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
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
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
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
		f_1d82_a1_v(a0);
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
			f_d8a_a1_v("Neutral");
			tv0->SetMessage(508926);
			tv0->ClearReplies();
			if (f_223a_a1_b(tv1) && f_2246_a1_b(tv1)) {
				tv0->AddReply(508977, 9847, 9846);
			}
			if (f_21ab_a1_b(tv1)) {
				tv0->AddReply(510375, 11442, 11440);
			}
			if (f_2252_a1_b(tv1)) {
				tv0->AddReply(508975, 9792, 9844);
			}
			if (f_225e_a1_b(tv1)) {
				tv0->AddReply(508976, 9815, 9845);
			}
			tv0->AddReply(511139, -1, 12328);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_d8a_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a1 == 35888) {
				f_1f2b_a2_v(tv1, tv0);
				f_1f19_a2_v(tv1, tv0);
			}
			if (a1 == 35889) {
				f_1f2b_a2_v(tv1, tv0);
				f_1f19_a2_v(tv1, tv0);
			}
			if (a1 == 35886) {
				f_1ec7_a2_v(tv1, tv0);
			}
			if (a1 == 9844) {
				f_1f1f_a2_v(tv1, tv0);
			}
			if (a1 == 9845) {
				f_1f25_a2_v(tv1, tv0);
			}
			if (a0 == 9791) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508926);
				tv0->ClearReplies();
				if (f_223a_a1_b(tv1) && f_2246_a1_b(tv1)) {
					tv0->AddReply(508977, 9847, 9846);
				}
				if (f_21ab_a1_b(tv1)) {
					tv0->AddReply(510375, 11442, 11440);
				}
				if (f_2252_a1_b(tv1)) {
					tv0->AddReply(508975, 9792, 9844);
				}
				if (f_225e_a1_b(tv1)) {
					tv0->AddReply(508976, 9815, 9845);
				}
				tv0->AddReply(511139, -1, 12328);
				return;
			}
			if (a0 == 9815) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508949);
				tv0->ClearReplies();
				tv0->AddReply(508950, 9817, 9816);
				tv0->AddReply(508963, 9832, 9829);
				tv0->AddReply(508964, 9832, 9831);
				tv0->AddReply(508972, 9841, 9840);
				return;
			}
			if (a0 == 9841) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508973);
				tv0->ClearReplies();
				tv0->AddReply(508974, 9817, 9842);
				return;
			}
			if (a0 == 9832) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508965);
				tv0->ClearReplies();
				tv0->AddReply(508966, 9834, 9833);
				tv0->AddReply(508971, 9834, 9838);
				return;
			}
			if (a0 == 9834) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508967);
				tv0->ClearReplies();
				tv0->AddReply(508968, 9836, 9835);
				tv0->AddReply(508970, -1, 9837);
				return;
			}
			if (a0 == 9836) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508969);
				tv0->ClearReplies();
				tv0->AddReply(535697, -1, 37369);
				return;
			}
			if (a0 == 9817) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508951);
				tv0->ClearReplies();
				tv0->AddReply(508952, -1, 9818);
				tv0->AddReply(508953, -1, 9819);
				tv0->AddReply(508954, 9821, 9820);
				return;
			}
			if (a0 == 9821) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508955);
				tv0->ClearReplies();
				tv0->AddReply(508956, -1, 9822);
				tv0->AddReply(508957, 9824, 9823);
				return;
			}
			if (a0 == 9824) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508958);
				tv0->ClearReplies();
				tv0->AddReply(508959, 9826, 9825);
				tv0->AddReply(508962, -1, 9828);
				return;
			}
			if (a0 == 9826) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508960);
				tv0->ClearReplies();
				tv0->AddReply(508961, -1, 9827);
				return;
			}
			if (a0 == 9792) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508927);
				tv0->ClearReplies();
				tv0->AddReply(508928, 9794, 9793);
				tv0->AddReply(508941, 9808, 9807);
				return;
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510085);
				tv0->ClearReplies();
				tv0->AddReply(510086, 11117, 11116);
				tv0->AddReply(510106, 11117, 11139);
				tv0->AddReply(510107, 11142, 11141);
				return;
			}
			if (a0 == 11142) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510108);
				tv0->ClearReplies();
				tv0->AddReply(510109, 11117, 11143);
				tv0->AddReply(510110, 11117, 11145);
				return;
			}
			if (a0 == 11117) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510087);
				tv0->ClearReplies();
				tv0->AddReply(510088, 11119, 11118);
				tv0->AddReply(510105, 11121, 11137);
				return;
			}
			if (a0 == 11119) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510089);
				tv0->ClearReplies();
				tv0->AddReply(510090, 11121, 11120);
				tv0->AddReply(510101, 11132, 11131);
				return;
			}
			if (a0 == 11132) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510102);
				tv0->ClearReplies();
				tv0->AddReply(510103, 11121, 11133);
				tv0->AddReply(510104, 11121, 11135);
				return;
			}
			if (a0 == 11121) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510091);
				tv0->ClearReplies();
				tv0->AddReply(510092, 11123, 11122);
				tv0->AddReply(510097, 11128, 11127);
				return;
			}
			if (a0 == 11128) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510098);
				tv0->ClearReplies();
				tv0->AddReply(510099, -1, 11129);
				tv0->AddReply(510100, -1, 11130);
				return;
			}
			if (a0 == 11123) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510093);
				tv0->ClearReplies();
				tv0->AddReply(510094, -1, 11124);
				tv0->AddReply(510095, -1, 11125);
				tv0->AddReply(510096, -1, 11126);
				return;
			}
			if (a0 == 9808) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508942);
				tv0->ClearReplies();
				tv0->AddReply(508943, 9810, 9809);
				return;
			}
			if (a0 == 9810) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508944);
				tv0->ClearReplies();
				tv0->AddReply(508945, -1, 9811);
				tv0->AddReply(508946, 9813, 9812);
				return;
			}
			if (a0 == 9813) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508947);
				tv0->ClearReplies();
				tv0->AddReply(508948, -1, 9814);
				return;
			}
			if (a0 == 9794) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508929);
				tv0->ClearReplies();
				tv0->AddReply(508930, 9796, 9795);
				tv0->AddReply(508938, 9804, 9803);
				return;
			}
			if (a0 == 9804) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508939);
				tv0->ClearReplies();
				tv0->AddReply(508940, 9796, 9805);
				return;
			}
			if (a0 == 9796) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508931);
				tv0->ClearReplies();
				tv0->AddReply(508932, -1, 9797);
				tv0->AddReply(508933, -1, 9798);
				tv0->AddReply(508934, 9800, 9799);
				return;
			}
			if (a0 == 9800) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508935);
				tv0->ClearReplies();
				tv0->AddReply(508936, -1, 9801);
				tv0->AddReply(508937, -1, 9802);
				return;
			}
			if (a0 == 11442) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510377);
				tv0->ClearReplies();
				tv0->AddReply(510378, 11446, 11443);
				tv0->AddReply(510379, 11445, 11444);
				return;
			}
			if (a0 == 11445) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510380);
				tv0->ClearReplies();
				tv0->AddReply(510383, -1, 11448);
				return;
			}
			if (a0 == 11446) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(510381);
				tv0->ClearReplies();
				tv0->AddReply(510382, -1, 11447);
				return;
			}
			if (a0 == 9847) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508978);
				tv0->ClearReplies();
				tv0->AddReply(508979, 9852, 9848);
				tv0->AddReply(508980, 9850, 9849);
				return;
			}
			if (a0 == 9850) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508981);
				tv0->ClearReplies();
				tv0->AddReply(508982, 9852, 9851);
				tv0->AddReply(534335, 9852, 35934);
				return;
			}
			if (a0 == 9852) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508983);
				tv0->ClearReplies();
				tv0->AddReply(508984, 9854, 9853);
				tv0->AddReply(508987, 9857, 9856);
				return;
			}
			if (a0 == 9857) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508988);
				tv0->ClearReplies();
				tv0->AddReply(508989, 9860, 9858);
				return;
			}
			if (a0 == 9860) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508991);
				tv0->ClearReplies();
				tv0->AddReply(508992, 9863, 9861);
				tv0->AddReply(508993, 9865, 9862);
				return;
			}
			if (a0 == 9865) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508996);
				tv0->ClearReplies();
				tv0->AddReply(508997, 9859, 9866);
				return;
			}
			if (a0 == 9863) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508994);
				tv0->ClearReplies();
				tv0->AddReply(508995, 9859, 9864);
				return;
			}
			if (a0 == 9854) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508985);
				tv0->ClearReplies();
				tv0->AddReply(508986, 9859, 9855);
				return;
			}
			if (a0 == 9859) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508990);
				tv0->ClearReplies();
				tv0->AddReply(508998, 9870, 9869);
				return;
			}
			if (a0 == 9870) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(508999);
				tv0->ClearReplies();
				tv0->AddReply(509000, 9873, 9871);
				tv0->AddReply(509011, 9883, 9882);
				return;
			}
			if (a0 == 9883) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(509012);
				tv0->ClearReplies();
				tv0->AddReply(509013, 9873, 9884);
				return;
			}
			if (a0 == 9873) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(509002);
				tv0->ClearReplies();
				tv0->AddReply(509003, 35882, 9874);
				tv0->AddReply(509004, 35882, 9875);
				tv0->AddReply(534288, 35882, 35880);
				return;
			}
			if (a0 == 35882) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(534290);
				tv0->ClearReplies();
				tv0->AddReply(534291, 35887, 35885);
				tv0->AddReply(534292, -1, 35886);
				return;
			}
			if (a0 == 35887) {
				f_d8a_a1_v("Neutral");
				tv0->SetMessage(534293);
				tv0->ClearReplies();
				tv0->AddReply(534294, -1, 35888);
				tv0->AddReply(534295, -1, 35889);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
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
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
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
		f_1d82_a1_v(a0);
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
			if (f_226a_a1_b(tv1) && f_2276_a1_b(tv1)) {
				f_214e_a2_v(tv1, tv0);
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510811);
				tv0->ClearReplies();
				tv0->AddReply(510812, 11147, 11952);
				break;
			}
			f_12af_a1_v("Neutral");
			tv0->SetMessage(510836);
			tv0->ClearReplies();
			if (f_2282_a1_b(tv1) && f_228e_a1_b(tv1)) {
				tv0->AddReply(510839, 11148, 11983);
			}
			if (f_2218_a1_b(tv1)) {
				tv0->AddReply(510838, 10519, 11982);
			}
			if (f_229a_a1_b(tv1)) {
				tv0->AddReply(511508, 12709, 12708);
			}
			if (f_22b8_a1_b(tv1) && f_22d4_a1_b(tv1)) {
				tv0->AddReply(510837, 10553, 11981);
			}
			tv0->AddReply(511480, -1, 12686);
			tv0->AddReply(533048, -1, 34560);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_12af_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a1 == 12081) {
				f_1f52_a2_v(tv1, tv0);
				f_1f75_a2_v(tv1, tv0);
				f_1f7b_a2_v(tv1, tv0);
			}
			if (a1 == 12082) {
				f_1f52_a2_v(tv1, tv0);
				f_1f75_a2_v(tv1, tv0);
				f_1f7b_a2_v(tv1, tv0);
			}
			if (a1 == 12079) {
				f_1f52_a2_v(tv1, tv0);
				f_1f75_a2_v(tv1, tv0);
				f_1f7b_a2_v(tv1, tv0);
			}
			if (a1 == 11191) {
				f_1f52_a2_v(tv1, tv0);
				f_1f75_a2_v(tv1, tv0);
				f_1f7b_a2_v(tv1, tv0);
			}
			if (a1 == 12096) {
				f_1f8b_a2_v(tv1, tv0);
				f_1f91_a2_v(tv1, tv0);
			}
			if (a1 == 12097) {
				f_1f8b_a2_v(tv1, tv0);
				f_20ce_a2_v(tv1, tv0);
			}
			if (a1 == 12105) {
				f_1fbb_a2_v(tv1, tv0);
				f_1fc1_a2_v(tv1, tv0);
			}
			if (a1 == 34559) {
				f_1fc1_a2_v(tv1, tv0);
			}
			if (a1 == 10563) {
				f_1fbb_a2_v(tv1, tv0);
				f_1fc1_a2_v(tv1, tv0);
			}
			if (a1 == 12103) {
				f_1fbb_a2_v(tv1, tv0);
				f_1fc1_a2_v(tv1, tv0);
			}
			if (a1 == 10572) {
				f_1fbb_a2_v(tv1, tv0);
				f_1fc1_a2_v(tv1, tv0);
			}
			if (a1 == 10573) {
				f_1fbb_a2_v(tv1, tv0);
				f_1fc1_a2_v(tv1, tv0);
			}
			if (a0 == 11951) {
				if (f_226a_a1_b(tv1) && f_2276_a1_b(tv1)) {
					f_214e_a2_v(tv1, tv0);
					f_12af_a1_v("Neutral");
					tv0->SetMessage(510811);
					tv0->ClearReplies();
					tv0->AddReply(510812, 11147, 11952);
					return;
				}
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510836);
				tv0->ClearReplies();
				if (f_2282_a1_b(tv1) && f_228e_a1_b(tv1)) {
					tv0->AddReply(510839, 11148, 11983);
				}
				if (f_2218_a1_b(tv1)) {
					tv0->AddReply(510838, 10519, 11982);
				}
				if (f_229a_a1_b(tv1)) {
					tv0->AddReply(511508, 12709, 12708);
				}
				if (f_22b8_a1_b(tv1) && f_22d4_a1_b(tv1)) {
					tv0->AddReply(510837, 10553, 11981);
				}
				tv0->AddReply(511480, -1, 12686);
				tv0->AddReply(533048, -1, 34560);
				return;
			}
			if (a0 == 10553) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509594);
				tv0->ClearReplies();
				tv0->AddReply(509595, 10555, 10554);
				tv0->AddReply(509612, 10555, 10574);
				tv0->AddReply(509613, 10555, 10576);
				return;
			}
			if (a0 == 10555) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509596);
				tv0->ClearReplies();
				tv0->AddReply(509597, 10557, 10556);
				tv0->AddReply(509608, 10571, 10570);
				return;
			}
			if (a0 == 10571) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509609);
				tv0->ClearReplies();
				tv0->AddReply(509610, -1, 10572);
				tv0->AddReply(509611, -1, 10573);
				return;
			}
			if (a0 == 10557) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509598);
				tv0->ClearReplies();
				tv0->AddReply(509599, 10559, 10558);
				tv0->AddReply(509607, 10559, 10568);
				return;
			}
			if (a0 == 10559) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509600);
				tv0->ClearReplies();
				tv0->AddReply(509601, 10561, 10560);
				tv0->AddReply(509605, 10561, 10564);
				tv0->AddReply(509606, 10561, 10566);
				return;
			}
			if (a0 == 10561) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509602);
				tv0->ClearReplies();
				tv0->AddReply(509603, 12104, 10562);
				tv0->AddReply(509604, -1, 10563);
				tv0->AddReply(510944, -1, 12103);
				return;
			}
			if (a0 == 12104) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510945);
				tv0->ClearReplies();
				tv0->AddReply(510946, -1, 12105);
				tv0->AddReply(533047, -1, 34559);
				return;
			}
			if (a0 == 12709) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(511509);
				tv0->ClearReplies();
				tv0->AddReply(511510, 12711, 12710);
				tv0->AddReply(511512, 12713, 12712);
				return;
			}
			if (a0 == 12713) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(511513);
				tv0->ClearReplies();
				tv0->AddReply(511514, 12715, 12714);
				return;
			}
			if (a0 == 12715) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(511515);
				tv0->ClearReplies();
				tv0->AddReply(511516, -1, 12716);
				return;
			}
			if (a0 == 12711) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(511511);
				tv0->ClearReplies();
				tv0->AddReply(511517, 12718, 12717);
				return;
			}
			if (a0 == 12718) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(511518);
				tv0->ClearReplies();
				tv0->AddReply(511519, -1, 12719);
				return;
			}
			if (a0 == 10519) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509567);
				tv0->ClearReplies();
				tv0->AddReply(509568, 10521, 10520);
				tv0->AddReply(509589, 10521, 10545);
				tv0->AddReply(509590, 10548, 10547);
				return;
			}
			if (a0 == 10548) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509591);
				tv0->ClearReplies();
				tv0->AddReply(509592, 10521, 10549);
				tv0->AddReply(509593, 10521, 10551);
				return;
			}
			if (a0 == 10521) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509569);
				tv0->ClearReplies();
				tv0->AddReply(509572, 10525, 10524);
				tv0->AddReply(509570, -1, 10522);
				tv0->AddReply(509571, -1, 10523);
				return;
			}
			if (a0 == 10525) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509573);
				tv0->ClearReplies();
				tv0->AddReply(509574, 10527, 10526);
				tv0->AddReply(509585, 10540, 10539);
				return;
			}
			if (a0 == 10540) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509586);
				tv0->ClearReplies();
				tv0->AddReply(509587, 10527, 10541);
				tv0->AddReply(509588, 10527, 10543);
				return;
			}
			if (a0 == 10527) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509575);
				tv0->ClearReplies();
				tv0->AddReply(509577, 10530, 10529);
				return;
			}
			if (a0 == 10530) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509578);
				tv0->ClearReplies();
				tv0->AddReply(509579, 10532, 10531);
				tv0->AddReply(509583, 10532, 10535);
				tv0->AddReply(509584, 10532, 10537);
				return;
			}
			if (a0 == 10532) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(509580);
				tv0->ClearReplies();
				tv0->AddReply(509581, -1, 10533);
				tv0->AddReply(509582, -1, 10534);
				return;
			}
			if (a0 == 11148) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510112);
				tv0->ClearReplies();
				tv0->AddReply(510115, 11154, 11151);
				return;
			}
			if (a0 == 11154) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510118);
				tv0->ClearReplies();
				tv0->AddReply(510119, 11156, 11155);
				tv0->AddReply(510933, 12088, 12087);
				tv0->AddReply(510124, 11161, 11160);
				return;
			}
			if (a0 == 11161) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510125);
				tv0->ClearReplies();
				tv0->AddReply(510126, 11984, 11162);
				tv0->AddReply(510127, 11984, 11163);
				return;
			}
			if (a0 == 12088) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510934);
				tv0->ClearReplies();
				tv0->AddReply(510935, 12090, 12089);
				return;
			}
			if (a0 == 12090) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510936);
				tv0->ClearReplies();
				tv0->AddReply(510939, 11156, 12093);
				tv0->AddReply(510937, 12092, 12091);
				return;
			}
			if (a0 == 12092) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510938);
				tv0->ClearReplies();
				tv0->AddReply(510943, 11156, 12101);
				return;
			}
			if (a0 == 11156) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510120);
				tv0->ClearReplies();
				tv0->AddReply(510121, 11984, 11157);
				tv0->AddReply(510123, 12094, 11159);
				return;
			}
			if (a0 == 12094) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510940);
				tv0->ClearReplies();
				tv0->AddReply(510122, 11984, 11158);
				return;
			}
			if (a0 == 11984) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510840);
				tv0->ClearReplies();
				tv0->AddReply(510941, -1, 12096);
				tv0->AddReply(510942, -1, 12097);
				return;
			}
			if (a0 == 11147) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510111);
				tv0->ClearReplies();
				tv0->AddReply(510138, 11181, 11180);
				tv0->AddReply(510140, 11183, 11182);
				return;
			}
			if (a0 == 11183) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510141);
				tv0->ClearReplies();
				tv0->AddReply(510142, 11186, 11184);
				tv0->AddReply(510143, 12070, 11185);
				return;
			}
			if (a0 == 12070) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510921);
				tv0->ClearReplies();
				tv0->AddReply(510922, 11181, 12071);
				tv0->AddReply(510923, 12073, 12072);
				return;
			}
			if (a0 == 12073) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510924);
				tv0->ClearReplies();
				tv0->AddReply(510925, 11181, 12074);
				return;
			}
			if (a0 == 11186) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510144);
				tv0->ClearReplies();
				tv0->AddReply(510919, 11175, 12068);
				tv0->AddReply(510920, 11181, 12069);
				return;
			}
			if (a0 == 11181) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510139);
				tv0->ClearReplies();
				tv0->AddReply(510145, 11188, 11187);
				tv0->AddReply(510134, 11175, 11174);
				return;
			}
			if (a0 == 11175) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510135);
				tv0->ClearReplies();
				tv0->AddReply(510136, 12083, 11176);
				tv0->AddReply(510137, 12083, 11178);
				return;
			}
			if (a0 == 12083) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510931);
				tv0->ClearReplies();
				tv0->AddReply(510932, 11188, 12085);
				return;
			}
			if (a0 == 11188) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510146);
				tv0->ClearReplies();
				tv0->AddReply(510147, 11190, 11189);
				tv0->AddReply(510149, -1, 11191);
				return;
			}
			if (a0 == 11190) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510148);
				tv0->ClearReplies();
				tv0->AddReply(510926, 12080, 12078);
				tv0->AddReply(510927, -1, 12079);
				return;
			}
			if (a0 == 12080) {
				f_12af_a1_v("Neutral");
				tv0->SetMessage(510928);
				tv0->ClearReplies();
				tv0->AddReply(510929, -1, 12081);
				tv0->AddReply(510930, -1, 12082);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t17
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t18{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1d82_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t18
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
			f_1814_a1_v("Neutral");
			tv0->SetMessage(511558);
			tv0->ClearReplies();
			if (f_22e0_a1_b(tv1)) {
				tv0->AddReply(511559, 12754, 12753);
			}
			if (f_22ec_a1_b(tv1)) {
				tv0->AddReply(511570, 12765, 12764);
			}
			tv0->AddReply(511589, -1, 12784);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_1814_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a1 == 12763) {
				f_2053_a2_v(tv1, tv0);
				f_1f03_a2_v(tv1, tv0);
				f_1f42_a2_v(tv1, tv0);
			}
			if (a1 == 16728) {
				f_2053_a2_v(tv1, tv0);
				f_1f03_a2_v(tv1, tv0);
				f_1f42_a2_v(tv1, tv0);
			}
			if (a1 == 16725) {
				f_1ed1_a2_v(tv1, tv0);
				f_1f03_a2_v(tv1, tv0);
				f_1f7b_a2_v(tv1, tv0);
			}
			if (a1 == 16724) {
				f_1ee1_a2_v(tv1, tv0);
			}
			if (a1 == 12778) {
				f_2073_a2_v(tv1, tv0);
			}
			if (a1 == 16736) {
				f_2073_a2_v(tv1, tv0);
			}
			if (a1 == 16732) {
				f_2073_a2_v(tv1, tv0);
			}
			if (a0 == 12752) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511558);
				tv0->ClearReplies();
				if (f_22e0_a1_b(tv1)) {
					tv0->AddReply(511559, 12754, 12753);
				}
				if (f_22ec_a1_b(tv1)) {
					tv0->AddReply(511570, 12765, 12764);
				}
				tv0->AddReply(511589, -1, 12784);
				return;
			}
			if (a0 == 12765) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511571);
				tv0->ClearReplies();
				tv0->AddReply(511572, 12767, 12766);
				if (f_21dc_a1_b(tv1)) {
					tv0->AddReply(511585, 16729, 12779);
				}
				return;
			}
			if (a0 == 16729) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(515684);
				tv0->ClearReplies();
				tv0->AddReply(515685, 12767, 16730);
				tv0->AddReply(515686, -1, 16732);
				return;
			}
			if (a0 == 12767) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511573);
				tv0->ClearReplies();
				tv0->AddReply(511574, 12769, 12768);
				tv0->AddReply(515687, 12773, 16733);
				return;
			}
			if (a0 == 12769) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511575);
				tv0->ClearReplies();
				tv0->AddReply(511576, 12771, 12770);
				return;
			}
			if (a0 == 12771) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511577);
				tv0->ClearReplies();
				tv0->AddReply(511578, 12773, 12772);
				tv0->AddReply(511586, 12781, 12780);
				return;
			}
			if (a0 == 12781) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511587);
				tv0->ClearReplies();
				tv0->AddReply(511588, 12773, 12782);
				return;
			}
			if (a0 == 12773) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511579);
				tv0->ClearReplies();
				tv0->AddReply(511580, 12775, 12774);
				return;
			}
			if (a0 == 12775) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511581);
				tv0->ClearReplies();
				tv0->AddReply(511582, 12777, 12776);
				tv0->AddReply(515688, -1, 16735);
				return;
			}
			if (a0 == 12777) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511583);
				tv0->ClearReplies();
				tv0->AddReply(511584, -1, 12778);
				tv0->AddReply(515689, -1, 16736);
				return;
			}
			if (a0 == 12754) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511560);
				tv0->ClearReplies();
				tv0->AddReply(511561, 12756, 12755);
				tv0->AddReply(515680, -1, 16724);
				return;
			}
			if (a0 == 12756) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511562);
				tv0->ClearReplies();
				tv0->AddReply(511563, 12758, 12757);
				tv0->AddReply(515681, -1, 16725);
				return;
			}
			if (a0 == 12758) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511564);
				tv0->ClearReplies();
				tv0->AddReply(511565, 12760, 12759);
				tv0->AddReply(515682, 12762, 16726);
				return;
			}
			if (a0 == 12760) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511566);
				tv0->ClearReplies();
				tv0->AddReply(511567, 12762, 12761);
				return;
			}
			if (a0 == 12762) {
				f_1814_a1_v("Neutral");
				tv0->SetMessage(511568);
				tv0->ClearReplies();
				tv0->AddReply(511569, -1, 12763);
				tv0->AddReply(515683, -1, 16728);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t19
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t20{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1d82_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t20
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
			f_1abf_a1_v("Neutral");
			tv0->SetMessage(513660);
			tv0->ClearReplies();
			if (f_2370_a1_b(tv1) && f_2358_a1_b(tv1)) {
				tv0->AddReply(513661, 14920, 14919);
			}
			if (f_237c_a1_b(tv1) && f_2364_a1_b(tv1) && !f_23ac_a1_b(tv1)) {
				tv0->AddReply(513669, 14928, 14927);
			}
			if (f_2364_a1_b(tv1) && f_2388_a1_b(tv1) && !f_23a0_a1_b(tv1)) {
				tv0->AddReply(513683, 14944, 14943);
			}
			tv0->AddReply(513674, -1, 14932);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_1abf_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a1 == 14919) {
				f_2091_a2_v(tv1, tv0);
			}
			if (a1 == 14927) {
				f_2097_a2_v(tv1, tv0);
			}
			if (a1 == 14931) {
				f_208b_a2_v(tv1, tv0);
			}
			if (a1 == 14943) {
				f_209d_a2_v(tv1, tv0);
			}
			if (a0 == 14918) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513660);
				tv0->ClearReplies();
				if (f_2370_a1_b(tv1) && f_2358_a1_b(tv1)) {
					tv0->AddReply(513661, 14920, 14919);
				}
				if (f_237c_a1_b(tv1) && f_2364_a1_b(tv1) && !f_23ac_a1_b(tv1)) {
					tv0->AddReply(513669, 14928, 14927);
				}
				if (f_2364_a1_b(tv1) && f_2388_a1_b(tv1) && !f_23a0_a1_b(tv1)) {
					tv0->AddReply(513683, 14944, 14943);
				}
				tv0->AddReply(513674, -1, 14932);
				return;
			}
			if (a0 == 14944) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513684);
				tv0->ClearReplies();
				tv0->AddReply(513685, 14946, 14945);
				return;
			}
			if (a0 == 14946) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513686);
				tv0->ClearReplies();
				tv0->AddReply(513687, -1, 14947);
				return;
			}
			if (a0 == 14928) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513670);
				tv0->ClearReplies();
				tv0->AddReply(513671, 14930, 14929);
				tv0->AddReply(513675, 14930, 14933);
				return;
			}
			if (a0 == 14930) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513672);
				tv0->ClearReplies();
				tv0->AddReply(513673, -1, 14931);
				return;
			}
			if (a0 == 14920) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513662);
				tv0->ClearReplies();
				tv0->AddReply(513663, 14922, 14921);
				tv0->AddReply(513677, 14937, 14936);
				return;
			}
			if (a0 == 14937) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513678);
				tv0->ClearReplies();
				tv0->AddReply(513679, 14924, 14938);
				tv0->AddReply(513680, 14922, 14940);
				return;
			}
			if (a0 == 14922) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513664);
				tv0->ClearReplies();
				tv0->AddReply(513665, 14924, 14923);
				return;
			}
			if (a0 == 14924) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513666);
				tv0->ClearReplies();
				tv0->AddReply(513667, 14926, 14925);
				return;
			}
			if (a0 == 14926) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513668);
				tv0->ClearReplies();
				tv0->AddReply(513676, 14941, 14935);
				return;
			}
			if (a0 == 14941) {
				f_1abf_a1_v("Neutral");
				tv0->SetMessage(513681);
				tv0->ClearReplies();
				tv0->AddReply(513682, -1, 14942);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t21
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_1d93_a1_b(f_1e40_a0_o());
		if (!f_1d3e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1ea2_a0_i());
		L0->SetNPCDescription(f_1ea0_a0_i());
		L0->SetPhoto(f_1ea4_a0_s());
		L0->SetPhoto2(f_1ea6_a0_s());
		L0->SetPlayerName(f_2506_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t22{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1d82_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t22
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
			f_1cb5_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_1ea8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1d_a1_v(tv2);
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

	void f_1cb5_a1_v(string a0)
	{
		if (!f_1ea8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e24_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e39_a0_v();
			if (a0 == 42551) {
				f_1cb5_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_1ea8_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t23
{
	void init(void)
	{
		g1 = false;
		f_1cfc_a0_v();
	}

	void f_1cfc_a0_v(void)
	{
		if (!f_1d39_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1e1d_a1_v("Neutral");
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
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1d30_a1_b(a0);
			enable OnUse;
			f_2517_a1_v(a0);
		}
	}
}

bool f_1d26_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1d30_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1d26_a1_b(L0);
}

bool f_1d39_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1d3e_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1e46_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1ea8_a0_b()) {
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

void f_1d82_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1ea8_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1d93_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1dcd_a1_b(a0)) {
			if (!f_1df2_a1_b(a0)) {
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
		if (!f_1df2_a1_b(a0)) {
			if (!f_1dcd_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1dcd_a1_b(object a0)
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
	return f_1e2a_a1_b(L4);
}

bool f_1df2_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1e7e_a0_i() + "m";
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
	return f_1e2a_a1_b(L4);
}

void f_1e1d_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1e24_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1e2a_a1_b(string a0)
{
	if (f_1ea8_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1e39_a0_v(void)
{
	if (f_1ea8_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1e40_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1e46_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1e50_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1e55_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_1e66_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_1e6d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1e79_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1e7e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1e87_a1_b(int a0)
{
	return f_1e7e_a0_i() == a0;
}

bool f_1e8d_a1_b(int a0)
{
	float L0;
	int L1;
	int L2;
	@GetGameTime(L0);
	L1 = 1 + (int)(L0 / 24);
	if (L1 != a0) {
		return false;
	}
	L2 = (int)L0 % 24;
	return L2 < 7;
}

int f_1ea0_a0_i(void)
{
	return 515531;
}

int f_1ea2_a0_i(void)
{
	return 502857;
}

string f_1ea4_a0_s(void)
{
	return "ui/NPC_BigVlad.png";
}

string f_1ea6_a0_s(void)
{
	return "ui/NPC_BigVlad_b.png";
}

bool f_1ea8_a0_b(void)
{
	return true;
}

void f_1eaa_a2_v(object a0, object a1)
{
	if (f_1e50_a1_i("d2q01BigVladVisit") != 0 && f_1e50_a1_i("d2q01GeorgVisit") != 0) {
		f_240f_a0_v();
	}
}

void f_1ec1_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad1", 1);
}

void f_1ec7_a2_v(object a0, object a1)
{
	f_241c_a0_v();
	f_1e6d_a2_b("quest_d3_01", "fail");
}

void f_1ed1_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_24d4_a0_o();
	L0->AddMark("d5q01BigVladGotoLara", "pt_map_lara", 1, 511959, f_1e79_a0_f());
}

void f_1ee1_a2_v(object a0, object a1)
{
	f_2477_a0_v();
	f_1e6d_a2_b("quest_d5_01", "fail");
}

void f_1eeb_a2_v(object a0, object a1)
{
	@SetVariable("ood2BigVlad1", 1);
}

void f_1ef1_a2_v(object a0, object a1)
{
	@SetVariable("ood2BigVlad2", 1);
}

void f_1ef7_a2_v(object a0, object a1)
{
	@SetVariable("ood2BigVlad3", 1);
}

void f_1efd_a2_v(object a0, object a1)
{
	@SetVariable("ood2BigVlad4", 1);
}

void f_1f03_a2_v(object a0, object a1)
{
	f_1e6d_a2_b("quest_d5_01", "factory");
}

void f_1f0a_a2_v(object a0, object a1)
{
	@SetVariable("d2q01BigVladVisit", 1);
	f_2402_a0_v();
}

void f_1f13_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_1f19_a2_v(object a0, object a1)
{
	@SetVariable("d3q01HelpBurah", 1);
}

void f_1f1f_a2_v(object a0, object a1)
{
	@SetVariable("ood3BigVlad2", 1);
}

void f_1f25_a2_v(object a0, object a1)
{
	@SetVariable("ood3BigVlad3", 1);
}

void f_1f2b_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 6);
	L0 = f_24d4_a0_o();
	L0->AddMark("d3q01BigVladAgreed", "pt_map_ospina", 1, 515300, f_1e79_a0_f());
	f_2429_a0_v();
}

void f_1f42_a2_v(object a0, object a1)
{
	f_24e5_a3_v(f_24d4_a0_o(), "pt_map_alexandr", 2);
	a1->ShowMap(f_24d4_a0_o());
}

void f_1f52_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01", 1);
	L0 = f_24d4_a0_o();
	L0->AddMark("d4q01BigVladGotoLara", "pt_map_lara", 1, 511481, f_1e79_a0_f());
	L0->AddMark("d4q01BigVladGotoSklad", "pt_map_warehouse_gangster", 1, 511482, f_1e79_a0_f());
	f_2436_a0_v();
	f_2443_a0_v();
}

void f_1f75_a2_v(object a0, object a1)
{
	@SetVariable("ood4BigVlad1", 1);
}

void f_1f7b_a2_v(object a0, object a1)
{
	f_24e5_a3_v(f_24d4_a0_o(), "pt_map_lara", 2);
	a1->ShowMap(f_24d4_a0_o());
}

void f_1f8b_a2_v(object a0, object a1)
{
	@SetVariable("ood4BigVlad2", 1);
}

void f_1f91_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01", 4);
	L0 = f_24d4_a0_o();
	L0->AddMark("d4q01BigVladGotoSobor", "pt_map_sobor", 1, 515325, f_1e79_a0_f());
	L0->AddMark("d4q01BigVladGotoTheater", "pt_map_theater", 1, 515326, f_1e79_a0_f());
	f_2450_a0_v();
	f_1e6d_a2_b("quest_d4_01", "pers");
	f_1e6d_a2_b("quest_d4_01", "key_actors");
}

void f_1fbb_a2_v(object a0, object a1)
{
	@SetVariable("ood4BigVlad3", 1);
}

void f_1fc1_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_24d4_a0_o();
	L0->FindMark(L1, "d4q01BigVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MladVladgotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSklad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSobor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MladVladGotoMat");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoTheater");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MatGotoBoiny");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q04MladVladGotoMark");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01OspinaGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01WastedMale");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01Whitemask");
	if (L1) {
		L1->Remove();
	}
	f_245d_a0_v();
	f_1e6d_a2_b("quest_d4_01", "completed");
	a0->RemoveItemByType(L2, "d4q01_sobor_key", 1);
	a0->RemoveItemByType(L2, "d4q01_theater_key", 1);
	f_1e55_a2_v("theater@door1", true);
	f_1e55_a2_v("sobor@door1", true);
}

void f_2053_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 2);
	L0 = f_24d4_a0_o();
	L0->AddMark("d5q01BigVladGotoAlexandr", "pt_map_alexandr", 1, 511957, f_1e79_a0_f());
	L0->AddMark("d5q01BigVladGotoLara", "pt_map_lara", 1, 511959, f_1e79_a0_f());
	f_2484_a0_v();
}

void f_2073_a2_v(object a0, object a1)
{
	@SetVariable("ood5BigVlad1", 1);
}

void f_2079_a2_v(object a0, object a1)
{
	@SetVariable("ood6BigVlad1", 1);
}

void f_207f_a2_v(object a0, object a1)
{
	@SetVariable("ood6BigVlad2", 1);
}

void f_2085_a2_v(object a0, object a1)
{
	@SetVariable("KnowBigVlad", 1);
}

void f_208b_a2_v(object a0, object a1)
{
	@SetVariable("d8q01BigVladIsVictim", 1);
}

void f_2091_a2_v(object a0, object a1)
{
	@SetVariable("ood8BigVlad1", 1);
}

void f_2097_a2_v(object a0, object a1)
{
	@SetVariable("ood8BigVlad2", 1);
}

void f_209d_a2_v(object a0, object a1)
{
	@SetVariable("ood8BigVlad3", 1);
}

void f_20a3_a2_v(object a0, object a1)
{
	@SetVariable("ood6BigVlad3", 1);
}

void f_20a9_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_24d4_a0_o();
	L0->AddMark("d6q01BigVladGotoAnna", "pt_map_anna", 1, 515390, f_1e79_a0_f());
	L0->AddMark("d6q01BigVladGotoOspina", "pt_map_ospina", 1, 515389, f_1e79_a0_f());
	L0->AddMark("d6q01BigVladGotoAnnaOspinaSelf", "pt_map_bigvlad", 1, 515391, f_1e79_a0_f());
	f_2491_a0_v();
}

void f_20ce_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_24d4_a0_o();
	L0->FindMark(L1, "d4q01BigVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MladVladgotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSklad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSobor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MladVladGotoMat");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoTheater");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MatGotoBoiny");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q04MladVladGotoMark");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01OspinaGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01WastedMale");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01Whitemask");
	if (L1) {
		L1->Remove();
	}
	f_246a_a0_v();
	f_1e6d_a2_b("quest_d4_01", "failed");
}

void f_214e_a2_v(object a0, object a1)
{
	@SetVariable("d4BigVladVisit", 1);
}

void f_2154_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_24d4_a0_o();
	L0->AddMark("d6q02BigVlad", "pt_map_bigvlad", 0, 515380, f_1e79_a0_f());
	f_249e_a0_v();
}

void f_2167_a2_v(object a0, object a1)
{
	@SetVariable("d6BigVladVisit", 1);
}

void f_216d_a2_v(object a0, object a1)
{
	@SetVariable("d1q01", 6);
	f_23f5_a0_v();
	f_1e6d_a2_b("quest_d1_01", "place_morlok_run");
}

bool f_217b_a1_b(object a0)
{
	if (f_1e50_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_2187_a1_b(object a0)
{
	if (f_1e50_a1_i("ood1BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2193_a1_b(object a0)
{
	if (f_1e50_a1_i("d1q01") == 5) {
		return true;
	}
	return false;
}

bool f_219f_a1_b(object a0)
{
	if (f_1e50_a1_i("d1q01") == 6) {
		return true;
	}
	return false;
}

bool f_21ab_a1_b(object a0)
{
	if (!(f_1e50_a1_i("d3q02") == 1000) && !(f_1e50_a1_i("d3q02") == 0) && !(f_1e50_a1_i("d3q02") == -1)) {
		return true;
	}
	return false;
}

bool f_21d0_a1_b(object a0)
{
	if (f_1e50_a1_i("ood1BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_21dc_a1_b(object a0)
{
	if (f_1e50_a1_i("KnowMat") == 1) {
		return true;
	}
	return false;
}

bool f_21e8_a1_b(object a0)
{
	if (f_1e50_a1_i("ood2BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_21f4_a1_b(object a0)
{
	if (f_1e50_a1_i("ood2BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2200_a1_b(object a0)
{
	if (f_1e50_a1_i("ood2BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_220c_a1_b(object a0)
{
	if (f_1e50_a1_i("ood2BigVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_2218_a1_b(object a0)
{
	if (f_23f2_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2222_a1_b(object a0)
{
	if (f_1e50_a1_i("d2q01") == 0) {
		return true;
	}
	return false;
}

bool f_222e_a1_b(object a0)
{
	if (f_1e50_a1_i("d2q01") == 6) {
		return true;
	}
	return false;
}

bool f_223a_a1_b(object a0)
{
	if (f_1e50_a1_i("d3q01") == 3) {
		return true;
	}
	return false;
}

bool f_2246_a1_b(object a0)
{
	if (f_1e50_a1_i("ood3BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2252_a1_b(object a0)
{
	if (f_1e50_a1_i("ood3BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_225e_a1_b(object a0)
{
	if (f_1e50_a1_i("ood3BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_226a_a1_b(object a0)
{
	if (f_1e50_a1_i("d4q01") == 0) {
		return true;
	}
	return false;
}

bool f_2276_a1_b(object a0)
{
	if (f_1e50_a1_i("ood4BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2282_a1_b(object a0)
{
	if (f_1e50_a1_i("d4q01") == 3) {
		return true;
	}
	return false;
}

bool f_228e_a1_b(object a0)
{
	if (f_1e50_a1_i("ood4BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_229a_a1_b(object a0)
{
	if (!f_1e66_a2_b(a0, "d4q01_sobor_key") || !f_1e66_a2_b(a0, "d4q01_theater_key")) {
		if (f_1e50_a1_i("d4q01") == 4) {
			return true;
		}
	}
	return false;
}

bool f_22b8_a1_b(object a0)
{
	if (f_1e66_a2_b(a0, "d4q01_sobor_key") && f_1e66_a2_b(a0, "d4q01_theater_key")) {
		if (f_1e50_a1_i("d4q01") == 4) {
			return true;
		}
	}
	return false;
}

bool f_22d4_a1_b(object a0)
{
	if (f_1e50_a1_i("ood4BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_22e0_a1_b(object a0)
{
	if (f_1e50_a1_i("d5q01") == 1) {
		return true;
	}
	return false;
}

bool f_22ec_a1_b(object a0)
{
	if (f_1e50_a1_i("ood5BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_22f8_a1_b(object a0)
{
	if (f_1e50_a1_i("d6q02") == 0) {
		return true;
	}
	return false;
}

bool f_2304_a1_b(object a0)
{
	if (f_1e50_a1_i("d6q02") == 1000) {
		return true;
	}
	return false;
}

bool f_2310_a1_b(object a0)
{
	if (f_1e50_a1_i("d6q02") == -1) {
		return true;
	}
	return false;
}

bool f_231c_a1_b(object a0)
{
	if (f_1e50_a1_i("ood6BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2328_a1_b(object a0)
{
	if (f_1e50_a1_i("d6q02KnowAboutAttack") == 1) {
		return true;
	}
	return false;
}

bool f_2334_a1_b(object a0)
{
	if (f_1e50_a1_i("d6q02Trigger") != 0) {
		return true;
	}
	return false;
}

bool f_2340_a1_b(object a0)
{
	if (f_1e50_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_234c_a1_b(object a0)
{
	if (f_1e50_a1_i("ood6BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2358_a1_b(object a0)
{
	if (f_1e50_a1_i("d8q01MladVladIsBad") == 1) {
		return true;
	}
	return false;
}

bool f_2364_a1_b(object a0)
{
	if (f_1e50_a1_i("d8q01BringBadBoy") == 1) {
		return true;
	}
	return false;
}

bool f_2370_a1_b(object a0)
{
	if (f_1e50_a1_i("ood8BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_237c_a1_b(object a0)
{
	if (f_1e50_a1_i("ood8BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2388_a1_b(object a0)
{
	if (f_1e50_a1_i("ood8BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2394_a1_b(object a0)
{
	if (f_1e50_a1_i("ood6BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_23a0_a1_b(object a0)
{
	if (f_1e50_a1_i("d8q01BigVladIsVictim") == 1) {
		return true;
	}
	return false;
}

bool f_23ac_a1_b(object a0)
{
	if (f_1e50_a1_i("d8q01MladVladIsVictim") == 1) {
		return true;
	}
	return false;
}

bool f_23b8_a1_b(object a0)
{
	if (f_1e50_a1_i("d6BigVladVisit") == 1) {
		return true;
	}
	return false;
}

bool f_23c4_a1_b(object a0)
{
	if (f_1e50_a1_i("d2KnowBigVladIsBad") == 1) {
		return true;
	}
	return false;
}

bool f_23d0_a1_b(object a0)
{
	if (f_1e50_a1_i("d1q01") != 0 || f_1e50_a1_i("d1q01") != 1000 || f_1e50_a1_i("d1q01") != -1) {
		return true;
	}
	return false;
}

bool f_23f2_a1_b(object a0)
{
	return false;
}

void f_23f5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 619, 1, 532193);
	f_24b8_a2_b(L0, 2);
}

void f_2402_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 627, 1, 532756);
	f_24b8_a2_b(L0, 10);
}

void f_240f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 628, 1, 532757);
	f_24b8_a2_b(L0, 10);
}

void f_241c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 677, 1, 534363);
	f_24b8_a2_b(L0, 25);
}

void f_2429_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 135, 1, 515298);
	f_24b8_a2_b(L0, 25);
}

void f_2436_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 20, 1, 503360);
	f_24b8_a2_b(L0, -1);
}

void f_2443_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 87, 1, 512169);
	f_24b8_a2_b(L0, 20);
}

void f_2450_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 89, 1, 512171);
	f_24b8_a2_b(L0, 20);
}

void f_245d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 90, 1, 512172);
	f_24b8_a2_b(L0, 20);
}

void f_246a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 91, 1, 512173);
	f_24b8_a2_b(L0, 20);
}

void f_2477_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 713, 1, 536321);
	f_24b8_a2_b(L0, 139);
}

void f_2484_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 141, 1, 515341);
	f_24b8_a2_b(L0, 139);
}

void f_2491_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 115, 1, 513738);
	f_24b8_a2_b(L0, 111);
}

void f_249e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 264, 2, 521051);
	f_24b8_a2_b(L0, 102);
}

object f_24ab_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_24b8_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_24ab_a0_o();
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

object f_24d4_a0_o(void)
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

void f_24e5_a3_v(object a0, string a1, float a2)
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

int f_2506_a0_i(void)
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

void f_2517_a1_v(object a0)
{
	if (!g1) {
		t7{a0};
		g1 = true;
	}
	if (f_1e8d_a1_b(4)) {
		t5{a0};
		return;
	}
	if (f_1e87_a1_b(1)) {
		t1{a0};
		return;
	}
	if (f_1e87_a1_b(2)) {
		t11{a0};
		return;
	}
	if (f_1e87_a1_b(3)) {
		t13{a0};
		return;
	}
	if (f_1e87_a1_b(4)) {
		t15{a0};
		return;
	}
	if (f_1e87_a1_b(5)) {
		t17{a0};
		return;
	}
	if (f_1e87_a1_b(6)) {
		t9{a0};
		return;
	}
	if (f_1e87_a1_b(8)) {
		t19{a0};
		return;
	}
	if (f_1e87_a1_b(12)) {
		t3{a0};
		return;
	}
	t21{a0};
}

