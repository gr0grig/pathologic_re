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
		if (!f_4a1_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7cb_a0_i());
		L0->SetNPCDescription(f_7c9_a0_i());
		L0->SetPhoto(f_7cd_a0_s());
		L0->SetPhoto2(f_7cf_a0_s());
		L0->SetPlayerName(f_7b8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_4f8_a1_b(f_5b7_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_4e6_a1_v(a0);
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
			if (f_711_a1_b(tv1)) {
				f_6b1_a2_v(tv1, tv0);
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526373);
				tv0->ClearReplies();
				tv0->AddReply(526374, 27655, 27654);
				tv0->AddReply(528676, 27655, 30089);
				break;
			}
			f_e3_a1_v("Neutral");
			tv0->SetMessage(526173);
			tv0->ClearReplies();
			if (f_6ed_a1_b(tv1) && f_6f9_a1_b(tv1)) {
				tv0->AddReply(526174, 27455, 27454);
			}
			if (f_6ed_a1_b(tv1) && f_6e2_a1_b(tv1)) {
				tv0->AddReply(526178, 27459, 27458);
			}
			if (f_705_a1_b(tv1)) {
				tv0->AddReply(526378, 27659, 27658);
			}
			if (f_71d_a1_b(tv1)) {
				tv0->AddReply(526387, 44876, 27667);
			}
			tv0->AddReply(526181, -1, 27461);
			tv0->AddReply(528675, -1, 30088);
			break;
			return;
		}
		if (f_7d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_582_a1_v(tv2);
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
		if (!f_7d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_592_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_5b0_a0_v();
			if (a1 == 27656) {
				f_692_a2_v(tv1, tv0);
				f_6dc_a2_v(tv1, tv0);
				f_6b7_a2_v(tv1, tv0);
				f_64f_a2_v(tv1, tv0);
			}
			if (a1 == 27454) {
				f_67f_a2_v(tv1, tv0);
			}
			if (a1 == 27456) {
				f_65f_a2_v(tv1, tv0);
			}
			if (a1 == 27460) {
				f_685_a2_v(tv1, tv0);
			}
			if (a1 == 27660) {
				f_692_a2_v(tv1, tv0);
				f_6b7_a2_v(tv1, tv0);
				f_6dc_a2_v(tv1, tv0);
				f_64f_a2_v(tv1, tv0);
			}
			if (a1 == 27669) {
				f_6c2_a2_v(tv1, tv0);
				f_6cc_a2_v(tv1, tv0);
				f_6d6_a2_v(tv1, tv0);
			}
			if (a1 == 44880) {
				f_6c2_a2_v(tv1, tv0);
			}
			if (a0 == 27653) {
				if (f_711_a1_b(tv1)) {
					f_6b1_a2_v(tv1, tv0);
					f_e3_a1_v("Neutral");
					tv0->SetMessage(526373);
					tv0->ClearReplies();
					tv0->AddReply(526374, 27655, 27654);
					tv0->AddReply(528676, 27655, 30089);
					return;
				}
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526173);
				tv0->ClearReplies();
				if (f_6ed_a1_b(tv1) && f_6f9_a1_b(tv1)) {
					tv0->AddReply(526174, 27455, 27454);
				}
				if (f_6ed_a1_b(tv1) && f_6e2_a1_b(tv1)) {
					tv0->AddReply(526178, 27459, 27458);
				}
				if (f_705_a1_b(tv1)) {
					tv0->AddReply(526378, 27659, 27658);
				}
				if (f_71d_a1_b(tv1)) {
					tv0->AddReply(526387, 44876, 27667);
				}
				tv0->AddReply(526181, -1, 27461);
				tv0->AddReply(528675, -1, 30088);
				return;
			}
			if (a0 == 44876) {
				f_e3_a1_v("Sorrow");
				tv0->SetMessage(542490);
				tv0->ClearReplies();
				tv0->AddReply(542491, 27668, 44877);
				tv0->AddReply(542492, 27668, 44878);
				return;
			}
			if (a0 == 27668) {
				f_e3_a1_v("Smile");
				tv0->SetMessage(526388);
				tv0->ClearReplies();
				tv0->AddReply(526389, -1, 27669);
				tv0->AddReply(542493, -1, 44880);
				return;
			}
			if (a0 == 27659) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526379);
				tv0->ClearReplies();
				tv0->AddReply(526380, -1, 27660);
				return;
			}
			if (a0 == 27459) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526179);
				tv0->ClearReplies();
				tv0->AddReply(528687, 30103, 30102);
				return;
			}
			if (a0 == 30103) {
				f_e3_a1_v("Doubt");
				tv0->SetMessage(528688);
				tv0->ClearReplies();
				tv0->AddReply(528689, 30105, 30104);
				return;
			}
			if (a0 == 30105) {
				f_e3_a1_v("Sorrow");
				tv0->SetMessage(528690);
				tv0->ClearReplies();
				tv0->AddReply(528691, 30107, 30106);
				tv0->AddReply(528697, 30113, 30112);
				return;
			}
			if (a0 == 30113) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(528698);
				tv0->ClearReplies();
				tv0->AddReply(528699, 30107, 30114);
				return;
			}
			if (a0 == 30107) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(528692);
				tv0->ClearReplies();
				tv0->AddReply(528693, 30109, 30108);
				return;
			}
			if (a0 == 30109) {
				f_e3_a1_v("Doubt");
				tv0->SetMessage(528694);
				tv0->ClearReplies();
				tv0->AddReply(528702, 30118, 30117);
				tv0->AddReply(528700, 30116, 30115);
				return;
			}
			if (a0 == 30116) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(528701);
				tv0->ClearReplies();
				tv0->AddReply(528704, 30118, 30119);
				return;
			}
			if (a0 == 30118) {
				f_e3_a1_v("Doubt");
				tv0->SetMessage(528703);
				tv0->ClearReplies();
				tv0->AddReply(528695, 30111, 30110);
				return;
			}
			if (a0 == 30111) {
				f_e3_a1_v("Doubt");
				tv0->SetMessage(528696);
				tv0->ClearReplies();
				tv0->AddReply(526180, -1, 27460);
				return;
			}
			if (a0 == 27455) {
				f_e3_a1_v("Sorrow");
				tv0->SetMessage(526175);
				tv0->ClearReplies();
				tv0->AddReply(528685, 30101, 30100);
				return;
			}
			if (a0 == 30101) {
				f_e3_a1_v("Sorrow");
				tv0->SetMessage(528686);
				tv0->ClearReplies();
				if (!f_6e2_a1_b(tv1)) {
					tv0->AddReply(526176, -1, 27456);
				}
				if (f_6e2_a1_b(tv1)) {
					tv0->AddReply(526177, 27459, 27457);
				}
				return;
			}
			if (a0 == 27655) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526375);
				tv0->ClearReplies();
				tv0->AddReply(528677, 30092, 30091);
				return;
			}
			if (a0 == 30092) {
				f_e3_a1_v("Doubt");
				tv0->SetMessage(528678);
				tv0->ClearReplies();
				tv0->AddReply(528679, 30094, 30093);
				tv0->AddReply(528681, 30094, 30095);
				return;
			}
			if (a0 == 30094) {
				f_e3_a1_v("Doubt");
				tv0->SetMessage(528680);
				tv0->ClearReplies();
				tv0->AddReply(528682, 30098, 30097);
				return;
			}
			if (a0 == 30098) {
				f_e3_a1_v("Neutral");
				tv0->SetMessage(528683);
				tv0->ClearReplies();
				tv0->AddReply(526376, -1, 27656);
				tv0->AddReply(526377, -1, 27657);
				return;
			}
			tv3 = true;
			if (f_7d1_a0_b()) {
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

	void f_34d_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_37e_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_5b7_a0_o());
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
			@RemoveActor(f_5b7_a0_o());
			@Hold();
		}
		f_3e9_a0_v();
	}

	void OnLoad(void)
	{
		f_3f8_a0_v();
	}

	void f_37e_a0_v(void)
	{
		if (!f_49c_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_42e_a0_v();
		}
	}

	bool f_38c_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_493_a1_b(L0);
	}

	void f_39b_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_3a0_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_47a_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_3b6_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_3bf_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_3bf_a0_v();
			if (f_49c_a0_b() && f_3a0_a0_b()) {
				if (f_38c_a0_b()) {
					f_532_a1_b(f_5b7_a0_o());
				}
			} else {
				f_39b_a0_v();
				f_3b6_a0_v();
			}
		}
	}

	void f_3e9_a0_v(void)
	{
		f_475_a0_v();
		f_3bf_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_3f8_a0_v(void)
	{
		@StopGroup0();
		f_3bf_a0_v();
		f_582_a1_v("Neutral");
		f_3b6_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_3b6_a0_v();
		} else {
			f_582_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_475_a0_v();
			f_493_a1_b(a0);
			enable OnUse;
			f_34d_a1_v(a0);
			f_582_a1_v("Neutral");
			f_3bf_a0_v();
			f_3b6_a0_v();
		}
	}
}

void f_42e_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_49c_a0_b()) {
		return;
	}
	L0 = f_63e_a0_i();
	for (L1 = 0; L1 < 5 && f_49c_a0_b(); L1++) {
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
			@PlayAnimation("all", f_637_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_473_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_473_a0_b(void)
{
	return true;
}

void f_475_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_47a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_482_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_489_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_493_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_489_a1_b(L0);
}

bool f_49c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_4a1_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_5bd_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_7d1_a0_b()) {
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

void f_4e6_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_7d1_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_4f8_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_532_a1_b(a0)) {
			if (!f_557_a1_b(a0)) {
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
		if (!f_557_a1_b(a0)) {
			if (!f_532_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_532_a1_b(object a0)
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
	return f_5a1_a1_b(L4);
}

bool f_557_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_62e_a0_i() + "m";
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
	return f_5a1_a1_b(L4);
}

void f_582_a1_v(string a0)
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

void f_592_a2_v(string a0, bool a1)
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

bool f_5a1_a1_b(string a0)
{
	if (f_7d1_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_5b0_a0_v(void)
{
	if (f_7d1_a0_b()) {
		@lshStopSpeech();
	}
}

object f_5b7_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_5bd_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_5c7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_5cc_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_5d7_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_5e3_a2_v(object a0, int a1)
{
	f_482_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_5d7_a2_v(L0, a1);
	}
}

void f_5f6_a3_v(object a0, object a1, int a2)
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
		f_5d7_a2_v(L0, a2);
	}
}

void f_609_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_5f6_a3_v(a0, L0, a2);
}

bool f_616_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_61d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_629_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_62e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_637_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_63e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_637_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_64f_a2_v(object a0, object a1)
{
	f_797_a3_v(f_786_a0_o(), "pt_map_burah_home", 2);
	a1->ShowMap(f_786_a0_o());
}

void f_65f_a2_v(object a0, object a1)
{
	if (f_5c7_a1_i("k7q01CorpseMark") == 0) {
		object L0;
		@SetVariable("k7q01CorpseMark", 1);
		L0 = f_786_a0_o();
		L0->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, f_629_a0_f());
		f_61d_a2_b("quest_k7_01", "place_corpse");
	}
}

void f_67f_a2_v(object a0, object a1)
{
	@SetVariable("ook7Burah1", 1);
}

void f_685_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("k7q01", 4);
	f_729_a0_v();
	a0->RemoveItemByType(L0, "bird_balahon", 1);
}

void f_692_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_786_a0_o();
	L0->AddMark("k7q03BurahGotoFather", "pt_map_burah_home", 0, 526394, f_629_a0_f());
	f_736_a0_v();
	f_743_a0_v();
	f_5cc_a1_o("quest_k7_03");
	f_61d_a2_b("quest_k7_03", "place_family");
}

void f_6b1_a2_v(object a0, object a1)
{
	@SetVariable("ook7Burah2", 1);
}

void f_6b7_a2_v(object a0, object a1)
{
	@Trace("tvirin 5 is given");
	f_609_a3_v(a0, "tvirin", 5);
}

void f_6c2_a2_v(object a0, object a1)
{
	f_750_a0_v();
	f_61d_a2_b("quest_k7_03", "completed");
}

void f_6cc_a2_v(object a0, object a1)
{
	@Trace("money2000 is given");
	f_5e3_a2_v(a0, 2000);
}

void f_6d6_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_6dc_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

bool f_6e2_a1_b(object a0)
{
	if (f_616_a2_b(a0, "bird_balahon")) {
		return true;
	}
	return false;
}

bool f_6ed_a1_b(object a0)
{
	if (f_5c7_a1_i("k7q01") == 3) {
		return true;
	}
	return false;
}

bool f_6f9_a1_b(object a0)
{
	if (f_5c7_a1_i("ook7Burah1") == 0) {
		return true;
	}
	return false;
}

bool f_705_a1_b(object a0)
{
	if (f_5c7_a1_i("k7q03") == 0) {
		return true;
	}
	return false;
}

bool f_711_a1_b(object a0)
{
	if (f_5c7_a1_i("ook7Burah2") == 0) {
		return true;
	}
	return false;
}

bool f_71d_a1_b(object a0)
{
	if (f_5c7_a1_i("k7q03") == 2) {
		return true;
	}
	return false;
}

void f_729_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 422, 1, 526221);
	f_76a_a2_b(L0, 416);
}

void f_736_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 434, 2, 526390);
	f_76a_a2_b(L0, -1);
}

void f_743_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 435, 2, 526391);
	f_76a_a2_b(L0, 434);
}

void f_750_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 437, 2, 526393);
	f_76a_a2_b(L0, 434);
}

object f_75d_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_76a_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_75d_a0_o();
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

object f_786_a0_o(void)
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

void f_797_a3_v(object a0, string a1, float a2)
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

int f_7b8_a0_i(void)
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

int f_7c9_a0_i(void)
{
	return 515592;
}

int f_7cb_a0_i(void)
{
	return 511961;
}

string f_7cd_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_7cf_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_7d1_a0_b(void)
{
	return true;
}

