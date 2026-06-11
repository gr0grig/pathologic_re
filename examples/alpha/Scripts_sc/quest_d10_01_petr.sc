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
		if (!f_2f5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_46a_a0_i());
		L0->SetPhoto(f_46c_a0_s());
		L0->SetPlayerName(f_439_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_32d_a1_v(a0);
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
			if (f_3a6_a1_b(tv1) && f_3b2_a1_b(tv1)) {
				f_379_a2_v(tv1, tv0);
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12853);
				tv0->ClearReplies();
				tv0->AddReply(12854, 14056, 14055);
				break;
			}
			f_cf_a1_v("Neutral");
			tv0->SetMessage(12871);
			tv0->ClearReplies();
			if (f_3be_a1_b(tv1) && f_3ca_a1_b(tv1)) {
				tv0->AddReply(12872, 14075, 14074);
			}
			if (f_3d6_a1_b(tv1) && f_3e2_a1_b(tv1)) {
				tv0->AddReply(15468, 16586, 16585);
			}
			if (f_3ec_a1_b(tv1) && f_3f8_a1_b(tv1)) {
				tv0->AddReply(12879, 14082, 14081);
			}
			tv0->AddReply(12890, -1, 14092);
			break;
			return;
		}
		if (f_46e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_331_a1_v(tv2);
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

	void f_cf_a1_v(string a0)
	{
		if (!f_46e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_331_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_343_a0_v();
			if (a1 == 14074) {
				f_388_a2_v(tv1, tv0);
			}
			if (a1 == 14080) {
				f_37f_a2_v(tv1, tv0);
			}
			if (a1 == 16589) {
				f_38e_a2_v(tv1, tv0);
			}
			if (a1 == 14081) {
				f_3a0_a2_v(tv1, tv0);
			}
			if (a0 == 14054) {
				if (f_3a6_a1_b(tv1) && f_3b2_a1_b(tv1)) {
					f_379_a2_v(tv1, tv0);
					f_cf_a1_v("Neutral");
					tv0->SetMessage(12853);
					tv0->ClearReplies();
					tv0->AddReply(12854, 14056, 14055);
					return;
				}
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12871);
				tv0->ClearReplies();
				if (f_3be_a1_b(tv1) && f_3ca_a1_b(tv1)) {
					tv0->AddReply(12872, 14075, 14074);
				}
				if (f_3d6_a1_b(tv1) && f_3e2_a1_b(tv1)) {
					tv0->AddReply(15468, 16586, 16585);
				}
				if (f_3ec_a1_b(tv1) && f_3f8_a1_b(tv1)) {
					tv0->AddReply(12879, 14082, 14081);
				}
				tv0->AddReply(12890, -1, 14092);
				return;
			}
			if (a0 == 14082) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12880);
				tv0->ClearReplies();
				tv0->AddReply(12881, 14084, 14083);
				return;
			}
			if (a0 == 14084) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12882);
				tv0->ClearReplies();
				tv0->AddReply(12883, 14086, 14085);
				return;
			}
			if (a0 == 14086) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12884);
				tv0->ClearReplies();
				tv0->AddReply(12885, 14088, 14087);
				return;
			}
			if (a0 == 14088) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12886);
				tv0->ClearReplies();
				tv0->AddReply(12887, 14090, 14089);
				return;
			}
			if (a0 == 14090) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12888);
				tv0->ClearReplies();
				tv0->AddReply(12889, -1, 14091);
				return;
			}
			if (a0 == 16586) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(15469);
				tv0->ClearReplies();
				tv0->AddReply(15470, 16588, 16587);
				return;
			}
			if (a0 == 16588) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(15471);
				tv0->ClearReplies();
				tv0->AddReply(15472, -1, 16589);
				return;
			}
			if (a0 == 14075) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12873);
				tv0->ClearReplies();
				tv0->AddReply(12874, 14077, 14076);
				return;
			}
			if (a0 == 14077) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12875);
				tv0->ClearReplies();
				tv0->AddReply(12876, 14079, 14078);
				return;
			}
			if (a0 == 14079) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12877);
				tv0->ClearReplies();
				tv0->AddReply(12878, -1, 14080);
				return;
			}
			if (a0 == 14056) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12855);
				tv0->ClearReplies();
				tv0->AddReply(12856, 14058, 14057);
				return;
			}
			if (a0 == 14058) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12857);
				tv0->ClearReplies();
				tv0->AddReply(12858, 14061, 14059);
				tv0->AddReply(12859, 14064, 14060);
				tv0->AddReply(12868, 14070, 14069);
				return;
			}
			if (a0 == 14064) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12863);
				tv0->ClearReplies();
				tv0->AddReply(12864, -1, 14065);
				return;
			}
			if (a0 == 14061) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12860);
				tv0->ClearReplies();
				tv0->AddReply(12861, 14063, 14062);
				return;
			}
			if (a0 == 14063) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12862);
				tv0->ClearReplies();
				tv0->AddReply(12865, 14067, 14066);
				return;
			}
			if (a0 == 14067) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12866);
				tv0->ClearReplies();
				tv0->AddReply(12867, 14070, 14068);
				return;
			}
			if (a0 == 14070) {
				f_cf_a1_v("Neutral");
				tv0->SetMessage(12869);
				tv0->ClearReplies();
				tv0->AddReply(12870, -1, 14072);
				return;
			}
			tv3 = true;
			if (f_46e_a0_b()) {
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
			if (!L0 && f_2f3_a0_b()) {
				@RemoveActor(f_34a_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_2f3_a0_b()) {
			@RemoveActor(f_34a_a0_o());
		}
	}
}

bool f_2f3_a0_b(void)
{
	return true;
}

bool f_2f5_a1_b(object a0)
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
	L5 = L3 * 70 + f_350_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_32d_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_331_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_343_a0_v(void)
{
	if (f_46e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_34a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_350_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_35a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_35f_a3_v(object a0, object a1, int a2)
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

void f_36c_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_35f_a3_v(a0, L0, a2);
}

void f_379_a2_v(object a0, object a1)
{
	@SetVariable("ood10Petr1", 1);
}

void f_37f_a2_v(object a0, object a1)
{
	@SetVariable("d10q01", 2);
	f_44a_a0_v();
}

void f_388_a2_v(object a0, object a1)
{
	@SetVariable("ood10Petr2", 1);
}

void f_38e_a2_v(object a0, object a1)
{
	@SetVariable("d10q01", 3);
	f_45a_a0_v();
	@Trace("blueprint is given");
	f_36c_a3_v(a0, "d10q01_blueprint", 1);
}

void f_3a0_a2_v(object a0, object a1)
{
	@SetVariable("ood10Petr3", 1);
}

bool f_3a6_a1_b(object a0)
{
	if (f_35a_a1_i("ood10Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_3b2_a1_b(object a0)
{
	if (f_35a_a1_i("d10q01MariaSavePetr") == 1) {
		return true;
	}
	return false;
}

bool f_3be_a1_b(object a0)
{
	if (f_35a_a1_i("d10q01") == 1) {
		return true;
	}
	return false;
}

bool f_3ca_a1_b(object a0)
{
	if (f_35a_a1_i("ood10Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_3d6_a1_b(object a0)
{
	if (f_35a_a1_i("d10q01") == 2) {
		return true;
	}
	return false;
}

bool f_3e2_a1_b(object a0)
{
	if (f_404_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3ec_a1_b(object a0)
{
	if (f_35a_a1_i("d10q01") == 3) {
		return true;
	}
	return false;
}

bool f_3f8_a1_b(object a0)
{
	if (f_35a_a1_i("ood10Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_404_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "tvirin");
	if (L0 >= 5) {
		return true;
	}
	return false;
}

object f_40f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_41c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_40f_a0_o();
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

int f_439_a0_i(void)
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

void f_44a_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 189, 1, 15474);
	f_41c_a2_b(L0, 186);
}

void f_45a_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 190, 1, 15475);
	f_41c_a2_b(L0, 186);
}

int f_46a_a0_i(void)
{
	return 4029;
}

string f_46c_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_46e_a0_b(void)
{
	return false;
}

