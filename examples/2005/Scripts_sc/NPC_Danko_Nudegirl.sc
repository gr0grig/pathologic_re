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
		if (!f_3f0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_557_a0_i());
		L0->SetNPCDescription(f_555_a0_i());
		L0->SetPhoto(f_559_a0_s());
		L0->SetPhoto2(f_55b_a0_s());
		L0->SetPlayerName(f_637_a0_i());
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
		f_434_a1_v(a0);
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
			if (f_59e_a1_b(tv1)) {
				f_55f_a2_v(tv1, tv0);
				f_c9_a1_v("Neutral");
				tv0->SetMessage(533196);
				tv0->ClearReplies();
				tv0->AddReply(535791, 37488, 37477);
				tv0->AddReply(535798, 37488, 37485);
				break;
			}
			if (f_5aa_a1_b(tv1) && f_5b6_a1_b(tv1)) {
				f_588_a2_v(tv1, tv0);
				f_c9_a1_v("Neutral");
				tv0->SetMessage(533221);
				tv0->ClearReplies();
				tv0->AddReply(533222, 37473, 34742);
				tv0->AddReply(535790, -1, 37476);
				break;
			}
			f_c9_a1_v("Neutral");
			tv0->SetMessage(533200);
			tv0->ClearReplies();
			tv0->AddReply(533201, -1, 34721);
			tv0->AddReply(535786, -1, 37472);
			break;
			return;
		}
		if (f_55d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4cf_a1_v(tv2);
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

	void f_c9_a1_v(string a0)
	{
		if (!f_55d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4f6_a0_v();
			if (a1 == 34719) {
				f_565_a2_v(tv1, tv0);
				f_58e_a2_v(tv1, tv0);
			}
			if (a1 == 37504) {
				f_565_a2_v(tv1, tv0);
				f_58e_a2_v(tv1, tv0);
			}
			if (a1 == 37503) {
				f_565_a2_v(tv1, tv0);
				f_58e_a2_v(tv1, tv0);
			}
			if (a0 == 34716) {
				if (f_59e_a1_b(tv1)) {
					f_55f_a2_v(tv1, tv0);
					f_c9_a1_v("Neutral");
					tv0->SetMessage(533196);
					tv0->ClearReplies();
					tv0->AddReply(535791, 37488, 37477);
					tv0->AddReply(535798, 37488, 37485);
					return;
				}
				if (f_5aa_a1_b(tv1) && f_5b6_a1_b(tv1)) {
					f_588_a2_v(tv1, tv0);
					f_c9_a1_v("Neutral");
					tv0->SetMessage(533221);
					tv0->ClearReplies();
					tv0->AddReply(533222, 37473, 34742);
					tv0->AddReply(535790, -1, 37476);
					return;
				}
				f_c9_a1_v("Neutral");
				tv0->SetMessage(533200);
				tv0->ClearReplies();
				tv0->AddReply(533201, -1, 34721);
				tv0->AddReply(535786, -1, 37472);
				return;
			}
			if (a0 == 37473) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(535787);
				tv0->ClearReplies();
				tv0->AddReply(535788, -1, 37474);
				tv0->AddReply(535789, -1, 37475);
				return;
			}
			if (a0 == 37488) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(535799);
				tv0->ClearReplies();
				tv0->AddReply(535800, 37491, 37490);
				return;
			}
			if (a0 == 37491) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(535801);
				tv0->ClearReplies();
				tv0->AddReply(535802, 37493, 37492);
				tv0->AddReply(535806, 37498, 37497);
				return;
			}
			if (a0 == 37498) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(535807);
				tv0->ClearReplies();
				tv0->AddReply(535808, 37500, 37499);
				return;
			}
			if (a0 == 37500) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(535809);
				tv0->ClearReplies();
				tv0->AddReply(535810, 37493, 37501);
				tv0->AddReply(535811, -1, 37503);
				return;
			}
			if (a0 == 37493) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(535803);
				tv0->ClearReplies();
				tv0->AddReply(535804, 37495, 37494);
				tv0->AddReply(535812, -1, 37504);
				return;
			}
			if (a0 == 37495) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(535805);
				tv0->ClearReplies();
				tv0->AddReply(533199, -1, 34719);
				return;
			}
			tv3 = true;
			if (f_55d_a0_b()) {
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
		f_445_a1_b(f_4fd_a0_o());
		if (!f_3f0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_557_a0_i());
		L0->SetNPCDescription(f_555_a0_i());
		L0->SetPhoto(f_559_a0_s());
		L0->SetPhoto2(f_55b_a0_s());
		L0->SetPlayerName(f_637_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_434_a1_v(a0);
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
			f_292_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_55d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4cf_a1_v(tv2);
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

	void f_292_a1_v(string a0)
	{
		if (!f_55d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4f6_a0_v();
			if (a0 == 42557) {
				f_292_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_55d_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;

	void init(void)
	{
		f_2ef_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_37f_a0_v();
		if (f_537_a1_b(7)) {
			t0{a0};
			return;
		}
		t2{a0};
	}

	void f_2ef_a2_v(float a0, float a1)
	{
		for (; ; ) {
			float L0;
			while (!f_3eb_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_33e_a2_v(a0, a1);
			@sync();
		}
	}

	void f_308_a0_v(void)
	{
		bool L0;
		tv5 = true;
		@IsLoaded(L0);
		if (!L0 && f_33c_a0_b()) {
			@RemoveActor(f_4fd_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_308_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		f_37f_a0_v();
		if (tv5 && f_33c_a0_b()) {
			@RemoveActor(f_4fd_a0_o());
		}
	}

	bool f_33c_a0_b(void)
	{
		return true;
	}

	void f_33e_a2_v(float a0, float a1)
	{
		if (!f_3eb_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_38d_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_359_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_3e3_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_359_a0_b()) {
				if (!tv2) {
					f_4dc_a1_v(tv4);
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

	void f_37f_a0_v(void)
	{
		f_3de_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_38d_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_3eb_a0_b()) {
		return;
	}
	L0 = f_544_a0_i();
	for (L1 = 0; L1 < 5 && f_3eb_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_53d_a1_s(L3));
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
		if (!f_3dc_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_3dc_a0_b(void)
{
	return true;
}

void f_3de_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_3e3_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_3eb_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3f0_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_503_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_55d_a0_b()) {
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

void f_434_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_55d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_445_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_47f_a1_b(a0)) {
			if (!f_4a4_a1_b(a0)) {
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
		if (!f_4a4_a1_b(a0)) {
			if (!f_47f_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_47f_a1_b(object a0)
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
	return f_4e7_a1_b(L4);
}

bool f_4a4_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_52e_a0_i() + "m";
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
	return f_4e7_a1_b(L4);
}

void f_4cf_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_4d6_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_4dc_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

bool f_4e7_a1_b(string a0)
{
	if (f_55d_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_4f6_a0_v(void)
{
	if (f_55d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_4fd_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_503_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_50d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_512_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

bool f_51d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_529_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_52e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_537_a1_b(int a0)
{
	return f_52e_a0_i() == a0;
}

string f_53d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_544_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_53d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_555_a0_i(void)
{
	return 533305;
}

int f_557_a0_i(void)
{
	return 533304;
}

string f_559_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_55b_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_55d_a0_b(void)
{
	return false;
}

void f_55f_a2_v(object a0, object a1)
{
	@SetVariable("ood7Nudegirl1", 1);
}

void f_565_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d7q04", 1);
	L0 = f_605_a0_o();
	L0->AddMark("d7q04NudeGotoAndrei", "pt_map_andrei", 0, 515352, f_529_a0_f());
	f_5c2_a0_v();
	f_5cf_a0_v();
	f_512_a1_o("quest_d7_04");
	f_51d_a2_b("quest_d7_04", "init_kabak");
}

void f_588_a2_v(object a0, object a1)
{
	@SetVariable("ood7Nudegirl2", 1);
}

void f_58e_a2_v(object a0, object a1)
{
	f_616_a3_v(f_605_a0_o(), "pt_map_andrei", 2);
	a1->ShowMap(f_605_a0_o());
}

bool f_59e_a1_b(object a0)
{
	if (f_50d_a1_i("ood7Nudegirl1") == 0) {
		return true;
	}
	return false;
}

bool f_5aa_a1_b(object a0)
{
	if (f_50d_a1_i("d7q04") == 1000) {
		return true;
	}
	return false;
}

bool f_5b6_a1_b(object a0)
{
	if (f_50d_a1_i("ood7Nudegirl2") == 0) {
		return true;
	}
	return false;
}

void f_5c2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 637, 2, 533223);
	f_5e9_a2_b(L0, -1);
}

void f_5cf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 638, 2, 533224);
	f_5e9_a2_b(L0, 637);
}

object f_5dc_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_5e9_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_5dc_a0_o();
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

object f_605_a0_o(void)
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

void f_616_a3_v(object a0, string a1, float a2)
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

int f_637_a0_i(void)
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

