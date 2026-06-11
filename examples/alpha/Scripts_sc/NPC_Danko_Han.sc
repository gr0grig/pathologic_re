event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	void init(void)
	{
		f_749_a0_v();
		if (!f_55f_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_5a0_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		t0{};
	}

	void OnUse(object a0)
	{
		f_74d_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_553_a1_b(a0);
		@WaitForAnimEnd();
	}
}

task t2
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_564_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5f5_a0_i());
		L0->SetPhoto(f_5f7_a0_s());
		L0->SetPlayerName(f_718_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_59c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t3
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
			if (f_65b_a1_b(tv1) && f_656_a1_b(tv1)) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10420);
				tv0->ClearReplies();
				tv0->AddReply(10421, 11490, 11489);
				break;
			}
			return;
		}
		if (f_5f9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5a0_a1_v(tv2);
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

	void f_b3_a1_v(string a0)
	{
		if (!f_5f9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5a0_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_5b2_a0_v();
			if (a1 == 11509) {
				f_603_a2_v(tv1, tv0);
				f_601_a2_v(tv1, tv0);
				f_617_a2_v(tv1, tv0);
			}
			if (a1 == 11510) {
				f_603_a2_v(tv1, tv0);
				f_601_a2_v(tv1, tv0);
				f_617_a2_v(tv1, tv0);
			}
			if (a1 == 11505) {
				f_601_a2_v(tv1, tv0);
				f_603_a2_v(tv1, tv0);
				f_617_a2_v(tv1, tv0);
			}
			if (a1 == 11498) {
				f_601_a2_v(tv1, tv0);
				f_603_a2_v(tv1, tv0);
				f_617_a2_v(tv1, tv0);
			}
			if (a0 == 11488) {
				if (f_65b_a1_b(tv1) && f_656_a1_b(tv1)) {
					f_b3_a1_v("Neutral");
					tv0->SetMessage(10420);
					tv0->ClearReplies();
					tv0->AddReply(10421, 11490, 11489);
					return;
				}
			}
			if (a0 == 11490) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10422);
				tv0->ClearReplies();
				tv0->AddReply(10423, 11492, 11491);
				return;
			}
			if (a0 == 11492) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10424);
				tv0->ClearReplies();
				tv0->AddReply(10425, 11494, 11493);
				return;
			}
			if (a0 == 11494) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10426);
				tv0->ClearReplies();
				tv0->AddReply(10427, 11496, 11495);
				return;
			}
			if (a0 == 11496) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10428);
				tv0->ClearReplies();
				tv0->AddReply(10429, 11499, 11497);
				tv0->AddReply(10430, -1, 11498);
				return;
			}
			if (a0 == 11499) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10431);
				tv0->ClearReplies();
				tv0->AddReply(10432, 11502, 11500);
				tv0->AddReply(10433, 11502, 11501);
				return;
			}
			if (a0 == 11502) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10434);
				tv0->ClearReplies();
				tv0->AddReply(10435, 11504, 11503);
				tv0->AddReply(10437, -1, 11505);
				return;
			}
			if (a0 == 11504) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10436);
				tv0->ClearReplies();
				tv0->AddReply(10438, 11508, 11507);
				return;
			}
			if (a0 == 11508) {
				f_b3_a1_v("Neutral");
				tv0->SetMessage(10439);
				tv0->ClearReplies();
				tv0->AddReply(10440, -1, 11509);
				tv0->AddReply(10441, -1, 11510);
				return;
			}
			tv3 = true;
			if (f_5f9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
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
		if (!f_564_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5f5_a0_i());
		L0->SetPhoto(f_5f7_a0_s());
		L0->SetPlayerName(f_718_a0_i());
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
		f_59c_a1_v(a0);
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
			if (f_667_a1_b(tv1)) {
				f_627_a2_v(tv1, tv0);
				f_274_a1_v("Neutral");
				tv0->SetMessage(12330);
				tv0->ClearReplies();
				tv0->AddReply(12331, 13491, 13490);
				tv0->AddReply(12336, -1, 13495);
				break;
			}
			f_274_a1_v("Neutral");
			tv0->SetMessage(13781);
			tv0->ClearReplies();
			tv0->AddReply(13782, -1, 15018);
			break;
			return;
		}
		if (f_5f9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5a0_a1_v(tv2);
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

	void f_274_a1_v(string a0)
	{
		if (!f_5f9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5a0_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_5b2_a0_v();
			if (a0 == 13489) {
				if (f_667_a1_b(tv1)) {
					f_627_a2_v(tv1, tv0);
					f_274_a1_v("Neutral");
					tv0->SetMessage(12330);
					tv0->ClearReplies();
					tv0->AddReply(12331, 13491, 13490);
					tv0->AddReply(12336, -1, 13495);
					return;
				}
				f_274_a1_v("Neutral");
				tv0->SetMessage(13781);
				tv0->ClearReplies();
				tv0->AddReply(13782, -1, 15018);
				return;
			}
			if (a0 == 13491) {
				f_274_a1_v("Neutral");
				tv0->SetMessage(12332);
				tv0->ClearReplies();
				tv0->AddReply(12333, 13493, 13492);
				tv0->AddReply(12337, 13497, 13496);
				return;
			}
			if (a0 == 13497) {
				f_274_a1_v("Neutral");
				tv0->SetMessage(12338);
				tv0->ClearReplies();
				tv0->AddReply(12339, 13499, 13498);
				return;
			}
			if (a0 == 13499) {
				f_274_a1_v("Neutral");
				tv0->SetMessage(12340);
				tv0->ClearReplies();
				tv0->AddReply(12341, -1, 13500);
				tv0->AddReply(12342, 13502, 13501);
				return;
			}
			if (a0 == 13502) {
				f_274_a1_v("Neutral");
				tv0->SetMessage(12343);
				tv0->ClearReplies();
				tv0->AddReply(12344, -1, 13503);
				return;
			}
			if (a0 == 13493) {
				f_274_a1_v("Neutral");
				tv0->SetMessage(12334);
				tv0->ClearReplies();
				tv0->AddReply(12335, 13504, 13494);
				return;
			}
			if (a0 == 13504) {
				f_274_a1_v("Neutral");
				tv0->SetMessage(12345);
				tv0->ClearReplies();
				tv0->AddReply(12346, 13506, 13505);
				return;
			}
			if (a0 == 13506) {
				f_274_a1_v("Neutral");
				tv0->SetMessage(12347);
				tv0->ClearReplies();
				tv0->AddReply(12348, -1, 13507);
				return;
			}
			tv3 = true;
			if (f_5f9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t6
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_564_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5f5_a0_i());
		L0->SetPhoto(f_5f7_a0_s());
		L0->SetPlayerName(f_718_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_59c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t7
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
			if (f_673_a1_b(tv1) && f_67f_a1_b(tv1)) {
				f_62d_a2_v(tv1, tv0);
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14041);
				tv0->ClearReplies();
				tv0->AddReply(14042, 15278, 15277);
				break;
			}
			f_3f9_a1_v("Neutral");
			tv0->SetMessage(14063);
			tv0->ClearReplies();
			if (f_68b_a1_b(tv1)) {
				tv0->AddReply(14068, 15309, 15305);
			}
			if (f_695_a1_b(tv1)) {
				tv0->AddReply(14069, 15307, 15306);
			}
			tv0->AddReply(14064, -1, 15300);
			break;
			return;
		}
		if (f_5f9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5a0_a1_v(tv2);
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

	void f_3f9_a1_v(string a0)
	{
		if (!f_5f9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5a0_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_5b2_a0_v();
			if (a1 == 15289) {
				f_633_a2_v(tv1, tv0);
			}
			if (a1 == 15310) {
				f_642_a2_v(tv1, tv0);
				f_64f_a2_v(tv1, tv0);
				f_5fb_a2_v(tv1, tv0);
				f_63c_a2_v(tv1, tv0);
			}
			if (a0 == 15276) {
				if (f_673_a1_b(tv1) && f_67f_a1_b(tv1)) {
					f_62d_a2_v(tv1, tv0);
					f_3f9_a1_v("Neutral");
					tv0->SetMessage(14041);
					tv0->ClearReplies();
					tv0->AddReply(14042, 15278, 15277);
					return;
				}
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14063);
				tv0->ClearReplies();
				if (f_68b_a1_b(tv1)) {
					tv0->AddReply(14068, 15309, 15305);
				}
				if (f_695_a1_b(tv1)) {
					tv0->AddReply(14069, 15307, 15306);
				}
				tv0->AddReply(14064, -1, 15300);
				return;
			}
			if (a0 == 15307) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14070);
				tv0->ClearReplies();
				tv0->AddReply(14071, -1, 15308);
				return;
			}
			if (a0 == 15309) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14072);
				tv0->ClearReplies();
				tv0->AddReply(14073, -1, 15310);
				return;
			}
			if (a0 == 15278) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14043);
				tv0->ClearReplies();
				tv0->AddReply(14044, 15280, 15279);
				return;
			}
			if (a0 == 15280) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14045);
				tv0->ClearReplies();
				tv0->AddReply(14046, 15282, 15281);
				return;
			}
			if (a0 == 15282) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14047);
				tv0->ClearReplies();
				tv0->AddReply(14048, 15284, 15283);
				tv0->AddReply(14060, 15297, 15296);
				return;
			}
			if (a0 == 15297) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14061);
				tv0->ClearReplies();
				tv0->AddReply(14062, 15286, 15298);
				return;
			}
			if (a0 == 15284) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14049);
				tv0->ClearReplies();
				tv0->AddReply(14050, 15286, 15285);
				tv0->AddReply(14055, 15291, 15290);
				return;
			}
			if (a0 == 15291) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14056);
				tv0->ClearReplies();
				tv0->AddReply(14057, 15293, 15292);
				return;
			}
			if (a0 == 15293) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14058);
				tv0->ClearReplies();
				tv0->AddReply(14059, 15286, 15294);
				return;
			}
			if (a0 == 15286) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14051);
				tv0->ClearReplies();
				tv0->AddReply(14052, 15288, 15287);
				return;
			}
			if (a0 == 15288) {
				f_3f9_a1_v("Neutral");
				tv0->SetMessage(14053);
				tv0->ClearReplies();
				tv0->AddReply(14054, -1, 15289);
				return;
			}
			tv3 = true;
			if (f_5f9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_553_a1_b(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	bool L3;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@Rotate(L2.x, L2.z, L3);
	return L3;
}

bool f_55f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_564_a1_b(object a0)
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
	L5 = L3 * 70 + f_5b9_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_59c_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_5a0_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_5b2_a0_v(void)
{
	if (f_5f9_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_5b9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_5c3_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_5c8_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

float f_5d8_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_5dd_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_5e6_a1_b(int a0)
{
	return f_5dd_a0_i() == a0;
}

bool f_5ec_a0_b(void)
{
	bool L0;
	f_5a0_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_5f5_a0_i(void)
{
	return 2861;
}

string f_5f7_a0_s(void)
{
	return "ui/NPC_Han.png";
}

bool f_5f9_a0_b(void)
{
	return true;
}

void f_5fb_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_601_a2_v(object a0, object a1)
{
}

void f_603_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q02", 4);
	L0 = f_6e6_a0_o();
	L0->AddMark("d3q02HanGotoViktor", "pt_map_viktor", 0, 11386, f_5d8_a0_f());
}

void f_617_a2_v(object a0, object a1)
{
	f_6f7_a3_v(f_6e6_a0_o(), "pt_map_viktor", 2);
	a1->ShowMap(f_6e6_a0_o());
}

void f_627_a2_v(object a0, object a1)
{
	@SetVariable("ood8Han1", 1);
}

void f_62d_a2_v(object a0, object a1)
{
	@SetVariable("ood9Xan1", 1);
}

void f_633_a2_v(object a0, object a1)
{
	@SetVariable("d9q01", 2);
	f_739_a0_v();
}

void f_63c_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "Rifle", 5);
}

void f_642_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("d9q01", 1000);
	f_729_a0_v();
	a0->RemoveItemByType(L0, "Rifle", 5);
}

void f_64f_a2_v(object a0, object a1)
{
	f_5c8_a2_v("mnogogrannik@door1", false);
}

bool f_656_a1_b(object a0)
{
	return true;
	return false;
}

bool f_65b_a1_b(object a0)
{
	if (f_5c3_a1_i("d3q02") == 3) {
		return true;
	}
	return false;
}

bool f_667_a1_b(object a0)
{
	if (f_5c3_a1_i("ood8Han1") == 0) {
		return true;
	}
	return false;
}

bool f_673_a1_b(object a0)
{
	if (f_5c3_a1_i("d9q01") == 1) {
		return true;
	}
	return false;
}

bool f_67f_a1_b(object a0)
{
	if (f_5c3_a1_i("ood9Xan1") == 0) {
		return true;
	}
	return false;
}

bool f_68b_a1_b(object a0)
{
	if (f_69f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_695_a1_b(object a0)
{
	if (f_6aa_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_69f_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "Rifle");
	if (L0 >= 5) {
		return true;
	}
	return false;
}

bool f_6aa_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "Rifle");
	if (L0 > 0 && L0 < 5) {
		return true;
	}
	return false;
}

object f_6bc_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6c9_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_6bc_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

object f_6e6_a0_o(void)
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

void f_6f7_a3_v(object a0, string a1, float a2)
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

int f_718_a0_i(void)
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

void f_729_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 185, 1, 15448);
	f_6c9_a2_b(L0, 182);
}

void f_739_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 184, 1, 15447);
	f_6c9_a2_b(L0, 182);
}

void f_749_a0_v(void)
{
	g1 = false;
}

void f_74d_a1_v(object a0)
{
	if (!g1) {
		g1 = true;
		return;
	}
	if (f_5e6_a1_b(1)) {
		return;
	}
	if (f_5e6_a1_b(3)) {
		t2{a0};
		return;
	}
	if (f_5e6_a1_b(8)) {
		t4{a0};
		return;
	}
	if (f_5e6_a1_b(9)) {
		t6{a0};
		return;
	}
	f_5ec_a0_b();
}

