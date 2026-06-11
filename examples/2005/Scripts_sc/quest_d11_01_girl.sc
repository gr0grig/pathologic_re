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
		if (!f_214_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_371_a0_i());
		L0->SetNPCDescription(f_36f_a0_i());
		L0->SetPhoto(f_373_a0_s());
		L0->SetPhoto2(f_375_a0_s());
		L0->SetPlayerName(f_35e_a0_i());
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
		f_258_a1_v(a0);
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
			if (f_2de_a1_b(tv1) && f_2ea_a1_b(tv1)) {
				f_2b3_a2_v(tv1, tv0);
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514421);
				tv0->ClearReplies();
				tv0->AddReply(514422, 15648, 15647);
				tv0->AddReply(514443, 15650, 15670);
				break;
			}
			f_ab_a1_v("Neutral");
			tv0->SetMessage(514502);
			tv0->ClearReplies();
			tv0->AddReply(514503, -1, 15740);
			tv0->AddReply(534053, -1, 35635);
			break;
			return;
		}
		if (f_377_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_269_a1_v(tv2);
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

	void f_ab_a1_v(string a0)
	{
		if (!f_377_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_270_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_276_a0_v();
			if (a1 == 15659) {
				f_2b9_a2_v(tv1, tv0);
				f_2a3_a2_v(tv1, tv0);
			}
			if (a1 == 15660) {
				f_2b9_a2_v(tv1, tv0);
				f_2a3_a2_v(tv1, tv0);
			}
			if (a0 == 15646) {
				if (f_2de_a1_b(tv1) && f_2ea_a1_b(tv1)) {
					f_2b3_a2_v(tv1, tv0);
					f_ab_a1_v("Neutral");
					tv0->SetMessage(514421);
					tv0->ClearReplies();
					tv0->AddReply(514422, 15648, 15647);
					tv0->AddReply(514443, 15650, 15670);
					return;
				}
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514502);
				tv0->ClearReplies();
				tv0->AddReply(514503, -1, 15740);
				tv0->AddReply(534053, -1, 35635);
				return;
			}
			if (a0 == 15648) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514423);
				tv0->ClearReplies();
				tv0->AddReply(514424, 15650, 15649);
				tv0->AddReply(514440, 15667, 15666);
				return;
			}
			if (a0 == 15667) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514441);
				tv0->ClearReplies();
				tv0->AddReply(514442, 15650, 15668);
				return;
			}
			if (a0 == 15650) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514425);
				tv0->ClearReplies();
				tv0->AddReply(514426, 15652, 15651);
				tv0->AddReply(514436, 15662, 15661);
				return;
			}
			if (a0 == 15662) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514437);
				tv0->ClearReplies();
				tv0->AddReply(514438, 15652, 15663);
				tv0->AddReply(514439, 15652, 15665);
				return;
			}
			if (a0 == 15652) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514427);
				tv0->ClearReplies();
				tv0->AddReply(514428, 15654, 15653);
				tv0->AddReply(534052, 15658, 35633);
				return;
			}
			if (a0 == 15654) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514429);
				tv0->ClearReplies();
				tv0->AddReply(514430, 15656, 15655);
				tv0->AddReply(540067, 15658, 42030);
				return;
			}
			if (a0 == 15656) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514431);
				tv0->ClearReplies();
				tv0->AddReply(514432, 15658, 15657);
				return;
			}
			if (a0 == 15658) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(514433);
				tv0->ClearReplies();
				tv0->AddReply(514434, -1, 15659);
				tv0->AddReply(514435, -1, 15660);
				return;
			}
			tv3 = true;
			if (f_377_a0_b()) {
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
			if (!L0 && f_212_a0_b()) {
				@RemoveActor(f_27d_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_212_a0_b()) {
			@RemoveActor(f_27d_a0_o());
		}
	}
}

bool f_212_a0_b(void)
{
	return true;
}

bool f_214_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_283_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_377_a0_b()) {
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

void f_258_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_377_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_269_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_270_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_276_a0_v(void)
{
	if (f_377_a0_b()) {
		@lshStopSpeech();
	}
}

object f_27d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_283_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_28d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_292_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_29e_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_2a3_a2_v(object a0, object a1)
{
	f_33d_a3_v(f_32c_a0_o(), "pt_map_uprava_admin", 2);
	a1->ShowMap(f_32c_a0_o());
}

void f_2b3_a2_v(object a0, object a1)
{
	@SetVariable("ood11Nude1", 1);
}

void f_2b9_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d11q01", 2);
	L0 = f_32c_a0_o();
	L0->AddMark("d11q01NudeGotoRastrel", "pt_d11q01_msoldier", 1, 515482, f_29e_a0_f());
	L0->AddMark("d11q01NudeGotoBlock", "pt_map_uprava_admin", 1, 515305, f_29e_a0_f());
	f_2f6_a0_v();
	f_292_a2_b("quest_d11_01", "init_soldiers");
}

bool f_2de_a1_b(object a0)
{
	if (f_28d_a1_i("d11q01") == 1) {
		return true;
	}
	return false;
}

bool f_2ea_a1_b(object a0)
{
	if (f_28d_a1_i("ood11Nude1") == 0) {
		return true;
	}
	return false;
}

void f_2f6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 194, 1, 515479);
	f_310_a2_b(L0, 192);
}

object f_303_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_310_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_303_a0_o();
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

object f_32c_a0_o(void)
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

void f_33d_a3_v(object a0, string a1, float a2)
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

int f_35e_a0_i(void)
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

int f_36f_a0_i(void)
{
	return 515596;
}

int f_371_a0_i(void)
{
	return 514839;
}

string f_373_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_375_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_377_a0_b(void)
{
	return false;
}

