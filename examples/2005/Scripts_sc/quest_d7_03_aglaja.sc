event OnLoad 5;
event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_365_a0_b());
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
		f_3bf_a1_b(f_46c_a0_o());
		if (!f_36a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_595_a0_i());
		L0->SetNPCDescription(f_593_a0_i());
		L0->SetPhoto(f_597_a0_s());
		L0->SetPhoto2(f_599_a0_s());
		L0->SetPlayerName(f_582_a0_i());
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
		f_3ae_a1_v(a0);
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
			if (f_528_a1_b(tv1) && f_534_a1_b(tv1)) {
				f_4da_a2_v(tv1, tv0);
				f_4e0_a2_v(tv1, tv0);
				f_bf_a1_v("Neutral");
				tv0->SetMessage(533268);
				tv0->ClearReplies();
				tv0->AddReply(534543, 36176, 36175);
				break;
			}
			f_bf_a1_v("Neutral");
			tv0->SetMessage(533273);
			tv0->ClearReplies();
			tv0->AddReply(533274, -1, 34788);
			tv0->AddReply(534553, -1, 36185);
			break;
			return;
		}
		if (f_59b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_449_a1_v(tv2);
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

	void f_bf_a1_v(string a0)
	{
		if (!f_59b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_450_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_465_a0_v();
			if (a1 == 34783) {
				f_4f1_a2_v(tv1, tv0);
				f_51d_a2_v(tv1, tv0);
				f_4e7_a2_v(tv1, tv0);
			}
			if (a1 == 34784) {
				f_4e7_a2_v(tv1, tv0);
				f_4fc_a2_v(tv1, tv0);
			}
			if (a1 == 34785) {
				f_4e7_a2_v(tv1, tv0);
				f_507_a2_v(tv1, tv0);
				f_512_a2_v(tv1, tv0);
				f_512_a2_v(tv1, tv0);
			}
			if (a1 == 34786) {
				f_4e7_a2_v(tv1, tv0);
			}
			if (a0 == 34782) {
				if (f_528_a1_b(tv1) && f_534_a1_b(tv1)) {
					f_4da_a2_v(tv1, tv0);
					f_4e0_a2_v(tv1, tv0);
					f_bf_a1_v("Neutral");
					tv0->SetMessage(533268);
					tv0->ClearReplies();
					tv0->AddReply(534543, 36176, 36175);
					return;
				}
				f_bf_a1_v("Neutral");
				tv0->SetMessage(533273);
				tv0->ClearReplies();
				tv0->AddReply(533274, -1, 34788);
				tv0->AddReply(534553, -1, 36185);
				return;
			}
			if (a0 == 36176) {
				f_bf_a1_v("Neutral");
				tv0->SetMessage(534544);
				tv0->ClearReplies();
				tv0->AddReply(534545, 36178, 36177);
				return;
			}
			if (a0 == 36178) {
				f_bf_a1_v("Neutral");
				tv0->SetMessage(534546);
				tv0->ClearReplies();
				tv0->AddReply(534547, 36180, 36179);
				tv0->AddReply(535169, 36835, 36834);
				return;
			}
			if (a0 == 36835) {
				f_bf_a1_v("Neutral");
				tv0->SetMessage(535170);
				tv0->ClearReplies();
				tv0->AddReply(535171, 36180, 36836);
				return;
			}
			if (a0 == 36180) {
				f_bf_a1_v("Neutral");
				tv0->SetMessage(534548);
				tv0->ClearReplies();
				tv0->AddReply(534549, 36182, 36181);
				return;
			}
			if (a0 == 36182) {
				f_bf_a1_v("Neutral");
				tv0->SetMessage(534550);
				tv0->ClearReplies();
				tv0->AddReply(534551, 36841, 36183);
				tv0->AddReply(535172, 36839, 36838);
				return;
			}
			if (a0 == 36839) {
				f_bf_a1_v("Neutral");
				tv0->SetMessage(535173);
				tv0->ClearReplies();
				tv0->AddReply(535174, 36184, 36840);
				return;
			}
			if (a0 == 36841) {
				f_bf_a1_v("Neutral");
				tv0->SetMessage(535175);
				tv0->ClearReplies();
				tv0->AddReply(535176, 36184, 36842);
				if (f_540_a1_b(tv1)) {
					tv0->AddReply(535177, -1, 36843);
				}
				return;
			}
			if (a0 == 36184) {
				f_bf_a1_v("Neutral");
				tv0->SetMessage(534552);
				tv0->ClearReplies();
				tv0->AddReply(533269, -1, 34783);
				tv0->AddReply(533270, -1, 34784);
				tv0->AddReply(533271, -1, 34785);
				tv0->AddReply(533272, -1, 34786);
				return;
			}
			tv3 = true;
			if (f_59b_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t3
{
	var Vector tv0;
	var bool tv1;

	void f_217_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_248_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_46c_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv1 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(f_46c_a0_o());
			@Hold();
		}
		f_2b9_a0_v();
	}

	void OnLoad(void)
	{
		f_2c8_a0_v();
	}

	void f_248_a0_v(void)
	{
		if (!f_365_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_2fe_a0_v();
		}
	}

	bool f_25c_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_35c_a1_b(L0);
	}

	void f_26b_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_270_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_34a_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_286_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_28f_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_28f_a0_v();
			if (f_365_a0_b() && f_270_a0_b()) {
				if (f_25c_a0_b()) {
					f_3f9_a1_b(f_46c_a0_o());
				}
			} else {
				f_26b_a0_v();
				f_286_a0_v();
			}
		}
	}

	void f_2b9_a0_v(void)
	{
		f_345_a0_v();
		f_28f_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_2c8_a0_v(void)
	{
		@StopGroup0();
		f_28f_a0_v();
		f_449_a1_v("Neutral");
		f_286_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_286_a0_v();
		} else {
			f_449_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_345_a0_v();
			f_35c_a1_b(a0);
			enable OnUse;
			f_217_a1_v(a0);
			f_449_a1_v("Neutral");
			f_28f_a0_v();
			f_286_a0_v();
		}
	}
}

void f_2fe_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_365_a0_b()) {
		return;
	}
	L0 = f_4c9_a0_i();
	for (L1 = 0; L1 < 5 && f_365_a0_b(); L1++) {
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
			@PlayAnimation("all", f_4c2_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_343_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_343_a0_b(void)
{
	return true;
}

void f_345_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_34a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_352_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_35c_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_352_a1_b(L0);
}

bool f_365_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_36a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_472_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_59b_a0_b()) {
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

void f_3ae_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_59b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_3bf_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3f9_a1_b(a0)) {
			if (!f_41e_a1_b(a0)) {
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
		if (!f_41e_a1_b(a0)) {
			if (!f_3f9_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3f9_a1_b(object a0)
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
	return f_456_a1_b(L4);
}

bool f_41e_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_4b9_a0_i() + "m";
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
	return f_456_a1_b(L4);
}

void f_449_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_450_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_456_a1_b(string a0)
{
	if (f_59b_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_465_a0_v(void)
{
	if (f_59b_a0_b()) {
		@lshStopSpeech();
	}
}

object f_46c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_472_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_47c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_481_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_48d_a3_v(object a0, object a1, int a2)
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
		f_481_a2_v(L0, a2);
	}
}

void f_4a0_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_48d_a3_v(a0, L0, a2);
}

bool f_4ad_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_4b9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_4c2_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4c9_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_4c2_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_4da_a2_v(object a0, object a1)
{
	@SetVariable("ood7AglajaPetr1", 1);
}

void f_4e0_a2_v(object a0, object a1)
{
	f_4ad_a2_b("quest_d7_03", "remove_maria");
}

void f_4e7_a2_v(object a0, object a1)
{
	f_54c_a0_v();
	f_4ad_a2_b("quest_d7_03", "completed");
}

void f_4f1_a2_v(object a0, object a1)
{
	@Trace("samopal is given");
	f_4a0_a3_v(a0, "Samopal", 1);
}

void f_4fc_a2_v(object a0, object a1)
{
	@Trace("whitevaccine is given");
	f_4a0_a3_v(a0, "white_vaccine", 1);
}

void f_507_a2_v(object a0, object a1)
{
	@Trace("feromicin is given");
	f_4a0_a3_v(a0, "feromicin", 1);
}

void f_512_a2_v(object a0, object a1)
{
	@Trace("neomicin is given");
	f_4a0_a3_v(a0, "neomicin", 1);
}

void f_51d_a2_v(object a0, object a1)
{
	@Trace("samopal ammo5 is given");
	f_4a0_a3_v(a0, "samopal_ammo", 5);
}

bool f_528_a1_b(object a0)
{
	if (f_47c_a1_i("ood7AglajaPetr1") == 0) {
		return true;
	}
	return false;
}

bool f_534_a1_b(object a0)
{
	if (f_47c_a1_i("d7q03") == 4) {
		return true;
	}
	return false;
}

bool f_540_a1_b(object a0)
{
	if (f_47c_a1_i("d7q03") == 1000) {
		return true;
	}
	return false;
}

void f_54c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 645, 2, 533279);
	f_566_a2_b(L0, 641);
}

object f_559_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_566_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_559_a0_o();
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

int f_582_a0_i(void)
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

int f_593_a0_i(void)
{
	return 515527;
}

int f_595_a0_i(void)
{
	return 513334;
}

string f_597_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_599_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_59b_a0_b(void)
{
	return true;
}

