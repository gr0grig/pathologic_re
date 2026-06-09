event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;

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
		if (!f_4f8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6e1_a0_i());
		L0->SetNPCDescription(f_6df_a0_i());
		L0->SetPhoto(f_6e3_a0_s());
		L0->SetPhoto2(f_6e5_a0_s());
		L0->SetPlayerName(f_6ce_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_54f_a1_b(f_60e_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_53d_a1_v(a0);
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
			if (!f_6c2_a1_b(tv1)) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522168);
				tv0->ClearReplies();
				if (f_66e_a1_b(tv1)) {
					tv0->AddReply(522169, 23901, 23336);
				}
				if (f_67a_a1_b(tv1)) {
					tv0->AddReply(522721, 23904, 23902);
				}
				if (f_686_a1_b(tv1)) {
					tv0->AddReply(522722, 23905, 23903);
				}
				if (!f_656_a1_b(tv1) && !f_662_a1_b(tv1) && f_692_a1_b(tv1)) {
					tv0->AddReply(522728, 23910, 23909);
				}
				if (f_69e_a1_b(tv1)) {
					tv0->AddReply(522735, 23921, 23916);
				}
				if (f_656_a1_b(tv1) && f_6aa_a1_b(tv1)) {
					tv0->AddReply(522774, 23968, 23957);
				}
				if (f_662_a1_b(tv1) && f_6b6_a1_b(tv1)) {
					tv0->AddReply(522784, 23978, 23967);
				}
				tv0->AddReply(522727, -1, 23908);
				break;
			}
			f_111_a1_v("Neutral");
			tv0->SetMessage(523161);
			tv0->ClearReplies();
			tv0->AddReply(523162, -1, 24364);
			tv0->AddReply(523168, -1, 24370);
			tv0->AddReply(523169, -1, 24371);
			break;
			return;
		}
		if (f_6e7_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5d9_a1_v(tv2);
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

	void f_111_a1_v(string a0)
	{
		if (!f_6e7_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5e9_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_607_a0_v();
			if (a1 == 23336) {
				f_62c_a2_v(tv1, tv0);
			}
			if (a1 == 23902) {
				f_632_a2_v(tv1, tv0);
			}
			if (a1 == 23903) {
				f_638_a2_v(tv1, tv0);
			}
			if (a1 == 23909) {
				f_63e_a2_v(tv1, tv0);
			}
			if (a1 == 23916) {
				f_644_a2_v(tv1, tv0);
			}
			if (a1 == 23957) {
				f_64a_a2_v(tv1, tv0);
			}
			if (a1 == 23967) {
				f_650_a2_v(tv1, tv0);
			}
			if (a0 == 23335) {
				if (!f_6c2_a1_b(tv1)) {
					f_111_a1_v("Confusion");
					tv0->SetMessage(522168);
					tv0->ClearReplies();
					if (f_66e_a1_b(tv1)) {
						tv0->AddReply(522169, 23901, 23336);
					}
					if (f_67a_a1_b(tv1)) {
						tv0->AddReply(522721, 23904, 23902);
					}
					if (f_686_a1_b(tv1)) {
						tv0->AddReply(522722, 23905, 23903);
					}
					if (!f_656_a1_b(tv1) && !f_662_a1_b(tv1) && f_692_a1_b(tv1)) {
						tv0->AddReply(522728, 23910, 23909);
					}
					if (f_69e_a1_b(tv1)) {
						tv0->AddReply(522735, 23921, 23916);
					}
					if (f_656_a1_b(tv1) && f_6aa_a1_b(tv1)) {
						tv0->AddReply(522774, 23968, 23957);
					}
					if (f_662_a1_b(tv1) && f_6b6_a1_b(tv1)) {
						tv0->AddReply(522784, 23978, 23967);
					}
					tv0->AddReply(522727, -1, 23908);
					return;
				}
				f_111_a1_v("Neutral");
				tv0->SetMessage(523161);
				tv0->ClearReplies();
				tv0->AddReply(523162, -1, 24364);
				tv0->AddReply(523168, -1, 24370);
				tv0->AddReply(523169, -1, 24371);
				return;
			}
			if (a0 == 23978) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522795);
				tv0->ClearReplies();
				tv0->AddReply(522798, -1, 23981);
				tv0->AddReply(522796, 23980, 23979);
				return;
			}
			if (a0 == 23980) {
				f_111_a1_v("Arrogance");
				tv0->SetMessage(522797);
				tv0->ClearReplies();
				tv0->AddReply(522800, -1, 23983);
				tv0->AddReply(522799, 23984, 23982);
				return;
			}
			if (a0 == 23984) {
				f_111_a1_v("Arrogance");
				tv0->SetMessage(522801);
				tv0->ClearReplies();
				tv0->AddReply(522802, -1, 23985);
				tv0->AddReply(522803, 23987, 23986);
				return;
			}
			if (a0 == 23987) {
				f_111_a1_v("Arrogance");
				tv0->SetMessage(522804);
				tv0->ClearReplies();
				tv0->AddReply(522805, -1, 23988);
				tv0->AddReply(522806, -1, 23989);
				return;
			}
			if (a0 == 23968) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522785);
				tv0->ClearReplies();
				tv0->AddReply(522786, 23970, 23969);
				return;
			}
			if (a0 == 23970) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522787);
				tv0->ClearReplies();
				tv0->AddReply(522788, 23972, 23971);
				return;
			}
			if (a0 == 23972) {
				f_111_a1_v("Neutral");
				tv0->SetMessage(522789);
				tv0->ClearReplies();
				tv0->AddReply(522790, 23974, 23973);
				return;
			}
			if (a0 == 23974) {
				f_111_a1_v("Neutral");
				tv0->SetMessage(522791);
				tv0->ClearReplies();
				tv0->AddReply(522792, 23976, 23975);
				tv0->AddReply(540111, -1, 42078);
				return;
			}
			if (a0 == 23976) {
				f_111_a1_v("Neutral");
				tv0->SetMessage(522793);
				tv0->ClearReplies();
				tv0->AddReply(522794, -1, 23977);
				return;
			}
			if (a0 == 23921) {
				f_111_a1_v("Isee");
				tv0->SetMessage(522740);
				tv0->ClearReplies();
				tv0->AddReply(522741, 23923, 23922);
				return;
			}
			if (a0 == 23923) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522742);
				tv0->ClearReplies();
				tv0->AddReply(522743, -1, 23924);
				tv0->AddReply(522744, -1, 23925);
				return;
			}
			if (a0 == 23910) {
				f_111_a1_v("Neutral");
				tv0->SetMessage(522729);
				tv0->ClearReplies();
				tv0->AddReply(522730, -1, 23911);
				tv0->AddReply(540108, 42076, 42075);
				return;
			}
			if (a0 == 42076) {
				f_111_a1_v("Neutral");
				tv0->SetMessage(540109);
				tv0->ClearReplies();
				tv0->AddReply(540110, -1, 42077);
				return;
			}
			if (a0 == 23905) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522724);
				tv0->ClearReplies();
				tv0->AddReply(522725, 23920, 23906);
				tv0->AddReply(522726, -1, 23907);
				return;
			}
			if (a0 == 23920) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522739);
				tv0->ClearReplies();
				tv0->AddReply(522770, 23954, 23953);
				tv0->AddReply(522769, -1, 23952);
				return;
			}
			if (a0 == 23954) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522771);
				tv0->ClearReplies();
				tv0->AddReply(522772, -1, 23955);
				tv0->AddReply(522773, -1, 23956);
				return;
			}
			if (a0 == 23904) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522723);
				tv0->ClearReplies();
				tv0->AddReply(522732, 23914, 23913);
				return;
			}
			if (a0 == 23914) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522733);
				tv0->ClearReplies();
				tv0->AddReply(522734, -1, 23915);
				return;
			}
			if (a0 == 23901) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522720);
				tv0->ClearReplies();
				tv0->AddReply(522731, 23917, 23912);
				tv0->AddReply(522745, 23927, 23926);
				tv0->AddReply(522753, 23936, 23935);
				tv0->AddReply(522766, 23950, 23949);
				return;
			}
			if (a0 == 23950) {
				f_111_a1_v("Neutral");
				tv0->SetMessage(522767);
				tv0->ClearReplies();
				tv0->AddReply(522768, -1, 23951);
				return;
			}
			if (a0 == 23936) {
				f_111_a1_v("Neutral");
				tv0->SetMessage(522754);
				tv0->ClearReplies();
				tv0->AddReply(522755, 23938, 23937);
				return;
			}
			if (a0 == 23938) {
				f_111_a1_v("Arrogance");
				tv0->SetMessage(522756);
				tv0->ClearReplies();
				tv0->AddReply(522757, -1, 23939);
				tv0->AddReply(522758, -1, 23940);
				return;
			}
			if (a0 == 23927) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522746);
				tv0->ClearReplies();
				tv0->AddReply(522747, 23929, 23928);
				tv0->AddReply(522775, 23959, 23958);
				return;
			}
			if (a0 == 23959) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522776);
				tv0->ClearReplies();
				tv0->AddReply(522777, 23961, 23960);
				return;
			}
			if (a0 == 23961) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522778);
				tv0->ClearReplies();
				if (!f_656_a1_b(tv1)) {
					tv0->AddReply(522779, -1, 23962);
				}
				if (f_656_a1_b(tv1)) {
					tv0->AddReply(522780, 23964, 23963);
				}
				return;
			}
			if (a0 == 23964) {
				f_111_a1_v("Arrogance");
				tv0->SetMessage(522781);
				tv0->ClearReplies();
				tv0->AddReply(522783, -1, 23966);
				tv0->AddReply(522782, -1, 23965);
				return;
			}
			if (a0 == 23929) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522748);
				tv0->ClearReplies();
				tv0->AddReply(522749, 23932, 23930);
				tv0->AddReply(522750, -1, 23931);
				return;
			}
			if (a0 == 23932) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522751);
				tv0->ClearReplies();
				tv0->AddReply(522752, 23917, 23933);
				return;
			}
			if (a0 == 23917) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522736);
				tv0->ClearReplies();
				tv0->AddReply(522737, 23919, 23918);
				return;
			}
			if (a0 == 23919) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522738);
				tv0->ClearReplies();
				tv0->AddReply(522759, 23945, 23941);
				tv0->AddReply(522760, 23943, 23942);
				return;
			}
			if (a0 == 23943) {
				f_111_a1_v("Confusion");
				tv0->SetMessage(522761);
				tv0->ClearReplies();
				tv0->AddReply(522762, 23945, 23944);
				return;
			}
			if (a0 == 23945) {
				f_111_a1_v("Threat");
				tv0->SetMessage(522763);
				tv0->ClearReplies();
				tv0->AddReply(522764, -1, 23947);
				tv0->AddReply(522765, -1, 23948);
				return;
			}
			tv3 = true;
			if (f_6e7_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t2
{
	var bool tv0;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_4f6_a0_b()) {
				@RemoveActor(f_60e_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_4f6_a0_b()) {
			@RemoveActor(f_60e_a0_o());
		}
	}
}

bool f_4f6_a0_b(void)
{
	return true;
}

bool f_4f8_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_614_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_6e7_a0_b()) {
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

void f_53d_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_6e7_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_54f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_589_a1_b(a0)) {
			if (!f_5ae_a1_b(a0)) {
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
		if (!f_5ae_a1_b(a0)) {
			if (!f_589_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_589_a1_b(object a0)
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
	return f_5f8_a1_b(L4);
}

bool f_5ae_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_623_a0_i() + "m";
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
	return f_5f8_a1_b(L4);
}

void f_5d9_a1_v(string a0)
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

void f_5e9_a2_v(string a0, bool a1)
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

bool f_5f8_a1_b(string a0)
{
	if (f_6e7_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_607_a0_v(void)
{
	if (f_6e7_a0_b()) {
		@lshStopSpeech();
	}
}

object f_60e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_614_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_61e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_623_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_62c_a2_v(object a0, object a1)
{
	@SetVariable("oob12AglajaSobor1", 1);
}

void f_632_a2_v(object a0, object a1)
{
	@SetVariable("oob12AglajaSobor2", 1);
}

void f_638_a2_v(object a0, object a1)
{
	@SetVariable("oob12AglajaSobor3", 1);
}

void f_63e_a2_v(object a0, object a1)
{
	@SetVariable("oob12AglajaSobor4", 1);
}

void f_644_a2_v(object a0, object a1)
{
	@SetVariable("oob12AglajaSobor5", 1);
}

void f_64a_a2_v(object a0, object a1)
{
	@SetVariable("oob12AglajaSobor6", 1);
}

void f_650_a2_v(object a0, object a1)
{
	@SetVariable("oob12AglajaSobor7", 1);
}

bool f_656_a1_b(object a0)
{
	if (f_61e_a1_i("b12q01ChildsAreVisited") != 0) {
		return true;
	}
	return false;
}

bool f_662_a1_b(object a0)
{
	if (f_61e_a1_i("b12q01TheaterIsVisited") != 0) {
		return true;
	}
	return false;
}

bool f_66e_a1_b(object a0)
{
	if (f_61e_a1_i("oob12AglajaSobor1") == 0) {
		return true;
	}
	return false;
}

bool f_67a_a1_b(object a0)
{
	if (f_61e_a1_i("oob12AglajaSobor2") == 0) {
		return true;
	}
	return false;
}

bool f_686_a1_b(object a0)
{
	if (f_61e_a1_i("oob12AglajaSobor3") == 0) {
		return true;
	}
	return false;
}

bool f_692_a1_b(object a0)
{
	if (f_61e_a1_i("oob12AglajaSobor4") == 0) {
		return true;
	}
	return false;
}

bool f_69e_a1_b(object a0)
{
	if (f_61e_a1_i("oob12AglajaSobor5") == 0) {
		return true;
	}
	return false;
}

bool f_6aa_a1_b(object a0)
{
	if (f_61e_a1_i("oob12AglajaSobor6") == 0) {
		return true;
	}
	return false;
}

bool f_6b6_a1_b(object a0)
{
	if (f_61e_a1_i("oob12AglajaSobor7") == 0) {
		return true;
	}
	return false;
}

bool f_6c2_a1_b(object a0)
{
	if (f_61e_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

int f_6ce_a0_i(void)
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

int f_6df_a0_i(void)
{
	return 515527;
}

int f_6e1_a0_i(void)
{
	return 513334;
}

string f_6e3_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_6e5_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_6e7_a0_b(void)
{
	return true;
}

