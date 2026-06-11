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
		} while (!f_57d_a0_b());
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
		f_5d7_a1_b(f_684_a0_o());
		if (!f_582_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_802_a0_i());
		L0->SetNPCDescription(f_800_a0_i());
		L0->SetPhoto(f_804_a0_s());
		L0->SetPhoto2(f_806_a0_s());
		L0->SetPlayerName(f_7ef_a0_i());
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
		f_5c6_a1_v(a0);
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
			f_e5_a1_v("Neutral");
			tv0->SetMessage(513423);
			tv0->ClearReplies();
			if (f_762_a1_b(tv1)) {
				tv0->AddReply(513424, 14661, 14660);
			}
			if (f_76e_a1_b(tv1) && f_77a_a1_b(tv1)) {
				tv0->AddReply(513447, 37690, 14683);
			}
			if (f_786_a1_b(tv1)) {
				tv0->AddReply(513433, 14670, 14669);
			}
			if (f_732_a1_b(tv1) && f_73e_a1_b(tv1)) {
				tv0->AddReply(535977, 37706, 37705);
			}
			if (f_74a_a1_b(tv1) && f_756_a1_b(tv1)) {
				tv0->AddReply(538666, 40565, 40564);
			}
			tv0->AddReply(513460, -1, 14697);
			tv0->AddReply(535944, -1, 37665);
			break;
			return;
		}
		if (f_808_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_661_a1_v(tv2);
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

	void f_e5_a1_v(string a0)
	{
		if (!f_808_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_668_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_67d_a0_v();
			if (a1 == 14668) {
				f_6f8_a2_v(tv1, tv0);
				f_70d_a2_v(tv1, tv0);
				f_6e6_a2_v(tv1, tv0);
			}
			if (a1 == 14696) {
				f_721_a2_v(tv1, tv0);
				f_6e6_a2_v(tv1, tv0);
				f_704_a2_v(tv1, tv0);
			}
			if (a1 == 14692) {
				f_718_a2_v(tv1, tv0);
			}
			if (a1 == 37696) {
				f_718_a2_v(tv1, tv0);
			}
			if (a1 == 14669) {
				f_72c_a2_v(tv1, tv0);
			}
			if (a1 == 37705) {
				f_6ec_a2_v(tv1, tv0);
			}
			if (a1 == 40564) {
				f_6f2_a2_v(tv1, tv0);
			}
			if (a0 == 14659) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513423);
				tv0->ClearReplies();
				if (f_762_a1_b(tv1)) {
					tv0->AddReply(513424, 14661, 14660);
				}
				if (f_76e_a1_b(tv1) && f_77a_a1_b(tv1)) {
					tv0->AddReply(513447, 37690, 14683);
				}
				if (f_786_a1_b(tv1)) {
					tv0->AddReply(513433, 14670, 14669);
				}
				if (f_732_a1_b(tv1) && f_73e_a1_b(tv1)) {
					tv0->AddReply(535977, 37706, 37705);
				}
				if (f_74a_a1_b(tv1) && f_756_a1_b(tv1)) {
					tv0->AddReply(538666, 40565, 40564);
				}
				tv0->AddReply(513460, -1, 14697);
				tv0->AddReply(535944, -1, 37665);
				return;
			}
			if (a0 == 40565) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(538667);
				tv0->ClearReplies();
				tv0->AddReply(538668, 40568, 40566);
				tv0->AddReply(538669, -1, 40567);
				return;
			}
			if (a0 == 40568) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(538670);
				tv0->ClearReplies();
				tv0->AddReply(538671, 40570, 40569);
				tv0->AddReply(538675, -1, 40573);
				return;
			}
			if (a0 == 40570) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(538672);
				tv0->ClearReplies();
				tv0->AddReply(538673, 40574, 40571);
				tv0->AddReply(538674, -1, 40572);
				return;
			}
			if (a0 == 40574) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(538676);
				tv0->ClearReplies();
				tv0->AddReply(538677, -1, 40575);
				tv0->AddReply(538678, -1, 40576);
				return;
			}
			if (a0 == 37706) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535978);
				tv0->ClearReplies();
				tv0->AddReply(535979, -1, 37707);
				tv0->AddReply(535980, 37709, 37708);
				return;
			}
			if (a0 == 37709) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535981);
				tv0->ClearReplies();
				tv0->AddReply(535982, 37711, 37710);
				return;
			}
			if (a0 == 37711) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535983);
				tv0->ClearReplies();
				tv0->AddReply(535984, -1, 37712);
				tv0->AddReply(535985, -1, 37713);
				return;
			}
			if (a0 == 14670) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513434);
				tv0->ClearReplies();
				tv0->AddReply(513435, 14672, 14671);
				tv0->AddReply(535970, -1, 37697);
				return;
			}
			if (a0 == 14672) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513436);
				tv0->ClearReplies();
				tv0->AddReply(513437, 14674, 14673);
				tv0->AddReply(535971, 37699, 37698);
				return;
			}
			if (a0 == 37699) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535972);
				tv0->ClearReplies();
				tv0->AddReply(535973, 37701, 37700);
				return;
			}
			if (a0 == 37701) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535974);
				tv0->ClearReplies();
				tv0->AddReply(535975, 14674, 37702);
				return;
			}
			if (a0 == 14674) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513438);
				tv0->ClearReplies();
				tv0->AddReply(513494, 14736, 14735);
				tv0->AddReply(513491, 14732, 14731);
				return;
			}
			if (a0 == 14732) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513492);
				tv0->ClearReplies();
				tv0->AddReply(513493, 14678, 14733);
				return;
			}
			if (a0 == 14736) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513495);
				tv0->ClearReplies();
				tv0->AddReply(513439, 14676, 14675);
				tv0->AddReply(535976, -1, 37704);
				return;
			}
			if (a0 == 14676) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513440);
				tv0->ClearReplies();
				tv0->AddReply(513441, 14678, 14677);
				return;
			}
			if (a0 == 14678) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513442);
				tv0->ClearReplies();
				tv0->AddReply(513444, 14681, 14680);
				return;
			}
			if (a0 == 14681) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513445);
				tv0->ClearReplies();
				tv0->AddReply(513446, -1, 14682);
				return;
			}
			if (a0 == 37690) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535964);
				tv0->ClearReplies();
				tv0->AddReply(535965, 14684, 37691);
				tv0->AddReply(535966, 37693, 37692);
				return;
			}
			if (a0 == 37693) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535967);
				tv0->ClearReplies();
				tv0->AddReply(535968, 14684, 37694);
				tv0->AddReply(535969, -1, 37696);
				return;
			}
			if (a0 == 14684) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513448);
				tv0->ClearReplies();
				tv0->AddReply(513449, 14686, 14685);
				tv0->AddReply(513451, 14688, 14687);
				return;
			}
			if (a0 == 14688) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513452);
				tv0->ClearReplies();
				tv0->AddReply(513453, 14690, 14689);
				return;
			}
			if (a0 == 14690) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513454);
				tv0->ClearReplies();
				tv0->AddReply(513455, 14694, 14691);
				tv0->AddReply(513456, -1, 14692);
				return;
			}
			if (a0 == 14686) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513450);
				tv0->ClearReplies();
				tv0->AddReply(513457, 14694, 14693);
				return;
			}
			if (a0 == 14694) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513458);
				tv0->ClearReplies();
				tv0->AddReply(513459, -1, 14696);
				return;
			}
			if (a0 == 14661) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513425);
				tv0->ClearReplies();
				tv0->AddReply(513426, 14663, 14662);
				return;
			}
			if (a0 == 14663) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513427);
				tv0->ClearReplies();
				tv0->AddReply(535957, 37683, 37682);
				return;
			}
			if (a0 == 37683) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535958);
				tv0->ClearReplies();
				tv0->AddReply(513428, 14665, 14664);
				tv0->AddReply(535959, 37685, 37684);
				return;
			}
			if (a0 == 37685) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(535960);
				tv0->ClearReplies();
				tv0->AddReply(535962, 14665, 37687);
				tv0->AddReply(535963, -1, 37689);
				return;
			}
			if (a0 == 14665) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513429);
				tv0->ClearReplies();
				tv0->AddReply(513430, 14667, 14666);
				tv0->AddReply(535961, -1, 37686);
				return;
			}
			if (a0 == 14667) {
				f_e5_a1_v("Neutral");
				tv0->SetMessage(513431);
				tv0->ClearReplies();
				tv0->AddReply(513432, -1, 14668);
				return;
			}
			tv3 = true;
			if (f_808_a0_b()) {
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

	void f_42f_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_460_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_684_a0_o());
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
			@RemoveActor(f_684_a0_o());
			@Hold();
		}
		f_4d1_a0_v();
	}

	void OnLoad(void)
	{
		f_4e0_a0_v();
	}

	void f_460_a0_v(void)
	{
		if (!f_57d_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_516_a0_v();
		}
	}

	bool f_474_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_574_a1_b(L0);
	}

	void f_483_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_488_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_562_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_49e_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_4a7_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_4a7_a0_v();
			if (f_57d_a0_b() && f_488_a0_b()) {
				if (f_474_a0_b()) {
					f_611_a1_b(f_684_a0_o());
				}
			} else {
				f_483_a0_v();
				f_49e_a0_v();
			}
		}
	}

	void f_4d1_a0_v(void)
	{
		f_55d_a0_v();
		f_4a7_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_4e0_a0_v(void)
	{
		@StopGroup0();
		f_4a7_a0_v();
		f_661_a1_v("Neutral");
		f_49e_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_49e_a0_v();
		} else {
			f_661_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_55d_a0_v();
			f_574_a1_b(a0);
			enable OnUse;
			f_42f_a1_v(a0);
			f_661_a1_v("Neutral");
			f_4a7_a0_v();
			f_49e_a0_v();
		}
	}
}

void f_516_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_57d_a0_b()) {
		return;
	}
	L0 = f_6d5_a0_i();
	for (L1 = 0; L1 < 5 && f_57d_a0_b(); L1++) {
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
			@PlayAnimation("all", f_6ce_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_55b_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_55b_a0_b(void)
{
	return true;
}

void f_55d_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_562_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_56a_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_574_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_56a_a1_b(L0);
}

bool f_57d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_582_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_68a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_808_a0_b()) {
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

void f_5c6_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_808_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_5d7_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_611_a1_b(a0)) {
			if (!f_636_a1_b(a0)) {
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
		if (!f_636_a1_b(a0)) {
			if (!f_611_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_611_a1_b(object a0)
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
	return f_66e_a1_b(L4);
}

bool f_636_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_6c5_a0_i() + "m";
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
	return f_66e_a1_b(L4);
}

void f_661_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_668_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_66e_a1_b(string a0)
{
	if (f_808_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_67d_a0_v(void)
{
	if (f_808_a0_b()) {
		@lshStopSpeech();
	}
}

object f_684_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_68a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_694_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_699_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_6a5_a3_v(object a0, object a1, int a2)
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
		f_699_a2_v(L0, a2);
	}
}

void f_6b8_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_6a5_a3_v(a0, L0, a2);
}

int f_6c5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_6ce_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_6d5_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_6ce_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_6e6_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_6ec_a2_v(object a0, object a1)
{
	@SetVariable("ood8Burah2", 1);
}

void f_6f2_a2_v(object a0, object a1)
{
	@SetVariable("ood8Burah3", 1);
}

void f_6f8_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", 1);
	f_792_a0_v();
	f_79f_a0_v();
}

void f_704_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", 1000);
	f_7ac_a0_v();
}

void f_70d_a2_v(object a0, object a1)
{
	@Trace("burah gives blood");
	f_6b8_a3_v(a0, "d8q03_blood", 1);
}

void f_718_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", -1);
	f_7b9_a0_v();
}

void f_721_a2_v(object a0, object a1)
{
	@Trace("burah gives serum");
	f_6b8_a3_v(a0, "burah_serum", 1);
}

void f_72c_a2_v(object a0, object a1)
{
	@SetVariable("ood8Burah1", 1);
}

bool f_732_a1_b(object a0)
{
	if (f_694_a1_i("d8q04") == 1) {
		return true;
	}
	return false;
}

bool f_73e_a1_b(object a0)
{
	if (f_694_a1_i("ood8Burah2") == 0) {
		return true;
	}
	return false;
}

bool f_74a_a1_b(object a0)
{
	if (f_694_a1_i("d8BurahLetter") != 0) {
		return true;
	}
	return false;
}

bool f_756_a1_b(object a0)
{
	if (f_694_a1_i("ood8Burah3") == 0) {
		return true;
	}
	return false;
}

bool f_762_a1_b(object a0)
{
	if (f_694_a1_i("d8q03") == 0) {
		return true;
	}
	return false;
}

bool f_76e_a1_b(object a0)
{
	if (f_694_a1_i("microscope_d8q03_blood") == 1) {
		return true;
	}
	return false;
}

bool f_77a_a1_b(object a0)
{
	if (f_694_a1_i("d8q03") == 1) {
		return true;
	}
	return false;
}

bool f_786_a1_b(object a0)
{
	if (f_694_a1_i("ood8Burah1") == 0) {
		return true;
	}
	return false;
}

void f_792_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 124, 2, 513763);
	f_7d3_a2_b(L0, -1);
}

void f_79f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 770, 2, 540199);
	f_7d3_a2_b(L0, 124);
}

void f_7ac_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 125, 2, 513764);
	f_7d3_a2_b(L0, 124);
}

void f_7b9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 126, 2, 513765);
	f_7d3_a2_b(L0, 124);
}

object f_7c6_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_7d3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_7c6_a0_o();
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

int f_7ef_a0_i(void)
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

int f_800_a0_i(void)
{
	return 515592;
}

int f_802_a0_i(void)
{
	return 511961;
}

string f_804_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_806_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_808_a0_b(void)
{
	return true;
}

