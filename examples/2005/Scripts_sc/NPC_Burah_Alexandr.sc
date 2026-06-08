event OnLoad 5;
event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var bool g2;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_638_a0_b());
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
		f_692_a1_b(f_73f_a0_o());
		if (!f_63d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7ae_a0_i());
		L0->SetNPCDescription(f_7ac_a0_i());
		L0->SetPhoto(f_7b0_a0_s());
		L0->SetPhoto2(f_7b2_a0_s());
		L0->SetPlayerName(f_880_a0_i());
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
		f_681_a1_v(a0);
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
			f_9d_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_7b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_71c_a1_v(tv2);
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
		if (!f_7b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_723_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_738_a0_v();
			if (a0 == 36971) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_7b4_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t3
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_692_a1_b(f_73f_a0_o());
		if (!f_63d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7ae_a0_i());
		L0->SetNPCDescription(f_7ac_a0_i());
		L0->SetPhoto(f_7b0_a0_s());
		L0->SetPhoto2(f_7b2_a0_s());
		L0->SetPlayerName(f_880_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t4{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_681_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t4
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
			if (f_7f4_a1_b(tv1)) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(518239);
				tv0->ClearReplies();
				tv0->AddReply(518240, 20533, 19349);
				tv0->AddReply(519398, 20561, 20560);
				break;
			}
			f_1c3_a1_v("Neutral");
			tv0->SetMessage(518241);
			tv0->ClearReplies();
			if (f_800_a1_b(tv1)) {
				tv0->AddReply(519376, 20538, 20537);
			}
			if (f_80c_a1_b(tv1)) {
				tv0->AddReply(519382, 20544, 20543);
			}
			tv0->AddReply(518242, -1, 19351);
			break;
			return;
		}
		if (f_7b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_71c_a1_v(tv2);
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

	void f_1c3_a1_v(string a0)
	{
		if (!f_7b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_723_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_738_a0_v();
			if (a1 == 20555) {
				f_7b6_a2_v(tv1, tv0);
				f_7e4_a2_v(tv1, tv0);
				f_7d9_a2_v(tv1, tv0);
			}
			if (a1 == 20574) {
				f_7b6_a2_v(tv1, tv0);
				f_7e4_a2_v(tv1, tv0);
				f_7d9_a2_v(tv1, tv0);
			}
			if (a1 == 20537) {
				f_7cd_a2_v(tv1, tv0);
			}
			if (a1 == 20543) {
				f_7d3_a2_v(tv1, tv0);
			}
			if (a0 == 19348) {
				if (f_7f4_a1_b(tv1)) {
					f_1c3_a1_v("Neutral");
					tv0->SetMessage(518239);
					tv0->ClearReplies();
					tv0->AddReply(518240, 20533, 19349);
					tv0->AddReply(519398, 20561, 20560);
					return;
				}
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(518241);
				tv0->ClearReplies();
				if (f_800_a1_b(tv1)) {
					tv0->AddReply(519376, 20538, 20537);
				}
				if (f_80c_a1_b(tv1)) {
					tv0->AddReply(519382, 20544, 20543);
				}
				tv0->AddReply(518242, -1, 19351);
				return;
			}
			if (a0 == 20544) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519383);
				tv0->ClearReplies();
				tv0->AddReply(519384, 20546, 20545);
				return;
			}
			if (a0 == 20546) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519385);
				tv0->ClearReplies();
				tv0->AddReply(519387, 20549, 20548);
				tv0->AddReply(519386, -1, 20547);
				return;
			}
			if (a0 == 20549) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519388);
				tv0->ClearReplies();
				tv0->AddReply(519389, -1, 20550);
				tv0->AddReply(519390, -1, 20551);
				return;
			}
			if (a0 == 20538) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519377);
				tv0->ClearReplies();
				tv0->AddReply(519378, 20540, 20539);
				return;
			}
			if (a0 == 20540) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519379);
				tv0->ClearReplies();
				tv0->AddReply(519380, -1, 20541);
				tv0->AddReply(519381, -1, 20542);
				return;
			}
			if (a0 == 20561) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519399);
				tv0->ClearReplies();
				tv0->AddReply(519400, 20563, 20562);
				return;
			}
			if (a0 == 20563) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519401);
				tv0->ClearReplies();
				tv0->AddReply(519402, 20565, 20564);
				return;
			}
			if (a0 == 20565) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519403);
				tv0->ClearReplies();
				tv0->AddReply(519404, 20533, 20566);
				return;
			}
			if (a0 == 20533) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519372);
				tv0->ClearReplies();
				tv0->AddReply(519373, 20535, 20534);
				tv0->AddReply(519395, 20557, 20556);
				return;
			}
			if (a0 == 20557) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519396);
				tv0->ClearReplies();
				tv0->AddReply(519397, 20552, 20558);
				return;
			}
			if (a0 == 20535) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519374);
				tv0->ClearReplies();
				tv0->AddReply(519375, 20552, 20536);
				tv0->AddReply(519406, 20571, 20570);
				return;
			}
			if (a0 == 20571) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519407);
				tv0->ClearReplies();
				tv0->AddReply(519408, 20557, 20572);
				return;
			}
			if (a0 == 20552) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519391);
				tv0->ClearReplies();
				tv0->AddReply(519392, 20554, 20553);
				tv0->AddReply(519405, 20554, 20568);
				return;
			}
			if (a0 == 20554) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(519393);
				tv0->ClearReplies();
				tv0->AddReply(519394, -1, 20555);
				tv0->AddReply(519409, -1, 20574);
				return;
			}
			tv3 = true;
			if (f_7b4_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t5
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_692_a1_b(f_73f_a0_o());
		if (!f_63d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7ae_a0_i());
		L0->SetNPCDescription(f_7ac_a0_i());
		L0->SetPhoto(f_7b0_a0_s());
		L0->SetPhoto2(f_7b2_a0_s());
		L0->SetPlayerName(f_880_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t6{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_681_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t6
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
			f_409_a1_v("Neutral");
			tv0->SetMessage(520670);
			tv0->ClearReplies();
			tv0->AddReply(520671, -1, 21878);
			tv0->AddReply(527796, -1, 29129);
			break;
			return;
		}
		if (f_7b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_71c_a1_v(tv2);
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

	void f_409_a1_v(string a0)
	{
		if (!f_7b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_723_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_738_a0_v();
			if (a0 == 21877) {
				f_409_a1_v("Neutral");
				tv0->SetMessage(520670);
				tv0->ClearReplies();
				tv0->AddReply(520671, -1, 21878);
				tv0->AddReply(527796, -1, 29129);
				return;
			}
			tv3 = true;
			if (f_7b4_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t7
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_692_a1_b(f_73f_a0_o());
		if (!f_63d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7ae_a0_i());
		L0->SetNPCDescription(f_7ac_a0_i());
		L0->SetPhoto(f_7b0_a0_s());
		L0->SetPhoto2(f_7b2_a0_s());
		L0->SetPlayerName(f_880_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_681_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t8
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
			f_4d4_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_7b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_71c_a1_v(tv2);
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

	void f_4d4_a1_v(string a0)
	{
		if (!f_7b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_723_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_738_a0_v();
			if (a0 == 42563) {
				f_4d4_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_7b4_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t9
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_51b_a0_v();
	}

	void f_51b_a0_v(void)
	{
		if (!f_638_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_5d1_a0_v();
		}
	}

	bool f_52f_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_62f_a1_b(L0);
	}

	void f_53e_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_543_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_61d_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_559_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_562_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_562_a0_v();
			if (f_638_a0_b() && f_543_a0_b()) {
				if (f_52f_a0_b()) {
					f_6cc_a1_b(f_73f_a0_o());
				}
			} else {
				f_53e_a0_v();
				f_559_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_618_a0_v();
		f_562_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_562_a0_v();
		f_71c_a1_v("Neutral");
		f_559_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_559_a0_v();
		} else {
			f_71c_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_618_a0_v();
			f_62f_a1_b(a0);
			enable OnUse;
			f_891_a1_v(a0);
			f_71c_a1_v("Neutral");
			f_562_a0_v();
			f_559_a0_v();
		}
	}
}

void f_5d1_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_638_a0_b()) {
		return;
	}
	L0 = f_79b_a0_i();
	for (L1 = 0; L1 < 5 && f_638_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_794_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_616_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_616_a0_b(void)
{
	return true;
}

void f_618_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_61d_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_625_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_62f_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_625_a1_b(L0);
}

bool f_638_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_63d_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_745_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_7b4_a0_b()) {
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

void f_681_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_7b4_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_692_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_6cc_a1_b(a0)) {
			if (!f_6f1_a1_b(a0)) {
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
		if (!f_6f1_a1_b(a0)) {
			if (!f_6cc_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_6cc_a1_b(object a0)
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
	return f_729_a1_b(L4);
}

bool f_6f1_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_785_a0_i() + "m";
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
	return f_729_a1_b(L4);
}

void f_71c_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_723_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_729_a1_b(string a0)
{
	if (f_7b4_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_738_a0_v(void)
{
	if (f_7b4_a0_b()) {
		@lshStopSpeech();
	}
}

object f_73f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_745_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_74f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_754_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_760_a3_v(object a0, object a1, int a2)
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
		f_754_a2_v(L0, a2);
	}
}

void f_773_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_760_a3_v(a0, L0, a2);
}

float f_780_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_785_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_78e_a1_b(int a0)
{
	return f_785_a0_i() == a0;
}

string f_794_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_79b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_794_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_7ac_a0_i(void)
{
	return 515528;
}

int f_7ae_a0_i(void)
{
	return 502854;
}

string f_7b0_a0_s(void)
{
	return "ui/NPC_Alexandr.png";
}

string f_7b2_a0_s(void)
{
	return "ui/NPC_Alexandr_b.png";
}

bool f_7b4_a0_b(void)
{
	return true;
}

void f_7b6_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b2q01", 2);
	L0 = f_84e_a0_o();
	L0->AddMark("b2q01AlexandrGotoOspina", "pt_map_ospina", 1, 520459, f_780_a0_f());
	f_818_a0_v();
}

void f_7cd_a2_v(object a0, object a1)
{
	@SetVariable("oob2Alexandr1", 1);
}

void f_7d3_a2_v(object a0, object a1)
{
	@SetVariable("oob2Alexandr2", 1);
}

void f_7d9_a2_v(object a0, object a1)
{
	@Trace("key is given");
	f_773_a3_v(a0, "b2q01_key", 1);
}

void f_7e4_a2_v(object a0, object a1)
{
	f_85f_a3_v(f_84e_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_84e_a0_o());
}

bool f_7f4_a1_b(object a0)
{
	if (f_74f_a1_i("b2q01") == 1) {
		return true;
	}
	return false;
}

bool f_800_a1_b(object a0)
{
	if (f_74f_a1_i("oob2Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_80c_a1_b(object a0)
{
	if (f_74f_a1_i("oob2Alexandr2") == 0) {
		return true;
	}
	return false;
}

void f_818_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 247, 1, 520468);
	f_832_a2_b(L0, 245);
}

object f_825_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_832_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_825_a0_o();
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

object f_84e_a0_o(void)
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

void f_85f_a3_v(object a0, string a1, float a2)
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

int f_880_a0_i(void)
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

void f_891_a1_v(object a0)
{
	if (!g1) {
		t5{a0};
		g1 = true;
	}
	if (f_78e_a1_b(2)) {
		t3{a0};
		return;
	}
	if (f_78e_a1_b(12) && !g2) {
		t1{a0};
		g2 = true;
		return;
	}
	t7{a0};
}

