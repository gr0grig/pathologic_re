event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;
event OnTimer 7;

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
		if (!f_255_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_309_a0_i());
		L0->SetNPCDescription(f_307_a0_i());
		L0->SetPhoto(f_30b_a0_s());
		L0->SetPhoto2(f_30d_a0_s());
		L0->SetPlayerName(f_3b1_a0_i());
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
		f_299_a1_v(a0);
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
			if (f_33d_a1_b(tv1)) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530504);
				tv0->ClearReplies();
				tv0->AddReply(530505, 31865, 31864);
				tv0->AddReply(531423, -1, 32766);
				break;
			}
			f_9d_a1_v("Neutral");
			tv0->SetMessage(530512);
			tv0->ClearReplies();
			tv0->AddReply(530513, -1, 31872);
			tv0->AddReply(531422, -1, 32765);
			break;
			return;
		}
		if (f_30f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2aa_a1_v(tv2);
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

	void f_9d_a1_v(string a0)
	{
		if (!f_30f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2b1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2c2_a0_v();
			if (a1 == 31870) {
				f_311_a2_v(tv1, tv0);
				f_32d_a2_v(tv1, tv0);
			}
			if (a0 == 31863) {
				if (f_33d_a1_b(tv1)) {
					f_9d_a1_v("Neutral");
					tv0->SetMessage(530504);
					tv0->ClearReplies();
					tv0->AddReply(530505, 31865, 31864);
					tv0->AddReply(531423, -1, 32766);
					return;
				}
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530512);
				tv0->ClearReplies();
				tv0->AddReply(530513, -1, 31872);
				tv0->AddReply(531422, -1, 32765);
				return;
			}
			if (a0 == 31865) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530506);
				tv0->ClearReplies();
				tv0->AddReply(530507, 31867, 31866);
				tv0->AddReply(531424, 31869, 32767);
				return;
			}
			if (a0 == 31867) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530508);
				tv0->ClearReplies();
				tv0->AddReply(530509, 31869, 31868);
				tv0->AddReply(531425, -1, 32769);
				return;
			}
			if (a0 == 31869) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530510);
				tv0->ClearReplies();
				tv0->AddReply(530511, -1, 31870);
				return;
			}
			tv3 = true;
			if (f_30f_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;

	void init(void)
	{
		f_154_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_1e4_a0_v();
		t0{a0};
	}

	void f_154_a2_v(float a0, float a1)
	{
		for (; ; ) {
			float L0;
			while (!f_250_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_1a3_a2_v(a0, a1);
			@sync();
		}
	}

	void f_16d_a0_v(void)
	{
		bool L0;
		tv5 = true;
		@IsLoaded(L0);
		if (!L0 && f_1a1_a0_b()) {
			@RemoveActor(f_2c9_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_16d_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		f_1e4_a0_v();
		if (tv5 && f_1a1_a0_b()) {
			@RemoveActor(f_2c9_a0_o());
		}
	}

	bool f_1a1_a0_b(void)
	{
		return true;
	}

	void f_1a3_a2_v(float a0, float a1)
	{
		if (!f_250_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_1f2_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1be_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_248_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1be_a0_b()) {
				if (!tv2) {
					f_2b7_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_1e4_a0_v(void)
	{
		f_243_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_1f2_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_250_a0_b()) {
		return;
	}
	L0 = f_2f6_a0_i();
	for (L1 = 0; L1 < 5 && f_250_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_2ef_a1_s(L3));
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
		if (!f_241_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_241_a0_b(void)
{
	return true;
}

void f_243_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_248_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_250_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_255_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2cf_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_30f_a0_b()) {
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

void f_299_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_30f_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2aa_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2b1_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_2b7_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_2c2_a0_v(void)
{
	if (f_30f_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2c9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2cf_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2d9_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_2de_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_2ea_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_2ef_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2f6_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_2ef_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_307_a0_i(void)
{
	return 530494;
}

int f_309_a0_i(void)
{
	return 530493;
}

string f_30b_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_30d_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_30f_a0_b(void)
{
	return false;
}

void f_311_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b11q04", 2);
	L0 = f_37f_a0_o();
	L0->AddMark("b11q04SanitarGotoOfficer", "pt_gmap_vagon_army", 0, 530531, f_2ea_a0_f());
	f_349_a0_v();
	f_2de_a2_b("quest_b11_04", "place_officer");
}

void f_32d_a2_v(object a0, object a1)
{
	f_390_a3_v(f_37f_a0_o(), "pt_gmap_vagon_army", 2);
	a1->ShowMap(f_37f_a0_o());
}

bool f_33d_a1_b(object a0)
{
	if (f_2d9_a1_i("b11q04") == 1) {
		return true;
	}
	return false;
}

void f_349_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 553, 2, 530528);
	f_363_a2_b(L0, 551);
}

object f_356_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_363_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_356_a0_o();
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

object f_37f_a0_o(void)
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

void f_390_a3_v(object a0, string a1, float a2)
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

int f_3b1_a0_i(void)
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

