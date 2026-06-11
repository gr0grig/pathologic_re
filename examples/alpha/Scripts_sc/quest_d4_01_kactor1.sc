event OnTimer 7;
event OnCollision 10;
event OnDeath 41;
event OnActorStuck 28;
event evt_11 11;
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
					float L3;
					bool L4;
					@GetPosition(L2);
					@GetCameraFarDistance(L3);
					L3 = L3 * 2.5;
					@GetRandomPFPointInCircle(L1, L2, L3, L4);
					if (L4) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L5;
			@FindShiftedPathTo(L5, L1);
			if (L5 != null) {
				bool L6;
				@RotatePath(L5, L6);
				if (L6) {
					@FollowPath(L5, f_1b5_a0_b(), L6);
					L5 = null;
					if (L6) {
						t3{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_1a5_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_1a5_a0_v();
		global.OnDeath(a0);
	}

	bool f_1b5_a0_b(void)
	{
		return false;
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
		L0 = f_580_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_4ea_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_579_a1_s(L3));
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
					continue;
				}
				if (L1) {
					break;
				}
			}
		}
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
		if (!f_4ef_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5dc_a0_i());
		L0->SetPhoto(f_5de_a0_s());
		L0->SetPlayerName(f_5cb_a0_i());
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
		f_527_a1_v(a0);
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
			if (f_5bf_a1_b(tv1)) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9667);
				tv0->ClearReplies();
				tv0->AddReply(9668, 10643, 10642);
				tv0->AddReply(9677, 10653, 10652);
				break;
			}
			f_28e_a1_v("Neutral");
			tv0->SetMessage(9681);
			tv0->ClearReplies();
			tv0->AddReply(9682, 10660, 10659);
			tv0->AddReply(9699, -1, 10678);
			break;
			return;
		}
		if (f_5e0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_52b_a1_v(tv2);
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

	void f_28e_a1_v(string a0)
	{
		if (!f_5e0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_52b_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_53d_a0_v();
			if (a1 == 10646) {
				f_59f_a2_v(tv1, tv0);
				f_593_a2_v(tv1, tv0);
			}
			if (a1 == 10648) {
				f_599_a2_v(tv1, tv0);
				f_5b5_a2_v(tv1, tv0);
			}
			if (a1 == 10649) {
				f_599_a2_v(tv1, tv0);
				f_5ba_a2_v(tv1, tv0);
			}
			if (a1 == 10669) {
				f_5aa_a2_v(tv1, tv0);
				f_593_a2_v(tv1, tv0);
			}
			if (a0 == 10641) {
				if (f_5bf_a1_b(tv1)) {
					f_28e_a1_v("Neutral");
					tv0->SetMessage(9667);
					tv0->ClearReplies();
					tv0->AddReply(9668, 10643, 10642);
					tv0->AddReply(9677, 10653, 10652);
					return;
				}
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9681);
				tv0->ClearReplies();
				tv0->AddReply(9682, 10660, 10659);
				tv0->AddReply(9699, -1, 10678);
				return;
			}
			if (a0 == 10660) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9683);
				tv0->ClearReplies();
				tv0->AddReply(9684, 10662, 10661);
				tv0->AddReply(9694, 10672, 10671);
				tv0->AddReply(9698, 10662, 10676);
				return;
			}
			if (a0 == 10672) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9695);
				tv0->ClearReplies();
				tv0->AddReply(9696, 10665, 10673);
				tv0->AddReply(9697, -1, 10675);
				return;
			}
			if (a0 == 10662) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9685);
				tv0->ClearReplies();
				tv0->AddReply(9686, -1, 10663);
				tv0->AddReply(9687, 10665, 10664);
				return;
			}
			if (a0 == 10665) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9688);
				tv0->ClearReplies();
				tv0->AddReply(9689, -1, 10666);
				tv0->AddReply(9690, 10668, 10667);
				return;
			}
			if (a0 == 10668) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9691);
				tv0->ClearReplies();
				tv0->AddReply(9692, -1, 10669);
				tv0->AddReply(9693, -1, 10670);
				return;
			}
			if (a0 == 10653) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9678);
				tv0->ClearReplies();
				tv0->AddReply(9679, 10643, 10654);
				tv0->AddReply(9680, 10643, 10656);
				return;
			}
			if (a0 == 10643) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9669);
				tv0->ClearReplies();
				tv0->AddReply(9670, 10645, 10644);
				return;
			}
			if (a0 == 10645) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9671);
				tv0->ClearReplies();
				tv0->AddReply(9672, 10647, 10646);
				tv0->AddReply(9676, 10647, 10650);
				return;
			}
			if (a0 == 10647) {
				f_28e_a1_v("Neutral");
				tv0->SetMessage(9673);
				tv0->ClearReplies();
				tv0->AddReply(9674, -1, 10648);
				tv0->AddReply(9675, -1, 10649);
				return;
			}
			tv3 = true;
			if (f_5e0_a0_b()) {
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
	int f_3e4_a1_i(object a0)
	{
		return t4{a0};
	}

	void init(void)
	{
		g0 = f_492_a0_i();
		for (; ; ) {
			@Sleep(3);
			f_42d_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		f_472_a0_v();
		L0 = f_3e4_a1_i(a0);
		if (L0 == 0) {
			f_56d_a2_b("quest_d4_01", "key1_done");
			t0{a0};
			t1{a0};
			t7{a0};
		} else {
			if (L0 == 1) {
				f_56d_a2_b("quest_d4_01", "key1_done");
				t2{};
			}
		}
	}

	void f_42d_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_4ea_a0_b()) {
			return;
		}
		L0 = f_580_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_4ea_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_579_a1_s(L3));
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
					continue;
				}
				if (L1) {
					break;
				}
			}
		}
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

bool f_4ef_a1_b(object a0)
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
	L5 = L3 * 70 + f_544_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_527_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_52b_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_53d_a0_v(void)
{
	if (f_5e0_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_544_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_54e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_553_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

void f_560_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_553_a3_v(a0, L0, a2);
}

bool f_56d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_579_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_580_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_579_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void OnDeath(object a0)
{
}

void f_593_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_599_a2_v(object a0, object a1)
{
	@SetVariable("ood4WhiteMask1", 1);
}

void f_59f_a2_v(object a0, object a1)
{
	@Trace("theaterkey is given");
	f_560_a3_v(a0, "d4q01_theater_key", 1);
}

void f_5aa_a2_v(object a0, object a1)
{
	@Trace("tvirin is given");
	f_560_a3_v(a0, "tvirin", 1);
}

void f_5b5_a2_v(object a0, object a1)
{
	a1->SetReturnValue(0);
}

void f_5ba_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1);
}

bool f_5bf_a1_b(object a0)
{
	if (f_54e_a1_i("ood4WhiteMask1") == 0) {
		return true;
	}
	return false;
}

int f_5cb_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

int f_5dc_a0_i(void)
{
	return 3354;
}

string f_5de_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_5e0_a0_b(void)
{
	return false;
}

