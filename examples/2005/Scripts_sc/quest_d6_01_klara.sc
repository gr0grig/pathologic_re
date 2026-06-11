event OnLoad 5;
event OnDialogReply 11;
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
		} while (!f_644_a0_b());
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
		f_69e_a1_b(f_74b_a0_o());
		if (!f_649_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8ba_a0_i());
		L0->SetNPCDescription(f_8b8_a0_i());
		L0->SetPhoto(f_8bc_a0_s());
		L0->SetPhoto2(f_8be_a0_s());
		L0->SetPlayerName(f_8a7_a0_i());
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
		f_68d_a1_v(a0);
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
			if (f_803_a1_b(tv1) && !f_80f_a1_b(tv1) && !f_7f7_a1_b(tv1)) {
				f_7d7_a2_v(tv1, tv0);
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512737);
				tv0->ClearReplies();
				tv0->AddReply(512738, 13933, 13932);
				tv0->AddReply(512744, 13965, 13938);
				tv0->AddReply(512745, 13954, 13939);
				break;
			}
			if (!f_80f_a1_b(tv1) && !f_7f7_a1_b(tv1)) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(533081);
				tv0->ClearReplies();
				tv0->AddReply(533082, -1, 34594);
				tv0->AddReply(536138, -1, 37897);
				break;
			}
			if (f_80f_a1_b(tv1) || f_7f7_a1_b(tv1)) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512748);
				tv0->ClearReplies();
				if (f_81b_a1_b(tv1)) {
					tv0->AddReply(512749, 3753, 13943);
				}
				if (f_84b_a1_b(tv1) && f_827_a1_b(tv1) && !f_833_a1_b(tv1) && !f_83f_a1_b(tv1)) {
					tv0->AddReply(512750, 11864, 13944);
				}
				tv0->AddReply(512769, -1, 13968);
				break;
			}
			return;
		}
		if (f_8c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_728_a1_v(tv2);
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

	void f_12d_a1_v(string a0)
	{
		if (!f_8c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_72f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_744_a0_v();
			if (a1 == 13943) {
				f_7dd_a2_v(tv1, tv0);
			}
			if (a1 == 3807) {
				f_7c3_a2_v(tv1, tv0);
				f_7d1_a2_v(tv1, tv0);
			}
			if (a1 == 3812) {
				f_7c3_a2_v(tv1, tv0);
				f_7d1_a2_v(tv1, tv0);
			}
			if (a1 == 13944) {
				f_7f1_a2_v(tv1, tv0);
			}
			if (a1 == 11872) {
				f_7b9_a2_v(tv1, tv0);
			}
			if (a1 == 11873) {
				f_7e3_a2_v(tv1, tv0);
			}
			if (a1 == 11871) {
				f_7b9_a2_v(tv1, tv0);
			}
			if (a1 == 11876) {
				f_7e3_a2_v(tv1, tv0);
			}
			if (a0 == 13931) {
				if (f_803_a1_b(tv1) && !f_80f_a1_b(tv1) && !f_7f7_a1_b(tv1)) {
					f_7d7_a2_v(tv1, tv0);
					f_12d_a1_v("Neutral");
					tv0->SetMessage(512737);
					tv0->ClearReplies();
					tv0->AddReply(512738, 13933, 13932);
					tv0->AddReply(512744, 13965, 13938);
					tv0->AddReply(512745, 13954, 13939);
					return;
				}
				if (!f_80f_a1_b(tv1) && !f_7f7_a1_b(tv1)) {
					f_12d_a1_v("Neutral");
					tv0->SetMessage(533081);
					tv0->ClearReplies();
					tv0->AddReply(533082, -1, 34594);
					tv0->AddReply(536138, -1, 37897);
					return;
				}
				if (f_80f_a1_b(tv1) || f_7f7_a1_b(tv1)) {
					f_12d_a1_v("Neutral");
					tv0->SetMessage(512748);
					tv0->ClearReplies();
					if (f_81b_a1_b(tv1)) {
						tv0->AddReply(512749, 3753, 13943);
					}
					if (f_84b_a1_b(tv1) && f_827_a1_b(tv1) && !f_833_a1_b(tv1) && !f_83f_a1_b(tv1)) {
						tv0->AddReply(512750, 11864, 13944);
					}
					tv0->AddReply(512769, -1, 13968);
					return;
				}
			}
			if (a0 == 11864) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(510739);
				tv0->ClearReplies();
				tv0->AddReply(510740, 11866, 11865);
				tv0->AddReply(510752, 11866, 11879);
				return;
			}
			if (a0 == 11866) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(510741);
				tv0->ClearReplies();
				tv0->AddReply(510742, 11868, 11867);
				tv0->AddReply(510751, 11870, 11877);
				return;
			}
			if (a0 == 11868) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(510743);
				tv0->ClearReplies();
				tv0->AddReply(510744, 11870, 11869);
				tv0->AddReply(510749, 11870, 11874);
				tv0->AddReply(510750, -1, 11876);
				return;
			}
			if (a0 == 11870) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(510745);
				tv0->ClearReplies();
				tv0->AddReply(510747, -1, 11872);
				tv0->AddReply(510748, -1, 11873);
				tv0->AddReply(510746, -1, 11871);
				return;
			}
			if (a0 == 3753) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503483);
				tv0->ClearReplies();
				tv0->AddReply(503484, 3756, 3754);
				tv0->AddReply(503485, 3778, 3755);
				tv0->AddReply(503508, 3763, 3783);
				return;
			}
			if (a0 == 3778) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503505);
				tv0->ClearReplies();
				tv0->AddReply(503506, 3775, 3779);
				tv0->AddReply(503507, 3763, 3781);
				return;
			}
			if (a0 == 3756) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503486);
				tv0->ClearReplies();
				tv0->AddReply(503487, 3775, 3757);
				tv0->AddReply(503488, 3770, 3758);
				tv0->AddReply(503489, 3760, 3759);
				tv0->AddReply(503491, 3763, 3761);
				return;
			}
			if (a0 == 3760) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503490);
				tv0->ClearReplies();
				tv0->AddReply(503492, 3763, 3762);
				tv0->AddReply(503509, 3786, 3785);
				return;
			}
			if (a0 == 3786) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503510);
				tv0->ClearReplies();
				tv0->AddReply(503511, 3788, 3787);
				tv0->AddReply(503515, 3766, 3793);
				return;
			}
			if (a0 == 3788) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503512);
				tv0->ClearReplies();
				tv0->AddReply(503513, 3775, 3789);
				tv0->AddReply(503514, 3766, 3791);
				return;
			}
			if (a0 == 3763) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503493);
				tv0->ClearReplies();
				tv0->AddReply(503494, 3766, 3764);
				tv0->AddReply(503495, 3766, 3765);
				return;
			}
			if (a0 == 3766) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503496);
				tv0->ClearReplies();
				tv0->AddReply(503497, 3771, 3769);
				tv0->AddReply(503501, 3797, 3773);
				tv0->AddReply(503502, -1, 3774);
				return;
			}
			if (a0 == 3797) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503517);
				tv0->ClearReplies();
				tv0->AddReply(503518, -1, 3798);
				tv0->AddReply(503519, -1, 3799);
				tv0->AddReply(503520, 3801, 3800);
				return;
			}
			if (a0 == 3801) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503521);
				tv0->ClearReplies();
				tv0->AddReply(503522, 3804, 3802);
				tv0->AddReply(503523, -1, 3803);
				return;
			}
			if (a0 == 3804) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503524);
				tv0->ClearReplies();
				tv0->AddReply(503525, 3770, 3805);
				return;
			}
			if (a0 == 3771) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503499);
				tv0->ClearReplies();
				tv0->AddReply(503500, 3770, 3772);
				tv0->AddReply(503516, -1, 3796);
				return;
			}
			if (a0 == 3770) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503498);
				tv0->ClearReplies();
				tv0->AddReply(503526, -1, 3807);
				tv0->AddReply(503527, 3809, 3808);
				return;
			}
			if (a0 == 3809) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503528);
				tv0->ClearReplies();
				tv0->AddReply(503529, 3811, 3810);
				return;
			}
			if (a0 == 3811) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503530);
				tv0->ClearReplies();
				tv0->AddReply(503531, -1, 3812);
				tv0->AddReply(503532, -1, 3813);
				return;
			}
			if (a0 == 3775) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(503503);
				tv0->ClearReplies();
				tv0->AddReply(503504, 3770, 3776);
				return;
			}
			if (a0 == 13965) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512767);
				tv0->ClearReplies();
				tv0->AddReply(512768, 13933, 13966);
				return;
			}
			if (a0 == 13933) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512739);
				tv0->ClearReplies();
				tv0->AddReply(512740, 13935, 13934);
				tv0->AddReply(512746, 13935, 13940);
				tv0->AddReply(512747, 13935, 13941);
				return;
			}
			if (a0 == 13935) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512741);
				tv0->ClearReplies();
				tv0->AddReply(512742, 13937, 13936);
				tv0->AddReply(512751, 13947, 13945);
				tv0->AddReply(512752, 13937, 13946);
				return;
			}
			if (a0 == 13947) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512753);
				tv0->ClearReplies();
				tv0->AddReply(512754, 13949, 13948);
				tv0->AddReply(538781, -1, 40701);
				return;
			}
			if (a0 == 13949) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512755);
				tv0->ClearReplies();
				tv0->AddReply(512756, -1, 13950);
				tv0->AddReply(512757, -1, 13951);
				return;
			}
			if (a0 == 13937) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512743);
				tv0->ClearReplies();
				tv0->AddReply(512758, 13954, 13952);
				tv0->AddReply(512759, 13954, 13953);
				return;
			}
			if (a0 == 13954) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512760);
				tv0->ClearReplies();
				tv0->AddReply(512761, 13957, 13956);
				return;
			}
			if (a0 == 13957) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512762);
				tv0->ClearReplies();
				tv0->AddReply(512763, 13959, 13958);
				return;
			}
			if (a0 == 13959) {
				f_12d_a1_v("Neutral");
				tv0->SetMessage(512764);
				tv0->ClearReplies();
				tv0->AddReply(512765, -1, 13960);
				tv0->AddReply(512766, -1, 13961);
				return;
			}
			tv3 = true;
			if (f_8c0_a0_b()) {
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

	void f_4f6_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_527_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_74b_a0_o());
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
			@RemoveActor(f_74b_a0_o());
			@Hold();
		}
		f_598_a0_v();
	}

	void OnLoad(void)
	{
		f_5a7_a0_v();
	}

	void f_527_a0_v(void)
	{
		if (!f_644_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_5dd_a0_v();
		}
	}

	bool f_53b_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_63b_a1_b(L0);
	}

	void f_54a_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_54f_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_629_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_565_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_56e_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_56e_a0_v();
			if (f_644_a0_b() && f_54f_a0_b()) {
				if (f_53b_a0_b()) {
					f_6d8_a1_b(f_74b_a0_o());
				}
			} else {
				f_54a_a0_v();
				f_565_a0_v();
			}
		}
	}

	void f_598_a0_v(void)
	{
		f_624_a0_v();
		f_56e_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_5a7_a0_v(void)
	{
		@StopGroup0();
		f_56e_a0_v();
		f_728_a1_v("Neutral");
		f_565_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_565_a0_v();
		} else {
			f_728_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_624_a0_v();
			f_63b_a1_b(a0);
			enable OnUse;
			f_4f6_a1_v(a0);
			f_728_a1_v("Neutral");
			f_56e_a0_v();
			f_565_a0_v();
		}
	}
}

void f_5dd_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_644_a0_b()) {
		return;
	}
	L0 = f_7a8_a0_i();
	for (L1 = 0; L1 < 5 && f_644_a0_b(); L1++) {
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
			@PlayAnimation("all", f_7a1_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_622_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_622_a0_b(void)
{
	return true;
}

void f_624_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_629_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_631_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_63b_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_631_a1_b(L0);
}

bool f_644_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_649_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_751_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_8c0_a0_b()) {
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

void f_68d_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_8c0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_69e_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_6d8_a1_b(a0)) {
			if (!f_6fd_a1_b(a0)) {
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
		if (!f_6fd_a1_b(a0)) {
			if (!f_6d8_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_6d8_a1_b(object a0)
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
	return f_735_a1_b(L4);
}

bool f_6fd_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_798_a0_i() + "m";
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
	return f_735_a1_b(L4);
}

void f_728_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_72f_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_735_a1_b(string a0)
{
	if (f_8c0_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_744_a0_v(void)
{
	if (f_8c0_a0_b()) {
		@lshStopSpeech();
	}
}

object f_74b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_751_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_75b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_760_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_76c_a3_v(object a0, object a1, int a2)
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
		f_760_a2_v(L0, a2);
	}
}

void f_77f_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_76c_a3_v(a0, L0, a2);
}

bool f_78c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_798_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_7a1_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_7a8_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_7a1_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_7b9_a2_v(object a0, object a1)
{
	f_871_a0_v();
	f_78c_a2_b("quest_d6_01", "completed");
}

void f_7c3_a2_v(object a0, object a1)
{
	f_857_a0_v();
	@Trace("klara blood is given");
	f_77f_a3_v(a0, "d6q01_klara_blood", 1);
}

void f_7d1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_7d7_a2_v(object a0, object a1)
{
	@SetVariable("ood6Klara1", 1);
}

void f_7dd_a2_v(object a0, object a1)
{
	@SetVariable("ood6Klara2", 1);
}

void f_7e3_a2_v(object a0, object a1)
{
	@SetVariable("d6q01KlaraVolonteer", 1);
	f_864_a0_v();
	f_78c_a2_b("quest_d6_01", "completed");
}

void f_7f1_a2_v(object a0, object a1)
{
	@SetVariable("ood6Klara3", 1);
}

bool f_7f7_a1_b(object a0)
{
	if (f_75b_a1_i("d6q01") == 4) {
		return true;
	}
	return false;
}

bool f_803_a1_b(object a0)
{
	if (f_75b_a1_i("ood6Klara1") == 0) {
		return true;
	}
	return false;
}

bool f_80f_a1_b(object a0)
{
	if (f_75b_a1_i("d6q01") == 3) {
		return true;
	}
	return false;
}

bool f_81b_a1_b(object a0)
{
	if (f_75b_a1_i("ood6Klara2") == 0) {
		return true;
	}
	return false;
}

bool f_827_a1_b(object a0)
{
	if (f_75b_a1_i("microscope_d6q01_klara_blood") != 0) {
		return true;
	}
	return false;
}

bool f_833_a1_b(object a0)
{
	if (f_75b_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_83f_a1_b(object a0)
{
	if (f_75b_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_84b_a1_b(object a0)
{
	if (f_75b_a1_i("ood6Klara3") == 0) {
		return true;
	}
	return false;
}

void f_857_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 163, 1, 515405);
	f_88b_a2_b(L0, 111);
}

void f_864_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 122, 1, 513745);
	f_88b_a2_b(L0, 111);
}

void f_871_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 635, 1, 533083);
	f_88b_a2_b(L0, 111);
}

object f_87e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_88b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_87e_a0_o();
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

int f_8a7_a0_i(void)
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

int f_8b8_a0_i(void)
{
	return 515540;
}

int f_8ba_a0_i(void)
{
	return 502865;
}

string f_8bc_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_8be_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_8c0_a0_b(void)
{
	return true;
}

