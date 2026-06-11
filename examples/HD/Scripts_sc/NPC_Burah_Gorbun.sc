event OnLoad 5;
event OnDialogReply 11;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event OnTimer 7;
event OnTrigger 26;
event OnGameTime 9;

var string g0;
var bool g1;
var object g2;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_66d_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_7e7_a0_b()) {
				f_6fe_a1_v("Neutral");
				@lshWaitForAnimEnd();
			} else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "idle");
			}
			if (tv0) {
				return;
			}
		}
	}

	void OnDialogReply(int a0)
	{
		if (f_7e7_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
	}
}

task t2
{
	var bool tv0;

	bool init(Vector a0, Vector a1)
	{
		bool L0;
		tv0 = true;
		@SetTimer(21, 0.5);
		for (; ; ) {
			while (!f_64f_a1_b(a0)) {
			}
			@MovePoint(a0, false, L0);
			if (L0) {
				break;
			}
		}
		@KillTimer(20);
		@KillTimer(21);
		tv0 = false;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return false;
		}
		@Rotate(a1.x, a1.z, L0);
		if (!L0) {
			return false;
		}
		return true;
	}

	void OnUnload(void)
	{
		tv0 = true;
		f_b9_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_b9_a0_v();
			disable OnUse;
			f_659_a1_b(a0);
			enable OnUse;
			f_8bd_a1_v(a0);
			tv0 = false;
		}
	}

	void OnCollision(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			f_b9_a0_v();
			t3{a0};
			tv0 = false;
			@SetTimer(20, 10.0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 20) {
			tv0 = true;
			@KillTimer(20);
		} else {
			if (a0 == 21) {
				if (tv0) {
					object L0;
					@FindActor(L0, "player");
					if (L0 && f_647_a1_f(L0) <= 62500.0) {
						OnCollision(L0);
					}
				}
			}
		}
	}

	void f_b9_a0_v(void)
	{
		@Stop();
	}
}

task t3
{
	void init(object a0)
	{
		bool L0;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return;
		}
		f_662_a1_v(a0);
		@Sleep(6);
	}

	void OnUnload(void)
	{
		f_e9_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_e9_a0_v();
			disable OnUse;
			f_659_a1_b(a0);
			enable OnUse;
			f_8bd_a1_v(a0);
		}
	}

	void f_e9_a0_v(void)
	{
		@StopGroup0();
		@StopAnimation();
	}
}

task t4
{
	void init(int a0)
	{
		string L0;
		bool L1;
		if (a0) {
			L0 = "ptidle" + a0;
		} else {
			L0 = "ptidle";
		}
		@HasProperty(L0, L1);
		if (L1) {
			string L2;
			int L3;
			int L4;
			@GetProperty(L0, L2);
			L3 = f_130_a1_i(L2);
			@irand(L4, L3);
			@PlayAnimation("all", f_128_a2_s(L2, L4));
			@WaitForAnimEnd();
		} else {
			int L5;
			L5 = f_7a1_a0_i();
			if (L5) {
				int L6;
				@irand(L6, L5);
				@PlayAnimation("all", f_79a_a1_s(L6));
				@WaitForAnimEnd();
			}
		}
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	string f_128_a2_s(string a0, int a1)
	{
		return a1 == 0 ? a0 : a0 + a1;
	}

	int f_130_a1_i(string a0)
	{
		int L0;
		for (L0 = 0; ; L0++) {
			bool L1;
			@HasAnimation(L1, "all", f_128_a2_s(a0, L0));
			if (!L1) {
				break;
			}
		}
		return L0;
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
		if (!f_672_a2_b(a0, 100.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7e1_a0_i());
		L0->SetNPCDescription(f_7df_a0_i());
		L0->SetPhoto(f_7e3_a0_s());
		L0->SetPhoto2(f_7e5_a0_s());
		L0->SetPlayerName(f_89c_a0_i());
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
		f_6b7_a1_v(a0);
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
			if (f_81a_a1_b(tv1) && f_824_a1_b(tv1) && f_830_a1_b(tv1)) {
				f_7f4_a2_v(tv1, tv0);
				f_255_a1_v("Neutral");
				tv0->SetMessage(517910);
				tv0->ClearReplies();
				tv0->AddReply(520406, 21615, 21614);
				tv0->AddReply(517911, 19050, 19049);
				break;
			}
			if (!f_81a_a1_b(tv1) && f_824_a1_b(tv1) && f_83c_a1_b(tv1)) {
				f_7fa_a2_v(tv1, tv0);
				f_255_a1_v("Neutral");
				tv0->SetMessage(517915);
				tv0->ClearReplies();
				tv0->AddReply(517916, 19055, 19054);
				tv0->AddReply(520410, 21620, 21619);
				break;
			}
			if (f_824_a1_b(tv1)) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(517919);
				tv0->ClearReplies();
				if (f_81a_a1_b(tv1)) {
					tv0->AddReply(517920, 19061, 19058);
				}
				if (!f_81a_a1_b(tv1)) {
					tv0->AddReply(517921, 19063, 19059);
				}
				tv0->AddReply(541718, -1, 43908);
				tv0->AddReply(517922, -1, 19060);
				break;
			}
			f_255_a1_v("Neutral");
			tv0->SetMessage(517927);
			tv0->ClearReplies();
			tv0->AddReply(518197, -1, 19310);
			tv0->AddReply(517928, -1, 19066);
			break;
			return;
		}
		if (f_7e7_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6fe_a1_v(tv2);
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

	void f_255_a1_v(string a0)
	{
		if (!f_7e7_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_70e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_71d_a0_v();
			if (a1 == 19051) {
				f_800_a2_v(tv1, tv0);
				f_7e9_a2_v(tv1, tv0);
			}
			if (a1 == 19062) {
				f_800_a2_v(tv1, tv0);
			}
			if (a1 == 43908) {
				f_7ef_a2_v(tv1, tv0);
			}
			if (a1 == 19310) {
				f_7ef_a2_v(tv1, tv0);
			}
			if (a0 == 19048) {
				if (f_81a_a1_b(tv1) && f_824_a1_b(tv1) && f_830_a1_b(tv1)) {
					f_7f4_a2_v(tv1, tv0);
					f_255_a1_v("Neutral");
					tv0->SetMessage(517910);
					tv0->ClearReplies();
					tv0->AddReply(520406, 21615, 21614);
					tv0->AddReply(517911, 19050, 19049);
					return;
				}
				if (!f_81a_a1_b(tv1) && f_824_a1_b(tv1) && f_83c_a1_b(tv1)) {
					f_7fa_a2_v(tv1, tv0);
					f_255_a1_v("Neutral");
					tv0->SetMessage(517915);
					tv0->ClearReplies();
					tv0->AddReply(517916, 19055, 19054);
					tv0->AddReply(520410, 21620, 21619);
					return;
				}
				if (f_824_a1_b(tv1)) {
					f_255_a1_v("Neutral");
					tv0->SetMessage(517919);
					tv0->ClearReplies();
					if (f_81a_a1_b(tv1)) {
						tv0->AddReply(517920, 19061, 19058);
					}
					if (!f_81a_a1_b(tv1)) {
						tv0->AddReply(517921, 19063, 19059);
					}
					tv0->AddReply(541718, -1, 43908);
					tv0->AddReply(517922, -1, 19060);
					return;
				}
				f_255_a1_v("Neutral");
				tv0->SetMessage(517927);
				tv0->ClearReplies();
				tv0->AddReply(518197, -1, 19310);
				tv0->AddReply(517928, -1, 19066);
				return;
			}
			if (a0 == 19063) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(517925);
				tv0->ClearReplies();
				tv0->AddReply(517926, -1, 19064);
				return;
			}
			if (a0 == 19061) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(517923);
				tv0->ClearReplies();
				tv0->AddReply(517924, -1, 19062);
				return;
			}
			if (a0 == 21620) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(520411);
				tv0->ClearReplies();
				tv0->AddReply(520412, 19055, 21621);
				return;
			}
			if (a0 == 19055) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(517917);
				tv0->ClearReplies();
				tv0->AddReply(517918, 21618, 19056);
				return;
			}
			if (a0 == 21618) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(520409);
				tv0->ClearReplies();
				tv0->AddReply(520413, 21624, 21623);
				tv0->AddReply(520418, -1, 21628);
				return;
			}
			if (a0 == 21624) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(520414);
				tv0->ClearReplies();
				tv0->AddReply(520415, 21626, 21625);
				tv0->AddReply(520419, -1, 21629);
				return;
			}
			if (a0 == 21626) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(520416);
				tv0->ClearReplies();
				tv0->AddReply(520417, -1, 21627);
				return;
			}
			if (a0 == 19050) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(517912);
				tv0->ClearReplies();
				tv0->AddReply(517913, -1, 19051);
				tv0->AddReply(517914, -1, 19052);
				return;
			}
			if (a0 == 21615) {
				f_255_a1_v("Neutral");
				tv0->SetMessage(520407);
				tv0->ClearReplies();
				tv0->AddReply(520408, 19050, 21616);
				return;
			}
			tv3 = true;
			if (f_7e7_a0_b()) {
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
		if (!f_672_a2_b(a0, 100.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7e1_a0_i());
		L0->SetNPCDescription(f_7df_a0_i());
		L0->SetPhoto(f_7e3_a0_s());
		L0->SetPhoto2(f_7e5_a0_s());
		L0->SetPlayerName(f_89c_a0_i());
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
		f_6b7_a1_v(a0);
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
			f_47e_a1_v("Neutral");
			tv0->SetMessage(520726);
			tv0->ClearReplies();
			tv0->AddReply(520727, -1, 21938);
			tv0->AddReply(520728, -1, 21939);
			break;
			return;
		}
		if (f_7e7_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6fe_a1_v(tv2);
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

	void f_47e_a1_v(string a0)
	{
		if (!f_7e7_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_70e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_71d_a0_v();
			if (a0 == 21937) {
				f_47e_a1_v("Neutral");
				tv0->SetMessage(520726);
				tv0->ClearReplies();
				tv0->AddReply(520727, -1, 21938);
				tv0->AddReply(520728, -1, 21939);
				return;
			}
			tv3 = true;
			if (f_7e7_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t9
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_672_a2_b(a0, 100.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7e1_a0_i());
		L0->SetNPCDescription(f_7df_a0_i());
		L0->SetPhoto(f_7e3_a0_s());
		L0->SetPhoto2(f_7e5_a0_s());
		L0->SetPlayerName(f_89c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t10{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_6b7_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t10
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
			f_547_a1_v("Neutral");
			tv0->SetMessage(541715);
			tv0->ClearReplies();
			tv0->AddReply(541716, -1, 43906);
			tv0->AddReply(541717, -1, 43907);
			tv0->AddReply(541742, -1, 43939);
			break;
			return;
		}
		if (f_7e7_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6fe_a1_v(tv2);
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

	void f_547_a1_v(string a0)
	{
		if (!f_7e7_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_70e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_71d_a0_v();
			if (a1 == 43906) {
				f_7ef_a2_v(tv1, tv0);
			}
			if (a0 == 43905) {
				f_547_a1_v("Neutral");
				tv0->SetMessage(541715);
				tv0->ClearReplies();
				tv0->AddReply(541716, -1, 43906);
				tv0->AddReply(541717, -1, 43907);
				tv0->AddReply(541742, -1, 43939);
				return;
			}
			tv3 = true;
			if (f_7e7_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t11
{
	var float tv0;
	var float tv1;
	var int tv2;

	void init(void)
	{
		f_885_a0_v();
		@SetTimeEvent(0, 144);
		@SetTimeEvent(1, 24);
		@SetTimeEvent(1, 48);
		@SetTimeEvent(1, 72);
		@SetTimeEvent(1, 96);
		@SetTimeEvent(1, 120);
		f_5b3_a0_v();
	}

	void f_5b3_a0_v(void)
	{
		object L0;
		@SensePlayerOnly(true);
		f_60b_a0_v();
		@GetScene(L0);
		for (tv2 = 0; ; tv2++) {
			bool L1;
			L0->GetLocator(f_7b2_a1_s(tv2), L1);
			if (!L1) {
				break;
			}
		}
		if (!f_66d_a0_b()) {
			t0{};
		}
		f_613_a0_v();
		for (; ; ) {
			int L2;
			bool L3;
			Vector L4;
			Vector L5;
			Vector L6;
			@irand(L2, tv2);
			L0->GetLocator(f_7b2_a1_s(L2), L3, L4, L5);
			L6 = L4 - f_642_a0_V();
			if (f_750_a1_f(L6) > tv1) {
				float L7;
				Vector L8;
				bool L9;
				@GetHeight(L7);
				L8 = L4;
				L8.y += L7;
				@CanReachByPF(L9, L8);
				if (L9) {
					Vector L10;
					L10 = L4 - L6 * (tv0 / sqrt(L6 | L6));
					if (t2{L10, L5}) {
						t4{L2};
					}
				}
			}
			@Sleep(1);
		}
	}

	void f_60b_a0_v(void)
	{
		string L0;
		@GetProperty("loc", L0);
		g0 = L0;
	}

	void f_613_a0_v(void)
	{
		Vector L0;
		Vector L1;
		@GetAnimationOffset(L0, "all", "walk_stopl");
		@GetAnimationOffset(L1, "all", "walk_stopr");
		tv0 = (L0.z + L1.z) / 2.0;
		tv1 = f_743_a1_f(L0.z - tv0) + 40;
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_659_a1_b(a0);
			enable OnUse;
			f_8bd_a1_v(a0);
		}
	}
}

Vector f_642_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

float f_647_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_64f_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_659_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_64f_a1_b(L0);
}

void f_662_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_66d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_672_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_739_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_7e7_a0_b()) {
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

void f_6b7_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_7e7_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_6c9_a2_b(object a0, float a1)
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
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_6f9_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_6fe_a1_v(string a0)
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

void f_70e_a2_v(string a0, bool a1)
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

void f_71d_a0_v(void)
{
	if (f_7e7_a0_b()) {
		@lshStopSpeech();
	}
}

void f_724_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_74b_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

object f_733_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_739_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_743_a1_f(float a0)
{
	return a0 < 0 ? -a0 : a0;
}

bool f_74b_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_750_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

int f_75a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_75f_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_76b_a3_v(object a0, object a1, int a2)
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
		f_75f_a2_v(L0, a2);
	}
}

void f_77e_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_76b_a3_v(a0, L0, a2);
}

int f_78b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_794_a1_b(int a0)
{
	return f_78b_a0_i() == a0;
}

string f_79a_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_7a1_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_79a_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

string f_7b2_a1_s(int a0)
{
	return a0 == 0 ? "pt_" + g0 : "pt_" + g0 + a0;
}

void OnTrigger(string a0)
{
	if (a0 == "cleanup") {
		bool L0;
		g1 = true;
		@IsLoaded(L0);
		if (!L0) {
			@RemoveActor(f_733_a0_o());
		}
	} else {
		if (a0 == "restore") {
			g1 = false;
		}
	}
}

void OnUnload(void)
{
	if (g1) {
		@RemoveActor(f_733_a0_o());
	}
}

int f_7df_a0_i(void)
{
	return 515594;
}

int f_7e1_a0_i(void)
{
	return 512583;
}

string f_7e3_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_7e5_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_7e7_a0_b(void)
{
	return false;
}

void f_7e9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_7ef_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

void f_7f4_a2_v(object a0, object a1)
{
	@SetVariable("oob1Gorbun1", 1);
}

void f_7fa_a2_v(object a0, object a1)
{
	@SetVariable("oob1Gorbun2", 1);
}

void f_800_a2_v(object a0, object a1)
{
	float L0;
	@SetVariable("b1q02", 2);
	f_84f_a0_v();
	a0->GetProperty("health", L0);
	L0 = L0 - 0.30000001192092896;
	a0->SetProperty("health", L0);
	@Trace("blood is given");
	f_77e_a3_v(a0, "b1q02_blood", 1);
}

bool f_81a_a1_b(object a0)
{
	if (f_848_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_824_a1_b(object a0)
{
	if (f_75a_a1_i("b1q02") == 1) {
		return true;
	}
	return false;
}

bool f_830_a1_b(object a0)
{
	if (f_75a_a1_i("oob1Gorbun1") == 0) {
		return true;
	}
	return false;
}

bool f_83c_a1_b(object a0)
{
	if (f_75a_a1_i("oob1Gorbun2") == 0) {
		return true;
	}
	return false;
}

bool f_848_a1_b(object a0)
{
	float L0;
	a0->GetProperty("health", L0);
	return L0 >= 0.4000000059604645;
}

void f_84f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 202, 2, 517942);
	f_869_a2_b(L0, 200);
}

object f_85c_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_869_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_85c_a0_o();
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

void f_885_a0_v(void)
{
	int L0;
	@ClearSubContainer(0);
	L0 = f_78b_a0_i();
	f_724_a4_v("tourniquet", 1, 1, 5);
	f_724_a4_v("bandage", 1, 1, 5);
}

int f_89c_a0_i(void)
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

void OnGameTime(int a0, float a1)
{
	if (a0 == 0) {
		OnTrigger("cleanup");
	} else {
		if (a0 == 1) {
			f_885_a0_v();
		}
	}
}

void f_8bd_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_gorbun", L0);
	if (!L0) {
		t7{a0};
		@SetVariable("mt_gorbun", 1);
	}
	if (f_794_a1_b(1)) {
		if (1000 == t5{a0}) {
			if (!f_6c9_a2_b(a0, 110)) {
				return;
			}
			t1{a0};
			f_6f9_a1_v(a0);
		}
		return;
	}
	if (1000 == t9{a0}) {
		if (!f_6c9_a2_b(a0, 110)) {
			return;
		}
		t1{a0};
		f_6f9_a1_v(a0);
	}
}

