event OnTimer 7;
event OnCollision 10;
event OnDeath 41;
event OnActorStuck 28;
event OnDialogReply 11;
event OnUse 0;

var int g0;
var object g1;

task t0
{
	var bool tv0;
	var object tv1;

	void init(object a0)
	{
		@SetTimer(10, 1);
		for (; ; ) {
			f_31_a5_b(a0, 250, 3000, true, true);
			if (f_492_a0_i() != g0) {
				break;
			}
			@Sleep(1);
			if (f_492_a0_i() != g0) {
				break;
			}
		}
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_492_a0_i() != g0) {
				f_9b_a0_v();
			}
		}
	}

	bool f_31_a5_b(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		tv0 = false;
		tv1 = a0;
		L1 = a4;
		for (; ; ) {
			object L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			if (!f_ab_a1_b(a0)) {
				return false;
			}
			a0->GetPosition(L3);
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (a2 > 0 && L6 > a2 * a2) {
				@Stop();
				return false;
			}
			if (L6 > a1 * a1) {
				object L7;
				a0->GetPFPosition(L3);
				@FindPathTo(L7, L3);
				if (L7 != null) {
					L2 = L7;
					L7 = null;
				}
				if (L2 != null) {
					if (L1) {
						L1 = false;
						@RotatePath(L2, L0);
						if (!L0) {
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
					@FollowPath(L2, a3, L0, f_b2_a0_s(), f_b4_a0_s());
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						} else {
							continue;
						}
					} else {
						L2 = null;
					}
				} else {
					@KillTimer(0);
					@Sleep(0.5, L0);
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
				}
			} else {
				@KillTimer(0);
				break;
			}
		}
		return !tv0;
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_9b_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_9b_a0_v();
		global.OnDeath(a0);
	}

	bool f_ab_a1_b(object a0)
	{
		return f_4d2_a1_b(a0);
	}

	string f_b2_a0_s(void)
	{
		return "walk";
	}

	string f_b4_a0_s(void)
	{
		return "run";
	}
}

task t1
{
	var bool tv0;
	var object tv1;

	void init(object a0)
	{
		while (!f_c6_a5_b(a0, 250, 3000, true, true)) {
			@Sleep(1);
		}
	}

	bool f_c6_a5_b(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		tv0 = false;
		tv1 = a0;
		L1 = a4;
		for (; ; ) {
			object L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			if (!f_152_a1_b(a0)) {
				return false;
			}
			a0->GetPosition(L3);
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (a2 > 0 && L6 > a2 * a2) {
				@Stop();
				return false;
			}
			if (L6 > a1 * a1) {
				object L7;
				a0->GetPFPosition(L3);
				@FindPathTo(L7, L3);
				if (L7 != null) {
					L2 = L7;
					L7 = null;
				}
				if (L2 != null) {
					if (L1) {
						L1 = false;
						@RotatePath(L2, L0);
						if (!L0) {
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
					@FollowPath(L2, a3, L0, f_159_a0_s(), f_15b_a0_s());
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						} else {
							continue;
						}
					} else {
						L2 = null;
					}
				} else {
					@KillTimer(0);
					@Sleep(0.5, L0);
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
				}
			} else {
				@KillTimer(0);
				break;
			}
		}
		return !tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_152_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_142_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_142_a0_v();
		global.OnDeath(a0);
	}

	bool f_152_a1_b(object a0)
	{
		return f_4d2_a1_b(a0);
	}

	string f_159_a0_s(void)
	{
		return "walk";
	}

	string f_15b_a0_s(void)
	{
		return "run";
	}
}

task t2
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		for (; ; ) {
			f_165_a0_v();
			@Sleep(1);
		}
	}

	void f_165_a0_v(void)
	{
		float L0;
		tv0 = false;
		tv1 = false;
		@rand(L0, 0.5);
		@Sleep(L0);
		while (!tv0) {
			Vector L1;
			if (!tv1) {
				for (; ; ) {
					Vector L2;
					bool L3;
					@GetPosition(L2);
					@GetRandomPFPointInCircle(L1, L2, f_1a0_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_1be_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_1bc_a0_b(), L5);
					L4 = null;
					if (L5) {
						t3{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_1a0_a0_f(void)
	{
		float L0;
		@GetCameraFarDistance(L0);
		return L0;
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_1ac_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_1ac_a0_v();
		global.OnDeath(a0);
	}

	bool f_1bc_a0_b(void)
	{
		return false;
	}

	object f_1be_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t3
{
	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_4ea_a0_b()) {
			return;
		}
		L0 = f_5a6_a0_i();
		for (L1 = 0; L1 < 5 && f_4ea_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_59f_a1_s(L3));
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
			if (!f_213_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_213_a0_b(void)
	{
		return true;
	}
}

task t4
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_4ef_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_60d_a0_i());
		L0->SetNPCDescription(f_60b_a0_i());
		L0->SetPhoto(f_60f_a0_s());
		L0->SetPhoto2(f_611_a0_s());
		L0->SetPlayerName(f_5fa_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_533_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t5
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
			if (f_5ee_a1_b(tv1)) {
				f_2bc_a1_v("Neutral");
				tv0->SetMessage(509701);
				tv0->ClearReplies();
				tv0->AddReply(509702, 10682, 10681);
				tv0->AddReply(509711, 10682, 10691);
				break;
			}
			f_2bc_a1_v("Neutral");
			tv0->SetMessage(509712);
			tv0->ClearReplies();
			tv0->AddReply(509713, 10695, 10694);
			tv0->AddReply(509720, 10702, 10701);
			tv0->AddReply(509723, 10695, 10705);
			tv0->AddReply(509724, -1, 10707);
			break;
			return;
		}
		if (f_613_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_544_a1_v(tv2);
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

	void f_2bc_a1_v(string a0)
	{
		if (!f_613_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_54b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_551_a0_v();
			if (a1 == 10685) {
				f_5bf_a2_v(tv1, tv0);
				f_5b9_a2_v(tv1, tv0);
			}
			if (a1 == 10687) {
				f_5d3_a2_v(tv1, tv0);
				f_5e4_a2_v(tv1, tv0);
			}
			if (a1 == 10688) {
				f_5d3_a2_v(tv1, tv0);
				f_5e9_a2_v(tv1, tv0);
			}
			if (a1 == 10698) {
				f_5d9_a2_v(tv1, tv0);
				f_5b9_a2_v(tv1, tv0);
			}
			if (a0 == 10680) {
				if (f_5ee_a1_b(tv1)) {
					f_2bc_a1_v("Neutral");
					tv0->SetMessage(509701);
					tv0->ClearReplies();
					tv0->AddReply(509702, 10682, 10681);
					tv0->AddReply(509711, 10682, 10691);
					return;
				}
				f_2bc_a1_v("Neutral");
				tv0->SetMessage(509712);
				tv0->ClearReplies();
				tv0->AddReply(509713, 10695, 10694);
				tv0->AddReply(509720, 10702, 10701);
				tv0->AddReply(509723, 10695, 10705);
				tv0->AddReply(509724, -1, 10707);
				return;
			}
			if (a0 == 10702) {
				f_2bc_a1_v("Neutral");
				tv0->SetMessage(509721);
				tv0->ClearReplies();
				tv0->AddReply(509722, 10697, 10703);
				return;
			}
			if (a0 == 10695) {
				f_2bc_a1_v("Neutral");
				tv0->SetMessage(509714);
				tv0->ClearReplies();
				tv0->AddReply(509715, 10697, 10696);
				tv0->AddReply(509719, -1, 10700);
				return;
			}
			if (a0 == 10697) {
				f_2bc_a1_v("Neutral");
				tv0->SetMessage(509716);
				tv0->ClearReplies();
				tv0->AddReply(509717, -1, 10698);
				tv0->AddReply(509718, -1, 10699);
				return;
			}
			if (a0 == 10682) {
				f_2bc_a1_v("Neutral");
				tv0->SetMessage(509703);
				tv0->ClearReplies();
				tv0->AddReply(509704, 10684, 10683);
				tv0->AddReply(509710, 10684, 10689);
				return;
			}
			if (a0 == 10684) {
				f_2bc_a1_v("Neutral");
				tv0->SetMessage(509705);
				tv0->ClearReplies();
				tv0->AddReply(509706, 10686, 10685);
				return;
			}
			if (a0 == 10686) {
				f_2bc_a1_v("Neutral");
				tv0->SetMessage(509707);
				tv0->ClearReplies();
				tv0->AddReply(509708, -1, 10687);
				tv0->AddReply(509709, -1, 10688);
				return;
			}
			tv3 = true;
			if (f_613_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t6
{
	int f_3d3_a1_i(object a0)
	{
		return t4{a0};
	}

	void init(void)
	{
		g0 = f_492_a0_i();
		for (; ; ) {
			@Sleep(3);
			f_421_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		f_472_a0_v();
		L0 = f_3d3_a1_i(a0);
		if (L0 == 0) {
			f_593_a2_b("quest_d4_01", "key2_done");
			t0{a0};
			t1{a0};
			t7{a0};
			t2{};
		} else {
			if (L0 == 1) {
				f_593_a2_b("quest_d4_01", "key2_done");
				t2{};
			}
		}
	}

	void f_421_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_4ea_a0_b()) {
			return;
		}
		L0 = f_5a6_a0_i();
		for (L1 = 0; L1 < 5 && f_4ea_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_59f_a1_s(L3));
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
			if (!f_470_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_470_a0_b(void)
	{
		return true;
	}

	void f_472_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t7
{
	void f_477_a1_v(object a0)
	{
		t4{a0};
	}

	void init(object a0)
	{
		for (; ; ) {
			bool L0;
			@IsOverrideActive(L0);
			if (!L0) {
				break;
			}
		}
		f_477_a1_v(a0);
		@Hold();
	}
}

Vector f_48d_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

int f_492_a0_i(void)
{
	object L0;
	int L1;
	@GetScene(L0);
	L0->GetRegionByPt(L1, f_48d_a0_V());
	return L1;
}

bool f_49d_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_4a9_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_4ae_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_4a9_a1_b(a0)) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	return true;
}

bool f_4d2_a1_b(object a0)
{
	int L0;
	if (!f_4ae_a1_b(a0)) {
		return false;
	}
	if (!f_49d_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

bool f_4ea_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_4ef_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_558_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_613_a0_b()) {
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

void f_533_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_613_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_544_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_54b_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_551_a0_v(void)
{
	if (f_613_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_558_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_562_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_567_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_573_a3_v(object a0, object a1, int a2)
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
		f_567_a2_v(L0, a2);
	}
}

void f_586_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_573_a3_v(a0, L0, a2);
}

bool f_593_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_59f_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_5a6_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_59f_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void OnDeath(object a0)
{
}

void f_5b9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_5bf_a2_v(object a0, object a1)
{
	@SetVariable("d4q01KeyWasted", 1);
	@Trace("soborkey is given");
	f_586_a3_v(a0, "d4q01_sobor_key", 1);
	f_593_a2_b("quest_d4_01", "init_sobor");
}

void f_5d3_a2_v(object a0, object a1)
{
	@SetVariable("ood4WastedMale1", 1);
}

void f_5d9_a2_v(object a0, object a1)
{
	@Trace("tvirin is given");
	f_586_a3_v(a0, "tvirin", 1);
}

void f_5e4_a2_v(object a0, object a1)
{
	a1->SetReturnValue(0);
}

void f_5e9_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1);
}

bool f_5ee_a1_b(object a0)
{
	if (f_562_a1_i("ood4WastedMale1") == 0) {
		return true;
	}
	return false;
}

int f_5fa_a0_i(void)
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

int f_60b_a0_i(void)
{
	return 515556;
}

int f_60d_a0_i(void)
{
	return 503341;
}

string f_60f_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_611_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_613_a0_b(void)
{
	return false;
}

