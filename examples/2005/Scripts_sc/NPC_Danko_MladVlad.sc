event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event OnTimer 7;
event evt_11 11;

var string g0;
var object g1;
var bool g2;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_26b8_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var bool tv0;

	bool init(Vector a0, Vector a1)
	{
		bool L0;
		tv0 = true;
		@SetTimer(21, 0.5);
		for (; ; ) {
			while (!f_269a_a1_b(a0)) {
			}
			@MovePoint(a0, false, L0);
			if (L0) {
				break;
			}
		}
		@KillTimer(20);
		@KillTimer(21);
		tv0 = false;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return false;
		}
		@Rotate(a1.x, a1.z, L0);
		if (!L0) {
			return false;
		}
		return true;
	}

	void OnUnload(void)
	{
		tv0 = true;
		f_91_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_91_a0_v();
			disable OnUse;
			f_26a4_a1_b(a0);
			enable OnUse;
			f_2fdd_a1_v(a0);
			tv0 = false;
		}
	}

	void OnCollision(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			f_91_a0_v();
			t2{a0};
			tv0 = false;
			@SetTimer(20, 10.0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 20) {
			tv0 = true;
			@KillTimer(20);
		} else {
			if (a0 == 21) {
				if (tv0) {
					object L0;
					@FindActor(L0, "player");
					if (L0 && f_2669_a1_f(L0) <= 62500.0) {
						OnCollision(L0);
					}
				}
			}
		}
	}

	void f_91_a0_v(void)
	{
		@Stop();
	}
}

task t2
{
	void init(object a0)
	{
		bool L0;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return;
		}
		f_26ad_a1_v(a0);
		@Sleep(6);
	}

	void OnUnload(void)
	{
		f_c1_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_c1_a0_v();
			disable OnUse;
			f_26a4_a1_b(a0);
			enable OnUse;
			f_2fdd_a1_v(a0);
		}
	}

	void f_c1_a0_v(void)
	{
		@StopGroup0();
		@StopAnimation();
	}
}

task t3
{
	void init(int a0)
	{
		string L0;
		bool L1;
		if (a0) {
			L0 = "ptidle" + a0;
		} else {
			L0 = "ptidle";
		}
		@HasProperty(L0, L1);
		if (L1) {
			string L2;
			int L3;
			int L4;
			@GetProperty(L0, L2);
			L3 = f_108_a1_i(L2);
			@irand(L4, L3);
			@PlayAnimation("all", f_100_a2_s(L2, L4));
			@WaitForAnimEnd();
		} else {
			int L5;
			L5 = f_289a_a0_i();
			if (L5) {
				int L6;
				@irand(L6, L5);
				@PlayAnimation("all", f_2893_a1_s(L6));
				@WaitForAnimEnd();
			}
		}
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	string f_100_a2_s(string a0, int a1)
	{
		return a1 == 0 ? a0 : a0 + a1;
	}

	int f_108_a1_i(string a0)
	{
		int L0;
		for (L0 = 0; ; L0 = L0 + 1) {
			bool L1;
			@HasAnimation(L1, "all", f_100_a2_s(a0, L0));
			if (!L1) {
				break;
			}
		}
		return L0;
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
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
		f_2701_a1_v(a0);
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
			if (f_2c20_a1_b(tv1) && f_2bf0_a1_b(tv1) && f_2e24_a1_b(tv1)) {
				f_2945_a2_v(tv1, tv0);
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532641);
				tv0->ClearReplies();
				tv0->AddReply(532642, 34105, 34104);
				tv0->AddReply(532687, 34161, 34160);
				break;
			}
			f_21e_a1_v("Neutral");
			tv0->SetMessage(531953);
			tv0->ClearReplies();
			if (f_2c2c_a1_b(tv1) && f_2e24_a1_b(tv1)) {
				tv0->AddReply(532702, 34178, 34177);
			}
			if (f_2c14_a1_b(tv1)) {
				tv0->AddReply(531954, 33359, 33358);
			}
			if (f_2bf0_a1_b(tv1) && !f_2c20_a1_b(tv1)) {
				tv0->AddReply(532699, 34175, 34174);
			}
			if (!f_2c08_a1_b(tv1) && f_2c38_a1_b(tv1) && f_2bfc_a1_b(tv1)) {
				tv0->AddReply(532691, 34166, 34165);
			}
			tv0->AddReply(531960, -1, 33364);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_21e_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 34118) {
				f_28f9_a2_v(tv1, tv0);
				f_29f9_a2_v(tv1, tv0);
			}
			if (a1 == 34177) {
				f_294b_a2_v(tv1, tv0);
			}
			if (a1 == 33363) {
				f_2937_a2_v(tv1, tv0);
			}
			if (a1 == 33362) {
				f_2937_a2_v(tv1, tv0);
			}
			if (a1 == 35191) {
				f_2937_a2_v(tv1, tv0);
			}
			if (a1 == 34176) {
				f_28f9_a2_v(tv1, tv0);
			}
			if (a1 == 34165) {
				f_2951_a2_v(tv1, tv0);
			}
			if (a1 == 34169) {
				f_2921_a2_v(tv1, tv0);
				f_28ef_a2_v(tv1, tv0);
			}
			if (a1 == 34170) {
				f_2921_a2_v(tv1, tv0);
				f_2a19_a2_v(tv1, tv0);
			}
			if (a0 == 34103) {
				if (f_2c20_a1_b(tv1) && f_2bf0_a1_b(tv1) && f_2e24_a1_b(tv1)) {
					f_2945_a2_v(tv1, tv0);
					f_21e_a1_v("Neutral");
					tv0->SetMessage(532641);
					tv0->ClearReplies();
					tv0->AddReply(532642, 34105, 34104);
					tv0->AddReply(532687, 34161, 34160);
					return;
				}
				f_21e_a1_v("Neutral");
				tv0->SetMessage(531953);
				tv0->ClearReplies();
				if (f_2c2c_a1_b(tv1) && f_2e24_a1_b(tv1)) {
					tv0->AddReply(532702, 34178, 34177);
				}
				if (f_2c14_a1_b(tv1)) {
					tv0->AddReply(531954, 33359, 33358);
				}
				if (f_2bf0_a1_b(tv1) && !f_2c20_a1_b(tv1)) {
					tv0->AddReply(532699, 34175, 34174);
				}
				if (!f_2c08_a1_b(tv1) && f_2c38_a1_b(tv1) && f_2bfc_a1_b(tv1)) {
					tv0->AddReply(532691, 34166, 34165);
				}
				tv0->AddReply(531960, -1, 33364);
				return;
			}
			if (a0 == 34166) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532692);
				tv0->ClearReplies();
				tv0->AddReply(532693, 34168, 34167);
				tv0->AddReply(532698, 34168, 34172);
				return;
			}
			if (a0 == 34168) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532694);
				tv0->ClearReplies();
				tv0->AddReply(532695, -1, 34169);
				tv0->AddReply(532696, -1, 34170);
				tv0->AddReply(532697, -1, 34171);
				return;
			}
			if (a0 == 34175) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532700);
				tv0->ClearReplies();
				tv0->AddReply(532701, -1, 34176);
				return;
			}
			if (a0 == 33359) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(531955);
				tv0->ClearReplies();
				tv0->AddReply(533638, 35163, 35162);
				tv0->AddReply(533643, 35168, 35167);
				return;
			}
			if (a0 == 35168) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533644);
				tv0->ClearReplies();
				tv0->AddReply(533645, 35170, 35169);
				tv0->AddReply(533647, 35170, 35171);
				return;
			}
			if (a0 == 35170) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533646);
				tv0->ClearReplies();
				tv0->AddReply(533648, 35165, 35173);
				tv0->AddReply(533649, 35165, 35174);
				return;
			}
			if (a0 == 35163) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533639);
				tv0->ClearReplies();
				tv0->AddReply(533640, 35165, 35164);
				return;
			}
			if (a0 == 35165) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533641);
				tv0->ClearReplies();
				tv0->AddReply(533642, 35175, 35166);
				tv0->AddReply(533655, 35183, 35182);
				return;
			}
			if (a0 == 35183) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533656);
				tv0->ClearReplies();
				tv0->AddReply(533657, 35188, 35184);
				tv0->AddReply(533658, 35177, 35185);
				return;
			}
			if (a0 == 35188) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533659);
				tv0->ClearReplies();
				tv0->AddReply(533660, 35177, 35189);
				return;
			}
			if (a0 == 35175) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533650);
				tv0->ClearReplies();
				tv0->AddReply(533651, 35177, 35176);
				tv0->AddReply(533654, 35177, 35179);
				return;
			}
			if (a0 == 35177) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533652);
				tv0->ClearReplies();
				tv0->AddReply(533653, 33361, 35178);
				return;
			}
			if (a0 == 33361) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(531957);
				tv0->ClearReplies();
				tv0->AddReply(531959, -1, 33363);
				tv0->AddReply(531958, -1, 33362);
				tv0->AddReply(533661, -1, 35191);
				return;
			}
			if (a0 == 34178) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532703);
				tv0->ClearReplies();
				tv0->AddReply(532704, 34180, 34179);
				tv0->AddReply(533589, 35104, 35107);
				return;
			}
			if (a0 == 34180) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532705);
				tv0->ClearReplies();
				tv0->AddReply(532706, 34182, 34181);
				tv0->AddReply(532712, 34182, 34187);
				tv0->AddReply(533586, 35104, 35103);
				return;
			}
			if (a0 == 35104) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(533587);
				tv0->ClearReplies();
				tv0->AddReply(533588, 34182, 35105);
				return;
			}
			if (a0 == 34182) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532707);
				tv0->ClearReplies();
				tv0->AddReply(532708, 34184, 34183);
				return;
			}
			if (a0 == 34184) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532709);
				tv0->ClearReplies();
				tv0->AddReply(532710, -1, 34185);
				tv0->AddReply(532711, -1, 34186);
				return;
			}
			if (a0 == 34161) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532688);
				tv0->ClearReplies();
				tv0->AddReply(532689, 34105, 34162);
				tv0->AddReply(532690, -1, 34164);
				return;
			}
			if (a0 == 34105) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532643);
				tv0->ClearReplies();
				tv0->AddReply(532644, 34107, 34106);
				tv0->AddReply(532680, 34151, 34150);
				tv0->AddReply(532686, 34151, 34158);
				return;
			}
			if (a0 == 34151) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532681);
				tv0->ClearReplies();
				tv0->AddReply(532682, 34107, 34152);
				tv0->AddReply(532683, 34155, 34154);
				return;
			}
			if (a0 == 34155) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532684);
				tv0->ClearReplies();
				tv0->AddReply(532685, 34107, 34156);
				return;
			}
			if (a0 == 34107) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532645);
				tv0->ClearReplies();
				tv0->AddReply(532646, 34109, 34108);
				tv0->AddReply(532677, 34147, 34146);
				return;
			}
			if (a0 == 34147) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532678);
				tv0->ClearReplies();
				tv0->AddReply(532679, 34109, 34148);
				return;
			}
			if (a0 == 34109) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532647);
				tv0->ClearReplies();
				tv0->AddReply(532648, 34111, 34110);
				tv0->AddReply(532674, 34143, 34142);
				return;
			}
			if (a0 == 34143) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532675);
				tv0->ClearReplies();
				tv0->AddReply(532676, 34111, 34144);
				return;
			}
			if (a0 == 34111) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532649);
				tv0->ClearReplies();
				tv0->AddReply(532650, 34113, 34112);
				tv0->AddReply(532667, 34133, 34132);
				return;
			}
			if (a0 == 34133) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532668);
				tv0->ClearReplies();
				tv0->AddReply(532669, 34113, 34134);
				tv0->AddReply(532670, 34137, 34136);
				return;
			}
			if (a0 == 34137) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532671);
				tv0->ClearReplies();
				tv0->AddReply(532672, 34113, 34138);
				tv0->AddReply(532673, 34113, 34140);
				return;
			}
			if (a0 == 34113) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532651);
				tv0->ClearReplies();
				tv0->AddReply(532652, 34115, 34114);
				tv0->AddReply(532663, 34127, 34126);
				return;
			}
			if (a0 == 34127) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532664);
				tv0->ClearReplies();
				tv0->AddReply(532665, 34115, 34128);
				tv0->AddReply(532666, 34117, 34130);
				return;
			}
			if (a0 == 34115) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532653);
				tv0->ClearReplies();
				tv0->AddReply(532654, 34117, 34116);
				tv0->AddReply(532658, 34121, 34120);
				return;
			}
			if (a0 == 34121) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532659);
				tv0->ClearReplies();
				tv0->AddReply(532660, 34117, 34122);
				tv0->AddReply(532662, -1, 34125);
				return;
			}
			if (a0 == 34117) {
				f_21e_a1_v("Neutral");
				tv0->SetMessage(532655);
				tv0->ClearReplies();
				tv0->AddReply(532656, -1, 34118);
				tv0->AddReply(532657, -1, 34119);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
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
		f_2701_a1_v(a0);
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
			f_6ae_a1_v("Neutral");
			tv0->SetMessage(535677);
			tv0->ClearReplies();
			tv0->AddReply(535678, 42150, 37364);
			tv0->AddReply(540005, -1, 41976);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_6ae_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a0 == 37363) {
				f_6ae_a1_v("Neutral");
				tv0->SetMessage(535677);
				tv0->ClearReplies();
				tv0->AddReply(535678, 42150, 37364);
				tv0->AddReply(540005, -1, 41976);
				return;
			}
			if (a0 == 42150) {
				f_6ae_a1_v("Neutral");
				tv0->SetMessage(540173);
				tv0->ClearReplies();
				tv0->AddReply(540174, 42153, 42151);
				tv0->AddReply(540175, 42154, 42152);
				return;
			}
			if (a0 == 42154) {
				f_6ae_a1_v("Neutral");
				tv0->SetMessage(540177);
				tv0->ClearReplies();
				tv0->AddReply(540181, 42159, 42158);
				return;
			}
			if (a0 == 42159) {
				f_6ae_a1_v("Neutral");
				tv0->SetMessage(540182);
				tv0->ClearReplies();
				tv0->AddReply(540183, 42161, 42160);
				return;
			}
			if (a0 == 42153) {
				f_6ae_a1_v("Neutral");
				tv0->SetMessage(540176);
				tv0->ClearReplies();
				tv0->AddReply(540178, 42156, 42155);
				return;
			}
			if (a0 == 42156) {
				f_6ae_a1_v("Neutral");
				tv0->SetMessage(540179);
				tv0->ClearReplies();
				tv0->AddReply(540180, 42161, 42157);
				return;
			}
			if (a0 == 42161) {
				f_6ae_a1_v("Neutral");
				tv0->SetMessage(540184);
				tv0->ClearReplies();
				tv0->AddReply(540185, -1, 42163);
				tv0->AddReply(540186, -1, 42164);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
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
		f_2701_a1_v(a0);
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
			f_2ba1_a2_v(tv1, tv0);
			f_29c1_a2_v(tv1, tv0);
			f_7f4_a1_v("Neutral");
			tv0->SetMessage(500416);
			tv0->ClearReplies();
			tv0->AddReply(533500, 35031, 35030);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_7f4_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a0 == 484) {
				f_2ba1_a2_v(tv1, tv0);
				f_29c1_a2_v(tv1, tv0);
				f_7f4_a1_v("Neutral");
				tv0->SetMessage(500416);
				tv0->ClearReplies();
				tv0->AddReply(533500, 35031, 35030);
				return;
			}
			if (a0 == 35031) {
				f_7f4_a1_v("Neutral");
				tv0->SetMessage(533501);
				tv0->ClearReplies();
				tv0->AddReply(500417, 487, 485);
				tv0->AddReply(500418, 9271, 486);
				return;
			}
			if (a0 == 487) {
				f_7f4_a1_v("Neutral");
				tv0->SetMessage(500419);
				tv0->ClearReplies();
				tv0->AddReply(500420, 9271, 488);
				tv0->AddReply(500422, 9271, 490);
				return;
			}
			if (a0 == 9271) {
				f_7f4_a1_v("Neutral");
				tv0->SetMessage(508445);
				tv0->ClearReplies();
				tv0->AddReply(508446, -1, 9275);
				tv0->AddReply(508447, -1, 9276);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
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
		f_2701_a1_v(a0);
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
			f_921_a1_v("Neutral");
			tv0->SetMessage(506929);
			tv0->ClearReplies();
			if (f_2c8c_a1_b(tv1) && f_2c74_a1_b(tv1)) {
				tv0->AddReply(506930, 7637, 7636);
			}
			if (f_2c80_a1_b(tv1)) {
				tv0->AddReply(533959, 10443, 35526);
			}
			tv0->AddReply(507746, -1, 8547);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_921_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 8297) {
				f_29cd_a2_v(tv1, tv0);
				f_2921_a2_v(tv1, tv0);
				f_28c3_a2_v(tv1, tv0);
			}
			if (a1 == 8298) {
				f_29cd_a2_v(tv1, tv0);
				f_2921_a2_v(tv1, tv0);
				f_28c3_a2_v(tv1, tv0);
			}
			if (a1 == 8553) {
				f_29cd_a2_v(tv1, tv0);
				f_2921_a2_v(tv1, tv0);
				f_28c3_a2_v(tv1, tv0);
			}
			if (a1 == 35526) {
				f_29c7_a2_v(tv1, tv0);
			}
			if (a0 == 7635) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(506929);
				tv0->ClearReplies();
				if (f_2c8c_a1_b(tv1) && f_2c74_a1_b(tv1)) {
					tv0->AddReply(506930, 7637, 7636);
				}
				if (f_2c80_a1_b(tv1)) {
					tv0->AddReply(533959, 10443, 35526);
				}
				tv0->AddReply(507746, -1, 8547);
				return;
			}
			if (a0 == 10443) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(509500);
				tv0->ClearReplies();
				tv0->AddReply(509501, 10445, 10444);
				tv0->AddReply(509514, 10458, 10457);
				return;
			}
			if (a0 == 10458) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(509515);
				tv0->ClearReplies();
				tv0->AddReply(509516, 10445, 10459);
				return;
			}
			if (a0 == 10445) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(509502);
				tv0->ClearReplies();
				tv0->AddReply(509503, 10447, 10446);
				tv0->AddReply(509510, -1, 10453);
				tv0->AddReply(509511, 10455, 10454);
				return;
			}
			if (a0 == 10455) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(509512);
				tv0->ClearReplies();
				tv0->AddReply(509513, -1, 10456);
				return;
			}
			if (a0 == 10447) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(509504);
				tv0->ClearReplies();
				tv0->AddReply(509505, 10449, 10448);
				tv0->AddReply(509509, -1, 10452);
				return;
			}
			if (a0 == 10449) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(509506);
				tv0->ClearReplies();
				tv0->AddReply(509507, -1, 10450);
				tv0->AddReply(509508, -1, 10451);
				return;
			}
			if (a0 == 7637) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(506931);
				tv0->ClearReplies();
				tv0->AddReply(506932, 7639, 7638);
				tv0->AddReply(507752, -1, 8553);
				return;
			}
			if (a0 == 7639) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(506933);
				tv0->ClearReplies();
				tv0->AddReply(507753, 8555, 8554);
				return;
			}
			if (a0 == 8555) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(507754);
				tv0->ClearReplies();
				tv0->AddReply(506934, 8296, 7640);
				return;
			}
			if (a0 == 8296) {
				f_921_a1_v("Neutral");
				tv0->SetMessage(507515);
				tv0->ClearReplies();
				tv0->AddReply(507516, -1, 8297);
				tv0->AddReply(507517, -1, 8298);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
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
		f_2701_a1_v(a0);
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
			f_b6b_a1_v("Neutral");
			tv0->SetMessage(510212);
			tv0->ClearReplies();
			if (f_2ca4_a1_b(tv1) && f_2cb0_a1_b(tv1)) {
				tv0->AddReply(510213, 11260, 11259);
			}
			if (f_2be4_a1_b(tv1) && !f_2c98_a1_b(tv1)) {
				tv0->AddReply(510302, 11359, 11358);
			}
			if (f_2cbc_a1_b(tv1) && f_2c68_a1_b(tv1) || f_2cc8_a1_b(tv1) && f_2c68_a1_b(tv1)) {
				tv0->AddReply(510334, 11395, 11394);
			}
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520897, 22115, 22114);
			}
			tv0->AddReply(520896, -1, 22113);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_b6b_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 11259) {
				f_2a23_a2_v(tv1, tv0);
			}
			if (a1 == 35907) {
				f_2a29_a2_v(tv1, tv0);
			}
			if (a1 == 35908) {
				f_2a29_a2_v(tv1, tv0);
			}
			if (a1 == 11358) {
				f_28e9_a2_v(tv1, tv0);
			}
			if (a1 == 11394) {
				f_299f_a2_v(tv1, tv0);
			}
			if (a1 == 11404) {
				f_2a40_a2_v(tv1, tv0);
				f_2980_a2_v(tv1, tv0);
			}
			if (a1 == 11407) {
				f_2a40_a2_v(tv1, tv0);
				f_2980_a2_v(tv1, tv0);
			}
			if (a1 == 22116) {
				f_28d7_a2_v(tv1, tv0);
				f_29f3_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
			}
			if (a0 == 11258) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510212);
				tv0->ClearReplies();
				if (f_2ca4_a1_b(tv1) && f_2cb0_a1_b(tv1)) {
					tv0->AddReply(510213, 11260, 11259);
				}
				if (f_2be4_a1_b(tv1) && !f_2c98_a1_b(tv1)) {
					tv0->AddReply(510302, 11359, 11358);
				}
				if (f_2cbc_a1_b(tv1) && f_2c68_a1_b(tv1) || f_2cc8_a1_b(tv1) && f_2c68_a1_b(tv1)) {
					tv0->AddReply(510334, 11395, 11394);
				}
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520897, 22115, 22114);
				}
				tv0->AddReply(520896, -1, 22113);
				return;
			}
			if (a0 == 22115) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(520898);
				tv0->ClearReplies();
				if (f_2e50_a1_b(tv1)) {
					tv0->AddReply(520899, -1, 22116);
				}
				tv0->AddReply(520900, -1, 22117);
				return;
			}
			if (a0 == 11395) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510335);
				tv0->ClearReplies();
				tv0->AddReply(510336, 11399, 11396);
				tv0->AddReply(510337, 11398, 11397);
				return;
			}
			if (a0 == 11398) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510338);
				tv0->ClearReplies();
				tv0->AddReply(510341, 11402, 11401);
				return;
			}
			if (a0 == 11399) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510339);
				tv0->ClearReplies();
				tv0->AddReply(510340, 11402, 11400);
				tv0->AddReply(534414, 36040, 36039);
				return;
			}
			if (a0 == 36040) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534415);
				tv0->ClearReplies();
				tv0->AddReply(534416, 11402, 36041);
				return;
			}
			if (a0 == 11402) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510342);
				tv0->ClearReplies();
				tv0->AddReply(510343, -1, 11404);
				tv0->AddReply(510344, 11406, 11405);
				return;
			}
			if (a0 == 11406) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510345);
				tv0->ClearReplies();
				tv0->AddReply(510346, -1, 11407);
				return;
			}
			if (a0 == 11359) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510303);
				tv0->ClearReplies();
				tv0->AddReply(510304, 11039, 11360);
				return;
			}
			if (a0 == 11039) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510017);
				tv0->ClearReplies();
				tv0->AddReply(510018, 11041, 11040);
				tv0->AddReply(510028, -1, 11050);
				return;
			}
			if (a0 == 11041) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510019);
				tv0->ClearReplies();
				tv0->AddReply(510020, 11043, 11042);
				tv0->AddReply(510027, -1, 11049);
				return;
			}
			if (a0 == 11043) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510021);
				tv0->ClearReplies();
				tv0->AddReply(510022, 11045, 11044);
				tv0->AddReply(510026, -1, 11048);
				return;
			}
			if (a0 == 11045) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510023);
				tv0->ClearReplies();
				tv0->AddReply(510024, -1, 11046);
				tv0->AddReply(510025, -1, 11047);
				return;
			}
			if (a0 == 11260) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510214);
				tv0->ClearReplies();
				tv0->AddReply(510305, 11364, 11361);
				tv0->AddReply(510306, 11363, 11362);
				return;
			}
			if (a0 == 11363) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510307);
				tv0->ClearReplies();
				tv0->AddReply(534368, 11364, 35974);
				tv0->AddReply(534369, 11366, 35975);
				return;
			}
			if (a0 == 11364) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510308);
				tv0->ClearReplies();
				tv0->AddReply(510309, 11370, 11365);
				tv0->AddReply(510311, 11366, 11367);
				return;
			}
			if (a0 == 11366) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510310);
				tv0->ClearReplies();
				tv0->AddReply(510312, 35894, 11369);
				tv0->AddReply(534370, 11371, 35978);
				return;
			}
			if (a0 == 11370) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510313);
				tv0->ClearReplies();
				tv0->AddReply(510315, 11371, 11372);
				return;
			}
			if (a0 == 11371) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(510314);
				tv0->ClearReplies();
				tv0->AddReply(510317, 35894, 11375);
				tv0->AddReply(510323, 35894, 11381);
				return;
			}
			if (a0 == 35894) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534299);
				tv0->ClearReplies();
				tv0->AddReply(534300, 35896, 35895);
				tv0->AddReply(534317, 35914, 35913);
				return;
			}
			if (a0 == 35914) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534318);
				tv0->ClearReplies();
				tv0->AddReply(534319, 35902, 35915);
				return;
			}
			if (a0 == 35896) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534301);
				tv0->ClearReplies();
				tv0->AddReply(534413, 35902, 36037);
				tv0->AddReply(534302, 35898, 35897);
				return;
			}
			if (a0 == 35898) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534303);
				tv0->ClearReplies();
				tv0->AddReply(534304, 35900, 35899);
				return;
			}
			if (a0 == 35900) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534305);
				tv0->ClearReplies();
				tv0->AddReply(534306, 35902, 35901);
				return;
			}
			if (a0 == 35902) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534307);
				tv0->ClearReplies();
				tv0->AddReply(534308, 35904, 35903);
				tv0->AddReply(534314, 35910, 35909);
				return;
			}
			if (a0 == 35910) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534315);
				tv0->ClearReplies();
				tv0->AddReply(534316, 35906, 35911);
				return;
			}
			if (a0 == 35904) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534309);
				tv0->ClearReplies();
				tv0->AddReply(534310, 35906, 35905);
				return;
			}
			if (a0 == 35906) {
				f_b6b_a1_v("Neutral");
				tv0->SetMessage(534311);
				tv0->ClearReplies();
				tv0->AddReply(534312, -1, 35907);
				tv0->AddReply(534313, -1, 35908);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
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
		f_2701_a1_v(a0);
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
			if (f_2cec_a1_b(tv1) && !f_2cd4_a1_b(tv1)) {
				f_2957_a2_v(tv1, tv0);
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511395);
				tv0->ClearReplies();
				tv0->AddReply(511396, 12594, 12593);
				break;
			}
			f_f6b_a1_v("Neutral");
			tv0->SetMessage(510814);
			tv0->ClearReplies();
			if (f_2ce0_a1_b(tv1) && f_2cd4_a1_b(tv1)) {
				tv0->AddReply(510815, 11956, 11955);
			}
			if (f_2d04_a1_b(tv1) && f_2cf8_a1_b(tv1)) {
				tv0->AddReply(511862, 37886, 13075);
			}
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520901, 22119, 22118);
			}
			tv0->AddReply(511408, -1, 12605);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_f6b_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 12610) {
				f_2a84_a2_v(tv1, tv0);
				f_2a8a_a2_v(tv1, tv0);
				f_29e3_a2_v(tv1, tv0);
			}
			if (a1 == 12613) {
				f_2a84_a2_v(tv1, tv0);
				f_2a8a_a2_v(tv1, tv0);
				f_29e3_a2_v(tv1, tv0);
			}
			if (a1 == 11955) {
				f_2a53_a2_v(tv1, tv0);
			}
			if (a1 == 12243) {
				f_2a59_a2_v(tv1, tv0);
				f_2a70_a2_v(tv1, tv0);
				f_2a09_a2_v(tv1, tv0);
			}
			if (a1 == 12244) {
				f_2a59_a2_v(tv1, tv0);
				f_2a70_a2_v(tv1, tv0);
				f_2a09_a2_v(tv1, tv0);
			}
			if (a1 == 13075) {
				f_2ab6_a2_v(tv1, tv0);
			}
			if (a1 == 37888) {
				f_2a19_a2_v(tv1, tv0);
				f_2921_a2_v(tv1, tv0);
				f_29b6_a2_v(tv1, tv0);
			}
			if (a1 == 13077) {
				f_2a19_a2_v(tv1, tv0);
				f_2921_a2_v(tv1, tv0);
				f_29b6_a2_v(tv1, tv0);
			}
			if (a1 == 22120) {
				f_29f3_a2_v(tv1, tv0);
				f_28d7_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
			}
			if (a0 == 12592) {
				if (f_2cec_a1_b(tv1) && !f_2cd4_a1_b(tv1)) {
					f_2957_a2_v(tv1, tv0);
					f_f6b_a1_v("Neutral");
					tv0->SetMessage(511395);
					tv0->ClearReplies();
					tv0->AddReply(511396, 12594, 12593);
					return;
				}
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(510814);
				tv0->ClearReplies();
				if (f_2ce0_a1_b(tv1) && f_2cd4_a1_b(tv1)) {
					tv0->AddReply(510815, 11956, 11955);
				}
				if (f_2d04_a1_b(tv1) && f_2cf8_a1_b(tv1)) {
					tv0->AddReply(511862, 37886, 13075);
				}
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520901, 22119, 22118);
				}
				tv0->AddReply(511408, -1, 12605);
				return;
			}
			if (a0 == 22119) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(520902);
				tv0->ClearReplies();
				if (f_2e50_a1_b(tv1)) {
					tv0->AddReply(520903, -1, 22120);
				}
				tv0->AddReply(520904, -1, 22121);
				return;
			}
			if (a0 == 37886) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(536127);
				tv0->ClearReplies();
				tv0->AddReply(536128, 13076, 37887);
				tv0->AddReply(511864, -1, 13077);
				return;
			}
			if (a0 == 13076) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511863);
				tv0->ClearReplies();
				tv0->AddReply(536129, -1, 37888);
				return;
			}
			if (a0 == 11956) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(510816);
				tv0->ClearReplies();
				tv0->AddReply(510817, 11958, 11957);
				tv0->AddReply(511019, 12191, 12190);
				return;
			}
			if (a0 == 12191) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511020);
				tv0->ClearReplies();
				tv0->AddReply(511021, 12193, 12192);
				return;
			}
			if (a0 == 12193) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511022);
				tv0->ClearReplies();
				tv0->AddReply(511023, 12202, 12194);
				tv0->AddReply(511024, 12196, 12195);
				return;
			}
			if (a0 == 12196) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511025);
				tv0->ClearReplies();
				tv0->AddReply(511026, 12198, 12197);
				return;
			}
			if (a0 == 12198) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511027);
				tv0->ClearReplies();
				tv0->AddReply(511029, 12202, 12201);
				return;
			}
			if (a0 == 12202) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511030);
				tv0->ClearReplies();
				tv0->AddReply(511031, 12205, 12203);
				tv0->AddReply(511032, 12205, 12204);
				return;
			}
			if (a0 == 12205) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511033);
				tv0->ClearReplies();
				tv0->AddReply(511034, 12208, 12207);
				tv0->AddReply(511037, 12211, 12210);
				return;
			}
			if (a0 == 12211) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511038);
				tv0->ClearReplies();
				tv0->AddReply(511039, 12213, 12212);
				tv0->AddReply(511054, 12222, 12231);
				return;
			}
			if (a0 == 12213) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511040);
				tv0->ClearReplies();
				tv0->AddReply(511041, 12215, 12214);
				return;
			}
			if (a0 == 12215) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511042);
				tv0->ClearReplies();
				tv0->AddReply(511043, 12222, 12216);
				return;
			}
			if (a0 == 12208) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511035);
				tv0->ClearReplies();
				tv0->AddReply(511036, 12217, 12209);
				return;
			}
			if (a0 == 12217) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511044);
				tv0->ClearReplies();
				tv0->AddReply(511045, 12222, 12218);
				tv0->AddReply(511046, 12220, 12219);
				return;
			}
			if (a0 == 12220) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511047);
				tv0->ClearReplies();
				tv0->AddReply(511048, 12222, 12221);
				return;
			}
			if (a0 == 11958) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(510818);
				tv0->ClearReplies();
				tv0->AddReply(510819, 12222, 11959);
				tv0->AddReply(510830, 11971, 11970);
				return;
			}
			if (a0 == 11971) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(510831);
				tv0->ClearReplies();
				tv0->AddReply(510832, 12222, 11972);
				tv0->AddReply(510833, 12227, 11974);
				return;
			}
			if (a0 == 12227) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511052);
				tv0->ClearReplies();
				tv0->AddReply(511053, 12198, 12228);
				return;
			}
			if (a0 == 12222) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511049);
				tv0->ClearReplies();
				tv0->AddReply(511050, 12233, 12223);
				tv0->AddReply(511051, 12233, 12224);
				tv0->AddReply(511059, 12240, 12239);
				return;
			}
			if (a0 == 12240) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511060);
				tv0->ClearReplies();
				tv0->AddReply(511061, 12233, 12241);
				return;
			}
			if (a0 == 12233) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511055);
				tv0->ClearReplies();
				tv0->AddReply(511056, 12237, 12235);
				tv0->AddReply(511057, 12237, 12236);
				return;
			}
			if (a0 == 12237) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511058);
				tv0->ClearReplies();
				tv0->AddReply(511062, -1, 12243);
				tv0->AddReply(511063, -1, 12244);
				return;
			}
			if (a0 == 12594) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511397);
				tv0->ClearReplies();
				tv0->AddReply(511398, 12596, 12595);
				return;
			}
			if (a0 == 12596) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511399);
				tv0->ClearReplies();
				tv0->AddReply(511400, 12598, 12597);
				tv0->AddReply(536121, 37879, 37878);
				return;
			}
			if (a0 == 37879) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(536122);
				tv0->ClearReplies();
				tv0->AddReply(538494, 40382, 40381);
				tv0->AddReply(538496, 12607, 40383);
				return;
			}
			if (a0 == 40382) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(538495);
				tv0->ClearReplies();
				tv0->AddReply(536123, 12607, 37880);
				return;
			}
			if (a0 == 12598) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511401);
				tv0->ClearReplies();
				tv0->AddReply(511409, 12607, 12606);
				tv0->AddReply(538497, 12607, 40384);
				return;
			}
			if (a0 == 12607) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511410);
				tv0->ClearReplies();
				tv0->AddReply(511411, 12609, 12608);
				tv0->AddReply(536124, 37884, 37882);
				return;
			}
			if (a0 == 12609) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511412);
				tv0->ClearReplies();
				tv0->AddReply(536125, 37884, 37883);
				return;
			}
			if (a0 == 37884) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(536126);
				tv0->ClearReplies();
				tv0->AddReply(511413, -1, 12610);
				tv0->AddReply(511414, 12612, 12611);
				return;
			}
			if (a0 == 12612) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(511415);
				tv0->ClearReplies();
				tv0->AddReply(511416, -1, 12613);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
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
		f_2701_a1_v(a0);
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
			if (f_2d88_a1_b(tv1) && !f_2d4c_a1_b(tv1) && !f_2d58_a1_b(tv1)) {
				f_2b1b_a2_v(tv1, tv0);
				f_1420_a1_v("Neutral");
				tv0->SetMessage(511741);
				tv0->ClearReplies();
				tv0->AddReply(511743, 12951, 12949);
				tv0->AddReply(511742, 12950, 12948);
				if (!f_2d40_a1_b(tv1)) {
					tv0->AddReply(512586, 13766, 13753);
				}
				break;
			}
			f_1420_a1_v("Neutral");
			tv0->SetMessage(512573);
			tv0->ClearReplies();
			if (f_2d64_a1_b(tv1) && f_2d70_a1_b(tv1)) {
				tv0->AddReply(512574, 13744, 13743);
			}
			if (f_2d4c_a1_b(tv1) && f_2d7c_a1_b(tv1)) {
				tv0->AddReply(512577, 13747, 13746);
			}
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520905, 22123, 22122);
			}
			tv0->AddReply(512580, -1, 13749);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_1420_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 12969) {
				f_2ba7_a2_v(tv1, tv0);
			}
			if (a1 == 12970) {
				f_2ba7_a2_v(tv1, tv0);
			}
			if (a1 == 13743) {
				f_2b0d_a2_v(tv1, tv0);
			}
			if (a1 == 13745) {
				f_2921_a2_v(tv1, tv0);
				f_28cd_a2_v(tv1, tv0);
			}
			if (a1 == 13746) {
				f_2b13_a2_v(tv1, tv0);
			}
			if (a1 == 13748) {
				f_2b06_a2_v(tv1, tv0);
				f_2b19_a2_v(tv1, tv0);
			}
			if (a1 == 22124) {
				f_28d7_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
				f_29f3_a2_v(tv1, tv0);
			}
			if (a0 == 12947) {
				if (f_2d88_a1_b(tv1) && !f_2d4c_a1_b(tv1) && !f_2d58_a1_b(tv1)) {
					f_2b1b_a2_v(tv1, tv0);
					f_1420_a1_v("Neutral");
					tv0->SetMessage(511741);
					tv0->ClearReplies();
					tv0->AddReply(511743, 12951, 12949);
					tv0->AddReply(511742, 12950, 12948);
					if (!f_2d40_a1_b(tv1)) {
						tv0->AddReply(512586, 13766, 13753);
					}
					return;
				}
				f_1420_a1_v("Neutral");
				tv0->SetMessage(512573);
				tv0->ClearReplies();
				if (f_2d64_a1_b(tv1) && f_2d70_a1_b(tv1)) {
					tv0->AddReply(512574, 13744, 13743);
				}
				if (f_2d4c_a1_b(tv1) && f_2d7c_a1_b(tv1)) {
					tv0->AddReply(512577, 13747, 13746);
				}
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520905, 22123, 22122);
				}
				tv0->AddReply(512580, -1, 13749);
				return;
			}
			if (a0 == 22123) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(520906);
				tv0->ClearReplies();
				if (f_2e50_a1_b(tv1)) {
					tv0->AddReply(520907, -1, 22124);
				}
				tv0->AddReply(520908, -1, 22125);
				return;
			}
			if (a0 == 13747) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(512578);
				tv0->ClearReplies();
				tv0->AddReply(512598, 13770, 13769);
				tv0->AddReply(512603, 13772, 13775);
				return;
			}
			if (a0 == 13770) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(512599);
				tv0->ClearReplies();
				tv0->AddReply(512600, 13772, 13771);
				tv0->AddReply(512602, 13772, 13773);
				return;
			}
			if (a0 == 13772) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(512601);
				tv0->ClearReplies();
				tv0->AddReply(512579, -1, 13748);
				return;
			}
			if (a0 == 13744) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(512575);
				tv0->ClearReplies();
				tv0->AddReply(512576, -1, 13745);
				tv0->AddReply(515778, 16850, 16849);
				return;
			}
			if (a0 == 16850) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(515779);
				tv0->ClearReplies();
				tv0->AddReply(515780, -1, 16851);
				return;
			}
			if (a0 == 13766) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(512596);
				tv0->ClearReplies();
				tv0->AddReply(512597, 12960, 13767);
				return;
			}
			if (a0 == 12950) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(511744);
				tv0->ClearReplies();
				tv0->AddReply(511746, 12954, 12952);
				return;
			}
			if (a0 == 12954) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(511748);
				tv0->ClearReplies();
				tv0->AddReply(511749, 12951, 12955);
				return;
			}
			if (a0 == 12951) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(511745);
				tv0->ClearReplies();
				tv0->AddReply(511747, 12957, 12953);
				return;
			}
			if (a0 == 12957) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(511750);
				tv0->ClearReplies();
				tv0->AddReply(511751, 12960, 12958);
				tv0->AddReply(511752, -1, 12959);
				return;
			}
			if (a0 == 12960) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(511753);
				tv0->ClearReplies();
				tv0->AddReply(511754, 12964, 12962);
				tv0->AddReply(515777, -1, 16848);
				return;
			}
			if (a0 == 12964) {
				f_1420_a1_v("Neutral");
				tv0->SetMessage(511756);
				tv0->ClearReplies();
				tv0->AddReply(511761, -1, 12969);
				tv0->AddReply(511762, -1, 12970);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t19{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2701_a1_v(a0);
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
			if (f_2d1c_a1_b(tv1)) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512104);
				tv0->ClearReplies();
				tv0->AddReply(512105, 13334, 13331);
				tv0->AddReply(512106, 13333, 13332);
				break;
			}
			f_170b_a1_v("Neutral");
			tv0->SetMessage(512515);
			tv0->ClearReplies();
			if (f_2d10_a1_b(tv1)) {
				tv0->AddReply(512520, 13691, 13690);
			}
			if (f_2d28_a1_b(tv1) && f_2d94_a1_b(tv1)) {
				tv0->AddReply(512516, 13688, 13686);
			}
			if (f_2d34_a1_b(tv1) && f_2da0_a1_b(tv1) && !f_2d94_a1_b(tv1)) {
				tv0->AddReply(512526, 13697, 13696);
			}
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520909, 22127, 22126);
			}
			tv0->AddReply(512517, -1, 13687);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_170b_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 13670) {
				f_2ae4_a2_v(tv1, tv0);
				f_2abc_a2_v(tv1, tv0);
				f_2af0_a2_v(tv1, tv0);
			}
			if (a1 == 13671) {
				f_2ae4_a2_v(tv1, tv0);
				f_2af0_a2_v(tv1, tv0);
			}
			if (a1 == 13692) {
				f_2abc_a2_v(tv1, tv0);
			}
			if (a1 == 13686) {
				f_2aea_a2_v(tv1, tv0);
			}
			if (a1 == 13689) {
				f_2921_a2_v(tv1, tv0);
				f_2b21_a2_v(tv1, tv0);
				f_2917_a2_v(tv1, tv0);
			}
			if (a1 == 37901) {
				f_2b21_a2_v(tv1, tv0);
				f_2917_a2_v(tv1, tv0);
				f_2921_a2_v(tv1, tv0);
			}
			if (a1 == 13696) {
				f_2af6_a2_v(tv1, tv0);
			}
			if (a1 == 13698) {
				f_2afc_a2_v(tv1, tv0);
			}
			if (a1 == 37902) {
				f_2afc_a2_v(tv1, tv0);
			}
			if (a1 == 22128) {
				f_29f3_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
				f_28d7_a2_v(tv1, tv0);
			}
			if (a0 == 13330) {
				if (f_2d1c_a1_b(tv1)) {
					f_170b_a1_v("Neutral");
					tv0->SetMessage(512104);
					tv0->ClearReplies();
					tv0->AddReply(512105, 13334, 13331);
					tv0->AddReply(512106, 13333, 13332);
					return;
				}
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512515);
				tv0->ClearReplies();
				if (f_2d10_a1_b(tv1)) {
					tv0->AddReply(512520, 13691, 13690);
				}
				if (f_2d28_a1_b(tv1) && f_2d94_a1_b(tv1)) {
					tv0->AddReply(512516, 13688, 13686);
				}
				if (f_2d34_a1_b(tv1) && f_2da0_a1_b(tv1) && !f_2d94_a1_b(tv1)) {
					tv0->AddReply(512526, 13697, 13696);
				}
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520909, 22127, 22126);
				}
				tv0->AddReply(512517, -1, 13687);
				return;
			}
			if (a0 == 22127) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(520910);
				tv0->ClearReplies();
				if (f_2e50_a1_b(tv1)) {
					tv0->AddReply(520911, -1, 22128);
				}
				tv0->AddReply(520912, -1, 22129);
				return;
			}
			if (a0 == 13697) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512527);
				tv0->ClearReplies();
				tv0->AddReply(512528, -1, 13698);
				tv0->AddReply(536143, -1, 37902);
				return;
			}
			if (a0 == 13688) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512518);
				tv0->ClearReplies();
				tv0->AddReply(512519, -1, 13689);
				tv0->AddReply(536142, -1, 37901);
				return;
			}
			if (a0 == 13691) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512521);
				tv0->ClearReplies();
				tv0->AddReply(512522, -1, 13692);
				return;
			}
			if (a0 == 13333) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512107);
				tv0->ClearReplies();
				tv0->AddReply(512493, 13334, 13662);
				return;
			}
			if (a0 == 13334) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512108);
				tv0->ClearReplies();
				tv0->AddReply(512109, 13336, 13335);
				return;
			}
			if (a0 == 13336) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512110);
				tv0->ClearReplies();
				tv0->AddReply(512111, 13338, 13337);
				return;
			}
			if (a0 == 13338) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512112);
				tv0->ClearReplies();
				tv0->AddReply(512494, 13665, 13664);
				return;
			}
			if (a0 == 13665) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512495);
				tv0->ClearReplies();
				tv0->AddReply(512496, 13667, 13666);
				return;
			}
			if (a0 == 13667) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512497);
				tv0->ClearReplies();
				tv0->AddReply(512498, 13669, 13668);
				return;
			}
			if (a0 == 13669) {
				f_170b_a1_v("Neutral");
				tv0->SetMessage(512499);
				tv0->ClearReplies();
				tv0->AddReply(512500, -1, 13670);
				tv0->AddReply(512501, -1, 13671);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
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
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t21{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2701_a1_v(a0);
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
			if (f_2c44_a1_b(tv1)) {
				f_295d_a2_v(tv1, tv0);
				f_297a_a2_v(tv1, tv0);
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(533324);
				tv0->ClearReplies();
				tv0->AddReply(535993, 37724, 37723);
				tv0->AddReply(536001, 37724, 37731);
				break;
			}
			f_1a4e_a1_v("Neutral");
			tv0->SetMessage(512410);
			tv0->ClearReplies();
			if (f_2dac_a1_b(tv1) && f_2dc4_a1_b(tv1) && !f_2db8_a1_b(tv1)) {
				tv0->AddReply(512412, 13577, 13576);
			}
			if (f_2db8_a1_b(tv1) && f_2dd0_a1_b(tv1)) {
				tv0->AddReply(513588, 14840, 14839);
			}
			if (f_2ddc_a1_b(tv1) && f_2db8_a1_b(tv1) && f_2de8_a1_b(tv1) && !f_2e0c_a1_b(tv1)) {
				tv0->AddReply(513607, 14868, 14862);
			}
			if (f_2ddc_a1_b(tv1) && f_2e00_a1_b(tv1) && !f_2e18_a1_b(tv1)) {
				tv0->AddReply(513618, 14874, 14873);
			}
			if (!f_2db8_a1_b(tv1) && f_2dac_a1_b(tv1) && f_2df4_a1_b(tv1)) {
				tv0->AddReply(513612, 14863, 14867);
			}
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520922, 22140, 22139);
			}
			if (f_2c50_a1_b(tv1)) {
				tv0->AddReply(533337, 37749, 34841);
			}
			tv0->AddReply(512411, -1, 13575);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_1a4e_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 34829) {
				f_2b91_a2_v(tv1, tv0);
			}
			if (a1 == 37748) {
				f_2b91_a2_v(tv1, tv0);
			}
			if (a1 == 14856) {
				f_2b48_a2_v(tv1, tv0);
				f_2bd1_a2_v(tv1, tv0);
				f_29f9_a2_v(tv1, tv0);
			}
			if (a1 == 14857) {
				f_2b48_a2_v(tv1, tv0);
				f_2bd1_a2_v(tv1, tv0);
				f_29f9_a2_v(tv1, tv0);
			}
			if (a1 == 14858) {
				f_2b48_a2_v(tv1, tv0);
				f_2bd1_a2_v(tv1, tv0);
				f_29f9_a2_v(tv1, tv0);
			}
			if (a1 == 14839) {
				f_2b4e_a2_v(tv1, tv0);
			}
			if (a1 == 40671) {
				f_2b54_a2_v(tv1, tv0);
				f_29a5_a2_v(tv1, tv0);
				f_2927_a2_v(tv1, tv0);
			}
			if (a1 == 40672) {
				f_2b54_a2_v(tv1, tv0);
				f_29a5_a2_v(tv1, tv0);
				f_2927_a2_v(tv1, tv0);
			}
			if (a1 == 40667) {
				f_2b54_a2_v(tv1, tv0);
				f_29a5_a2_v(tv1, tv0);
				f_2927_a2_v(tv1, tv0);
			}
			if (a1 == 14862) {
				f_2b79_a2_v(tv1, tv0);
			}
			if (a1 == 14894) {
				f_2b7f_a2_v(tv1, tv0);
			}
			if (a1 == 14873) {
				f_2b8b_a2_v(tv1, tv0);
			}
			if (a1 == 14867) {
				f_2b85_a2_v(tv1, tv0);
			}
			if (a1 == 22141) {
				f_28d7_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
				f_29f3_a2_v(tv1, tv0);
			}
			if (a1 == 34843) {
				f_2963_a2_v(tv1, tv0);
				f_29d3_a2_v(tv1, tv0);
			}
			if (a0 == 34828) {
				if (f_2c44_a1_b(tv1)) {
					f_295d_a2_v(tv1, tv0);
					f_297a_a2_v(tv1, tv0);
					f_1a4e_a1_v("Neutral");
					tv0->SetMessage(533324);
					tv0->ClearReplies();
					tv0->AddReply(535993, 37724, 37723);
					tv0->AddReply(536001, 37724, 37731);
					return;
				}
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512410);
				tv0->ClearReplies();
				if (f_2dac_a1_b(tv1) && f_2dc4_a1_b(tv1) && !f_2db8_a1_b(tv1)) {
					tv0->AddReply(512412, 13577, 13576);
				}
				if (f_2db8_a1_b(tv1) && f_2dd0_a1_b(tv1)) {
					tv0->AddReply(513588, 14840, 14839);
				}
				if (f_2ddc_a1_b(tv1) && f_2db8_a1_b(tv1) && f_2de8_a1_b(tv1) && !f_2e0c_a1_b(tv1)) {
					tv0->AddReply(513607, 14868, 14862);
				}
				if (f_2ddc_a1_b(tv1) && f_2e00_a1_b(tv1) && !f_2e18_a1_b(tv1)) {
					tv0->AddReply(513618, 14874, 14873);
				}
				if (!f_2db8_a1_b(tv1) && f_2dac_a1_b(tv1) && f_2df4_a1_b(tv1)) {
					tv0->AddReply(513612, 14863, 14867);
				}
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520922, 22140, 22139);
				}
				if (f_2c50_a1_b(tv1)) {
					tv0->AddReply(533337, 37749, 34841);
				}
				tv0->AddReply(512411, -1, 13575);
				return;
			}
			if (a0 == 37749) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536015);
				tv0->ClearReplies();
				tv0->AddReply(536016, 37751, 37750);
				tv0->AddReply(536021, 37751, 37755);
				return;
			}
			if (a0 == 37751) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536017);
				tv0->ClearReplies();
				tv0->AddReply(536018, 37753, 37752);
				return;
			}
			if (a0 == 37753) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536019);
				tv0->ClearReplies();
				tv0->AddReply(536020, 34842, 37754);
				tv0->AddReply(536024, 37760, 37759);
				return;
			}
			if (a0 == 37760) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536025);
				tv0->ClearReplies();
				tv0->AddReply(536026, 37758, 37761);
				tv0->AddReply(536027, 34842, 37763);
				return;
			}
			if (a0 == 34842) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(533338);
				tv0->ClearReplies();
				tv0->AddReply(536022, 37758, 37757);
				tv0->AddReply(536028, -1, 37765);
				return;
			}
			if (a0 == 37758) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536023);
				tv0->ClearReplies();
				tv0->AddReply(533339, -1, 34843);
				return;
			}
			if (a0 == 22140) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(520923);
				tv0->ClearReplies();
				if (f_2e50_a1_b(tv1)) {
					tv0->AddReply(520924, -1, 22141);
				}
				tv0->AddReply(520925, -1, 22142);
				return;
			}
			if (a0 == 14863) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513608);
				tv0->ClearReplies();
				tv0->AddReply(513609, 14865, 14864);
				return;
			}
			if (a0 == 14865) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513610);
				tv0->ClearReplies();
				tv0->AddReply(513611, 14869, 14866);
				return;
			}
			if (a0 == 14869) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513614);
				tv0->ClearReplies();
				tv0->AddReply(513615, 14871, 14870);
				return;
			}
			if (a0 == 14871) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513616);
				tv0->ClearReplies();
				tv0->AddReply(513617, -1, 14872);
				return;
			}
			if (a0 == 14874) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513619);
				tv0->ClearReplies();
				tv0->AddReply(513620, 14876, 14875);
				return;
			}
			if (a0 == 14876) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513621);
				tv0->ClearReplies();
				tv0->AddReply(513623, 14879, 14878);
				tv0->AddReply(513622, -1, 14877);
				return;
			}
			if (a0 == 14879) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513624);
				tv0->ClearReplies();
				tv0->AddReply(513626, 14882, 14881);
				tv0->AddReply(513625, -1, 14880);
				return;
			}
			if (a0 == 14882) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513627);
				tv0->ClearReplies();
				tv0->AddReply(513628, -1, 14883);
				return;
			}
			if (a0 == 14868) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513613);
				tv0->ClearReplies();
				tv0->AddReply(513629, 14885, 14884);
				return;
			}
			if (a0 == 14885) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513630);
				tv0->ClearReplies();
				tv0->AddReply(513631, 14889, 14886);
				tv0->AddReply(513632, 14888, 14887);
				return;
			}
			if (a0 == 14888) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513633);
				tv0->ClearReplies();
				tv0->AddReply(513636, 14889, 14891);
				return;
			}
			if (a0 == 14889) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513634);
				tv0->ClearReplies();
				tv0->AddReply(513635, 14893, 14890);
				return;
			}
			if (a0 == 14893) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513637);
				tv0->ClearReplies();
				tv0->AddReply(513638, -1, 14894);
				return;
			}
			if (a0 == 14840) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513589);
				tv0->ClearReplies();
				tv0->AddReply(513591, 14843, 14842);
				tv0->AddReply(513590, 14845, 14841);
				return;
			}
			if (a0 == 14845) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513594);
				tv0->ClearReplies();
				tv0->AddReply(513595, 14847, 14846);
				return;
			}
			if (a0 == 14847) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513596);
				tv0->ClearReplies();
				tv0->AddReply(513597, 14843, 14848);
				return;
			}
			if (a0 == 14843) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513592);
				tv0->ClearReplies();
				tv0->AddReply(513598, 14824, 14850);
				tv0->AddReply(513593, 13583, 14844);
				return;
			}
			if (a0 == 13583) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512419);
				tv0->ClearReplies();
				tv0->AddReply(512423, 13588, 13587);
				return;
			}
			if (a0 == 13588) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512424);
				tv0->ClearReplies();
				tv0->AddReply(512425, 13594, 13590);
				tv0->AddReply(512426, 13592, 13591);
				return;
			}
			if (a0 == 13592) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512427);
				tv0->ClearReplies();
				tv0->AddReply(512430, 13594, 13596);
				return;
			}
			if (a0 == 13594) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512428);
				tv0->ClearReplies();
				tv0->AddReply(512429, 13599, 13595);
				return;
			}
			if (a0 == 13599) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512432);
				tv0->ClearReplies();
				tv0->AddReply(512433, 13601, 13600);
				return;
			}
			if (a0 == 13601) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512434);
				tv0->ClearReplies();
				tv0->AddReply(513581, 14826, 14830);
				tv0->AddReply(512435, 14833, 13602);
				return;
			}
			if (a0 == 14824) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513575);
				tv0->ClearReplies();
				tv0->AddReply(513576, 14826, 14825);
				return;
			}
			if (a0 == 14826) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513577);
				tv0->ClearReplies();
				tv0->AddReply(513578, 14828, 14827);
				return;
			}
			if (a0 == 14828) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513579);
				tv0->ClearReplies();
				tv0->AddReply(513580, 14833, 14829);
				tv0->AddReply(535991, 14837, 37720);
				tv0->AddReply(535992, 14837, 37721);
				return;
			}
			if (a0 == 14833) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513582);
				tv0->ClearReplies();
				tv0->AddReply(513583, 14835, 14834);
				return;
			}
			if (a0 == 14835) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513584);
				tv0->ClearReplies();
				tv0->AddReply(513585, 14837, 14836);
				return;
			}
			if (a0 == 14837) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513586);
				tv0->ClearReplies();
				tv0->AddReply(513587, 40669, 14838);
				tv0->AddReply(538755, -1, 40667);
				return;
			}
			if (a0 == 40669) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(538756);
				tv0->ClearReplies();
				tv0->AddReply(538757, -1, 40671);
				tv0->AddReply(538758, -1, 40672);
				return;
			}
			if (a0 == 13577) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512413);
				tv0->ClearReplies();
				tv0->AddReply(512420, 13585, 13584);
				tv0->AddReply(512414, 13579, 13578);
				return;
			}
			if (a0 == 13579) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512415);
				tv0->ClearReplies();
				tv0->AddReply(512416, 13581, 13580);
				return;
			}
			if (a0 == 13581) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512417);
				tv0->ClearReplies();
				tv0->AddReply(512418, 14853, 13582);
				return;
			}
			if (a0 == 13585) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(512421);
				tv0->ClearReplies();
				tv0->AddReply(513574, 14851, 14823);
				tv0->AddReply(513602, 14853, 14854);
				return;
			}
			if (a0 == 14851) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513599);
				tv0->ClearReplies();
				tv0->AddReply(513600, 14853, 14852);
				return;
			}
			if (a0 == 14853) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(513601);
				tv0->ClearReplies();
				tv0->AddReply(513603, -1, 14856);
				tv0->AddReply(513604, -1, 14857);
				tv0->AddReply(513605, -1, 14858);
				return;
			}
			if (a0 == 37724) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(535994);
				tv0->ClearReplies();
				tv0->AddReply(535995, 37735, 37725);
				tv0->AddReply(536002, 37726, 37733);
				return;
			}
			if (a0 == 37735) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536003);
				tv0->ClearReplies();
				tv0->AddReply(536005, 37738, 37737);
				tv0->AddReply(536007, 37740, 37739);
				return;
			}
			if (a0 == 37740) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536008);
				tv0->ClearReplies();
				tv0->AddReply(536009, 37726, 37741);
				return;
			}
			if (a0 == 37738) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536006);
				tv0->ClearReplies();
				tv0->AddReply(536004, 37726, 37736);
				tv0->AddReply(536011, 37745, 37744);
				return;
			}
			if (a0 == 37745) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536012);
				tv0->ClearReplies();
				tv0->AddReply(536013, 37726, 37746);
				return;
			}
			if (a0 == 37726) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(535996);
				tv0->ClearReplies();
				tv0->AddReply(535997, 37728, 37727);
				tv0->AddReply(536010, 37728, 37742);
				return;
			}
			if (a0 == 37728) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(535998);
				tv0->ClearReplies();
				tv0->AddReply(535999, 37730, 37729);
				return;
			}
			if (a0 == 37730) {
				f_1a4e_a1_v("Neutral");
				tv0->SetMessage(536000);
				tv0->ClearReplies();
				tv0->AddReply(533325, -1, 34829);
				tv0->AddReply(536014, -1, 37748);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t22
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t23{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2701_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t23
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
			f_20bd_a1_v("Neutral");
			tv0->SetMessage(520914);
			tv0->ClearReplies();
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520917, 22135, 22134);
			}
			tv0->AddReply(520915, -1, 22132);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_20bd_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 22136) {
				f_28d7_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
				f_29f3_a2_v(tv1, tv0);
			}
			if (a0 == 22131) {
				f_20bd_a1_v("Neutral");
				tv0->SetMessage(520914);
				tv0->ClearReplies();
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520917, 22135, 22134);
				}
				tv0->AddReply(520915, -1, 22132);
				return;
			}
			if (a0 == 22135) {
				f_20bd_a1_v("Neutral");
				tv0->SetMessage(520918);
				tv0->ClearReplies();
				tv0->AddReply(520919, -1, 22136);
				tv0->AddReply(520920, -1, 22137);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t24
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t25{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2701_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t25
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
			f_21bd_a1_v("Neutral");
			tv0->SetMessage(520927);
			tv0->ClearReplies();
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520928, 22146, 22145);
			}
			tv0->AddReply(520932, -1, 22149);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_21bd_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 22147) {
				f_29f3_a2_v(tv1, tv0);
				f_28d7_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
			}
			if (a0 == 22144) {
				f_21bd_a1_v("Neutral");
				tv0->SetMessage(520927);
				tv0->ClearReplies();
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520928, 22146, 22145);
				}
				tv0->AddReply(520932, -1, 22149);
				return;
			}
			if (a0 == 22146) {
				f_21bd_a1_v("Neutral");
				tv0->SetMessage(520929);
				tv0->ClearReplies();
				if (f_2e50_a1_b(tv1)) {
					tv0->AddReply(520930, -1, 22147);
				}
				tv0->AddReply(520931, -1, 22148);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t26
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t27{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2701_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t27
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
			f_22c2_a1_v("Neutral");
			tv0->SetMessage(520934);
			tv0->ClearReplies();
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520935, 22153, 22152);
			}
			tv0->AddReply(520939, -1, 22156);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_22c2_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 22154) {
				f_28d7_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
				f_29f3_a2_v(tv1, tv0);
			}
			if (a0 == 22151) {
				f_22c2_a1_v("Neutral");
				tv0->SetMessage(520934);
				tv0->ClearReplies();
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520935, 22153, 22152);
				}
				tv0->AddReply(520939, -1, 22156);
				return;
			}
			if (a0 == 22153) {
				f_22c2_a1_v("Neutral");
				tv0->SetMessage(520936);
				tv0->ClearReplies();
				if (f_2e50_a1_b(tv1)) {
					tv0->AddReply(520937, -1, 22154);
				}
				tv0->AddReply(520938, -1, 22155);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t28
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t29{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2701_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t29
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
			f_23d6_a1_v("Neutral");
			tv0->SetMessage(520941);
			tv0->ClearReplies();
			if (f_2c5c_a1_b(tv1)) {
				tv0->AddReply(534490, 38444, 36135);
			}
			if (!f_2e46_a1_b(tv1)) {
				tv0->AddReply(520942, 22160, 22159);
			}
			tv0->AddReply(520946, -1, 22163);
			tv0->AddReply(536616, -1, 38443);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_23d6_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a1 == 36141) {
				f_2990_a2_v(tv1, tv0);
			}
			if (a1 == 38456) {
				f_2990_a2_v(tv1, tv0);
			}
			if (a1 == 22161) {
				f_29f3_a2_v(tv1, tv0);
				f_28d7_a2_v(tv1, tv0);
				f_28e2_a2_v(tv1, tv0);
			}
			if (a0 == 22158) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(520941);
				tv0->ClearReplies();
				if (f_2c5c_a1_b(tv1)) {
					tv0->AddReply(534490, 38444, 36135);
				}
				if (!f_2e46_a1_b(tv1)) {
					tv0->AddReply(520942, 22160, 22159);
				}
				tv0->AddReply(520946, -1, 22163);
				tv0->AddReply(536616, -1, 38443);
				return;
			}
			if (a0 == 22160) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(520943);
				tv0->ClearReplies();
				if (f_2e50_a1_b(tv1)) {
					tv0->AddReply(520944, -1, 22161);
				}
				tv0->AddReply(520945, -1, 22162);
				return;
			}
			if (a0 == 38444) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(536617);
				tv0->ClearReplies();
				tv0->AddReply(536618, 38446, 38445);
				return;
			}
			if (a0 == 38446) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(536619);
				tv0->ClearReplies();
				tv0->AddReply(536620, 36136, 38447);
				return;
			}
			if (a0 == 36136) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(534491);
				tv0->ClearReplies();
				tv0->AddReply(534492, 36138, 36137);
				tv0->AddReply(536621, 38449, 38448);
				return;
			}
			if (a0 == 38449) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(536622);
				tv0->ClearReplies();
				tv0->AddReply(536625, 36140, 38452);
				return;
			}
			if (a0 == 36138) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(534493);
				tv0->ClearReplies();
				tv0->AddReply(534494, 36140, 36139);
				tv0->AddReply(536623, 38451, 38450);
				return;
			}
			if (a0 == 38451) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(536624);
				tv0->ClearReplies();
				tv0->AddReply(536626, 38455, 38454);
				return;
			}
			if (a0 == 38455) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(536627);
				tv0->ClearReplies();
				tv0->AddReply(536628, -1, 38456);
				return;
			}
			if (a0 == 36140) {
				f_23d6_a1_v("Neutral");
				tv0->SetMessage(534495);
				tv0->ClearReplies();
				tv0->AddReply(534496, -1, 36141);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t30
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_2712_a1_b(f_27bf_a0_o());
		if (!f_26bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_28bb_a0_i());
		L0->SetNPCDescription(f_28b9_a0_i());
		L0->SetPhoto(f_28bd_a0_s());
		L0->SetPhoto2(f_28bf_a0_s());
		L0->SetPlayerName(f_2fcc_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t31{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2701_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t31
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
			f_258e_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_28c1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_279c_a1_v(tv2);
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

	void f_258e_a1_v(string a0)
	{
		if (!f_28c1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27b8_a0_v();
			if (a0 == 42551) {
				f_258e_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_28c1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t32
{
	var float tv0;
	var float tv1;
	var int tv2;

	void init(void)
	{
		g2 = false;
		f_25d5_a0_v();
	}

	void f_25d5_a0_v(void)
	{
		object L0;
		@SensePlayerOnly(true);
		f_262d_a0_v();
		@GetScene(L0);
		for (tv2 = 0; ; tv2 = tv2 + 1) {
			bool L1;
			L0->GetLocator(f_28ab_a1_s(tv2), L1);
			if (!L1) {
				break;
			}
		}
		if (!f_26b8_a0_b()) {
			t0{};
		}
		f_2635_a0_v();
		for (; ; ) {
			int L2;
			bool L3;
			Vector L4;
			Vector L5;
			Vector L6;
			@irand(L2, tv2);
			L0->GetLocator(f_28ab_a1_s(L2), L3, L4, L5);
			L6 = L4 - f_2664_a0_V();
			if (f_27e2_a1_f(L6) > tv1) {
				float L7;
				Vector L8;
				bool L9;
				@GetHeight(L7);
				L8 = L4;
				L8.y += L7;
				@CanReachByPF(L9, L8);
				if (L9) {
					Vector L10;
					L10 = L4 - L6 * (tv0 / sqrt(L6 | L6));
					if (t1{L10, L5}) {
						t3{L2};
					}
				}
			}
			@Sleep(1);
		}
	}

	void f_262d_a0_v(void)
	{
		string L0;
		@GetProperty("loc", L0);
		g0 = L0;
	}

	void f_2635_a0_v(void)
	{
		Vector L0;
		Vector L1;
		@GetAnimationOffset(L0, "all", "walk_stopl");
		@GetAnimationOffset(L1, "all", "walk_stopr");
		tv0 = (L0.z + L1.z) / 2.0;
		tv1 = f_27cf_a1_f(L0.z - tv0) + 40;
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_26a4_a1_b(a0);
			enable OnUse;
			f_2fdd_a1_v(a0);
		}
	}
}

Vector f_2664_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

float f_2669_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2671_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_267d_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_2671_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_27d7_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_2693_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_269a_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_26a4_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_269a_a1_b(L0);
}

void f_26ad_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_26b8_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_26bd_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_27c5_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_28c1_a0_b()) {
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

void f_2701_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_28c1_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2712_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_274c_a1_b(a0)) {
			if (!f_2771_a1_b(a0)) {
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
		if (!f_2771_a1_b(a0)) {
			if (!f_274c_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_274c_a1_b(object a0)
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
	return f_27a9_a1_b(L4);
}

bool f_2771_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_2884_a0_i() + "m";
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
	return f_27a9_a1_b(L4);
}

void f_279c_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_27a3_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_27a9_a1_b(string a0)
{
	if (f_28c1_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_27b8_a0_v(void)
{
	if (f_28c1_a0_b()) {
		@lshStopSpeech();
	}
}

object f_27bf_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_27c5_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_27cf_a1_f(float a0)
{
	return a0 < 0 ? -a0 : a0;
}

float f_27d7_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_27e2_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

int f_27ec_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_27f1_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_27fc_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

void f_2807_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_2813_a2_v(object a0, int a1)
{
	f_2693_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_2807_a2_v(L0, a1);
	}
}

void f_2826_a3_v(object a0, object a1, int a2)
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
		f_2807_a2_v(L0, a2);
	}
}

void f_2839_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_2826_a3_v(a0, L0, a2);
}

bool f_2846_a2_b(object a0, float a1)
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
	f_2869_a1_v(a1);
	f_267d_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_2869_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_2873_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_287f_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_2884_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_288d_a1_b(int a0)
{
	return f_2884_a0_i() == a0;
}

string f_2893_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_289a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_2893_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

string f_28ab_a1_s(int a0)
{
	return a0 == 0 ? "pt_" + g0 : "pt_" + g0 + a0;
}

void OnUnload(void)
{
}

int f_28b9_a0_i(void)
{
	return 515547;
}

int f_28bb_a0_i(void)
{
	return 502872;
}

string f_28bd_a0_s(void)
{
	return "ui/NPC_MladVlad.png";
}

string f_28bf_a0_s(void)
{
	return "ui/NPC_MladVlad_b.png";
}

bool f_28c1_a0_b(void)
{
	return true;
}

void f_28c3_a2_v(object a0, object a1)
{
	@Trace("money 4000 is given");
	f_2813_a2_v(a0, 4000);
}

void f_28cd_a2_v(object a0, object a1)
{
	@Trace("money20000 is given");
	f_2813_a2_v(a0, 20000);
}

void f_28d7_a2_v(object a0, object a1)
{
	int L0;
	L0 = f_2884_a0_i();
	@SetVariable("RMap" + L0, 1);
}

void f_28e2_a2_v(object a0, object a1)
{
	f_2813_a2_v(a0, -1000);
}

void f_28e9_a2_v(object a0, object a1)
{
	@SetVariable("ood3MladVlad2", 1);
}

void f_28ef_a2_v(object a0, object a1)
{
	@Trace("money2000 is given");
	f_2813_a2_v(a0, 2000);
}

void f_28f9_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q03IsKapella", 0);
	L0 = f_2f9a_a0_o();
	L0->AddMark("d1q03MladVladGotoOspina", "pt_map_ospina", 0, 508642, f_287f_a0_f());
	f_2e87_a0_v();
	f_2e94_a0_v();
	f_27f1_a1_o("quest_d1_03");
}

void f_2917_a2_v(object a0, object a1)
{
	@Trace("money10000 is given");
	f_2813_a2_v(a0, 10000);
}

void f_2921_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_2927_a2_v(object a0, object a1)
{
	f_2fab_a3_v(f_2f9a_a0_o(), "pt_map_mat", 2);
	a1->ShowMap(f_2f9a_a0_o());
}

void f_2937_a2_v(object a0, object a1)
{
	@SetVariable("d1q01", 7);
	f_2e7a_a0_v();
	f_2873_a2_b("quest_d1_01", "place_rubin");
}

void f_2945_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad1", 1);
}

void f_294b_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad2", 1);
}

void f_2951_a2_v(object a0, object a1)
{
	@SetVariable("ood1MladVlad3", 1);
}

void f_2957_a2_v(object a0, object a1)
{
	@SetVariable("d4MladVladVisit", 1);
}

void f_295d_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad6", 1);
}

void f_2963_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d8q04", 3);
	L0 = f_2f9a_a0_o();
	L0->AddMark("d8q04MladVladGotoMark", "pt_map_theater", 0, 515322, f_287f_a0_f());
	f_2f57_a0_v();
}

void f_297a_a2_v(object a0, object a1)
{
	@SetVariable("d8MladVladVisit", 1);
}

void f_2980_a2_v(object a0, object a1)
{
	f_2fab_a3_v(f_2f9a_a0_o(), "pt_gmap_r7_house2_01", 2);
	a1->ShowMap(f_2f9a_a0_o());
}

void f_2990_a2_v(object a0, object a1)
{
	f_2e6d_a0_v();
	f_2873_a2_b("quest_d11_05", "place_enemy_after");
	f_2873_a2_b("quest_d11_05", "completed");
}

void f_299f_a2_v(object a0, object a1)
{
	@SetVariable("ood3MladVlad3", 1);
}

void f_29a5_a2_v(object a0, object a1)
{
	if (f_27ec_a1_i("map_chertez_state") <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_29b6_a2_v(object a0, object a1)
{
	@Trace("lens is given");
	f_2839_a3_v(a0, "lens", 1);
}

void f_29c1_a2_v(object a0, object a1)
{
	@SetVariable("KnowPochka", 1);
}

void f_29c7_a2_v(object a0, object a1)
{
	@SetVariable("ood2MladVlad1", 1);
}

void f_29cd_a2_v(object a0, object a1)
{
	@SetVariable("ood2MladVlad2", 1);
}

void f_29d3_a2_v(object a0, object a1)
{
	f_2fab_a3_v(f_2f9a_a0_o(), "pt_map_theater", 2);
	a1->ShowMap(f_2f9a_a0_o());
}

void f_29e3_a2_v(object a0, object a1)
{
	f_2fab_a3_v(f_2f9a_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_2f9a_a0_o());
}

void f_29f3_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_29f9_a2_v(object a0, object a1)
{
	f_2fab_a3_v(f_2f9a_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_2f9a_a0_o());
}

void f_2a09_a2_v(object a0, object a1)
{
	f_2fab_a3_v(f_2f9a_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_2f9a_a0_o());
}

void f_2a19_a2_v(object a0, object a1)
{
	@Trace("money3000 is given");
	f_2813_a2_v(a0, 3000);
}

void f_2a23_a2_v(object a0, object a1)
{
	@SetVariable("ood3MladVlad1", 1);
}

void f_2a29_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q02", 2);
	L0 = f_2f9a_a0_o();
	L0->AddMark("d3q02MladVladGotoViktor", "pt_map_viktor", 0, 511384, f_287f_a0_f());
	f_2ea1_a0_v();
}

void f_2a40_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2f9a_a0_o();
	L0->AddMark("d3q02MladVladGotoButcher", "pt_gmap_r7_house2_01", 0, 524631, f_287f_a0_f());
	f_2eae_a0_v();
}

void f_2a53_a2_v(object a0, object a1)
{
	@SetVariable("ood4MladVlad1", 1);
}

void f_2a59_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01", 3);
	L0 = f_2f9a_a0_o();
	L0->AddMark("d4q01MladVladGotoBigVlad", "pt_map_bigvlad", 1, 511507, f_287f_a0_f());
	f_2ebb_a0_v();
}

void f_2a70_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01_subquest", 1);
	L0 = f_2f9a_a0_o();
	L0->AddMark("d4q01MladVladGotoOspina", "pt_map_ospina", 1, 511503, f_287f_a0_f());
}

void f_2a84_a2_v(object a0, object a1)
{
	@SetVariable("ood4MladVlad2", 1);
}

void f_2a8a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2f9a_a0_o();
	L0->AddMark("d4q02MladVladGotoAnna", "pt_map_anna", 0, 511526, f_287f_a0_f());
	L0->AddMark("d4q02MladVladGotoJulia", "pt_map_julia", 0, 511524, f_287f_a0_f());
	L0->AddMark("d4q02MladVladGotoLara", "pt_map_lara", 0, 511525, f_287f_a0_f());
	f_2ec8_a0_v();
	f_2ed5_a0_v();
	f_27fc_a1_o("quest_d4_02");
}

void f_2ab6_a2_v(object a0, object a1)
{
	@SetVariable("ood4MladVlad3", 1);
}

void f_2abc_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2f9a_a0_o();
	L0->AddMark("d6q02MladVladGotoBigVlad", "pt_map_bigvlad", 0, 515378, f_287f_a0_f());
	L0->AddMark("d6q02MladVladGotoBigVladSelf", "pt_map_mladvlad", 0, 515379, f_287f_a0_f());
	f_2efc_a0_v();
	f_2f16_a0_v();
	f_27f1_a1_o("quest_d6_02");
	f_2873_a2_b("quest_d6_02", "place_trigger");
}

void f_2ae4_a2_v(object a0, object a1)
{
	@SetVariable("ood6MladVlad1", 1);
}

void f_2aea_a2_v(object a0, object a1)
{
	@SetVariable("ood6MladVlad2", 1);
}

void f_2af0_a2_v(object a0, object a1)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}

void f_2af6_a2_v(object a0, object a1)
{
	@SetVariable("ood6MladVlad3", 1);
}

void f_2afc_a2_v(object a0, object a1)
{
	f_2f23_a0_v();
	f_2873_a2_b("quest_d6_03", "failed");
}

void f_2b06_a2_v(object a0, object a1)
{
	f_2846_a2_b(a0, 0.30000001192092896);
}

void f_2b0d_a2_v(object a0, object a1)
{
	@SetVariable("ood5MladVlad1", 1);
}

void f_2b13_a2_v(object a0, object a1)
{
	@SetVariable("ood5MladVlad2", 1);
}

void f_2b19_a2_v(object a0, object a1)
{
}

void f_2b1b_a2_v(object a0, object a1)
{
	@SetVariable("ood5MladVlad3", 1);
}

void f_2b21_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2f9a_a0_o();
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
	f_2f09_a0_v();
}

void f_2b48_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad1", 1);
}

void f_2b4e_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad2", 1);
}

void f_2b54_a2_v(object a0, object a1)
{
	if (f_27ec_a1_i("d8q01BringBadBoy") != 1 && f_27ec_a1_i("d8q01MatBringToy") != 1) {
		object L0;
		L0 = f_2f9a_a0_o();
		L0->AddMark("d8q01MladVladGotoMat", "pt_map_mat", 1, 515327, f_287f_a0_f());
		f_2f30_a0_v();
	}
}

void f_2b79_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad3", 1);
}

void f_2b7f_a2_v(object a0, object a1)
{
	@SetVariable("d8q01MladVladIsVictim", 1);
}

void f_2b85_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad4", 1);
}

void f_2b8b_a2_v(object a0, object a1)
{
	@SetVariable("ood8MladVlad5", 1);
}

void f_2b91_a2_v(object a0, object a1)
{
	@SetVariable("d8q04", 1);
	f_2f4a_a0_v();
	f_2f64_a0_v();
	f_27f1_a1_o("quest_d8_04");
}

void f_2ba1_a2_v(object a0, object a1)
{
	@SetVariable("KnowMladVlad", 1);
}

void f_2ba7_a2_v(object a0, object a1)
{
	if (f_27ec_a1_i("d5q03") == 0) {
		object L0;
		@SetVariable("d5q03", 1);
		L0 = f_2f9a_a0_o();
		L0->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 515370, f_287f_a0_f());
		f_2ee2_a0_v();
		f_2eef_a0_v();
		f_27f1_a1_o("quest_d5_03");
		f_2873_a2_b("quest_d5_03", "place_prisoners");
	}
}

void f_2bd1_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2f9a_a0_o();
	L0->AddMark("d8q01MladVladgotoOspina", "pt_map_ospina", 1, 515320, f_287f_a0_f());
	f_2f3d_a0_v();
}

bool f_2be4_a1_b(object a0)
{
	if (f_27ec_a1_i("ood3MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2bf0_a1_b(object a0)
{
	if (f_27ec_a1_i("d1q03") == 0) {
		return true;
	}
	return false;
}

bool f_2bfc_a1_b(object a0)
{
	if (f_27ec_a1_i("d1q03") == 1000) {
		return true;
	}
	return false;
}

bool f_2c08_a1_b(object a0)
{
	if (f_27ec_a1_i("d1q03IsKapella") == 1) {
		return true;
	}
	return false;
}

bool f_2c14_a1_b(object a0)
{
	if (f_27ec_a1_i("d1q01") == 6) {
		return true;
	}
	return false;
}

bool f_2c20_a1_b(object a0)
{
	if (f_27ec_a1_i("ood1MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2c2c_a1_b(object a0)
{
	if (f_27ec_a1_i("ood1MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2c38_a1_b(object a0)
{
	if (f_27ec_a1_i("ood1MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2c44_a1_b(object a0)
{
	if (f_27ec_a1_i("ood8MladVlad6") == 0) {
		return true;
	}
	return false;
}

bool f_2c50_a1_b(object a0)
{
	if (f_27ec_a1_i("d8q04") == 2) {
		return true;
	}
	return false;
}

bool f_2c5c_a1_b(object a0)
{
	if (f_27ec_a1_i("d11q05") == 2) {
		return true;
	}
	return false;
}

bool f_2c68_a1_b(object a0)
{
	if (f_27ec_a1_i("ood3MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2c74_a1_b(object a0)
{
	if (f_27ec_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_2c80_a1_b(object a0)
{
	if (f_27ec_a1_i("ood2MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2c8c_a1_b(object a0)
{
	if (f_27ec_a1_i("ood2MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2c98_a1_b(object a0)
{
	if (f_27ec_a1_i("d3q01") == 0) {
		return true;
	}
	return false;
}

bool f_2ca4_a1_b(object a0)
{
	if (f_27ec_a1_i("d3q02") == 1) {
		return true;
	}
	return false;
}

bool f_2cb0_a1_b(object a0)
{
	if (f_27ec_a1_i("ood3MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2cbc_a1_b(object a0)
{
	if (f_27ec_a1_i("d3q02") == 3) {
		return true;
	}
	return false;
}

bool f_2cc8_a1_b(object a0)
{
	if (f_27ec_a1_i("d3q02") == 4) {
		return true;
	}
	return false;
}

bool f_2cd4_a1_b(object a0)
{
	if (f_27ec_a1_i("d4q01") == 2) {
		return true;
	}
	return false;
}

bool f_2ce0_a1_b(object a0)
{
	if (f_27ec_a1_i("ood4MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2cec_a1_b(object a0)
{
	if (f_27ec_a1_i("ood4MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2cf8_a1_b(object a0)
{
	if (f_27ec_a1_i("d4q02") == 1000) {
		return true;
	}
	return false;
}

bool f_2d04_a1_b(object a0)
{
	if (f_27ec_a1_i("ood4MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2d10_a1_b(object a0)
{
	if (f_27ec_a1_i("d6q02") == 0) {
		return true;
	}
	return false;
}

bool f_2d1c_a1_b(object a0)
{
	if (f_27ec_a1_i("ood6MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2d28_a1_b(object a0)
{
	if (f_27ec_a1_i("ood6MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2d34_a1_b(object a0)
{
	if (f_27ec_a1_i("ood6MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2d40_a1_b(object a0)
{
	if (f_27ec_a1_i("d5q03") == 0) {
		return true;
	}
	return false;
}

bool f_2d4c_a1_b(object a0)
{
	if (f_27ec_a1_i("d5q03") == 1000) {
		return true;
	}
	return false;
}

bool f_2d58_a1_b(object a0)
{
	if (f_27ec_a1_i("d5q03") == -1) {
		return true;
	}
	return false;
}

bool f_2d64_a1_b(object a0)
{
	if (f_27ec_a1_i("d5q03") == 2) {
		return true;
	}
	return false;
}

bool f_2d70_a1_b(object a0)
{
	if (f_27ec_a1_i("ood5MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2d7c_a1_b(object a0)
{
	if (f_27ec_a1_i("ood5MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2d88_a1_b(object a0)
{
	if (f_27ec_a1_i("ood5MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2d94_a1_b(object a0)
{
	if (f_27ec_a1_i("d6q02GorbunDeath") != 0) {
		return true;
	}
	return false;
}

bool f_2da0_a1_b(object a0)
{
	if (f_27ec_a1_i("d6q02Trigger") != 0) {
		return true;
	}
	return false;
}

bool f_2dac_a1_b(object a0)
{
	if (f_27ec_a1_i("d8q01") == 1) {
		return true;
	}
	return false;
}

bool f_2db8_a1_b(object a0)
{
	if (f_27ec_a1_i("d8q01MladVladIsBad") == 1) {
		return true;
	}
	return false;
}

bool f_2dc4_a1_b(object a0)
{
	if (f_27ec_a1_i("ood8MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2dd0_a1_b(object a0)
{
	if (f_27ec_a1_i("ood8MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2ddc_a1_b(object a0)
{
	if (f_27ec_a1_i("d8q01BringBadBoy") == 1) {
		return true;
	}
	return false;
}

bool f_2de8_a1_b(object a0)
{
	if (f_27ec_a1_i("ood8MladVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2df4_a1_b(object a0)
{
	if (f_27ec_a1_i("ood8MladVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_2e00_a1_b(object a0)
{
	if (f_27ec_a1_i("ood8MladVlad5") == 0) {
		return true;
	}
	return false;
}

bool f_2e0c_a1_b(object a0)
{
	if (f_27ec_a1_i("d8q01BigVladIsVictim") == 1) {
		return true;
	}
	return false;
}

bool f_2e18_a1_b(object a0)
{
	if (f_27ec_a1_i("d8q01MladVladIsVictim") == 1) {
		return true;
	}
	return false;
}

bool f_2e24_a1_b(object a0)
{
	if (f_27ec_a1_i("d1q01") != 0 || f_27ec_a1_i("d1q01") != 1000 || f_27ec_a1_i("d1q01") != -1) {
		return true;
	}
	return false;
}

bool f_2e46_a1_b(object a0)
{
	if (f_2e5a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2e50_a1_b(object a0)
{
	if (f_2e66_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2e5a_a1_b(object a0)
{
	int L0;
	int L1;
	L0 = f_2884_a0_i();
	@GetVariable("RMap" + L0, L1);
	return L1 != 0;
}

bool f_2e66_a1_b(object a0)
{
	int L0;
	a0->GetProperty("money", L0);
	return L0 >= 1000;
}

void f_2e6d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 685, 2, 534500);
	f_2f7e_a2_b(L0, 682);
}

void f_2e7a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 620, 1, 532194);
	f_2f7e_a2_b(L0, 2);
}

void f_2e87_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 37, 2, 512119);
	f_2f7e_a2_b(L0, -1);
}

void f_2e94_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 681, 2, 534423);
	f_2f7e_a2_b(L0, 37);
}

void f_2ea1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 78, 2, 512160);
	f_2f7e_a2_b(L0, 26);
}

void f_2eae_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 79, 2, 512161);
	f_2f7e_a2_b(L0, 26);
}

void f_2ebb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 137, 1, 515323);
	f_2f7e_a2_b(L0, 20);
}

void f_2ec8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 21, 2, 503361);
	f_2f7e_a2_b(L0, -1);
}

void f_2ed5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 92, 2, 512174);
	f_2f7e_a2_b(L0, 21);
}

void f_2ee2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 154, 2, 515365);
	f_2f7e_a2_b(L0, -1);
}

void f_2eef_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 155, 2, 515366);
	f_2f7e_a2_b(L0, 154);
}

void f_2efc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 102, 2, 513725);
	f_2f7e_a2_b(L0, -1);
}

void f_2f09_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 104, 2, 513727);
	f_2f7e_a2_b(L0, 102);
}

void f_2f16_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 106, 2, 513729);
	f_2f7e_a2_b(L0, 102);
}

void f_2f23_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 110, 2, 513733);
	f_2f7e_a2_b(L0, 107);
}

void f_2f30_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 718, 1, 538759);
	f_2f7e_a2_b(L0, 175);
}

void f_2f3d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 177, 1, 515436);
	f_2f7e_a2_b(L0, 175);
}

void f_2f4a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 649, 2, 533362);
	f_2f7e_a2_b(L0, -1);
}

void f_2f57_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 652, 2, 533365);
	f_2f7e_a2_b(L0, 649);
}

void f_2f64_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 650, 2, 533363);
	f_2f7e_a2_b(L0, 649);
}

object f_2f71_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2f7e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2f71_a0_o();
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

object f_2f9a_a0_o(void)
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

void f_2fab_a3_v(object a0, string a1, float a2)
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

int f_2fcc_a0_i(void)
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

void f_2fdd_a1_v(object a0)
{
	if (!g2) {
		t8{a0};
		g2 = true;
	}
	if (f_288d_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_288d_a1_b(2)) {
		t10{a0};
		return;
	}
	if (f_288d_a1_b(3)) {
		t12{a0};
		return;
	}
	if (f_288d_a1_b(4)) {
		t14{a0};
		return;
	}
	if (f_288d_a1_b(5)) {
		t16{a0};
		return;
	}
	if (f_288d_a1_b(6)) {
		t18{a0};
		return;
	}
	if (f_288d_a1_b(7)) {
		t22{a0};
		return;
	}
	if (f_288d_a1_b(8)) {
		t20{a0};
		return;
	}
	if (f_288d_a1_b(9)) {
		t24{a0};
		return;
	}
	if (f_288d_a1_b(10)) {
		t26{a0};
		return;
	}
	if (f_288d_a1_b(11)) {
		t28{a0};
		return;
	}
	if (f_288d_a1_b(12)) {
		t6{a0};
		return;
	}
	t30{a0};
}

