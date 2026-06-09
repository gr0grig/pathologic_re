event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var int g2;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			f_1593_a1_v("Neutral");
			@lshWaitForAnimEnd();
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		@lshStopAnimation();
		@StopTrade();
		tv0 = true;
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_1730_a2_v(tv1, tv0);
			f_ab_a1_v("Neutral");
			tv0->SetMessage(500383);
			tv0->ClearReplies();
			tv0->AddReply(500384, 448, 445);
			tv0->AddReply(500385, 449, 446);
			tv0->AddReply(500386, 450, 447);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_ab_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a0 == 444) {
				f_1730_a2_v(tv1, tv0);
				f_ab_a1_v("Neutral");
				tv0->SetMessage(500383);
				tv0->ClearReplies();
				tv0->AddReply(500384, 448, 445);
				tv0->AddReply(500385, 449, 446);
				tv0->AddReply(500386, 450, 447);
				return;
			}
			if (a0 == 450) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(500389);
				tv0->ClearReplies();
				tv0->AddReply(500395, 454, 459);
				tv0->AddReply(500396, 454, 460);
				return;
			}
			if (a0 == 449) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(500388);
				tv0->ClearReplies();
				tv0->AddReply(500394, 454, 456);
				tv0->AddReply(500392, 454, 453);
				return;
			}
			if (a0 == 448) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(500387);
				tv0->ClearReplies();
				tv0->AddReply(500390, 454, 451);
				tv0->AddReply(500391, 454, 452);
				return;
			}
			if (a0 == 454) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(500393);
				tv0->ClearReplies();
				tv0->AddReply(500397, -1, 463);
				tv0->AddReply(500398, -1, 464);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t4{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_208_a1_v("Neutral");
			tv0->SetMessage(506959);
			tv0->ClearReplies();
			if (f_178e_a1_b(tv1) && f_17b2_a1_b(tv1)) {
				tv0->AddReply(507328, 8080, 8079);
			}
			if (f_179a_a1_b(tv1)) {
				tv0->AddReply(507319, 8070, 8069);
			}
			if (f_17a6_a1_b(tv1)) {
				tv0->AddReply(507335, 8049, 8087);
			}
			tv0->AddReply(536144, -1, 37903);
			tv0->AddReply(507530, -1, 8312);
			tv0->AddReply(533848, -1, 35398);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_208_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 7671) {
				f_16bc_a2_v(tv1, tv0);
				f_16ce_a2_v(tv1, tv0);
				f_1683_a2_v(tv1, tv0);
				f_1689_a2_v(tv1, tv0);
				f_16d7_a2_v(tv1, tv0);
			}
			if (a1 == 8069) {
				f_16c2_a2_v(tv1, tv0);
			}
			if (a1 == 8087) {
				f_1746_a2_v(tv1, tv0);
			}
			if (a1 == 8054) {
				f_16c8_a2_v(tv1, tv0);
			}
			if (a1 == 8055) {
				f_16c8_a2_v(tv1, tv0);
			}
			if (a1 == 8060) {
				f_16c8_a2_v(tv1, tv0);
			}
			if (a1 == 8061) {
				f_16c8_a2_v(tv1, tv0);
			}
			if (a1 == 37903) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 7666) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(506959);
				tv0->ClearReplies();
				if (f_178e_a1_b(tv1) && f_17b2_a1_b(tv1)) {
					tv0->AddReply(507328, 8080, 8079);
				}
				if (f_179a_a1_b(tv1)) {
					tv0->AddReply(507319, 8070, 8069);
				}
				if (f_17a6_a1_b(tv1)) {
					tv0->AddReply(507335, 8049, 8087);
				}
				tv0->AddReply(536144, -1, 37903);
				tv0->AddReply(507530, -1, 8312);
				tv0->AddReply(533848, -1, 35398);
				return;
			}
			if (a0 == 8049) {
				f_208_a1_v("Anger");
				tv0->SetMessage(507300);
				tv0->ClearReplies();
				tv0->AddReply(507301, 8051, 8050);
				tv0->AddReply(507313, 8053, 8062);
				return;
			}
			if (a0 == 8051) {
				f_208_a1_v("Smile");
				tv0->SetMessage(507302);
				tv0->ClearReplies();
				tv0->AddReply(507303, 8053, 8052);
				tv0->AddReply(507307, 8057, 8056);
				return;
			}
			if (a0 == 8057) {
				f_208_a1_v("Smile");
				tv0->SetMessage(507308);
				tv0->ClearReplies();
				tv0->AddReply(507309, 8059, 8058);
				return;
			}
			if (a0 == 8059) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(507310);
				tv0->ClearReplies();
				tv0->AddReply(507311, -1, 8060);
				tv0->AddReply(507312, -1, 8061);
				return;
			}
			if (a0 == 8053) {
				f_208_a1_v("Anger");
				tv0->SetMessage(507304);
				tv0->ClearReplies();
				tv0->AddReply(507305, -1, 8054);
				tv0->AddReply(507306, -1, 8055);
				return;
			}
			if (a0 == 8070) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(507320);
				tv0->ClearReplies();
				tv0->AddReply(506965, 7673, 7672);
				return;
			}
			if (a0 == 7673) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(506966);
				tv0->ClearReplies();
				tv0->AddReply(506967, 8088, 7674);
				tv0->AddReply(507343, 8088, 8095);
				return;
			}
			if (a0 == 8088) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(507336);
				tv0->ClearReplies();
				tv0->AddReply(507337, 8090, 8089);
				return;
			}
			if (a0 == 8090) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(507338);
				tv0->ClearReplies();
				tv0->AddReply(507342, -1, 8094);
				tv0->AddReply(507341, -1, 8093);
				return;
			}
			if (a0 == 8080) {
				f_208_a1_v("Sly");
				tv0->SetMessage(507329);
				tv0->ClearReplies();
				tv0->AddReply(507330, 8082, 8081);
				return;
			}
			if (a0 == 8082) {
				f_208_a1_v("Sly");
				tv0->SetMessage(507331);
				tv0->ClearReplies();
				tv0->AddReply(507332, 7670, 8083);
				return;
			}
			if (a0 == 7670) {
				f_208_a1_v("Smile");
				tv0->SetMessage(506963);
				tv0->ClearReplies();
				tv0->AddReply(506964, -1, 7671);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t6{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			if (f_17ca_a1_b(tv1) && f_17d6_a1_b(tv1)) {
				f_49b_a1_v("Smile");
				tv0->SetMessage(510952);
				tv0->ClearReplies();
				tv0->AddReply(510953, 12113, 12112);
				tv0->AddReply(510960, 12113, 12119);
				break;
			}
			f_49b_a1_v("Neutral");
			tv0->SetMessage(509615);
			tv0->ClearReplies();
			if (f_17e2_a1_b(tv1) && f_17ee_a1_b(tv1)) {
				tv0->AddReply(510970, 12133, 12132);
			}
			if (f_1834_a1_b(tv1) && f_1776_a1_b(tv1)) {
				tv0->AddReply(510948, 12108, 12107);
			}
			if (f_1782_a1_b(tv1)) {
				tv0->AddReply(509640, 10581, 10608);
			}
			tv0->AddReply(514119, -1, 15333);
			tv0->AddReply(509616, -1, 10580);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_49b_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 12126) {
				f_16ec_a2_v(tv1, tv0);
				f_16f2_a2_v(tv1, tv0);
			}
			if (a1 == 12127) {
				f_16ec_a2_v(tv1, tv0);
				f_16f2_a2_v(tv1, tv0);
			}
			if (a1 == 12118) {
				f_16ec_a2_v(tv1, tv0);
				f_16f2_a2_v(tv1, tv0);
			}
			if (a1 == 12137) {
				f_1712_a2_v(tv1, tv0);
				f_1673_a2_v(tv1, tv0);
				f_167d_a2_v(tv1, tv0);
			}
			if (a1 == 12138) {
				f_1712_a2_v(tv1, tv0);
				f_1673_a2_v(tv1, tv0);
				f_167d_a2_v(tv1, tv0);
			}
			if (a1 == 12107) {
				f_16b0_a2_v(tv1, tv0);
			}
			if (a1 == 10608) {
				f_16b6_a2_v(tv1, tv0);
			}
			if (a1 == 15333) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 12111) {
				if (f_17ca_a1_b(tv1) && f_17d6_a1_b(tv1)) {
					f_49b_a1_v("Smile");
					tv0->SetMessage(510952);
					tv0->ClearReplies();
					tv0->AddReply(510953, 12113, 12112);
					tv0->AddReply(510960, 12113, 12119);
					return;
				}
				f_49b_a1_v("Neutral");
				tv0->SetMessage(509615);
				tv0->ClearReplies();
				if (f_17e2_a1_b(tv1) && f_17ee_a1_b(tv1)) {
					tv0->AddReply(510970, 12133, 12132);
				}
				if (f_1834_a1_b(tv1) && f_1776_a1_b(tv1)) {
					tv0->AddReply(510948, 12108, 12107);
				}
				if (f_1782_a1_b(tv1)) {
					tv0->AddReply(509640, 10581, 10608);
				}
				tv0->AddReply(514119, -1, 15333);
				tv0->AddReply(509616, -1, 10580);
				return;
			}
			if (a0 == 10581) {
				f_49b_a1_v("Fear");
				tv0->SetMessage(509617);
				tv0->ClearReplies();
				tv0->AddReply(509636, 10604, 10603);
				return;
			}
			if (a0 == 10604) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(509637);
				tv0->ClearReplies();
				tv0->AddReply(509638, -1, 10605);
				return;
			}
			if (a0 == 12108) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(510949);
				tv0->ClearReplies();
				tv0->AddReply(510950, 12110, 12109);
				tv0->AddReply(510969, 10583, 12130);
				return;
			}
			if (a0 == 12110) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(510951);
				tv0->ClearReplies();
				tv0->AddReply(509618, 10583, 10582);
				tv0->AddReply(510967, -1, 12128);
				tv0->AddReply(510972, -1, 12134);
				return;
			}
			if (a0 == 10583) {
				f_49b_a1_v("Sly");
				tv0->SetMessage(509619);
				tv0->ClearReplies();
				tv0->AddReply(509620, 10585, 10584);
				tv0->AddReply(509635, 10585, 10601);
				return;
			}
			if (a0 == 10585) {
				f_49b_a1_v("Sly");
				tv0->SetMessage(509621);
				tv0->ClearReplies();
				tv0->AddReply(509623, 10588, 10587);
				tv0->AddReply(509634, 10595, 10599);
				tv0->AddReply(509622, -1, 10586);
				return;
			}
			if (a0 == 10588) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(509624);
				tv0->ClearReplies();
				tv0->AddReply(509625, -1, 10589);
				tv0->AddReply(509626, 10591, 10590);
				tv0->AddReply(509630, 10595, 10594);
				return;
			}
			if (a0 == 10595) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(509631);
				tv0->ClearReplies();
				tv0->AddReply(509632, -1, 10596);
				tv0->AddReply(509633, 10591, 10597);
				return;
			}
			if (a0 == 10591) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(509627);
				tv0->ClearReplies();
				tv0->AddReply(509628, -1, 10592);
				tv0->AddReply(509629, -1, 10593);
				return;
			}
			if (a0 == 12133) {
				f_49b_a1_v("Smile");
				tv0->SetMessage(510971);
				tv0->ClearReplies();
				tv0->AddReply(510973, 12136, 12135);
				tv0->AddReply(533046, 12136, 34556);
				return;
			}
			if (a0 == 12136) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(510974);
				tv0->ClearReplies();
				tv0->AddReply(510975, -1, 12137);
				tv0->AddReply(510976, -1, 12138);
				return;
			}
			if (a0 == 12113) {
				f_49b_a1_v("Smile");
				tv0->SetMessage(510954);
				tv0->ClearReplies();
				tv0->AddReply(510955, 12115, 12114);
				tv0->AddReply(510961, 34554, 12121);
				return;
			}
			if (a0 == 34554) {
				f_49b_a1_v("Anger");
				tv0->SetMessage(533044);
				tv0->ClearReplies();
				tv0->AddReply(533045, 12117, 34555);
				return;
			}
			if (a0 == 12115) {
				f_49b_a1_v("Anger");
				tv0->SetMessage(510956);
				tv0->ClearReplies();
				tv0->AddReply(510957, 12117, 12116);
				return;
			}
			if (a0 == 12117) {
				f_49b_a1_v("Smile");
				tv0->SetMessage(510958);
				tv0->ClearReplies();
				tv0->AddReply(510963, 12125, 12124);
				tv0->AddReply(510959, -1, 12118);
				return;
			}
			if (a0 == 12125) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(510964);
				tv0->ClearReplies();
				tv0->AddReply(510965, -1, 12126);
				tv0->AddReply(510966, -1, 12127);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_79a_a1_v("Neutral");
			tv0->SetMessage(509843);
			tv0->ClearReplies();
			if (f_176a_a1_b(tv1) && !f_17be_a1_b(tv1)) {
				tv0->AddReply(509848, 10848, 10847);
			}
			tv0->AddReply(514117, -1, 15331);
			tv0->AddReply(514118, -1, 15332);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_79a_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 10847) {
				f_16aa_a2_v(tv1, tv0);
			}
			if (a1 == 15331) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 10842) {
				f_79a_a1_v("Neutral");
				tv0->SetMessage(509843);
				tv0->ClearReplies();
				if (f_176a_a1_b(tv1) && !f_17be_a1_b(tv1)) {
					tv0->AddReply(509848, 10848, 10847);
				}
				tv0->AddReply(514117, -1, 15331);
				tv0->AddReply(514118, -1, 15332);
				return;
			}
			if (a0 == 10848) {
				f_79a_a1_v("Neutral");
				tv0->SetMessage(509849);
				tv0->ClearReplies();
				tv0->AddReply(509850, 10850, 10849);
				tv0->AddReply(509856, 10852, 10855);
				return;
			}
			if (a0 == 10850) {
				f_79a_a1_v("Neutral");
				tv0->SetMessage(509851);
				tv0->ClearReplies();
				tv0->AddReply(509852, 10852, 10851);
				return;
			}
			if (a0 == 10852) {
				f_79a_a1_v("Smile");
				tv0->SetMessage(509853);
				tv0->ClearReplies();
				tv0->AddReply(509854, -1, 10853);
				tv0->AddReply(509855, -1, 10854);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t10{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			if (f_1828_a1_b(tv1) && f_1840_a1_b(tv1)) {
				f_174c_a2_v(tv1, tv0);
				f_92a_a1_v("Sly");
				tv0->SetMessage(511720);
				tv0->ClearReplies();
				tv0->AddReply(511721, 12928, 12927);
				tv0->AddReply(515755, 12928, 16821);
				break;
			}
			f_92a_a1_v("Neutral");
			tv0->SetMessage(511704);
			tv0->ClearReplies();
			if (f_17fa_a1_b(tv1) && f_1806_a1_b(tv1)) {
				tv0->AddReply(511705, 12910, 12909);
			}
			if (f_17fa_a1_b(tv1) && !f_181c_a1_b(tv1) && !f_1806_a1_b(tv1) && f_1812_a1_b(tv1)) {
				tv0->AddReply(511734, 16834, 12940);
			}
			tv0->AddReply(514120, -1, 15334);
			tv0->AddReply(511739, -1, 12945);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_92a_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 12909) {
				f_1718_a2_v(tv1, tv0);
			}
			if (a1 == 12936) {
				f_1736_a2_v(tv1, tv0);
			}
			if (a1 == 12939) {
				f_1736_a2_v(tv1, tv0);
			}
			if (a1 == 16829) {
				f_1736_a2_v(tv1, tv0);
			}
			if (a1 == 12925) {
				f_1736_a2_v(tv1, tv0);
			}
			if (a1 == 12944) {
				f_171e_a2_v(tv1, tv0);
				f_1694_a2_v(tv1, tv0);
			}
			if (a1 == 15334) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 12926) {
				if (f_1828_a1_b(tv1) && f_1840_a1_b(tv1)) {
					f_174c_a2_v(tv1, tv0);
					f_92a_a1_v("Sly");
					tv0->SetMessage(511720);
					tv0->ClearReplies();
					tv0->AddReply(511721, 12928, 12927);
					tv0->AddReply(515755, 12928, 16821);
					return;
				}
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511704);
				tv0->ClearReplies();
				if (f_17fa_a1_b(tv1) && f_1806_a1_b(tv1)) {
					tv0->AddReply(511705, 12910, 12909);
				}
				if (f_17fa_a1_b(tv1) && !f_181c_a1_b(tv1) && !f_1806_a1_b(tv1) && f_1812_a1_b(tv1)) {
					tv0->AddReply(511734, 16834, 12940);
				}
				tv0->AddReply(514120, -1, 15334);
				tv0->AddReply(511739, -1, 12945);
				return;
			}
			if (a0 == 16834) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(515765);
				tv0->ClearReplies();
				tv0->AddReply(515766, 16836, 16835);
				return;
			}
			if (a0 == 16836) {
				f_92a_a1_v("Anger");
				tv0->SetMessage(515767);
				tv0->ClearReplies();
				tv0->AddReply(515768, 12941, 16837);
				return;
			}
			if (a0 == 12941) {
				f_92a_a1_v("Anger");
				tv0->SetMessage(511735);
				tv0->ClearReplies();
				tv0->AddReply(511736, 12943, 12942);
				return;
			}
			if (a0 == 12943) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511737);
				tv0->ClearReplies();
				tv0->AddReply(511738, -1, 12944);
				return;
			}
			if (a0 == 12910) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511706);
				tv0->ClearReplies();
				tv0->AddReply(511707, 12913, 12911);
				tv0->AddReply(511708, 12913, 12912);
				return;
			}
			if (a0 == 12913) {
				f_92a_a1_v("Smile");
				tv0->SetMessage(511709);
				tv0->ClearReplies();
				tv0->AddReply(511710, 12916, 12915);
				tv0->AddReply(511713, 12919, 12918);
				return;
			}
			if (a0 == 12919) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511714);
				tv0->ClearReplies();
				tv0->AddReply(511715, 12916, 12920);
				return;
			}
			if (a0 == 12916) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511711);
				tv0->ClearReplies();
				tv0->AddReply(511712, 12935, 12917);
				tv0->AddReply(511728, 12922, 12934);
				return;
			}
			if (a0 == 12922) {
				f_92a_a1_v("Anger");
				tv0->SetMessage(511716);
				tv0->ClearReplies();
				tv0->AddReply(511717, 12924, 12923);
				return;
			}
			if (a0 == 12924) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511718);
				tv0->ClearReplies();
				if (f_1812_a1_b(tv1)) {
					tv0->AddReply(515760, 16834, 16829);
				}
				tv0->AddReply(511719, -1, 12925);
				return;
			}
			if (a0 == 12935) {
				f_92a_a1_v("Anger");
				tv0->SetMessage(511729);
				tv0->ClearReplies();
				tv0->AddReply(511730, -1, 12936);
				tv0->AddReply(511731, 12938, 12937);
				if (f_1812_a1_b(tv1)) {
					tv0->AddReply(512485, 16834, 13653);
				}
				return;
			}
			if (a0 == 12938) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511732);
				tv0->ClearReplies();
				tv0->AddReply(511733, -1, 12939);
				return;
			}
			if (a0 == 12928) {
				f_92a_a1_v("Sly");
				tv0->SetMessage(511722);
				tv0->ClearReplies();
				tv0->AddReply(511723, 12930, 12929);
				tv0->AddReply(515761, -1, 16830);
				return;
			}
			if (a0 == 12930) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511724);
				tv0->ClearReplies();
				tv0->AddReply(511726, 12933, 12932);
				tv0->AddReply(511725, -1, 12931);
				return;
			}
			if (a0 == 12933) {
				f_92a_a1_v("Neutral");
				tv0->SetMessage(511727);
				tv0->ClearReplies();
				tv0->AddReply(515757, 16826, 16825);
				tv0->AddReply(515763, -1, 16832);
				return;
			}
			if (a0 == 16826) {
				f_92a_a1_v("Sly");
				tv0->SetMessage(515758);
				tv0->ClearReplies();
				tv0->AddReply(515764, -1, 16833);
				tv0->AddReply(515762, -1, 16831);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t12{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_bef_a1_v("Fear");
			tv0->SetMessage(514122);
			tv0->ClearReplies();
			tv0->AddReply(514123, -1, 15337);
			tv0->AddReply(514124, -1, 15338);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_bef_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 15337) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 15336) {
				f_bef_a1_v("Fear");
				tv0->SetMessage(514122);
				tv0->ClearReplies();
				tv0->AddReply(514123, -1, 15337);
				tv0->AddReply(514124, -1, 15338);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t14{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_cc2_a1_v("Smile");
			tv0->SetMessage(514126);
			tv0->ClearReplies();
			tv0->AddReply(514127, -1, 15341);
			tv0->AddReply(514128, -1, 15342);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_cc2_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 15341) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 15340) {
				f_cc2_a1_v("Smile");
				tv0->SetMessage(514126);
				tv0->ClearReplies();
				tv0->AddReply(514127, -1, 15341);
				tv0->AddReply(514128, -1, 15342);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t16{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_d95_a1_v("Sly");
			tv0->SetMessage(538735);
			tv0->ClearReplies();
			tv0->AddReply(538736, -1, 40647);
			tv0->AddReply(538754, -1, 40666);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_d95_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 40647) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 40646) {
				f_d95_a1_v("Sly");
				tv0->SetMessage(538735);
				tv0->ClearReplies();
				tv0->AddReply(538736, -1, 40647);
				tv0->AddReply(538754, -1, 40666);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t18{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_e68_a1_v("Anger");
			tv0->SetMessage(514134);
			tv0->ClearReplies();
			tv0->AddReply(514135, -1, 15349);
			tv0->AddReply(514136, -1, 15350);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_e68_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 15349) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 15348) {
				f_e68_a1_v("Anger");
				tv0->SetMessage(514134);
				tv0->ClearReplies();
				tv0->AddReply(514135, -1, 15349);
				tv0->AddReply(514136, -1, 15350);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t20{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_f3b_a1_v("Sly");
			tv0->SetMessage(541830);
			tv0->ClearReplies();
			tv0->AddReply(514139, -1, 15353);
			tv0->AddReply(541833, -1, 44048);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_f3b_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 15353) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 44045) {
				f_f3b_a1_v("Sly");
				tv0->SetMessage(541830);
				tv0->ClearReplies();
				tv0->AddReply(514139, -1, 15353);
				tv0->AddReply(541833, -1, 44048);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
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
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t22{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
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
			f_1013_a1_v("Fear");
			tv0->SetMessage(514186);
			tv0->ClearReplies();
			tv0->AddReply(514187, -1, 15401);
			tv0->AddReply(514188, -1, 15402);
			tv0->AddReply(539631, -1, 41577);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_1013_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 15401) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 15400) {
				f_1013_a1_v("Fear");
				tv0->SetMessage(514186);
				tv0->ClearReplies();
				tv0->AddReply(514187, -1, 15401);
				tv0->AddReply(514188, -1, 15402);
				tv0->AddReply(539631, -1, 41577);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t23
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t24{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t24
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
			f_1108_a1_v("Neutral");
			tv0->SetMessage(533838);
			tv0->ClearReplies();
			if (f_1752_a1_b(tv1)) {
				tv0->AddReply(533839, 35390, 35389);
			}
			if (f_184c_a1_b(tv1) && f_175e_a1_b(tv1)) {
				tv0->AddReply(533960, 35529, 35528);
			}
			tv0->AddReply(533843, -1, 35393);
			tv0->AddReply(533844, -1, 35394);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_1108_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a1 == 35389) {
				f_169e_a2_v(tv1, tv0);
			}
			if (a1 == 35396) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a1 == 35397) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a1 == 35528) {
				f_16a4_a2_v(tv1, tv0);
			}
			if (a1 == 35393) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 35388) {
				f_1108_a1_v("Neutral");
				tv0->SetMessage(533838);
				tv0->ClearReplies();
				if (f_1752_a1_b(tv1)) {
					tv0->AddReply(533839, 35390, 35389);
				}
				if (f_184c_a1_b(tv1) && f_175e_a1_b(tv1)) {
					tv0->AddReply(533960, 35529, 35528);
				}
				tv0->AddReply(533843, -1, 35393);
				tv0->AddReply(533844, -1, 35394);
				return;
			}
			if (a0 == 35529) {
				f_1108_a1_v("Sly");
				tv0->SetMessage(533961);
				tv0->ClearReplies();
				tv0->AddReply(533962, 35531, 35530);
				tv0->AddReply(533972, 35533, 35542);
				return;
			}
			if (a0 == 35531) {
				f_1108_a1_v("Smile");
				tv0->SetMessage(533963);
				tv0->ClearReplies();
				tv0->AddReply(533964, 35533, 35532);
				tv0->AddReply(533971, 35533, 35540);
				return;
			}
			if (a0 == 35533) {
				f_1108_a1_v("Smile");
				tv0->SetMessage(533965);
				tv0->ClearReplies();
				tv0->AddReply(533966, 35535, 35534);
				tv0->AddReply(533970, 35535, 35538);
				tv0->AddReply(533973, 35545, 35544);
				return;
			}
			if (a0 == 35545) {
				f_1108_a1_v("Sly");
				tv0->SetMessage(533974);
				tv0->ClearReplies();
				tv0->AddReply(533975, 35547, 35546);
				return;
			}
			if (a0 == 35547) {
				f_1108_a1_v("Neutral");
				tv0->SetMessage(533976);
				tv0->ClearReplies();
				tv0->AddReply(533977, -1, 35548);
				tv0->AddReply(533978, -1, 35549);
				return;
			}
			if (a0 == 35535) {
				f_1108_a1_v("Sly");
				tv0->SetMessage(533967);
				tv0->ClearReplies();
				tv0->AddReply(533968, -1, 35536);
				tv0->AddReply(533969, -1, 35537);
				return;
			}
			if (a0 == 35390) {
				f_1108_a1_v("Fear");
				tv0->SetMessage(533840);
				tv0->ClearReplies();
				tv0->AddReply(533842, 35395, 35392);
				tv0->AddReply(533841, -1, 35391);
				return;
			}
			if (a0 == 35395) {
				f_1108_a1_v("Neutral");
				tv0->SetMessage(533845);
				tv0->ClearReplies();
				tv0->AddReply(533846, -1, 35396);
				tv0->AddReply(533847, -1, 35397);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t25
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_1475_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166b_a0_i());
		L0->SetNPCDescription(f_1669_a0_i());
		L0->SetPhoto(f_166d_a0_s());
		L0->SetPhoto2(f_166f_a0_s());
		L0->SetPlayerName(f_1988_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14cc_a1_b(f_15e4_a0_o());
		t26{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14ba_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t26
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
			f_12d5_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_1671_a0_b()) {
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

	void f_12d5_a1_v(string a0)
	{
		if (!f_1671_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15a3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c1_a0_v();
			if (a0 == 36971) {
				f_12d5_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_12d5_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_12d5_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_1671_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t27
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		g2 = -1;
		f_1352_a0_v();
	}

	void f_1352_a0_v(void)
	{
		if (!f_1470_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_1402_a0_v();
		}
	}

	bool f_1360_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1467_a1_b(L0);
	}

	void f_136f_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1374_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_144e_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_138a_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1393_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1393_a0_v();
			if (f_1470_a0_b() && f_1374_a0_b()) {
				if (f_1360_a0_b()) {
					f_1506_a1_b(f_15e4_a0_o());
				}
			} else {
				f_136f_a0_v();
				f_138a_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1449_a0_v();
		f_1393_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1393_a0_v();
		f_1593_a1_v("Neutral");
		f_138a_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_138a_a0_v();
		} else {
			f_1593_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1449_a0_v();
			f_1467_a1_b(a0);
			enable OnUse;
			f_19b2_a1_v(a0);
			f_1593_a1_v("Neutral");
			f_1393_a0_v();
			f_138a_a0_v();
		}
	}
}

void f_1402_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1470_a0_b()) {
		return;
	}
	L0 = f_1658_a0_i();
	for (L1 = 0; L1 < 5 && f_1470_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1651_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1447_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1447_a0_b(void)
{
	return true;
}

void f_1449_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_144e_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_1456_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_145d_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1467_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_145d_a1_b(L0);
}

bool f_1470_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1475_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_15ea_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1671_a0_b()) {
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

void f_14ba_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1671_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_14cc_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1506_a1_b(a0)) {
			if (!f_152b_a1_b(a0)) {
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
		if (!f_152b_a1_b(a0)) {
			if (!f_1506_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1506_a1_b(object a0)
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
	return f_15b2_a1_b(L4);
}

bool f_152b_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1642_a0_i() + "m";
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
	return f_15b2_a1_b(L4);
}

bool f_1556_a1_b(object a0)
{
	return f_155e_a2_b(a0, 70);
}

bool f_155e_a2_b(object a0, float a1)
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
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_158e_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_1593_a1_v(string a0)
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

void f_15a3_a2_v(string a0, bool a1)
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

bool f_15b2_a1_b(string a0)
{
	if (f_1671_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_15c1_a0_v(void)
{
	if (f_1671_a0_b()) {
		@lshStopSpeech();
	}
}

void f_15c8_a3_v(string a0, int a1, int a2)
{
	if (f_15f4_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_15d3_a5_v(string a0, int a1, int a2, int a3, int a4)
{
	if (f_15f4_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a4 - a3 + 1);
		@AddItem(L1, a0, 0, L0 + a3);
	}
}

object f_15e4_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_15ea_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_15f4_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

int f_15f9_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_15fe_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_160a_a2_v(object a0, int a1)
{
	f_1456_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_15fe_a2_v(L0, a1);
	}
}

void f_161d_a3_v(object a0, object a1, int a2)
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
		f_15fe_a2_v(L0, a2);
	}
}

void f_1630_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_161d_a3_v(a0, L0, a2);
}

float f_163d_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1642_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_164b_a1_b(int a0)
{
	return f_1642_a0_i() == a0;
}

string f_1651_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1658_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1651_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1669_a0_i(void)
{
	return 515535;
}

int f_166b_a0_i(void)
{
	return 502860;
}

string f_166d_a0_s(void)
{
	return "ui/NPC_Grif.png";
}

string f_166f_a0_s(void)
{
	return "ui/NPC_Grif_b.png";
}

bool f_1671_a0_b(void)
{
	return true;
}

void f_1673_a2_v(object a0, object a1)
{
	@Trace("money10000 is given");
	f_160a_a2_v(a0, 10000);
}

void f_167d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1683_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1689_a2_v(object a0, object a1)
{
	@Trace("revolver ammo15 is given");
	f_1630_a3_v(a0, "revolver_ammo", 15);
}

void f_1694_a2_v(object a0, object a1)
{
	@Trace("money 10000 removed");
	f_160a_a2_v(a0, -10000);
}

void f_169e_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif1", 1);
}

void f_16a4_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif2", 1);
}

void f_16aa_a2_v(object a0, object a1)
{
	@SetVariable("ood3Grif1", 1);
}

void f_16b0_a2_v(object a0, object a1)
{
	@SetVariable("ood4Grif3", 1);
}

void f_16b6_a2_v(object a0, object a1)
{
	@SetVariable("ood4Grif4", 1);
}

void f_16bc_a2_v(object a0, object a1)
{
	@SetVariable("ood2Grif2", 1);
}

void f_16c2_a2_v(object a0, object a1)
{
	@SetVariable("ood2Grif3", 1);
}

void f_16c8_a2_v(object a0, object a1)
{
	@SetVariable("ood2Grif4", 1);
}

void f_16ce_a2_v(object a0, object a1)
{
	@SetVariable("d2q02", 7);
	f_1879_a0_v();
}

void f_16d7_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Revolver is given");
	@CreateInvItem(L0);
	L0->SetItemName("Revolver");
	L0->SetProperty("durability", 30);
	f_161d_a3_v(a0, L0, 1);
}

void f_16ec_a2_v(object a0, object a1)
{
	@SetVariable("ood4Grif1", 1);
}

void f_16f2_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q03", 2);
	L0 = f_18c9_a0_o();
	L0->AddMark("d4q03GrifGotoAlexandr", "pt_map_alexandr", 0, 515331, f_163d_a0_f());
	L0->AddMark("d4q03GrifGotoAlexandrSelf", "pt_map_grif", 0, 515332, f_163d_a0_f());
	f_1886_a0_v();
}

void f_1712_a2_v(object a0, object a1)
{
	@SetVariable("ood4Grif2", 1);
}

void f_1718_a2_v(object a0, object a1)
{
	@SetVariable("ood5Grif1", 1);
}

void f_171e_a2_v(object a0, object a1)
{
	@SetVariable("d5q01ThiefsWillHelp", 1);
	@SetVariable("d5q01PlayCutscene", 1);
	f_1893_a0_v();
}

void f_172b_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

void f_1730_a2_v(object a0, object a1)
{
	@SetVariable("KnowGrif", 1);
}

void f_1736_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_18c9_a0_o();
	L0->AddMark("d5q01GrifWantsMoney", "pt_map_grif", 1, 515350, f_163d_a0_f());
}

void f_1746_a2_v(object a0, object a1)
{
	@SetVariable("d2KnowBigVladIsBad", 1);
}

void f_174c_a2_v(object a0, object a1)
{
	@SetVariable("ood5Grif2", 1);
}

bool f_1752_a1_b(object a0)
{
	if (f_15f9_a1_i("ood1Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_175e_a1_b(object a0)
{
	if (f_15f9_a1_i("ood1Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_176a_a1_b(object a0)
{
	if (f_15f9_a1_i("ood3Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1776_a1_b(object a0)
{
	if (f_15f9_a1_i("ood4Grif3") == 0) {
		return true;
	}
	return false;
}

bool f_1782_a1_b(object a0)
{
	if (f_15f9_a1_i("ood4Grif4") == 0) {
		return true;
	}
	return false;
}

bool f_178e_a1_b(object a0)
{
	if (f_15f9_a1_i("ood2Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_179a_a1_b(object a0)
{
	if (f_15f9_a1_i("ood2Grif3") == 0) {
		return true;
	}
	return false;
}

bool f_17a6_a1_b(object a0)
{
	if (f_15f9_a1_i("ood2Grif4") == 0) {
		return true;
	}
	return false;
}

bool f_17b2_a1_b(object a0)
{
	if (f_15f9_a1_i("d2q02") == 6) {
		return true;
	}
	return false;
}

bool f_17be_a1_b(object a0)
{
	if (f_15f9_a1_i("d3q01") == 0) {
		return true;
	}
	return false;
}

bool f_17ca_a1_b(object a0)
{
	if (f_15f9_a1_i("d4q03") == 1) {
		return true;
	}
	return false;
}

bool f_17d6_a1_b(object a0)
{
	if (f_15f9_a1_i("ood4Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_17e2_a1_b(object a0)
{
	if (f_15f9_a1_i("ood4Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_17ee_a1_b(object a0)
{
	if (f_15f9_a1_i("d4q03_alldead") == 1) {
		return true;
	}
	return false;
}

bool f_17fa_a1_b(object a0)
{
	if (f_15f9_a1_i("d5q01") == 6) {
		return true;
	}
	return false;
}

bool f_1806_a1_b(object a0)
{
	if (f_15f9_a1_i("ood5Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1812_a1_b(object a0)
{
	if (f_186e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_181c_a1_b(object a0)
{
	if (f_15f9_a1_i("d5q01ThiefsWillHelp") == 1) {
		return true;
	}
	return false;
}

bool f_1828_a1_b(object a0)
{
	if (f_15f9_a1_i("d5q02") == 0) {
		return true;
	}
	return false;
}

bool f_1834_a1_b(object a0)
{
	if (f_15f9_a1_i("d4q03") == 3) {
		return true;
	}
	return false;
}

bool f_1840_a1_b(object a0)
{
	if (f_15f9_a1_i("ood5Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_184c_a1_b(object a0)
{
	if (f_15f9_a1_i("d1q01") != 0 && f_15f9_a1_i("d1q01") != 1000 && f_15f9_a1_i("d1q01") != -1) {
		return true;
	}
	return false;
}

bool f_186e_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 10000) {
		return true;
	}
	return false;
}

void f_1879_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 132, 2, 515269);
	f_18ad_a2_b(L0, 11);
}

void f_1886_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 97, 2, 512179);
	f_18ad_a2_b(L0, 22);
}

void f_1893_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 145, 1, 515345);
	f_18ad_a2_b(L0, 139);
}

object f_18a0_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_18ad_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_18a0_a0_o();
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

object f_18c9_a0_o(void)
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

void f_18da_a0_v(void)
{
	bool L0;
	int L1;
	int L2;
	int L3;
	@ClearSubContainer(0);
	L2 = f_1642_a0_i();
	@AddItem(L0, f_1983_a1_i("Rifle"), 0, 1);
	@AddItem(L0, f_1983_a1_i("Revolver"), 0, 1);
	@AddItem(L0, f_1983_a1_i("Knife"), 0, 1);
	if (L2 != 10) {
		@AddItem(L0, f_1983_a1_i("tvirin"), 0, 1);
	} else {
		@AddItem(L0, f_1983_a1_i("tvirin"), 0, 4);
	}
	@AddItem(L0, f_1983_a1_i("lockpick"), 0, 3);
	f_15c8_a3_v("Scalpel", 1, 2);
	f_15d3_a5_v("revolver_ammo", 1, 1, 5, 10);
	f_15d3_a5_v("rifle_ammo", 1, 1, 5, 20);
	@irand(L1, 100);
	if (L1 != 0) {
		@AddItem(L0, f_1983_a1_i("kerosene"), 0, L1);
	}
	if (L2 >= 3) {
		@AddItem(L0, f_1983_a1_i("halfboot_repel"), 0, 1);
		@AddItem(L0, f_1983_a1_i("boot_repel"), 0, 1);
	}
	if (L2 >= 9) {
		@AddItem(L0, f_1983_a1_i("boot_army"), 0, 1);
		@AddItem(L0, f_1983_a1_i("balahon"), 0, 1);
		@AddItem(L0, f_1983_a1_i("glove_army"), 0, 1);
	}
	L3 = f_1999_a0_i();
	if (L3 == 0) {
		@AddItem(L0, f_1983_a1_i("Gun_danko"), 0, 1);
	} else {
		if (L3 == 2) {
			@AddItem(L0, f_1983_a1_i("Gun"), 0, 1);
		}
	}
}

int f_1983_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_1988_a0_i(void)
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

int f_1999_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_199f_a1_v(object a0)
{
	if (!f_1556_a1_b(a0)) {
		return;
	}
	t0{a0};
	f_158e_a1_v(a0);
}

void f_19b2_a1_v(object a0)
{
	if (g2 != f_1642_a0_i()) {
		f_18da_a0_v();
		g2 = f_1642_a0_i();
	}
	if (!g1) {
		t1{a0};
		g1 = true;
	}
	if (f_164b_a1_b(1)) {
		if (1000 == t23{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(2)) {
		if (1000 == t3{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(3)) {
		if (1000 == t7{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(4)) {
		if (1000 == t5{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(5)) {
		if (1000 == t9{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(6)) {
		if (1000 == t11{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(7)) {
		if (1000 == t13{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(8)) {
		if (1000 == t15{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(9)) {
		if (1000 == t19{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(10)) {
		if (1000 == t17{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(11)) {
		if (1000 == t21{a0}) {
			f_199f_a1_v(a0);
		}
		return;
	}
	if (f_164b_a1_b(12)) {
		t25{a0};
		return;
	}
}

