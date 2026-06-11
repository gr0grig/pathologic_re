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
		f_38f_a1_b(f_43c_a0_o());
		if (!f_33a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_562_a0_i());
		L0->SetNPCDescription(f_560_a0_i());
		L0->SetPhoto(f_564_a0_s());
		L0->SetPhoto2(f_566_a0_s());
		L0->SetPlayerName(f_53e_a0_i());
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
		f_37e_a1_v(a0);
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
			if (f_4ca_a1_b(tv1)) {
				f_47c_a2_v(tv1, tv0);
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530928);
				tv0->ClearReplies();
				tv0->AddReply(530929, 32288, 32256);
				break;
			}
			f_9f_a1_v("Neutral");
			tv0->SetMessage(530936);
			tv0->ClearReplies();
			tv0->AddReply(530937, -1, 32264);
			break;
			return;
		}
		if (f_568_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_419_a1_v(tv2);
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

	void f_9f_a1_v(string a0)
	{
		if (!f_568_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_420_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_435_a0_v();
			if (a1 == 32262) {
				f_482_a2_v(tv1, tv0);
				f_4c3_a2_v(tv1, tv0);
				f_4a3_a2_v(tv1, tv0);
			}
			if (a1 == 32312) {
				f_482_a2_v(tv1, tv0);
				f_4c3_a2_v(tv1, tv0);
				f_4b3_a2_v(tv1, tv0);
			}
			if (a0 == 32255) {
				if (f_4ca_a1_b(tv1)) {
					f_47c_a2_v(tv1, tv0);
					f_9f_a1_v("Neutral");
					tv0->SetMessage(530928);
					tv0->ClearReplies();
					tv0->AddReply(530929, 32288, 32256);
					return;
				}
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530936);
				tv0->ClearReplies();
				tv0->AddReply(530937, -1, 32264);
				return;
			}
			if (a0 == 32288) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530967);
				tv0->ClearReplies();
				tv0->AddReply(530968, 32291, 32289);
				tv0->AddReply(530969, 32294, 32290);
				return;
			}
			if (a0 == 32294) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530973);
				tv0->ClearReplies();
				tv0->AddReply(530974, 32296, 32295);
				tv0->AddReply(530976, 32291, 32297);
				return;
			}
			if (a0 == 32296) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530975);
				tv0->ClearReplies();
				tv0->AddReply(530977, 32291, 32298);
				return;
			}
			if (a0 == 32291) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530970);
				tv0->ClearReplies();
				tv0->AddReply(530971, 32293, 32292);
				tv0->AddReply(530989, 32315, 32314);
				return;
			}
			if (a0 == 32315) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530990);
				tv0->ClearReplies();
				tv0->AddReply(530991, 32293, 32316);
				return;
			}
			if (a0 == 32293) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530972);
				tv0->ClearReplies();
				tv0->AddReply(530978, 32302, 32300);
				return;
			}
			if (a0 == 32302) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530980);
				tv0->ClearReplies();
				tv0->AddReply(530981, 32301, 32303);
				tv0->AddReply(530987, 32301, 32310);
				return;
			}
			if (a0 == 32301) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530979);
				tv0->ClearReplies();
				tv0->AddReply(530982, 32305, 32304);
				return;
			}
			if (a0 == 32305) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530983);
				tv0->ClearReplies();
				tv0->AddReply(530931, 32259, 32258);
				tv0->AddReply(530984, 32307, 32306);
				return;
			}
			if (a0 == 32307) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530985);
				tv0->ClearReplies();
				tv0->AddReply(530986, 32259, 32308);
				return;
			}
			if (a0 == 32259) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530932);
				tv0->ClearReplies();
				tv0->AddReply(530933, 32261, 32260);
				tv0->AddReply(530988, -1, 32312);
				return;
			}
			if (a0 == 32261) {
				f_9f_a1_v("Neutral");
				tv0->SetMessage(530934);
				tv0->ClearReplies();
				tv0->AddReply(530935, -1, 32262);
				return;
			}
			tv3 = true;
			if (f_568_a0_b()) {
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
		f_38f_a1_b(f_43c_a0_o());
		if (!f_33a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_562_a0_i());
		L0->SetNPCDescription(f_560_a0_i());
		L0->SetPhoto(f_564_a0_s());
		L0->SetPhoto2(f_566_a0_s());
		L0->SetPlayerName(f_53e_a0_i());
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
		f_37e_a1_v(a0);
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
			f_298_a1_v("Neutral");
			tv0->SetMessage(520803);
			tv0->ClearReplies();
			tv0->AddReply(520804, 29221, 22021);
			tv0->AddReply(527876, 29224, 29223);
			break;
			return;
		}
		if (f_568_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_419_a1_v(tv2);
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

	void f_298_a1_v(string a0)
	{
		if (!f_568_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_420_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_435_a0_v();
			if (a0 == 22020) {
				f_298_a1_v("Neutral");
				tv0->SetMessage(520803);
				tv0->ClearReplies();
				tv0->AddReply(520804, 29221, 22021);
				tv0->AddReply(527876, 29224, 29223);
				return;
			}
			if (a0 == 29224) {
				f_298_a1_v("Neutral");
				tv0->SetMessage(527877);
				tv0->ClearReplies();
				tv0->AddReply(527878, -1, 29225);
				return;
			}
			if (a0 == 29221) {
				f_298_a1_v("Neutral");
				tv0->SetMessage(527874);
				tv0->ClearReplies();
				tv0->AddReply(527875, -1, 29222);
				return;
			}
			tv3 = true;
			if (f_568_a0_b()) {
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
	var bool tv0;

	void OnUse(object a0)
	{
		f_54f_a1_v(a0);
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
			if (!L0 && f_338_a0_b()) {
				@RemoveActor(f_43c_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_338_a0_b()) {
			@RemoveActor(f_43c_a0_o());
		}
	}
}

bool f_338_a0_b(void)
{
	return true;
}

bool f_33a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_442_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_568_a0_b()) {
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

void f_37e_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_568_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_38f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3c9_a1_b(a0)) {
			if (!f_3ee_a1_b(a0)) {
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
		if (!f_3ee_a1_b(a0)) {
			if (!f_3c9_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3c9_a1_b(object a0)
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
	return f_426_a1_b(L4);
}

bool f_3ee_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_473_a0_i() + "m";
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
	return f_426_a1_b(L4);
}

void f_419_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_420_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_426_a1_b(string a0)
{
	if (f_568_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_435_a0_v(void)
{
	if (f_568_a0_b()) {
		@lshStopSpeech();
	}
}

object f_43c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_442_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_44c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_451_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_462_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_46e_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_473_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_47c_a2_v(object a0, object a1)
{
	@SetVariable("oob1Spi4ka1", 1);
}

void f_482_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_50c_a0_o();
	L0->AddMark("b1q05Spi4kaGotoLaska", "pt_map_laska", 3, 530954, f_46e_a0_f());
	L0->AddMark("b1q05Spi4kaGotoMishka", "pt_map_mishka", 3, 530955, f_46e_a0_f());
	f_4d6_a0_v();
	f_462_a2_b("quest_b1_05", "completed");
}

void f_4a3_a2_v(object a0, object a1)
{
	f_51d_a3_v(f_50c_a0_o(), "pt_map_laska", 2);
	a1->ShowMap(f_50c_a0_o());
}

void f_4b3_a2_v(object a0, object a1)
{
	f_51d_a3_v(f_50c_a0_o(), "pt_map_mishka", 2);
	a1->ShowMap(f_50c_a0_o());
}

void f_4c3_a2_v(object a0, object a1)
{
	f_451_a2_v("vagon_mishka@door1", false);
}

bool f_4ca_a1_b(object a0)
{
	if (f_44c_a1_i("oob1Spi4ka1") == 0) {
		return true;
	}
	return false;
}

void f_4d6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 584, 2, 530953);
	f_4f0_a2_b(L0, 582);
}

object f_4e3_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4f0_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4e3_a0_o();
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

object f_50c_a0_o(void)
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

void f_51d_a3_v(object a0, string a1, float a2)
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

int f_53e_a0_i(void)
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

void f_54f_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_spi4ka", L0);
	if (!L0) {
		t2{a0};
		@SetVariable("mt_spi4ka", 1);
	}
}

int f_560_a0_i(void)
{
	return 515552;
}

int f_562_a0_i(void)
{
	return 502877;
}

string f_564_a0_s(void)
{
	return "ui/NPC_Spi4ka.png";
}

string f_566_a0_s(void)
{
	return "ui/NPC_Spi4ka_b.png";
}

bool f_568_a0_b(void)
{
	return true;
}

