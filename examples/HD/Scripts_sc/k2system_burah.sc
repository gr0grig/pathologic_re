event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnLoad 5;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

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
		if (!f_470_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_629_a0_i());
		L0->SetNPCDescription(f_627_a0_i());
		L0->SetPhoto(f_62b_a0_s());
		L0->SetPhoto2(f_62d_a0_s());
		L0->SetPlayerName(f_700_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_4c7_a1_b(f_586_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_4b5_a1_v(a0);
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
			f_8b_a1_v("Neutral");
			tv0->SetMessage(539060);
			tv0->ClearReplies();
			tv0->AddReply(539061, 43176, 41009);
			tv0->AddReply(541070, -1, 43175);
			break;
			return;
		}
		if (f_62f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_551_a1_v(tv2);
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

	void f_8b_a1_v(string a0)
	{
		if (!f_62f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_561_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_57f_a0_v();
			if (a0 == 41008) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(539060);
				tv0->ClearReplies();
				tv0->AddReply(539061, 43176, 41009);
				tv0->AddReply(541070, -1, 43175);
				return;
			}
			if (a0 == 43176) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(541071);
				tv0->ClearReplies();
				tv0->AddReply(541072, -1, 43177);
				tv0->AddReply(541073, -1, 43178);
				return;
			}
			tv3 = true;
			if (f_62f_a0_b()) {
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
		if (!f_470_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_629_a0_i());
		L0->SetNPCDescription(f_627_a0_i());
		L0->SetPhoto(f_62b_a0_s());
		L0->SetPhoto2(f_62d_a0_s());
		L0->SetPlayerName(f_700_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_4c7_a1_b(f_586_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_4b5_a1_v(a0);
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
			f_195_a1_v("Neutral");
			tv0->SetMessage(539063);
			tv0->ClearReplies();
			if (f_680_a1_b(tv1)) {
				tv0->AddReply(539064, 41700, 41012);
			}
			if (f_680_a1_b(tv1)) {
				tv0->AddReply(539750, 41703, 41702);
			}
			if (f_68a_a1_b(tv1)) {
				tv0->AddReply(539753, 41706, 41705);
			}
			if (f_694_a1_b(tv1)) {
				tv0->AddReply(539756, 41709, 41708);
			}
			tv0->AddReply(539759, -1, 41711);
			tv0->AddReply(541075, -1, 43180);
			break;
			return;
		}
		if (f_62f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_551_a1_v(tv2);
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

	void f_195_a1_v(string a0)
	{
		if (!f_62f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_561_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_57f_a0_v();
			if (a1 == 41701) {
				f_65b_a2_v(tv1, tv0);
				f_66f_a2_v(tv1, tv0);
				f_631_a2_v(tv1, tv0);
			}
			if (a1 == 41704) {
				f_660_a2_v(tv1, tv0);
			}
			if (a1 == 41707) {
				f_665_a2_v(tv1, tv0);
				f_66f_a2_v(tv1, tv0);
				f_674_a2_v(tv1, tv0);
				f_638_a2_v(tv1, tv0);
				f_63f_a2_v(tv1, tv0);
				f_64a_a2_v(tv1, tv0);
			}
			if (a1 == 41710) {
				f_66a_a2_v(tv1, tv0);
				f_650_a2_v(tv1, tv0);
				f_64a_a2_v(tv1, tv0);
				f_679_a2_v(tv1, tv0);
			}
			if (a0 == 41011) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(539063);
				tv0->ClearReplies();
				if (f_680_a1_b(tv1)) {
					tv0->AddReply(539064, 41700, 41012);
				}
				if (f_680_a1_b(tv1)) {
					tv0->AddReply(539750, 41703, 41702);
				}
				if (f_68a_a1_b(tv1)) {
					tv0->AddReply(539753, 41706, 41705);
				}
				if (f_694_a1_b(tv1)) {
					tv0->AddReply(539756, 41709, 41708);
				}
				tv0->AddReply(539759, -1, 41711);
				tv0->AddReply(541075, -1, 43180);
				return;
			}
			if (a0 == 41709) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(539757);
				tv0->ClearReplies();
				tv0->AddReply(539758, -1, 41710);
				return;
			}
			if (a0 == 41706) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(539754);
				tv0->ClearReplies();
				tv0->AddReply(541088, 43197, 43196);
				tv0->AddReply(541090, 43197, 43198);
				return;
			}
			if (a0 == 43197) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(541089);
				tv0->ClearReplies();
				tv0->AddReply(539755, -1, 41707);
				return;
			}
			if (a0 == 41703) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(539751);
				tv0->ClearReplies();
				tv0->AddReply(541077, 43183, 43182);
				return;
			}
			if (a0 == 43183) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(541078);
				tv0->ClearReplies();
				tv0->AddReply(541085, 43194, 43192);
				tv0->AddReply(541086, 43194, 43193);
				return;
			}
			if (a0 == 43194) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(541087);
				tv0->ClearReplies();
				tv0->AddReply(539752, -1, 41704);
				return;
			}
			if (a0 == 41700) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(539748);
				tv0->ClearReplies();
				tv0->AddReply(541079, 43186, 43184);
				tv0->AddReply(541080, 43186, 43185);
				return;
			}
			if (a0 == 43186) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(541081);
				tv0->ClearReplies();
				tv0->AddReply(541082, 43189, 43187);
				tv0->AddReply(541083, 43189, 43188);
				return;
			}
			if (a0 == 43189) {
				f_195_a1_v("Neutral");
				tv0->SetMessage(541084);
				tv0->ClearReplies();
				tv0->AddReply(539749, -1, 41701);
				return;
			}
			tv3 = true;
			if (f_62f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t4
{
	var Vector tv0;
	var bool tv1;

	void init(void)
	{
		f_309_a0_v();
	}

	void f_309_a0_v(void)
	{
		f_332_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_586_a0_o());
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
			@RemoveActor(f_586_a0_o());
			@Hold();
		}
		f_39d_a0_v();
	}

	void OnLoad(void)
	{
		f_3ac_a0_v();
	}

	void f_332_a0_v(void)
	{
		if (!f_46b_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_3e2_a0_v();
		}
	}

	bool f_340_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_462_a1_b(L0);
	}

	void f_34f_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_354_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_42e_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_36a_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_373_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_373_a0_v();
			if (f_46b_a0_b() && f_354_a0_b()) {
				if (f_340_a0_b()) {
					f_501_a1_b(f_586_a0_o());
				}
			} else {
				f_34f_a0_v();
				f_36a_a0_v();
			}
		}
	}

	void f_39d_a0_v(void)
	{
		f_429_a0_v();
		f_373_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_3ac_a0_v(void)
	{
		@StopGroup0();
		f_373_a0_v();
		f_551_a1_v("Neutral");
		f_36a_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_36a_a0_v();
		} else {
			f_551_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_429_a0_v();
			f_462_a1_b(a0);
			enable OnUse;
			f_79d_a1_v(a0);
			f_551_a1_v("Neutral");
			f_373_a0_v();
			f_36a_a0_v();
		}
	}
}

void f_3e2_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_46b_a0_b()) {
		return;
	}
	L0 = f_616_a0_i();
	for (L1 = 0; L1 < 5 && f_46b_a0_b(); L1++) {
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
			@PlayAnimation("all", f_60f_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_427_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_427_a0_b(void)
{
	return true;
}

void f_429_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_42e_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_436_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_442_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_436_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_596_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_458_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_462_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_458_a1_b(L0);
}

bool f_46b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_470_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_58c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_62f_a0_b()) {
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

void f_4b5_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_62f_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_4c7_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_501_a1_b(a0)) {
			if (!f_526_a1_b(a0)) {
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
		if (!f_526_a1_b(a0)) {
			if (!f_501_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_501_a1_b(object a0)
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
	return f_570_a1_b(L4);
}

bool f_526_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_606_a0_i() + "m";
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
	return f_570_a1_b(L4);
}

void f_551_a1_v(string a0)
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

void f_561_a2_v(string a0, bool a1)
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

bool f_570_a1_b(string a0)
{
	if (f_62f_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_57f_a0_v(void)
{
	if (f_62f_a0_b()) {
		@lshStopSpeech();
	}
}

object f_586_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_58c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_596_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_5a1_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_5ad_a3_v(object a0, object a1, int a2)
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
		f_5a1_a2_v(L0, a2);
	}
}

void f_5c0_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_5ad_a3_v(a0, L0, a2);
}

bool f_5cd_a2_b(object a0, float a1)
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
	f_5f0_a1_v(a1);
	f_442_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_5f0_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_5fa_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_606_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_60f_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_616_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_60f_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_627_a0_i(void)
{
	return 515592;
}

int f_629_a0_i(void)
{
	return 511961;
}

string f_62b_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_62d_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_62f_a0_b(void)
{
	return true;
}

void f_631_a2_v(object a0, object a1)
{
	f_5cd_a2_b(a0, 0.05000000074505806);
}

void f_638_a2_v(object a0, object a1)
{
	f_5cd_a2_b(a0, -0.05000000074505806);
}

void f_63f_a2_v(object a0, object a1)
{
	@Trace("beta_pills 5 is given");
	f_5c0_a3_v(a0, "beta_pills", 5);
}

void f_64a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_650_a2_v(object a0, object a1)
{
	@Trace("burah_serum is given");
	f_5c0_a3_v(a0, "burah_serum", 1);
}

void f_65b_a2_v(object a0, object a1)
{
	f_77c_a0_v();
}

void f_660_a2_v(object a0, object a1)
{
	f_784_a0_v();
}

void f_665_a2_v(object a0, object a1)
{
	f_76e_a0_v();
}

void f_66a_a2_v(object a0, object a1)
{
	f_798_a0_v();
}

void f_66f_a2_v(object a0, object a1)
{
	f_717_a0_v();
}

void f_674_a2_v(object a0, object a1)
{
	f_711_a0_v();
}

void f_679_a2_v(object a0, object a1)
{
	f_5cd_a2_b(a0, -0.30000001192092896);
}

bool f_680_a1_b(object a0)
{
	if (f_69e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_68a_a1_b(object a0)
{
	if (f_6a4_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_694_a1_b(object a0)
{
	if (f_6aa_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_69e_a1_b(object a0)
{
	return f_78c_a0_b();
}

bool f_6a4_a1_b(object a0)
{
	return f_776_a0_b();
}

bool f_6aa_a1_b(object a0)
{
	return f_792_a0_b();
}

void f_6b0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 753, 2, 539738);
	f_6e4_a2_b(L0, 751);
}

void f_6bd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 754, 2, 539739);
	f_6e4_a2_b(L0, 751);
}

void f_6ca_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 761, 2, 539746);
	f_6e4_a2_b(L0, 757);
}

object f_6d7_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6e4_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_6d7_a0_o();
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

int f_700_a0_i(void)
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

void f_711_a0_v(void)
{
	f_5fa_a2_b("klara2_npc_positioner", "remove_danko");
}

void f_717_a0_v(void)
{
	f_5fa_a2_b("klara2_npc_positioner", "remove_burah");
}

int f_71d_a0_i(void)
{
	int L0;
	@GetVariable("k2system_klara_day", L0);
	return L0;
}

int f_723_a0_i(void)
{
	int L0;
	@GetVariable("k2system_burah_day", L0);
	return L0;
}

int f_729_a0_i(void)
{
	int L0;
	@GetVariable("k2system_danko_day", L0);
	return L0;
}

int f_72f_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_723_a0_i();
	@GetVariable("k2system_burah_state" + L0, L1);
	return L1;
}

void f_73a_a1_v(int a0)
{
	int L0;
	L0 = f_723_a0_i();
	@SetVariable("k2system_burah_state" + L0, a0);
}

int f_744_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_729_a0_i();
	@GetVariable("k2system_danko_state" + L0, L1);
	return L1;
}

void f_74f_a1_v(int a0)
{
	int L0;
	L0 = f_729_a0_i();
	@SetVariable("k2system_danko_state" + L0, a0);
}

int f_759_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_71d_a0_i();
	@GetVariable("k2system_klara_state" + L0, L1);
	return L1;
}

void f_764_a1_v(int a0)
{
	int L0;
	L0 = f_71d_a0_i();
	@SetVariable("k2system_klara_state" + L0, a0);
}

void f_76e_a0_v(void)
{
	f_6ca_a0_v();
	f_74f_a1_v(3);
}

bool f_776_a0_b(void)
{
	return f_744_a0_i() == 1;
}

void f_77c_a0_v(void)
{
	f_6b0_a0_v();
	f_73a_a1_v(2);
}

void f_784_a0_v(void)
{
	f_6bd_a0_v();
	f_73a_a1_v(1);
}

bool f_78c_a0_b(void)
{
	return f_72f_a0_i() == 0;
}

bool f_792_a0_b(void)
{
	return f_759_a0_i() == 1;
}

void f_798_a0_v(void)
{
	f_764_a1_v(3);
}

void f_79d_a1_v(object a0)
{
	int L0;
	@GetProperty("day", L0);
	if (L0 == f_606_a0_i()) {
		t2{a0};
	} else {
		t0{a0};
	}
}

