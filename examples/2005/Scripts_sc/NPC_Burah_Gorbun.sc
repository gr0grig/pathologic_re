event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event OnTimer 7;
event evt_11 11;
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
		} while (!f_54f_a0_b());
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

	bool init(Vector a0, Vector a1)
	{
		bool L0;
		tv0 = true;
		@SetTimer(21, 0.5);
		for (; ; ) {
			while (!f_531_a1_b(a0)) {
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
		f_91_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_91_a0_v();
			disable OnUse;
			f_53b_a1_b(a0);
			enable OnUse;
			f_7b8_a1_v(a0);
			tv0 = false;
		}
	}

	void OnCollision(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			f_91_a0_v();
			t2{a0};
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
					if (L0 && f_529_a1_f(L0) <= 62500.0) {
						OnCollision(L0);
					}
				}
			}
		}
	}

	void f_91_a0_v(void)
	{
		@Stop();
	}
}

task t2
{
	void init(object a0)
	{
		bool L0;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return;
		}
		f_544_a1_v(a0);
		@Sleep(6);
	}

	void OnUnload(void)
	{
		f_c1_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_c1_a0_v();
			disable OnUse;
			f_53b_a1_b(a0);
			enable OnUse;
			f_7b8_a1_v(a0);
		}
	}

	void f_c1_a0_v(void)
	{
		@StopGroup0();
		@StopAnimation();
	}
}

task t3
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
			L3 = f_108_a1_i(L2);
			@irand(L4, L3);
			@PlayAnimation("all", f_100_a2_s(L2, L4));
			@WaitForAnimEnd();
		} else {
			int L5;
			L5 = f_6bf_a0_i();
			if (L5) {
				int L6;
				@irand(L6, L5);
				@PlayAnimation("all", f_6b8_a1_s(L6));
				@WaitForAnimEnd();
			}
		}
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	string f_100_a2_s(string a0, int a1)
	{
		return a1 == 0 ? a0 : a0 + a1;
	}

	int f_108_a1_i(string a0)
	{
		int L0;
		for (L0 = 0; ; L0++) {
			bool L1;
			@HasAnimation(L1, "all", f_100_a2_s(a0, L0));
			if (!L1) {
				break;
			}
		}
		return L0;
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
		if (!f_554_a2_b(a0, 100.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6ff_a0_i());
		L0->SetNPCDescription(f_6fd_a0_i());
		L0->SetPhoto(f_701_a0_s());
		L0->SetPhoto2(f_703_a0_s());
		L0->SetPlayerName(f_79e_a0_i());
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
		f_598_a1_v(a0);
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
			if (f_733_a1_b(tv1) && f_73d_a1_b(tv1) && f_749_a1_b(tv1)) {
				f_70d_a2_v(tv1, tv0);
				f_22d_a1_v("Neutral");
				tv0->SetMessage(517910);
				tv0->ClearReplies();
				tv0->AddReply(520406, 21615, 21614);
				tv0->AddReply(517911, 19050, 19049);
				break;
			}
			if (!f_733_a1_b(tv1) && f_73d_a1_b(tv1) && f_755_a1_b(tv1)) {
				f_713_a2_v(tv1, tv0);
				f_22d_a1_v("Neutral");
				tv0->SetMessage(517915);
				tv0->ClearReplies();
				tv0->AddReply(517916, 19055, 19054);
				tv0->AddReply(520410, 21620, 21619);
				break;
			}
			if (f_73d_a1_b(tv1)) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(517919);
				tv0->ClearReplies();
				if (f_733_a1_b(tv1)) {
					tv0->AddReply(517920, 19061, 19058);
				}
				if (!f_733_a1_b(tv1)) {
					tv0->AddReply(517921, 19063, 19059);
				}
				tv0->AddReply(517922, -1, 19060);
				break;
			}
			f_22d_a1_v("Neutral");
			tv0->SetMessage(517927);
			tv0->ClearReplies();
			tv0->AddReply(518197, -1, 19310);
			tv0->AddReply(518198, -1, 19311);
			tv0->AddReply(517928, -1, 19066);
			break;
			return;
		}
		if (f_705_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_633_a1_v(tv2);
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

	void f_22d_a1_v(string a0)
	{
		if (!f_705_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_63a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_64f_a0_v();
			if (a1 == 19051) {
				f_719_a2_v(tv1, tv0);
				f_707_a2_v(tv1, tv0);
			}
			if (a1 == 19062) {
				f_719_a2_v(tv1, tv0);
			}
			if (a0 == 19048) {
				if (f_733_a1_b(tv1) && f_73d_a1_b(tv1) && f_749_a1_b(tv1)) {
					f_70d_a2_v(tv1, tv0);
					f_22d_a1_v("Neutral");
					tv0->SetMessage(517910);
					tv0->ClearReplies();
					tv0->AddReply(520406, 21615, 21614);
					tv0->AddReply(517911, 19050, 19049);
					return;
				}
				if (!f_733_a1_b(tv1) && f_73d_a1_b(tv1) && f_755_a1_b(tv1)) {
					f_713_a2_v(tv1, tv0);
					f_22d_a1_v("Neutral");
					tv0->SetMessage(517915);
					tv0->ClearReplies();
					tv0->AddReply(517916, 19055, 19054);
					tv0->AddReply(520410, 21620, 21619);
					return;
				}
				if (f_73d_a1_b(tv1)) {
					f_22d_a1_v("Neutral");
					tv0->SetMessage(517919);
					tv0->ClearReplies();
					if (f_733_a1_b(tv1)) {
						tv0->AddReply(517920, 19061, 19058);
					}
					if (!f_733_a1_b(tv1)) {
						tv0->AddReply(517921, 19063, 19059);
					}
					tv0->AddReply(517922, -1, 19060);
					return;
				}
				f_22d_a1_v("Neutral");
				tv0->SetMessage(517927);
				tv0->ClearReplies();
				tv0->AddReply(518197, -1, 19310);
				tv0->AddReply(518198, -1, 19311);
				tv0->AddReply(517928, -1, 19066);
				return;
			}
			if (a0 == 19063) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(517925);
				tv0->ClearReplies();
				tv0->AddReply(517926, -1, 19064);
				return;
			}
			if (a0 == 19061) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(517923);
				tv0->ClearReplies();
				tv0->AddReply(517924, -1, 19062);
				return;
			}
			if (a0 == 21620) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(520411);
				tv0->ClearReplies();
				tv0->AddReply(520412, 19055, 21621);
				return;
			}
			if (a0 == 19055) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(517917);
				tv0->ClearReplies();
				tv0->AddReply(517918, 21618, 19056);
				return;
			}
			if (a0 == 21618) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(520409);
				tv0->ClearReplies();
				tv0->AddReply(520413, 21624, 21623);
				tv0->AddReply(520418, -1, 21628);
				return;
			}
			if (a0 == 21624) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(520414);
				tv0->ClearReplies();
				tv0->AddReply(520415, 21626, 21625);
				tv0->AddReply(520419, -1, 21629);
				return;
			}
			if (a0 == 21626) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(520416);
				tv0->ClearReplies();
				tv0->AddReply(520417, -1, 21627);
				return;
			}
			if (a0 == 19050) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(517912);
				tv0->ClearReplies();
				tv0->AddReply(517913, -1, 19051);
				tv0->AddReply(517914, -1, 19052);
				return;
			}
			if (a0 == 21615) {
				f_22d_a1_v("Neutral");
				tv0->SetMessage(520407);
				tv0->ClearReplies();
				tv0->AddReply(520408, 19050, 21616);
				return;
			}
			tv3 = true;
			if (f_705_a0_b()) {
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
		f_5a9_a1_b(f_656_a0_o());
		if (!f_554_a2_b(a0, 100.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6ff_a0_i());
		L0->SetNPCDescription(f_6fd_a0_i());
		L0->SetPhoto(f_701_a0_s());
		L0->SetPhoto2(f_703_a0_s());
		L0->SetPlayerName(f_79e_a0_i());
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
		f_598_a1_v(a0);
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
			f_44d_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_705_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_633_a1_v(tv2);
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

	void f_44d_a1_v(string a0)
	{
		if (!f_705_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_63a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_64f_a0_v();
			if (a0 == 42563) {
				f_44d_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_705_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t8
{
	var float tv0;
	var float tv1;
	var int tv2;

	void init(void)
	{
		@SetTimeEvent(0, 144);
		f_495_a0_v();
	}

	void f_495_a0_v(void)
	{
		object L0;
		@SensePlayerOnly(true);
		f_4ed_a0_v();
		@GetScene(L0);
		for (tv2 = 0; ; tv2++) {
			bool L1;
			L0->GetLocator(f_6d0_a1_s(tv2), L1);
			if (!L1) {
				break;
			}
		}
		if (!f_54f_a0_b()) {
			t0{};
		}
		f_4f5_a0_v();
		for (; ; ) {
			int L2;
			bool L3;
			Vector L4;
			Vector L5;
			Vector L6;
			@irand(L2, tv2);
			L0->GetLocator(f_6d0_a1_s(L2), L3, L4, L5);
			L6 = L4 - f_524_a0_V();
			if (f_66e_a1_f(L6) > tv1) {
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
					if (t1{L10, L5}) {
						t3{L2};
					}
				}
			}
			@Sleep(1);
		}
	}

	void f_4ed_a0_v(void)
	{
		string L0;
		@GetProperty("loc", L0);
		g0 = L0;
	}

	void f_4f5_a0_v(void)
	{
		Vector L0;
		Vector L1;
		@GetAnimationOffset(L0, "all", "walk_stopl");
		@GetAnimationOffset(L1, "all", "walk_stopr");
		tv0 = (L0.z + L1.z) / 2.0;
		tv1 = f_666_a1_f(L0.z - tv0) + 40;
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
			f_53b_a1_b(a0);
			enable OnUse;
			f_7b8_a1_v(a0);
		}
	}
}

Vector f_524_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

float f_529_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_531_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_53b_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_531_a1_b(L0);
}

void f_544_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_54f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_554_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_65c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_705_a0_b()) {
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

void f_598_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_705_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_5a9_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_5e3_a1_b(a0)) {
			if (!f_608_a1_b(a0)) {
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
		if (!f_608_a1_b(a0)) {
			if (!f_5e3_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_5e3_a1_b(object a0)
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
	return f_640_a1_b(L4);
}

bool f_608_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_6a9_a0_i() + "m";
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
	return f_640_a1_b(L4);
}

void f_633_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_63a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_640_a1_b(string a0)
{
	if (f_705_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_64f_a0_v(void)
{
	if (f_705_a0_b()) {
		@lshStopSpeech();
	}
}

object f_656_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_65c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_666_a1_f(float a0)
{
	return a0 < 0 ? -a0 : a0;
}

float f_66e_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

int f_678_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_67d_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_689_a3_v(object a0, object a1, int a2)
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
		f_67d_a2_v(L0, a2);
	}
}

void f_69c_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_689_a3_v(a0, L0, a2);
}

int f_6a9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_6b2_a1_b(int a0)
{
	return f_6a9_a0_i() == a0;
}

string f_6b8_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_6bf_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_6b8_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

string f_6d0_a1_s(int a0)
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
			@RemoveActor(f_656_a0_o());
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
		@RemoveActor(f_656_a0_o());
	}
}

int f_6fd_a0_i(void)
{
	return 515594;
}

int f_6ff_a0_i(void)
{
	return 512583;
}

string f_701_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_703_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_705_a0_b(void)
{
	return false;
}

void f_707_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_70d_a2_v(object a0, object a1)
{
	@SetVariable("oob1Gorbun1", 1);
}

void f_713_a2_v(object a0, object a1)
{
	@SetVariable("oob1Gorbun2", 1);
}

void f_719_a2_v(object a0, object a1)
{
	float L0;
	@SetVariable("b1q02", 2);
	f_768_a0_v();
	a0->GetProperty("health", L0);
	L0 = L0 - 0.30000001192092896;
	a0->SetProperty("health", L0);
	@Trace("blood is given");
	f_69c_a3_v(a0, "b1q02_blood", 1);
}

bool f_733_a1_b(object a0)
{
	if (f_761_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_73d_a1_b(object a0)
{
	if (f_678_a1_i("b1q02") == 1) {
		return true;
	}
	return false;
}

bool f_749_a1_b(object a0)
{
	if (f_678_a1_i("oob1Gorbun1") == 0) {
		return true;
	}
	return false;
}

bool f_755_a1_b(object a0)
{
	if (f_678_a1_i("oob1Gorbun2") == 0) {
		return true;
	}
	return false;
}

bool f_761_a1_b(object a0)
{
	float L0;
	a0->GetProperty("health", L0);
	return L0 >= 0.4000000059604645;
}

void f_768_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 202, 2, 517942);
	f_782_a2_b(L0, 200);
}

object f_775_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_782_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_775_a0_o();
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

int f_79e_a0_i(void)
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
	}
}

void f_7b8_a1_v(object a0)
{
	if (f_6b2_a1_b(1)) {
		t4{a0};
		return;
	}
	t6{a0};
}

