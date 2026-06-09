event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;
event OnTimer 7;
event evt_11 11;

var object g0;

maintask t0
{
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;

	void init(void)
	{
		f_f_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_9f_a0_v();
		f_4cd_a1_v(a0);
	}

	void f_f_a2_v(float a0, float a1)
	{
		for (; ; ) {
			float L0;
			while (!f_2c0_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_5e_a2_v(a0, a1);
			@sync();
		}
	}

	void f_28_a0_v(void)
	{
		bool L0;
		tv5 = true;
		@IsLoaded(L0);
		if (!L0 && f_5c_a0_b()) {
			@RemoveActor(f_339_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_28_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		f_9f_a0_v();
		if (tv5 && f_5c_a0_b()) {
			@RemoveActor(f_339_a0_o());
		}
	}

	bool f_5c_a0_b(void)
	{
		return true;
	}

	void f_5e_a2_v(float a0, float a1)
	{
		if (!f_2c0_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_ad_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_79_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_2b8_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_79_a0_b()) {
				if (!tv2) {
					f_327_a1_v(tv4);
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

	void f_9f_a0_v(void)
	{
		f_fe_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}

	void f_ad_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_2c0_a0_b()) {
			return;
		}
		L0 = f_386_a0_i();
		for (L1 = 0; L1 < 5 && f_2c0_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_37f_a1_s(L3));
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
			if (!f_fc_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_fc_a0_b(void)
	{
		return true;
	}

	void f_fe_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
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
		if (!f_2c5_a2_b(a0, 110.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_399_a0_i());
		L0->SetNPCDescription(f_397_a0_i());
		L0->SetPhoto(f_39b_a0_s());
		L0->SetPhoto2(f_39d_a0_s());
		L0->SetPlayerName(f_4bc_a0_i());
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
		f_309_a1_v(a0);
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
			if (!f_448_a1_b(tv1)) {
				f_1d2_a1_v("Neutral");
				tv0->SetMessage(530543);
				tv0->ClearReplies();
				tv0->AddReply(530544, -1, 31891);
				break;
			}
			if (f_430_a1_b(tv1)) {
				f_1d2_a1_v("Neutral");
				tv0->SetMessage(530416);
				tv0->ClearReplies();
				tv0->AddReply(530417, -1, 31789);
				break;
			}
			f_1d2_a1_v("Neutral");
			tv0->SetMessage(530418);
			tv0->ClearReplies();
			if (f_40c_a1_b(tv1) && !f_418_a1_b(tv1) && !f_424_a1_b(tv1) && f_43c_a1_b(tv1)) {
				tv0->AddReply(530419, 31792, 31791);
			}
			tv0->AddReply(530424, -1, 31796);
			break;
			return;
		}
		if (f_39f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_31a_a1_v(tv2);
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

	void f_1d2_a1_v(string a0)
	{
		if (!f_39f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_321_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_332_a0_v();
			if (a1 == 31789) {
				f_3ac_a2_v(tv1, tv0);
				f_3cf_a2_v(tv1, tv0);
			}
			if (a1 == 31791) {
				f_3c3_a2_v(tv1, tv0);
			}
			if (a1 == 31793) {
				f_3a1_a2_v(tv1, tv0);
				f_3c9_a2_v(tv1, tv0);
			}
			if (a1 == 31795) {
				f_3a1_a2_v(tv1, tv0);
				f_3c9_a2_v(tv1, tv0);
			}
			if (a0 == 31890) {
				if (!f_448_a1_b(tv1)) {
					f_1d2_a1_v("Neutral");
					tv0->SetMessage(530543);
					tv0->ClearReplies();
					tv0->AddReply(530544, -1, 31891);
					return;
				}
				if (f_430_a1_b(tv1)) {
					f_1d2_a1_v("Neutral");
					tv0->SetMessage(530416);
					tv0->ClearReplies();
					tv0->AddReply(530417, -1, 31789);
					return;
				}
				f_1d2_a1_v("Neutral");
				tv0->SetMessage(530418);
				tv0->ClearReplies();
				if (f_40c_a1_b(tv1) && !f_418_a1_b(tv1) && !f_424_a1_b(tv1) && f_43c_a1_b(tv1)) {
					tv0->AddReply(530419, 31792, 31791);
				}
				tv0->AddReply(530424, -1, 31796);
				return;
			}
			if (a0 == 31792) {
				if (f_3df_a1_b(tv1)) {
					f_1d2_a1_v("Neutral");
					tv0->SetMessage(530420);
					tv0->ClearReplies();
					tv0->AddReply(530421, -1, 31793);
					return;
				}
				if (!f_3df_a1_b(tv1)) {
					f_1d2_a1_v("Neutral");
					tv0->SetMessage(530422);
					tv0->ClearReplies();
					tv0->AddReply(530423, -1, 31795);
					return;
				}
			}
			tv3 = true;
			if (f_39f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

float f_2b8_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2c0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2c5_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_33f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_39f_a0_b()) {
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

void f_309_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_39f_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_31a_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_321_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_327_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_332_a0_v(void)
{
	if (f_39f_a0_b()) {
		@lshStopSpeech();
	}
}

object f_339_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_33f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_349_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_34e_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_35a_a3_v(object a0, object a1, int a2)
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
		f_34e_a2_v(L0, a2);
	}
}

void f_36d_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_35a_a3_v(a0, L0, a2);
}

float f_37a_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_37f_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_386_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_37f_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_397_a0_i(void)
{
	return 521048;
}

int f_399_a0_i(void)
{
	return 521047;
}

string f_39b_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_39d_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_39f_a0_b(void)
{
	return false;
}

void f_3a1_a2_v(object a0, object a1)
{
	@Trace("avroks blood is given");
	f_36d_a3_v(a0, "avroks_blood", 1);
}

void f_3ac_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b10q04MishkaTalk", 1);
	L0 = f_48a_a0_o();
	L0->AddMark("b10q04MorlokGotoMishka", "pt_map_mishka", 0, 530550, f_37a_a0_f());
	f_454_a0_v();
}

void f_3c3_a2_v(object a0, object a1)
{
	@SetVariable("oob10MorlokMishka1", 1);
}

void f_3c9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_3cf_a2_v(object a0, object a1)
{
	f_49b_a3_v(f_48a_a0_o(), "pt_map_mishka", 2);
	a1->ShowMap(f_48a_a0_o());
}

bool f_3df_a1_b(object a0)
{
	if (f_349_a1_i("b10q04NotkinTalk") == 9 && f_349_a1_i("b10q04Spi4kaTalk") == 9 && f_349_a1_i("b10q04MishkaTalk") == 9 && f_349_a1_i("b10q04LaskaTalk") == 9) {
		return true;
	}
	return false;
}

bool f_40c_a1_b(object a0)
{
	if (f_349_a1_i("b10q04MishkaTalk") == 9) {
		return true;
	}
	return false;
}

bool f_418_a1_b(object a0)
{
	if (f_349_a1_i("b10q04") == 1000) {
		return true;
	}
	return false;
}

bool f_424_a1_b(object a0)
{
	if (f_349_a1_i("b10q04") == -1) {
		return true;
	}
	return false;
}

bool f_430_a1_b(object a0)
{
	if (f_349_a1_i("b10q04MishkaTalk") == 0) {
		return true;
	}
	return false;
}

bool f_43c_a1_b(object a0)
{
	if (f_349_a1_i("oob10MorlokMishka1") == 0) {
		return true;
	}
	return false;
}

bool f_448_a1_b(object a0)
{
	if (f_349_a1_i("b10q04MorlokTalk") != 0) {
		return true;
	}
	return false;
}

void f_454_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 549, 2, 530440);
	f_46e_a2_b(L0, 545);
}

object f_461_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_46e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_461_a0_o();
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

object f_48a_a0_o(void)
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

void f_49b_a3_v(object a0, string a1, float a2)
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

int f_4bc_a0_i(void)
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

void f_4cd_a1_v(object a0)
{
	t1{a0};
}

