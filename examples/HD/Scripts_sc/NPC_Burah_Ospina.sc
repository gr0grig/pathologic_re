event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var bool g2;

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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			f_99_a1_v("Strange");
			tv0->SetMessage(518620);
			tv0->ClearReplies();
			if (f_141f_a1_b(tv1) && f_142b_a1_b(tv1)) {
				tv0->AddReply(518621, 19933, 19713);
			}
			tv0->AddReply(518624, -1, 19716);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_99_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a1 == 19713) {
				f_12dc_a2_v(tv1, tv0);
			}
			if (a1 == 19715) {
				f_12e2_a2_v(tv1, tv0);
				f_1397_a2_v(tv1, tv0);
				f_139c_a2_v(tv1, tv0);
			}
			if (a1 == 19963) {
				f_12e2_a2_v(tv1, tv0);
				f_1397_a2_v(tv1, tv0);
				f_139c_a2_v(tv1, tv0);
			}
			if (a0 == 19712) {
				f_99_a1_v("Strange");
				tv0->SetMessage(518620);
				tv0->ClearReplies();
				if (f_141f_a1_b(tv1) && f_142b_a1_b(tv1)) {
					tv0->AddReply(518621, 19933, 19713);
				}
				tv0->AddReply(518624, -1, 19716);
				return;
			}
			if (a0 == 19933) {
				f_99_a1_v("Neutral");
				tv0->SetMessage(518828);
				tv0->ClearReplies();
				tv0->AddReply(518829, 19935, 19934);
				return;
			}
			if (a0 == 19935) {
				f_99_a1_v("Fear");
				tv0->SetMessage(518830);
				tv0->ClearReplies();
				tv0->AddReply(518831, 19937, 19936);
				tv0->AddReply(518845, 19951, 19950);
				return;
			}
			if (a0 == 19951) {
				f_99_a1_v("Neutral");
				tv0->SetMessage(518846);
				tv0->ClearReplies();
				tv0->AddReply(518847, 19937, 19952);
				tv0->AddReply(518848, 19940, 19953);
				return;
			}
			if (a0 == 19937) {
				f_99_a1_v("Neutral");
				tv0->SetMessage(518832);
				tv0->ClearReplies();
				tv0->AddReply(518834, 19940, 19939);
				return;
			}
			if (a0 == 19940) {
				f_99_a1_v("Neutral");
				tv0->SetMessage(518835);
				tv0->ClearReplies();
				tv0->AddReply(518837, 19948, 19942);
				tv0->AddReply(518836, 19943, 19941);
				return;
			}
			if (a0 == 19943) {
				f_99_a1_v("Neutral");
				tv0->SetMessage(518838);
				tv0->ClearReplies();
				tv0->AddReply(518841, 19954, 19946);
				tv0->AddReply(518839, 19945, 19944);
				return;
			}
			if (a0 == 19945) {
				f_99_a1_v("Grin");
				tv0->SetMessage(518840);
				tv0->ClearReplies();
				tv0->AddReply(518842, -1, 19947);
				return;
			}
			if (a0 == 19954) {
				f_99_a1_v("Grin");
				tv0->SetMessage(518849);
				tv0->ClearReplies();
				tv0->AddReply(518850, 19956, 19955);
				tv0->AddReply(518852, 19956, 19957);
				return;
			}
			if (a0 == 19956) {
				f_99_a1_v("Neutral");
				tv0->SetMessage(518851);
				tv0->ClearReplies();
				tv0->AddReply(518853, 19714, 19959);
				return;
			}
			if (a0 == 19948) {
				f_99_a1_v("Grimacing");
				tv0->SetMessage(518843);
				tv0->ClearReplies();
				tv0->AddReply(518844, 19714, 19949);
				return;
			}
			if (a0 == 19714) {
				tv0->SetMessage(518622);
				tv0->ClearReplies();
				tv0->AddReply(518623, -1, 19715);
				tv0->AddReply(518854, 19962, 19961);
				return;
			}
			if (a0 == 19962) {
				f_99_a1_v("Neutral");
				tv0->SetMessage(518855);
				tv0->ClearReplies();
				tv0->AddReply(518856, -1, 19963);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			f_29f_a1_v("Neutral");
			tv0->SetMessage(519273);
			tv0->ClearReplies();
			if (f_1443_a1_b(tv1)) {
				tv0->AddReply(519274, 20428, 20426);
			}
			if (f_1437_a1_b(tv1)) {
				tv0->AddReply(519289, 20444, 20443);
			}
			tv0->AddReply(519275, -1, 20427);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_29f_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a1 == 20446) {
				f_1308_a2_v(tv1, tv0);
				f_1324_a2_v(tv1, tv0);
			}
			if (a1 == 20443) {
				f_1302_a2_v(tv1, tv0);
			}
			if (a0 == 20425) {
				f_29f_a1_v("Neutral");
				tv0->SetMessage(519273);
				tv0->ClearReplies();
				if (f_1443_a1_b(tv1)) {
					tv0->AddReply(519274, 20428, 20426);
				}
				if (f_1437_a1_b(tv1)) {
					tv0->AddReply(519289, 20444, 20443);
				}
				tv0->AddReply(519275, -1, 20427);
				return;
			}
			if (a0 == 20444) {
				f_29f_a1_v("Neutral");
				tv0->SetMessage(519290);
				tv0->ClearReplies();
				tv0->AddReply(519291, -1, 20445);
				return;
			}
			if (a0 == 20428) {
				f_29f_a1_v("Neutral");
				tv0->SetMessage(519276);
				tv0->ClearReplies();
				tv0->AddReply(519277, 20432, 20429);
				tv0->AddReply(519278, 20431, 20430);
				return;
			}
			if (a0 == 20431) {
				f_29f_a1_v("Neutral");
				tv0->SetMessage(519279);
				tv0->ClearReplies();
				tv0->AddReply(519281, 20432, 20433);
				return;
			}
			if (a0 == 20432) {
				f_29f_a1_v("Neutral");
				tv0->SetMessage(519280);
				tv0->ClearReplies();
				tv0->AddReply(519282, 20436, 20435);
				tv0->AddReply(527864, 20439, 29209);
				return;
			}
			if (a0 == 20436) {
				f_29f_a1_v("Neutral");
				tv0->SetMessage(519283);
				tv0->ClearReplies();
				tv0->AddReply(519284, 20441, 20437);
				tv0->AddReply(519285, 20439, 20438);
				return;
			}
			if (a0 == 20439) {
				f_29f_a1_v("Neutral");
				tv0->SetMessage(519286);
				tv0->ClearReplies();
				tv0->AddReply(519287, 20441, 20440);
				return;
			}
			if (a0 == 20441) {
				f_29f_a1_v("Neutral");
				tv0->SetMessage(519288);
				tv0->ClearReplies();
				tv0->AddReply(519292, -1, 20446);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			if (f_144f_a1_b(tv1)) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520279);
				tv0->ClearReplies();
				tv0->AddReply(520280, 21473, 21472);
				tv0->AddReply(520299, 21475, 21493);
				break;
			}
			f_457_a1_v("Neutral");
			tv0->SetMessage(520300);
			tv0->ClearReplies();
			if (f_145b_a1_b(tv1)) {
				tv0->AddReply(520301, 21497, 21496);
			}
			if (f_1467_a1_b(tv1)) {
				tv0->AddReply(520317, 21513, 21512);
			}
			if (f_1473_a1_b(tv1)) {
				tv0->AddReply(520324, 21520, 21519);
			}
			if (f_147f_a1_b(tv1)) {
				tv0->AddReply(520327, 21523, 21522);
			}
			tv0->AddReply(520330, -1, 21525);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_457_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a1 == 21486) {
				f_13b2_a2_v(tv1, tv0);
			}
			if (a1 == 21480) {
				f_13b2_a2_v(tv1, tv0);
			}
			if (a1 == 21481) {
				f_13b2_a2_v(tv1, tv0);
			}
			if (a1 == 21496) {
				f_1334_a2_v(tv1, tv0);
			}
			if (a1 == 21512) {
				f_133a_a2_v(tv1, tv0);
			}
			if (a1 == 21518) {
				f_134c_a2_v(tv1, tv0);
			}
			if (a1 == 21519) {
				f_1340_a2_v(tv1, tv0);
			}
			if (a1 == 21522) {
				f_1346_a2_v(tv1, tv0);
			}
			if (a0 == 21471) {
				if (f_144f_a1_b(tv1)) {
					f_457_a1_v("Neutral");
					tv0->SetMessage(520279);
					tv0->ClearReplies();
					tv0->AddReply(520280, 21473, 21472);
					tv0->AddReply(520299, 21475, 21493);
					return;
				}
				f_457_a1_v("Neutral");
				tv0->SetMessage(520300);
				tv0->ClearReplies();
				if (f_145b_a1_b(tv1)) {
					tv0->AddReply(520301, 21497, 21496);
				}
				if (f_1467_a1_b(tv1)) {
					tv0->AddReply(520317, 21513, 21512);
				}
				if (f_1473_a1_b(tv1)) {
					tv0->AddReply(520324, 21520, 21519);
				}
				if (f_147f_a1_b(tv1)) {
					tv0->AddReply(520327, 21523, 21522);
				}
				tv0->AddReply(520330, -1, 21525);
				return;
			}
			if (a0 == 21523) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520328);
				tv0->ClearReplies();
				tv0->AddReply(527820, 29160, 29159);
				return;
			}
			if (a0 == 29160) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527821);
				tv0->ClearReplies();
				tv0->AddReply(527822, 29162, 29161);
				return;
			}
			if (a0 == 29162) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527823);
				tv0->ClearReplies();
				tv0->AddReply(520329, -1, 21524);
				return;
			}
			if (a0 == 21520) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520325);
				tv0->ClearReplies();
				tv0->AddReply(527824, 29164, 29163);
				tv0->AddReply(520326, -1, 21521);
				return;
			}
			if (a0 == 29164) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527825);
				tv0->ClearReplies();
				tv0->AddReply(527826, -1, 29165);
				tv0->AddReply(527827, -1, 29166);
				return;
			}
			if (a0 == 21513) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520318);
				tv0->ClearReplies();
				tv0->AddReply(520319, 21515, 21514);
				return;
			}
			if (a0 == 21515) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520320);
				tv0->ClearReplies();
				tv0->AddReply(527818, 29158, 29157);
				return;
			}
			if (a0 == 29158) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527819);
				tv0->ClearReplies();
				tv0->AddReply(520321, 21517, 21516);
				return;
			}
			if (a0 == 21517) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520322);
				tv0->ClearReplies();
				tv0->AddReply(520323, -1, 21518);
				return;
			}
			if (a0 == 21497) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520302);
				tv0->ClearReplies();
				tv0->AddReply(520303, 21499, 21498);
				tv0->AddReply(527811, 29150, 29149);
				return;
			}
			if (a0 == 29150) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527812);
				tv0->ClearReplies();
				tv0->AddReply(527813, 29152, 29151);
				return;
			}
			if (a0 == 29152) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527814);
				tv0->ClearReplies();
				tv0->AddReply(527815, 29154, 29153);
				return;
			}
			if (a0 == 29154) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527816);
				tv0->ClearReplies();
				tv0->AddReply(527817, 21499, 29155);
				return;
			}
			if (a0 == 21499) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520304);
				tv0->ClearReplies();
				tv0->AddReply(520305, 21501, 21500);
				tv0->AddReply(520311, 21507, 21506);
				return;
			}
			if (a0 == 21507) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520312);
				tv0->ClearReplies();
				tv0->AddReply(520313, 21509, 21508);
				return;
			}
			if (a0 == 21509) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520314);
				tv0->ClearReplies();
				tv0->AddReply(520315, -1, 21510);
				tv0->AddReply(520316, -1, 21511);
				return;
			}
			if (a0 == 21501) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520306);
				tv0->ClearReplies();
				tv0->AddReply(520307, -1, 21502);
				tv0->AddReply(520308, 21504, 21503);
				return;
			}
			if (a0 == 21504) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520309);
				tv0->ClearReplies();
				tv0->AddReply(520310, -1, 21505);
				return;
			}
			if (a0 == 21473) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520281);
				tv0->ClearReplies();
				tv0->AddReply(520282, 21475, 21474);
				tv0->AddReply(520294, 21488, 21487);
				return;
			}
			if (a0 == 21488) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520295);
				tv0->ClearReplies();
				tv0->AddReply(520296, 21490, 21489);
				tv0->AddReply(527807, 21477, 29143);
				return;
			}
			if (a0 == 21490) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520297);
				tv0->ClearReplies();
				tv0->AddReply(527805, 29142, 29141);
				return;
			}
			if (a0 == 29142) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527806);
				tv0->ClearReplies();
				tv0->AddReply(520298, 21477, 21491);
				return;
			}
			if (a0 == 21475) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520283);
				tv0->ClearReplies();
				tv0->AddReply(520290, 21483, 21482);
				tv0->AddReply(520284, 21477, 21476);
				return;
			}
			if (a0 == 21477) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520285);
				tv0->ClearReplies();
				tv0->AddReply(520286, 21479, 21478);
				tv0->AddReply(527808, 29146, 29145);
				return;
			}
			if (a0 == 29146) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(527809);
				tv0->ClearReplies();
				tv0->AddReply(527810, 21479, 29147);
				return;
			}
			if (a0 == 21479) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520287);
				tv0->ClearReplies();
				tv0->AddReply(520288, -1, 21480);
				tv0->AddReply(520289, -1, 21481);
				return;
			}
			if (a0 == 21483) {
				f_457_a1_v("Neutral");
				tv0->SetMessage(520291);
				tv0->ClearReplies();
				tv0->AddReply(520292, 21477, 21484);
				tv0->AddReply(520293, -1, 21486);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			f_7c0_a1_v("Neutral");
			tv0->SetMessage(520800);
			tv0->ClearReplies();
			tv0->AddReply(520801, 29131, 22018);
			tv0->AddReply(527799, -1, 29132);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_7c0_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a0 == 22017) {
				f_7c0_a1_v("Neutral");
				tv0->SetMessage(520800);
				tv0->ClearReplies();
				tv0->AddReply(520801, 29131, 22018);
				tv0->AddReply(527799, -1, 29132);
				return;
			}
			if (a0 == 29131) {
				f_7c0_a1_v("Neutral");
				tv0->SetMessage(527798);
				tv0->ClearReplies();
				tv0->AddReply(527800, -1, 29133);
				tv0->AddReply(527801, -1, 29134);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			f_8b1_a1_v("Neutral");
			tv0->SetMessage(521431);
			tv0->ClearReplies();
			if (f_13d2_a1_b(tv1)) {
				tv0->AddReply(521432, 22611, 22610);
			}
			if (f_1413_a1_b(tv1)) {
				tv0->AddReply(523679, 24958, 24931);
			}
			tv0->AddReply(521435, -1, 22613);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_8b1_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a1 == 22612) {
				f_1379_a2_v(tv1, tv0);
				f_13c7_a2_v(tv1, tv0);
				f_13ac_a2_v(tv1, tv0);
			}
			if (a1 == 24978) {
				f_1379_a2_v(tv1, tv0);
				f_13c7_a2_v(tv1, tv0);
				f_13ac_a2_v(tv1, tv0);
			}
			if (a1 == 24931) {
				f_13c1_a2_v(tv1, tv0);
			}
			if (a0 == 22609) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(521431);
				tv0->ClearReplies();
				if (f_13d2_a1_b(tv1)) {
					tv0->AddReply(521432, 22611, 22610);
				}
				if (f_1413_a1_b(tv1)) {
					tv0->AddReply(523679, 24958, 24931);
				}
				tv0->AddReply(521435, -1, 22613);
				return;
			}
			if (a0 == 24958) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523703);
				tv0->ClearReplies();
				tv0->AddReply(523704, 24960, 24959);
				tv0->AddReply(523706, -1, 24961);
				tv0->AddReply(523707, -1, 24962);
				return;
			}
			if (a0 == 24960) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523705);
				tv0->ClearReplies();
				tv0->AddReply(523681, 24934, 24933);
				return;
			}
			if (a0 == 24934) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523682);
				tv0->ClearReplies();
				tv0->AddReply(523683, 24936, 24935);
				tv0->AddReply(523701, 24957, 24956);
				tv0->AddReply(523708, -1, 24963);
				return;
			}
			if (a0 == 24957) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523702);
				tv0->ClearReplies();
				tv0->AddReply(523709, 24965, 24964);
				return;
			}
			if (a0 == 24965) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523710);
				tv0->ClearReplies();
				tv0->AddReply(523712, -1, 24967);
				tv0->AddReply(523711, -1, 24966);
				return;
			}
			if (a0 == 24936) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523684);
				tv0->ClearReplies();
				tv0->AddReply(523685, 24968, 24937);
				return;
			}
			if (a0 == 24968) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523713);
				tv0->ClearReplies();
				tv0->AddReply(523714, -1, 24969);
				return;
			}
			if (a0 == 22611) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(521433);
				tv0->ClearReplies();
				tv0->AddReply(523686, 24939, 24938);
				tv0->AddReply(523690, 24941, 24942);
				return;
			}
			if (a0 == 24939) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523687);
				tv0->ClearReplies();
				tv0->AddReply(523688, 24941, 24940);
				tv0->AddReply(523695, 24949, 24948);
				return;
			}
			if (a0 == 24949) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523696);
				tv0->ClearReplies();
				tv0->AddReply(523697, 24941, 24950);
				tv0->AddReply(523698, 24952, 24951);
				return;
			}
			if (a0 == 24952) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523699);
				tv0->ClearReplies();
				tv0->AddReply(523700, 24941, 24953);
				return;
			}
			if (a0 == 24941) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523689);
				tv0->ClearReplies();
				tv0->AddReply(523691, 24944, 24943);
				tv0->AddReply(523715, 24971, 24970);
				return;
			}
			if (a0 == 24971) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523716);
				tv0->ClearReplies();
				tv0->AddReply(523718, 24944, 24973);
				tv0->AddReply(523719, 24944, 24974);
				return;
			}
			if (a0 == 24944) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523692);
				tv0->ClearReplies();
				tv0->AddReply(523693, 24946, 24945);
				tv0->AddReply(523717, 24977, 24972);
				return;
			}
			if (a0 == 24977) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523720);
				tv0->ClearReplies();
				tv0->AddReply(523722, 24980, 24979);
				return;
			}
			if (a0 == 24980) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523723);
				tv0->ClearReplies();
				tv0->AddReply(523724, 24946, 24981);
				return;
			}
			if (a0 == 24946) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(523694);
				tv0->ClearReplies();
				tv0->AddReply(521434, -1, 22612);
				tv0->AddReply(523721, -1, 24978);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			f_b45_a1_v("Neutral");
			tv0->SetMessage(521945);
			tv0->ClearReplies();
			if (f_13ea_a1_b(tv1) && f_13f6_a1_b(tv1) || f_13de_a1_b(tv1) && f_13f6_a1_b(tv1)) {
				tv0->AddReply(521946, 23122, 23120);
			}
			tv0->AddReply(521947, -1, 23121);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_b45_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a1 == 23120) {
				f_1382_a2_v(tv1, tv0);
			}
			if (a0 == 23119) {
				f_b45_a1_v("Neutral");
				tv0->SetMessage(521945);
				tv0->ClearReplies();
				if (f_13ea_a1_b(tv1) && f_13f6_a1_b(tv1) || f_13de_a1_b(tv1) && f_13f6_a1_b(tv1)) {
					tv0->AddReply(521946, 23122, 23120);
				}
				tv0->AddReply(521947, -1, 23121);
				return;
			}
			if (a0 == 23122) {
				f_b45_a1_v("Neutral");
				tv0->SetMessage(521948);
				tv0->ClearReplies();
				tv0->AddReply(521949, 23730, 23123);
				return;
			}
			if (a0 == 23730) {
				f_b45_a1_v("Neutral");
				tv0->SetMessage(522551);
				tv0->ClearReplies();
				tv0->AddReply(522552, 23732, 23731);
				return;
			}
			if (a0 == 23732) {
				f_b45_a1_v("Neutral");
				tv0->SetMessage(522553);
				tv0->ClearReplies();
				tv0->AddReply(522554, 23734, 23733);
				tv0->AddReply(522556, -1, 23735);
				return;
			}
			if (a0 == 23734) {
				f_b45_a1_v("Neutral");
				tv0->SetMessage(522555);
				tv0->ClearReplies();
				tv0->AddReply(522557, 23737, 23736);
				return;
			}
			if (a0 == 23737) {
				f_b45_a1_v("Neutral");
				tv0->SetMessage(522558);
				tv0->ClearReplies();
				tv0->AddReply(522559, -1, 23738);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			if (f_1407_a1_b(tv1)) {
				f_1391_a2_v(tv1, tv0);
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(522089);
				tv0->ClearReplies();
				tv0->AddReply(523647, 24892, 24891);
				tv0->AddReply(523657, 24892, 24901);
				if (f_13fb_a1_b(tv1)) {
					tv0->AddReply(522091, 23261, 23260);
				}
				break;
			}
			f_cbf_a1_v("Neutral");
			tv0->SetMessage(522094);
			tv0->ClearReplies();
			tv0->AddReply(523598, 24834, 24833);
			tv0->AddReply(522095, -1, 23264);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_cbf_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a1 == 23259) {
				f_1388_a2_v(tv1, tv0);
			}
			if (a0 == 23258) {
				if (f_1407_a1_b(tv1)) {
					f_1391_a2_v(tv1, tv0);
					f_cbf_a1_v("Neutral");
					tv0->SetMessage(522089);
					tv0->ClearReplies();
					tv0->AddReply(523647, 24892, 24891);
					tv0->AddReply(523657, 24892, 24901);
					if (f_13fb_a1_b(tv1)) {
						tv0->AddReply(522091, 23261, 23260);
					}
					return;
				}
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(522094);
				tv0->ClearReplies();
				tv0->AddReply(523598, 24834, 24833);
				tv0->AddReply(522095, -1, 23264);
				return;
			}
			if (a0 == 24834) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523599);
				tv0->ClearReplies();
				tv0->AddReply(523655, 24900, 24899);
				return;
			}
			if (a0 == 24900) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523656);
				tv0->ClearReplies();
				tv0->AddReply(534554, -1, 36186);
				return;
			}
			if (a0 == 23261) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(522092);
				tv0->ClearReplies();
				tv0->AddReply(523645, 24889, 24888);
				tv0->AddReply(523644, 24889, 24887);
				return;
			}
			if (a0 == 24889) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523646);
				tv0->ClearReplies();
				tv0->AddReply(522093, -1, 23262);
				return;
			}
			if (a0 == 24892) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523648);
				tv0->ClearReplies();
				tv0->AddReply(523649, 24894, 24893);
				tv0->AddReply(523658, 24908, 24903);
				return;
			}
			if (a0 == 24908) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523663);
				tv0->ClearReplies();
				tv0->AddReply(523664, 24905, 24909);
				tv0->AddReply(523665, 24912, 24910);
				return;
			}
			if (a0 == 24912) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523667);
				tv0->ClearReplies();
				tv0->AddReply(523668, 24905, 24913);
				return;
			}
			if (a0 == 24894) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523650);
				tv0->ClearReplies();
				tv0->AddReply(523659, 24905, 24904);
				tv0->AddReply(523666, 24896, 24911);
				return;
			}
			if (a0 == 24905) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523660);
				tv0->ClearReplies();
				tv0->AddReply(523661, 24896, 24906);
				tv0->AddReply(523669, 24896, 24915);
				tv0->AddReply(523651, 24918, 24895);
				return;
			}
			if (a0 == 24918) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523670);
				tv0->ClearReplies();
				tv0->AddReply(523671, 24896, 24919);
				return;
			}
			if (a0 == 24896) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523652);
				tv0->ClearReplies();
				tv0->AddReply(523653, 24898, 24897);
				tv0->AddReply(523675, 24925, 24924);
				return;
			}
			if (a0 == 24925) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523676);
				tv0->ClearReplies();
				tv0->AddReply(523677, 24898, 24926);
				return;
			}
			if (a0 == 24898) {
				f_cbf_a1_v("Neutral");
				tv0->SetMessage(523654);
				tv0->ClearReplies();
				if (!f_13fb_a1_b(tv1)) {
					tv0->AddReply(522090, -1, 23259);
				}
				tv0->AddReply(523678, -1, 24928);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			f_ed7_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_ed7_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a0 == 36971) {
				f_ed7_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_ed7_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_ed7_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		if (!f_1138_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12d4_a0_i());
		L0->SetNPCDescription(f_12d2_a0_i());
		L0->SetPhoto(f_12d6_a0_s());
		L0->SetPhoto2(f_12d8_a0_s());
		L0->SetPlayerName(f_151a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_118f_a1_b(f_124e_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_117d_a1_v(a0);
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
			f_fd5_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_12da_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1219_a1_v(tv2);
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

	void f_fd5_a1_v(string a0)
	{
		if (!f_12da_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1229_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1247_a0_v();
			if (a0 == 42560) {
				f_fd5_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_12da_a0_b()) {
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
		f_101c_a0_v();
	}

	void f_101c_a0_v(void)
	{
		if (!f_1133_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_10cc_a0_v();
		}
	}

	bool f_102a_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_112a_a1_b(L0);
	}

	void f_1039_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_103e_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1118_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1054_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_105d_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_105d_a0_v();
			if (f_1133_a0_b() && f_103e_a0_b()) {
				if (f_102a_a0_b()) {
					f_11c9_a1_b(f_124e_a0_o());
				}
			} else {
				f_1039_a0_v();
				f_1054_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1113_a0_v();
		f_105d_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_105d_a0_v();
		f_1219_a1_v("Neutral");
		f_1054_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1054_a0_v();
		} else {
			f_1219_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1113_a0_v();
			f_112a_a1_b(a0);
			enable OnUse;
			f_152b_a1_v(a0);
			f_1219_a1_v("Neutral");
			f_105d_a0_v();
			f_1054_a0_v();
		}
	}
}

void f_10cc_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1133_a0_b()) {
		return;
	}
	L0 = f_12c1_a0_i();
	for (L1 = 0; L1 < 5 && f_1133_a0_b(); L1++) {
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
			@PlayAnimation("all", f_12ba_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1111_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1111_a0_b(void)
{
	return true;
}

void f_1113_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1118_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1120_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_112a_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1120_a1_b(L0);
}

bool f_1133_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1138_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1254_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_12da_a0_b()) {
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

void f_117d_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_12da_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_118f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_11c9_a1_b(a0)) {
			if (!f_11ee_a1_b(a0)) {
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
		if (!f_11ee_a1_b(a0)) {
			if (!f_11c9_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_11c9_a1_b(object a0)
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
	return f_1238_a1_b(L4);
}

bool f_11ee_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_12ab_a0_i() + "m";
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
	return f_1238_a1_b(L4);
}

void f_1219_a1_v(string a0)
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

void f_1229_a2_v(string a0, bool a1)
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

bool f_1238_a1_b(string a0)
{
	if (f_12da_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1247_a0_v(void)
{
	if (f_12da_a0_b()) {
		@lshStopSpeech();
	}
}

object f_124e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1254_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_125e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1263_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_126e_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_127a_a3_v(object a0, object a1, int a2)
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
		f_126e_a2_v(L0, a2);
	}
}

void f_128d_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_127a_a3_v(a0, L0, a2);
}

bool f_129a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_12a6_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_12ab_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_12b4_a1_b(int a0)
{
	return f_12ab_a0_i() == a0;
}

string f_12ba_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_12c1_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_12ba_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_12d2_a0_i(void)
{
	return 515549;
}

int f_12d4_a0_i(void)
{
	return 502874;
}

string f_12d6_a0_s(void)
{
	return "ui/NPC_Ospina.png";
}

string f_12d8_a0_s(void)
{
	return "ui/NPC_Ospina_b.png";
}

bool f_12da_a0_b(void)
{
	return true;
}

void f_12dc_a2_v(object a0, object a1)
{
	@SetVariable("oob5Ospina1", 1);
}

void f_12e2_a2_v(object a0, object a1)
{
	if (f_125e_a1_i("b5q01PlaceButchers") == 0) {
		object L0;
		@SetVariable("b5q01PlaceButchers", 1);
		L0 = f_14e8_a0_o();
		L0->AddMark("b5q01GathererWife", "pt_gatherer3", 1, 530181, f_12a6_a0_f());
		f_129a_a2_b("quest_b5_01", "place_butchers");
	}
}

void f_1302_a2_v(object a0, object a1)
{
	@SetVariable("oob3Ospina1", 1);
}

void f_1308_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b3q01", 2);
	L0 = f_14e8_a0_o();
	L0->AddMark("b3q01OspinaGotoButcher", "pt_gmap_house5_24", 1, 519635, f_12a6_a0_f());
	f_1498_a0_v();
	f_129a_a2_b("quest_b3_01", "place_butcher");
}

void f_1324_a2_v(object a0, object a1)
{
	f_14f9_a3_v(f_14e8_a0_o(), "pt_gmap_house5_24", 2);
	a1->ShowMap(f_14e8_a0_o());
}

void f_1334_a2_v(object a0, object a1)
{
	@SetVariable("oob2Ospina1", 1);
}

void f_133a_a2_v(object a0, object a1)
{
	@SetVariable("oob2Ospina2", 1);
}

void f_1340_a2_v(object a0, object a1)
{
	@SetVariable("oob2Ospina3", 1);
}

void f_1346_a2_v(object a0, object a1)
{
	@SetVariable("oob2Ospina4", 1);
}

void f_134c_a2_v(object a0, object a1)
{
	if (f_125e_a1_i("b2TravnikMark") == 0) {
		object L0;
		@SetVariable("b2TravnikMark", 1);
		L0 = f_14e8_a0_o();
		L0->AddMark("b2Travnik1", "pt_map_gatherer1", 3, 520463, f_12a6_a0_f());
		L0->AddMark("b2Travnik2", "pt_map_gatherer2", 3, 520464, f_12a6_a0_f());
		L0->AddMark("b2Travnik3", "pt_map_gatherer3", 3, 520465, f_12a6_a0_f());
	}
}

void f_1379_a2_v(object a0, object a1)
{
	@SetVariable("b8q01", 6);
	f_14b2_a0_v();
}

void f_1382_a2_v(object a0, object a1)
{
	@SetVariable("oob10Ospina1", 1);
}

void f_1388_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	f_148b_a0_v();
}

void f_1391_a2_v(object a0, object a1)
{
	@SetVariable("oob11Ospina1", 1);
}

void f_1397_a2_v(object a0, object a1)
{
	f_14a5_a0_v();
}

void f_139c_a2_v(object a0, object a1)
{
	f_14f9_a3_v(f_14e8_a0_o(), "pt_gatherer3", 2);
	a1->ShowMap(f_14e8_a0_o());
}

void f_13ac_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_13b2_a2_v(object a0, object a1)
{
	@SetVariable("b2q01", 3);
	f_129a_a2_b("quest_b2_01", "place_box");
	f_1263_a1_o("quest_b2_02");
}

void f_13c1_a2_v(object a0, object a1)
{
	@SetVariable("oob8Ospina1", 1);
}

void f_13c7_a2_v(object a0, object a1)
{
	@Trace("b8q01_bone is given");
	f_128d_a3_v(a0, "b8q01_bone", 1);
}

bool f_13d2_a1_b(object a0)
{
	if (f_125e_a1_i("b8q01") == 5) {
		return true;
	}
	return false;
}

bool f_13de_a1_b(object a0)
{
	if (f_125e_a1_i("b10q01") == 4) {
		return true;
	}
	return false;
}

bool f_13ea_a1_b(object a0)
{
	if (f_125e_a1_i("b10q01") == 1000) {
		return true;
	}
	return false;
}

bool f_13f6_a1_b(object a0)
{
	return true;
	return false;
}

bool f_13fb_a1_b(object a0)
{
	if (f_125e_a1_i("b11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1407_a1_b(object a0)
{
	if (f_125e_a1_i("oob11Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_1413_a1_b(object a0)
{
	if (f_125e_a1_i("oob8Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_141f_a1_b(object a0)
{
	if (f_125e_a1_i("b5q01") == 1) {
		return true;
	}
	return false;
}

bool f_142b_a1_b(object a0)
{
	if (f_125e_a1_i("oob5Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_1437_a1_b(object a0)
{
	if (f_125e_a1_i("oob3Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_1443_a1_b(object a0)
{
	if (f_125e_a1_i("b3q01") == 1) {
		return true;
	}
	return false;
}

bool f_144f_a1_b(object a0)
{
	if (f_125e_a1_i("b2q01") == 2) {
		return true;
	}
	return false;
}

bool f_145b_a1_b(object a0)
{
	if (f_125e_a1_i("oob2Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_1467_a1_b(object a0)
{
	if (f_125e_a1_i("oob2Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_1473_a1_b(object a0)
{
	if (f_125e_a1_i("oob2Ospina3") == 0) {
		return true;
	}
	return false;
}

bool f_147f_a1_b(object a0)
{
	if (f_125e_a1_i("oob2Ospina4") == 0) {
		return true;
	}
	return false;
}

void f_148b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 315, 1, 522057);
	f_14cc_a2_b(L0, 313);
}

void f_1498_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 223, 1, 519636);
	f_14cc_a2_b(L0, 221);
}

void f_14a5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 240, 1, 519745);
	f_14cc_a2_b(L0, 238);
}

void f_14b2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 290, 1, 521461);
	f_14cc_a2_b(L0, 284);
}

object f_14bf_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_14cc_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_14bf_a0_o();
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

object f_14e8_a0_o(void)
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

void f_14f9_a3_v(object a0, string a1, float a2)
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

int f_151a_a0_i(void)
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

void f_152b_a1_v(object a0)
{
	if (!g1) {
		t6{a0};
		g1 = true;
	}
	if (f_12b4_a1_b(2)) {
		t4{a0};
		return;
	}
	if (f_12b4_a1_b(3)) {
		t2{a0};
		return;
	}
	if (f_12b4_a1_b(5)) {
		t0{a0};
		return;
	}
	if (f_12b4_a1_b(8)) {
		t8{a0};
		return;
	}
	if (f_12b4_a1_b(10)) {
		t10{a0};
		return;
	}
	if (f_12b4_a1_b(11)) {
		t12{a0};
		return;
	}
	if (f_12b4_a1_b(12) && !g2) {
		t14{a0};
		g2 = true;
		return;
	}
	t16{a0};
}

