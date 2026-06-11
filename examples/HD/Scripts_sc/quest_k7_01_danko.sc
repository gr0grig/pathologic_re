event OnDialogReply 11;
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
		if (!f_4cd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_82e_a0_i());
		L0->SetNPCDescription(f_82c_a0_i());
		L0->SetPhoto(f_830_a0_s());
		L0->SetPhoto2(f_832_a0_s());
		L0->SetPlayerName(f_81b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_524_a1_b(f_5e3_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_512_a1_v(a0);
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
			if (f_768_a1_b(tv1)) {
				f_6e0_a2_v(tv1, tv0);
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526351);
				tv0->ClearReplies();
				tv0->AddReply(526352, 27638, 27637);
				tv0->AddReply(528648, 27638, 30055);
				break;
			}
			f_e3_a1_v("Neutral");
			tv0->SetMessage(526160);
			tv0->ClearReplies();
			if (f_745_a1_b(tv1) && f_75c_a1_b(tv1)) {
				tv0->AddReply(526161, 27441, 27440);
			}
			if (f_745_a1_b(tv1) && f_751_a1_b(tv1)) {
				tv0->AddReply(526165, 30046, 27444);
			}
			if (f_774_a1_b(tv1)) {
				tv0->AddReply(526356, 27642, 27641);
			}
			if (f_780_a1_b(tv1)) {
				tv0->AddReply(526365, 27651, 27650);
			}
			tv0->AddReply(526166, -1, 27445);
			tv0->AddReply(528636, -1, 30041);
			break;
			return;
		}
		if (f_834_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5ae_a1_v(tv2);
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

	void f_e3_a1_v(string a0)
	{
		if (!f_834_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5be_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_5dc_a0_v();
			if (a1 == 27639) {
				f_6e6_a2_v(tv1, tv0);
				f_730_a2_v(tv1, tv0);
				f_720_a2_v(tv1, tv0);
				f_70a_a2_v(tv1, tv0);
			}
			if (a1 == 27440) {
				f_6cd_a2_v(tv1, tv0);
			}
			if (a1 == 27442) {
				f_6ad_a2_v(tv1, tv0);
			}
			if (a1 == 27451) {
				f_6d3_a2_v(tv1, tv0);
			}
			if (a1 == 27643) {
				f_6e6_a2_v(tv1, tv0);
				f_720_a2_v(tv1, tv0);
				f_730_a2_v(tv1, tv0);
				f_70a_a2_v(tv1, tv0);
			}
			if (a1 == 27652) {
				f_700_a2_v(tv1, tv0);
				f_726_a2_v(tv1, tv0);
				f_71a_a2_v(tv1, tv0);
			}
			if (a1 == 43156) {
				f_700_a2_v(tv1, tv0);
				f_6a6_a2_v(tv1, tv0);
			}
			if (a0 == 27636) {
				if (f_768_a1_b(tv1)) {
					f_6e0_a2_v(tv1, tv0);
					f_e3_a1_v("Neutral");
					tv0->SetMessage(526351);
					tv0->ClearReplies();
					tv0->AddReply(526352, 27638, 27637);
					tv0->AddReply(528648, 27638, 30055);
					return;
				}
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526160);
				tv0->ClearReplies();
				if (f_745_a1_b(tv1) && f_75c_a1_b(tv1)) {
					tv0->AddReply(526161, 27441, 27440);
				}
				if (f_745_a1_b(tv1) && f_751_a1_b(tv1)) {
					tv0->AddReply(526165, 30046, 27444);
				}
				if (f_774_a1_b(tv1)) {
					tv0->AddReply(526356, 27642, 27641);
				}
				if (f_780_a1_b(tv1)) {
					tv0->AddReply(526365, 27651, 27650);
				}
				tv0->AddReply(526166, -1, 27445);
				tv0->AddReply(528636, -1, 30041);
				return;
			}
			if (a0 == 27651) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526366);
				tv0->ClearReplies();
				tv0->AddReply(528637, 30043, 30042);
				return;
			}
			if (a0 == 30043) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(528638);
				tv0->ClearReplies();
				tv0->AddReply(528639, 30045, 30044);
				return;
			}
			if (a0 == 30045) {
				f_e3_a1_v("Untrust");
				tv0->SetMessage(528640);
				tv0->ClearReplies();
				tv0->AddReply(526367, -1, 27652);
				tv0->AddReply(541054, -1, 43156);
				return;
			}
			if (a0 == 27642) {
				f_e3_a1_v("Smile");
				tv0->SetMessage(526357);
				tv0->ClearReplies();
				tv0->AddReply(526358, -1, 27643);
				return;
			}
			if (a0 == 30046) {
				f_e3_a1_v("Untrust");
				tv0->SetMessage(528641);
				tv0->ClearReplies();
				tv0->AddReply(528642, 30049, 30047);
				tv0->AddReply(528643, 30049, 30048);
				return;
			}
			if (a0 == 30049) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(528644);
				tv0->ClearReplies();
				tv0->AddReply(528645, 30052, 30050);
				return;
			}
			if (a0 == 30052) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(528646);
				tv0->ClearReplies();
				tv0->AddReply(528647, 27447, 30054);
				tv0->AddReply(541055, 30070, 43157);
				return;
			}
			if (a0 == 27447) {
				f_e3_a1_v("Menace");
				tv0->SetMessage(526168);
				tv0->ClearReplies();
				tv0->AddReply(528657, 30068, 30067);
				return;
			}
			if (a0 == 30068) {
				f_e3_a1_v("Menace");
				tv0->SetMessage(528658);
				tv0->ClearReplies();
				tv0->AddReply(528659, 30070, 30069);
				return;
			}
			if (a0 == 30070) {
				f_e3_a1_v("Untrust");
				tv0->SetMessage(528660);
				tv0->ClearReplies();
				tv0->AddReply(526169, 27450, 27448);
				tv0->AddReply(528661, 30072, 30071);
				return;
			}
			if (a0 == 30072) {
				f_e3_a1_v("Untrust");
				tv0->SetMessage(528662);
				tv0->ClearReplies();
				tv0->AddReply(528663, 27450, 30073);
				return;
			}
			if (a0 == 27450) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526170);
				tv0->ClearReplies();
				tv0->AddReply(526171, -1, 27451);
				return;
			}
			if (a0 == 27441) {
				f_e3_a1_v("Sorrow");
				tv0->SetMessage(526162);
				tv0->ClearReplies();
				if (f_751_a1_b(tv1)) {
					tv0->AddReply(526167, 30046, 27446);
				}
				if (!f_751_a1_b(tv1)) {
					tv0->AddReply(541052, 43155, 43154);
				}
				return;
			}
			if (a0 == 43155) {
				f_e3_a1_v("Untrust");
				tv0->SetMessage(541053);
				tv0->ClearReplies();
				tv0->AddReply(526163, -1, 27442);
				return;
			}
			if (a0 == 27638) {
				f_e3_a1_v("Untrust");
				tv0->SetMessage(526353);
				tv0->ClearReplies();
				tv0->AddReply(528654, 30064, 30063);
				tv0->AddReply(528656, 30064, 30065);
				return;
			}
			if (a0 == 30064) {
				f_e3_a1_v("Untrust");
				tv0->SetMessage(528655);
				tv0->ClearReplies();
				tv0->AddReply(528650, 30060, 30057);
				tv0->AddReply(528651, 30056, 30058);
				return;
			}
			if (a0 == 30056) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(528649);
				tv0->ClearReplies();
				tv0->AddReply(528653, 30060, 30061);
				return;
			}
			if (a0 == 30060) {
				f_e3_a1_v("Menace");
				tv0->SetMessage(528652);
				tv0->ClearReplies();
				tv0->AddReply(526354, -1, 27639);
				tv0->AddReply(526355, -1, 27640);
				return;
			}
			tv3 = true;
			if (f_834_a0_b()) {
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
	var Vector tv0;
	var bool tv1;

	void f_357_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_388_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_5e3_a0_o());
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
			@RemoveActor(f_5e3_a0_o());
			@Hold();
		}
		f_3f3_a0_v();
	}

	void OnLoad(void)
	{
		f_402_a0_v();
	}

	void f_388_a0_v(void)
	{
		if (!f_4c8_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_438_a0_v();
		}
	}

	bool f_396_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_4bf_a1_b(L0);
	}

	void f_3a5_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_3aa_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_484_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_3c0_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_3c9_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_3c9_a0_v();
			if (f_4c8_a0_b() && f_3aa_a0_b()) {
				if (f_396_a0_b()) {
					f_55e_a1_b(f_5e3_a0_o());
				}
			} else {
				f_3a5_a0_v();
				f_3c0_a0_v();
			}
		}
	}

	void f_3f3_a0_v(void)
	{
		f_47f_a0_v();
		f_3c9_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_402_a0_v(void)
	{
		@StopGroup0();
		f_3c9_a0_v();
		f_5ae_a1_v("Neutral");
		f_3c0_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_3c0_a0_v();
		} else {
			f_5ae_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_47f_a0_v();
			f_4bf_a1_b(a0);
			enable OnUse;
			f_357_a1_v(a0);
			f_5ae_a1_v("Neutral");
			f_3c9_a0_v();
			f_3c0_a0_v();
		}
	}
}

void f_438_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_4c8_a0_b()) {
		return;
	}
	L0 = f_695_a0_i();
	for (L1 = 0; L1 < 5 && f_4c8_a0_b(); L1++) {
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
			@PlayAnimation("all", f_68e_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_47d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_47d_a0_b(void)
{
	return true;
}

void f_47f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_484_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_48c_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_498_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_48c_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_5f3_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_4ae_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_4b5_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_4bf_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_4b5_a1_b(L0);
}

bool f_4c8_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_4cd_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_5e9_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_834_a0_b()) {
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

void f_512_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_834_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_524_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_55e_a1_b(a0)) {
			if (!f_583_a1_b(a0)) {
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
		if (!f_583_a1_b(a0)) {
			if (!f_55e_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_55e_a1_b(object a0)
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
	return f_5cd_a1_b(L4);
}

bool f_583_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_685_a0_i() + "m";
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
	return f_5cd_a1_b(L4);
}

void f_5ae_a1_v(string a0)
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

void f_5be_a2_v(string a0, bool a1)
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

bool f_5cd_a1_b(string a0)
{
	if (f_834_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_5dc_a0_v(void)
{
	if (f_834_a0_b()) {
		@lshStopSpeech();
	}
}

object f_5e3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_5e9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_5f3_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_5fe_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_603_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_60e_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_61a_a2_v(object a0, int a1)
{
	f_4ae_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_60e_a2_v(L0, a1);
	}
}

void f_62d_a3_v(object a0, object a1, int a2)
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
		f_60e_a2_v(L0, a2);
	}
}

bool f_640_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_647_a2_b(object a0, float a1)
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
	f_66a_a1_v(a1);
	f_498_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_66a_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_674_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_680_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_685_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_68e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_695_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_68e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_6a6_a2_v(object a0, object a1)
{
	f_647_a2_b(a0, 0.05000000074505806);
}

void f_6ad_a2_v(object a0, object a1)
{
	if (f_5fe_a1_i("k7q01CorpseMark") == 0) {
		object L0;
		@SetVariable("k7q01CorpseMark", 1);
		L0 = f_7e9_a0_o();
		L0->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, f_680_a0_f());
		f_674_a2_b("quest_k7_01", "place_corpse");
	}
}

void f_6cd_a2_v(object a0, object a1)
{
	@SetVariable("ook7DankoTheater1", 1);
}

void f_6d3_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("k7q01", 3);
	f_78c_a0_v();
	a0->RemoveItemByType(L0, "bird_mask", 1);
}

void f_6e0_a2_v(object a0, object a1)
{
	@SetVariable("ook7DankoTheater2", 1);
}

void f_6e6_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_7e9_a0_o();
	L0->AddMark("k7q02DankoGotoGatherer", "pt_gatherer3", 0, 526372, f_680_a0_f());
	f_799_a0_v();
	f_7b3_a0_v();
	f_603_a1_o("quest_k7_02");
}

void f_700_a2_v(object a0, object a1)
{
	f_7a6_a0_v();
	f_674_a2_b("quest_k7_02", "completed");
}

void f_70a_a2_v(object a0, object a1)
{
	f_7fa_a3_v(f_7e9_a0_o(), "pt_gatherer3", 2);
	a1->ShowMap(f_7e9_a0_o());
}

void f_71a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_720_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_726_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_61a_a2_v(a0, 5000);
}

void f_730_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Samopal is given");
	@CreateInvItem(L0);
	L0->SetItemName("Samopal");
	L0->SetProperty("durability", 30);
	f_62d_a3_v(a0, L0, 1);
}

bool f_745_a1_b(object a0)
{
	if (f_5fe_a1_i("k7q01") == 2) {
		return true;
	}
	return false;
}

bool f_751_a1_b(object a0)
{
	if (f_640_a2_b(a0, "bird_mask")) {
		return true;
	}
	return false;
}

bool f_75c_a1_b(object a0)
{
	if (f_5fe_a1_i("ook7DankoTheater1") == 0) {
		return true;
	}
	return false;
}

bool f_768_a1_b(object a0)
{
	if (f_5fe_a1_i("ook7DankoTheater2") == 0) {
		return true;
	}
	return false;
}

bool f_774_a1_b(object a0)
{
	if (f_5fe_a1_i("k7q02") == 0) {
		return true;
	}
	return false;
}

bool f_780_a1_b(object a0)
{
	if (f_5fe_a1_i("k7q02") == 2) {
		return true;
	}
	return false;
}

void f_78c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 420, 1, 526219);
	f_7cd_a2_b(L0, 416);
}

void f_799_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 430, 2, 526368);
	f_7cd_a2_b(L0, -1);
}

void f_7a6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 433, 2, 526371);
	f_7cd_a2_b(L0, 430);
}

void f_7b3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 431, 2, 526369);
	f_7cd_a2_b(L0, 430);
}

object f_7c0_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_7cd_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_7c0_a0_o();
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

object f_7e9_a0_o(void)
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

void f_7fa_a3_v(object a0, string a1, float a2)
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

int f_81b_a0_i(void)
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

int f_82c_a0_i(void)
{
	return 515573;
}

int f_82e_a0_i(void)
{
	return 504032;
}

string f_830_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_832_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_834_a0_b(void)
{
	return true;
}

