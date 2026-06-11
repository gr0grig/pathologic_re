event OnDialogReply 11;
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
		if (!f_45c_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_703_a0_i());
		L0->SetNPCDescription(f_701_a0_i());
		L0->SetPhoto(f_705_a0_s());
		L0->SetPhoto2(f_707_a0_s());
		L0->SetPlayerName(f_6f0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_4b3_a1_b(f_572_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_4a1_a1_v(a0);
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
			f_c4_a1_v("Neutral");
			tv0->SetMessage(512871);
			tv0->ClearReplies();
			if (f_61e_a1_b(tv1) && f_636_a1_b(tv1)) {
				tv0->AddReply(512854, 14056, 14055);
			}
			if (f_642_a1_b(tv1) && f_64e_a1_b(tv1)) {
				tv0->AddReply(515468, 16586, 16585);
			}
			if (f_658_a1_b(tv1) && f_664_a1_b(tv1)) {
				tv0->AddReply(512879, 41846, 14081);
			}
			tv0->AddReply(512890, -1, 14092);
			tv0->AddReply(538887, -1, 40831);
			break;
			return;
		}
		if (f_709_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_53d_a1_v(tv2);
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

	void f_c4_a1_v(string a0)
	{
		if (!f_709_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_54d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_56b_a0_v();
			if (a1 == 14055) {
				f_5f7_a2_v(tv1, tv0);
			}
			if (a1 == 14078) {
				f_5fd_a2_v(tv1, tv0);
			}
			if (a1 == 40843) {
				f_5fd_a2_v(tv1, tv0);
			}
			if (a1 == 40845) {
				f_606_a2_v(tv1, tv0);
				f_5e0_a2_v(tv1, tv0);
				f_5f1_a2_v(tv1, tv0);
				f_5c8_a2_v(tv1, tv0);
			}
			if (a1 == 41504) {
				f_606_a2_v(tv1, tv0);
				f_5d8_a2_v(tv1, tv0);
				f_5e0_a2_v(tv1, tv0);
				f_5f1_a2_v(tv1, tv0);
				f_5c8_a2_v(tv1, tv0);
			}
			if (a1 == 16589) {
				f_606_a2_v(tv1, tv0);
				f_5e0_a2_v(tv1, tv0);
				f_5f1_a2_v(tv1, tv0);
				f_5c8_a2_v(tv1, tv0);
			}
			if (a1 == 40844) {
				f_606_a2_v(tv1, tv0);
				f_5e0_a2_v(tv1, tv0);
				f_5f1_a2_v(tv1, tv0);
				f_5c8_a2_v(tv1, tv0);
			}
			if (a1 == 14081) {
				f_618_a2_v(tv1, tv0);
			}
			if (a0 == 14073) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512871);
				tv0->ClearReplies();
				if (f_61e_a1_b(tv1) && f_636_a1_b(tv1)) {
					tv0->AddReply(512854, 14056, 14055);
				}
				if (f_642_a1_b(tv1) && f_64e_a1_b(tv1)) {
					tv0->AddReply(515468, 16586, 16585);
				}
				if (f_658_a1_b(tv1) && f_664_a1_b(tv1)) {
					tv0->AddReply(512879, 41846, 14081);
				}
				tv0->AddReply(512890, -1, 14092);
				tv0->AddReply(538887, -1, 40831);
				return;
			}
			if (a0 == 41846) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539888);
				tv0->ClearReplies();
				tv0->AddReply(539889, 41848, 41847);
				tv0->AddReply(539892, 41848, 41850);
				return;
			}
			if (a0 == 41848) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539890);
				tv0->ClearReplies();
				tv0->AddReply(539894, 41854, 41853);
				tv0->AddReply(539893, 41856, 41852);
				return;
			}
			if (a0 == 41856) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539897);
				tv0->ClearReplies();
				tv0->AddReply(539898, 41854, 41857);
				return;
			}
			if (a0 == 41854) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539895);
				tv0->ClearReplies();
				tv0->AddReply(539891, 14082, 41849);
				tv0->AddReply(539896, -1, 41855);
				return;
			}
			if (a0 == 14082) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512880);
				tv0->ClearReplies();
				tv0->AddReply(512881, 14084, 14083);
				tv0->AddReply(539568, 14086, 41507);
				return;
			}
			if (a0 == 14084) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512882);
				tv0->ClearReplies();
				tv0->AddReply(512883, 14086, 14085);
				return;
			}
			if (a0 == 14086) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512884);
				tv0->ClearReplies();
				tv0->AddReply(512885, 14088, 14087);
				tv0->AddReply(539569, 14090, 41509);
				return;
			}
			if (a0 == 14088) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512886);
				tv0->ClearReplies();
				tv0->AddReply(512887, 14090, 14089);
				return;
			}
			if (a0 == 14090) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512888);
				tv0->ClearReplies();
				tv0->AddReply(512889, -1, 14091);
				tv0->AddReply(539570, -1, 41511);
				return;
			}
			if (a0 == 16586) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(515469);
				tv0->ClearReplies();
				tv0->AddReply(512858, 14061, 14059);
				tv0->AddReply(538897, -1, 40844);
				return;
			}
			if (a0 == 14061) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512860);
				tv0->ClearReplies();
				tv0->AddReply(512861, 14063, 14062);
				if (f_62a_a1_b(tv1)) {
					tv0->AddReply(539559, 41502, 41498);
				}
				return;
			}
			if (a0 == 41502) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539563);
				tv0->ClearReplies();
				tv0->AddReply(539564, 14070, 41503);
				return;
			}
			if (a0 == 14070) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512869);
				tv0->ClearReplies();
				tv0->AddReply(515472, -1, 16589);
				return;
			}
			if (a0 == 14063) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512862);
				tv0->ClearReplies();
				tv0->AddReply(512865, 14067, 14066);
				return;
			}
			if (a0 == 14067) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512866);
				tv0->ClearReplies();
				tv0->AddReply(538898, -1, 40845);
				tv0->AddReply(539565, -1, 41504);
				return;
			}
			if (a0 == 14056) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512855);
				tv0->ClearReplies();
				tv0->AddReply(539530, 41463, 41462);
				tv0->AddReply(539546, 41463, 41478);
				return;
			}
			if (a0 == 41463) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539531);
				tv0->ClearReplies();
				tv0->AddReply(539532, 41465, 41464);
				tv0->AddReply(539547, 41465, 41480);
				return;
			}
			if (a0 == 41465) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539533);
				tv0->ClearReplies();
				tv0->AddReply(539534, 41467, 41466);
				tv0->AddReply(539548, 41483, 41482);
				return;
			}
			if (a0 == 41483) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539549);
				tv0->ClearReplies();
				tv0->AddReply(539550, 41467, 41484);
				tv0->AddReply(539551, 41467, 41485);
				return;
			}
			if (a0 == 41467) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539535);
				tv0->ClearReplies();
				tv0->AddReply(539536, 41469, 41468);
				return;
			}
			if (a0 == 41469) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539537);
				tv0->ClearReplies();
				tv0->AddReply(539538, 41471, 41470);
				tv0->AddReply(539552, 41471, 41488);
				return;
			}
			if (a0 == 41471) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539539);
				tv0->ClearReplies();
				tv0->AddReply(539540, 41473, 41472);
				return;
			}
			if (a0 == 41473) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539541);
				tv0->ClearReplies();
				tv0->AddReply(539585, 41531, 41530);
				return;
			}
			if (a0 == 41531) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539586);
				tv0->ClearReplies();
				tv0->AddReply(512856, 14058, 14057);
				tv0->AddReply(539553, 41491, 41490);
				return;
			}
			if (a0 == 41491) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539554);
				tv0->ClearReplies();
				tv0->AddReply(539555, 41493, 41492);
				tv0->AddReply(539557, 41493, 41494);
				return;
			}
			if (a0 == 41493) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(539556);
				tv0->ClearReplies();
				tv0->AddReply(539558, 14058, 41496);
				return;
			}
			if (a0 == 14058) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512857);
				tv0->ClearReplies();
				tv0->AddReply(512859, 14077, 14060);
				return;
			}
			if (a0 == 14077) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(512875);
				tv0->ClearReplies();
				tv0->AddReply(512876, -1, 14078);
				tv0->AddReply(538893, 40839, 40838);
				return;
			}
			if (a0 == 40839) {
				f_c4_a1_v("Neutral");
				tv0->SetMessage(538894);
				tv0->ClearReplies();
				tv0->AddReply(538896, -1, 40843);
				return;
			}
			tv3 = true;
			if (f_709_a0_b()) {
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

	void OnUse(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_45a_a0_b()) {
				@RemoveActor(f_572_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_45a_a0_b()) {
			@RemoveActor(f_572_a0_o());
		}
	}
}

bool f_45a_a0_b(void)
{
	return true;
}

bool f_45c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_578_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_709_a0_b()) {
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

void f_4a1_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_709_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_4b3_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_4ed_a1_b(a0)) {
			if (!f_512_a1_b(a0)) {
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
		if (!f_512_a1_b(a0)) {
			if (!f_4ed_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_4ed_a1_b(object a0)
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
	return f_55c_a1_b(L4);
}

bool f_512_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_5bf_a0_i() + "m";
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
	return f_55c_a1_b(L4);
}

void f_53d_a1_v(string a0)
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

void f_54d_a2_v(string a0, bool a1)
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

bool f_55c_a1_b(string a0)
{
	if (f_709_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_56b_a0_v(void)
{
	if (f_709_a0_b()) {
		@lshStopSpeech();
	}
}

object f_572_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_578_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_582_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_587_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_593_a3_v(object a0, object a1, int a2)
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
		f_587_a2_v(L0, a2);
	}
}

void f_5a6_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_593_a3_v(a0, L0, a2);
}

bool f_5b3_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

int f_5bf_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_5c8_a2_v(object a0, object a1)
{
	f_6cf_a3_v(f_6be_a0_o(), "pt_map_aglaja", 2);
	a1->ShowMap(f_6be_a0_o());
}

void f_5d8_a2_v(object a0, object a1)
{
	f_5b3_a3_b("volonteers_danko", "disease", "petr");
}

void f_5e0_a2_v(object a0, object a1)
{
	if (f_582_a1_i("map_chertez_state") <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_5f1_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "tvirin", 5);
}

void f_5f7_a2_v(object a0, object a1)
{
	@SetVariable("ood10Petr1", 1);
}

void f_5fd_a2_v(object a0, object a1)
{
	@SetVariable("d10q01", 2);
	f_67b_a0_v();
}

void f_606_a2_v(object a0, object a1)
{
	@SetVariable("d10q01", 3);
	f_688_a0_v();
	@Trace("blueprint is given");
	f_5a6_a3_v(a0, "d10q01_blueprint", 1);
}

void f_618_a2_v(object a0, object a1)
{
	@SetVariable("ood10Petr3", 1);
}

bool f_61e_a1_b(object a0)
{
	if (f_582_a1_i("ood10Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_62a_a1_b(object a0)
{
	if (f_582_a1_i("d10q01MariaSavePetr") == 1) {
		return true;
	}
	return false;
}

bool f_636_a1_b(object a0)
{
	if (f_582_a1_i("d10q01") == 1) {
		return true;
	}
	return false;
}

bool f_642_a1_b(object a0)
{
	if (f_582_a1_i("d10q01") == 2) {
		return true;
	}
	return false;
}

bool f_64e_a1_b(object a0)
{
	if (f_670_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_658_a1_b(object a0)
{
	if (f_582_a1_i("d10q01") == 3) {
		return true;
	}
	return false;
}

bool f_664_a1_b(object a0)
{
	if (f_582_a1_i("ood10Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_670_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "tvirin");
	if (L0 >= 5) {
		return true;
	}
	return false;
}

void f_67b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 189, 1, 515474);
	f_6a2_a2_b(L0, 186);
}

void f_688_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 190, 1, 515475);
	f_6a2_a2_b(L0, 186);
}

object f_695_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6a2_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_695_a0_o();
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

object f_6be_a0_o(void)
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

void f_6cf_a3_v(object a0, string a1, float a2)
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

int f_6f0_a0_i(void)
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

int f_701_a0_i(void)
{
	return 539028;
}

int f_703_a0_i(void)
{
	return 539027;
}

string f_705_a0_s(void)
{
	return "ui/NPC_Petr.png";
}

string f_707_a0_s(void)
{
	return "ui/NPC_Petr_b.png";
}

bool f_709_a0_b(void)
{
	return false;
}

