event evt_11 11;
event OnUse 0;
event OnGameTime 9;
event OnTrigger 26;
event OnLoad 5;
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
		if (!f_28a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_355_a0_i());
		L0->SetNPCDescription(f_353_a0_i());
		L0->SetPhoto(f_357_a0_s());
		L0->SetPhoto2(f_359_a0_s());
		L0->SetPlayerName(f_3ae_a0_i());
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
		f_2cf_a1_v(a0);
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
			if (f_3a2_a1_b(tv1)) {
				f_384_a2_v(tv1, tv0);
				f_ac_a1_v("Neutral");
				tv0->SetMessage(517930);
				tv0->ClearReplies();
				tv0->AddReply(519691, 20850, 20849);
				break;
			}
			f_ac_a1_v("Neutral");
			tv0->SetMessage(517932);
			tv0->ClearReplies();
			if (f_38a_a1_b(tv1)) {
				tv0->AddReply(517933, 20861, 19071);
			}
			if (f_396_a1_b(tv1)) {
				tv0->AddReply(519710, 20870, 20869);
			}
			tv0->AddReply(519709, -1, 20868);
			break;
			return;
		}
		if (f_35b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2e1_a1_v(tv2);
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

	void f_ac_a1_v(string a0)
	{
		if (!f_35b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2f1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_300_a0_v();
			if (a1 == 19069) {
				f_35d_a2_v(tv1, tv0);
				f_36f_a2_v(tv1, tv0);
			}
			if (a1 == 19071) {
				f_363_a2_v(tv1, tv0);
			}
			if (a1 == 20869) {
				f_369_a2_v(tv1, tv0);
			}
			if (a0 == 19068) {
				if (f_3a2_a1_b(tv1)) {
					f_384_a2_v(tv1, tv0);
					f_ac_a1_v("Neutral");
					tv0->SetMessage(517930);
					tv0->ClearReplies();
					tv0->AddReply(519691, 20850, 20849);
					return;
				}
				f_ac_a1_v("Neutral");
				tv0->SetMessage(517932);
				tv0->ClearReplies();
				if (f_38a_a1_b(tv1)) {
					tv0->AddReply(517933, 20861, 19071);
				}
				if (f_396_a1_b(tv1)) {
					tv0->AddReply(519710, 20870, 20869);
				}
				tv0->AddReply(519709, -1, 20868);
				return;
			}
			if (a0 == 20870) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(519711);
				tv0->ClearReplies();
				tv0->AddReply(519712, -1, 20871);
				return;
			}
			if (a0 == 20861) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(519703);
				tv0->ClearReplies();
				tv0->AddReply(519704, 20865, 20862);
				tv0->AddReply(519705, 20865, 20863);
				return;
			}
			if (a0 == 20865) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(519707);
				tv0->ClearReplies();
				tv0->AddReply(519708, -1, 20866);
				return;
			}
			if (a0 == 20850) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(519692);
				tv0->ClearReplies();
				tv0->AddReply(519693, 20852, 20851);
				tv0->AddReply(517931, -1, 19069);
				return;
			}
			if (a0 == 20852) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(519694);
				tv0->ClearReplies();
				tv0->AddReply(519695, 20854, 20853);
				tv0->AddReply(519697, 20856, 20855);
				return;
			}
			if (a0 == 20856) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(519698);
				tv0->ClearReplies();
				tv0->AddReply(519702, -1, 20860);
				return;
			}
			if (a0 == 20854) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(519696);
				tv0->ClearReplies();
				tv0->AddReply(519700, -1, 20858);
				tv0->AddReply(519701, -1, 20859);
				return;
			}
			tv3 = true;
			if (f_35b_a0_b()) {
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
		float L0;
		@GetGameTime(L0);
		if (L0 >= 24) {
			OnTrigger("cleanup");
		} else {
			@SetTimeEvent(0, 24);
		}
		f_1e7_a0_v();
	}

	void OnUse(object a0)
	{
		f_280_a0_v();
		t0{a0};
	}

	void OnGameTime(int a0, float a1)
	{
		OnTrigger("cleanup");
	}

	void f_1e7_a0_v(void)
	{
		for (; ; ) {
			float L0;
			while (!f_285_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_22f_a0_v();
		}
	}

	void f_1fc_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_22d_a0_b()) {
			@RemoveActor(f_307_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1fc_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_22d_a0_b()) {
			@RemoveActor(f_307_a0_o());
		}
	}
}

bool f_22d_a0_b(void)
{
	return true;
}

void f_22f_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_285_a0_b()) {
		return;
	}
	L0 = f_342_a0_i();
	for (L1 = 0; L1 < 5 && f_285_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_33b_a1_s(L3));
				@WaitForAnimEnd(L4);
				if (!L4) {
					break;
				}
			}
		} else {
			if (L2 == 1) {
				float L5;
				bool L6;
				@rand(L5, 4);
				@Sleep(L5 + 1, L6);
				if (!L6) {
					break;
				}
			} else {
				if (L1) {
					break;
				}
			}
		}
		if (!f_27e_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_27e_a0_b(void)
{
	return true;
}

void f_280_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_285_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_28a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_30d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_35b_a0_b()) {
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

void f_2cf_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_35b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2e1_a1_v(string a0)
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

void f_2f1_a2_v(string a0, bool a1)
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

void f_300_a0_v(void)
{
	if (f_35b_a0_b()) {
		@lshStopSpeech();
	}
}

object f_307_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_30d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_317_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_31c_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_328_a3_v(object a0, object a1, int a2)
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
		f_31c_a2_v(L0, a2);
	}
}

string f_33b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_342_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_33b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_353_a0_i(void)
{
	return 515568;
}

int f_355_a0_i(void)
{
	return 503353;
}

string f_357_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_359_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_35b_a0_b(void)
{
	return false;
}

void f_35d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_363_a2_v(object a0, object a1)
{
	@SetVariable("oob1Worker2", 1);
}

void f_369_a2_v(object a0, object a1)
{
	@SetVariable("oob1Worker3", 1);
}

void f_36f_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Knife is given");
	@CreateInvItem(L0);
	L0->SetItemName("Knife");
	L0->SetProperty("durability", 70);
	f_328_a3_v(a0, L0, 1);
}

void f_384_a2_v(object a0, object a1)
{
	@SetVariable("oob1Worker1", 1);
}

bool f_38a_a1_b(object a0)
{
	if (f_317_a1_i("oob1Worker2") == 0) {
		return true;
	}
	return false;
}

bool f_396_a1_b(object a0)
{
	if (f_317_a1_i("oob1Worker3") == 0) {
		return true;
	}
	return false;
}

bool f_3a2_a1_b(object a0)
{
	if (f_317_a1_i("oob1Worker1") == 0) {
		return true;
	}
	return false;
}

int f_3ae_a0_i(void)
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

