event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event OnTimer 7;
event OnDialogReply 11;
event OnTrigger 26;

var string g0;
var bool g1;
var object g2;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_585_a0_b());
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
			while (!f_567_a1_b(a0)) {
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
			f_571_a1_b(a0);
			enable OnUse;
			f_7e6_a1_v(a0);
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
					if (L0 && f_558_a1_f(L0) <= 62500.0) {
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
		f_57a_a1_v(a0);
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
			f_571_a1_b(a0);
			enable OnUse;
			f_7e6_a1_v(a0);
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
			L5 = f_665_a0_i();
			if (L5) {
				int L6;
				@irand(L6, L5);
				@PlayAnimation("all", f_65e_a1_s(L6));
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
		if (!f_58a_a2_b(a0, 100.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7de_a0_i());
		L0->SetNPCDescription(f_7dc_a0_i());
		L0->SetPhoto(f_7e0_a0_s());
		L0->SetPhoto2(f_7e2_a0_s());
		L0->SetPlayerName(f_7cb_a0_i());
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
		f_5cf_a1_v(a0);
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
			if (f_722_a1_b(tv1) && f_72e_a1_b(tv1)) {
				f_6d3_a2_v(tv1, tv0);
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511917);
				tv0->ClearReplies();
				tv0->AddReply(515734, 16793, 16792);
				tv0->AddReply(515732, 16791, 16790);
				break;
			}
			f_1fa_a1_v("Neutral");
			tv0->SetMessage(511935);
			tv0->ClearReplies();
			if (f_722_a1_b(tv1)) {
				tv0->AddReply(512489, 13660, 13658);
			}
			if (f_73a_a1_b(tv1) && !f_746_a1_b(tv1) && f_75e_a1_b(tv1)) {
				tv0->AddReply(511936, 13155, 13153);
			}
			if (f_746_a1_b(tv1) && f_752_a1_b(tv1)) {
				tv0->AddReply(511937, 13156, 13154);
			}
			tv0->AddReply(512490, -1, 13659);
			break;
			return;
		}
		if (f_7e4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5e1_a1_v(tv2);
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

	void f_1fa_a1_v(string a0)
	{
		if (!f_7e4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5f1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_600_a0_v();
			if (a1 == 13144) {
				f_6bc_a2_v(tv1, tv0);
				f_6a3_a2_v(tv1, tv0);
				f_6ad_a2_v(tv1, tv0);
			}
			if (a1 == 16800) {
				f_6b3_a2_v(tv1, tv0);
			}
			if (a1 == 13151) {
				f_6b3_a2_v(tv1, tv0);
			}
			if (a1 == 16809) {
				f_6b3_a2_v(tv1, tv0);
			}
			if (a1 == 13661) {
				f_6bc_a2_v(tv1, tv0);
				f_6a3_a2_v(tv1, tv0);
				f_6ad_a2_v(tv1, tv0);
			}
			if (a1 == 13170) {
				f_712_a2_v(tv1, tv0);
				f_718_a2_v(tv1, tv0);
				f_6ad_a2_v(tv1, tv0);
			}
			if (a1 == 13154) {
				f_70c_a2_v(tv1, tv0);
			}
			if (a1 == 13172) {
				f_6d9_a2_v(tv1, tv0);
			}
			if (a1 == 16820) {
				f_6d9_a2_v(tv1, tv0);
			}
			if (a0 == 13133) {
				if (f_722_a1_b(tv1) && f_72e_a1_b(tv1)) {
					f_6d3_a2_v(tv1, tv0);
					f_1fa_a1_v("Neutral");
					tv0->SetMessage(511917);
					tv0->ClearReplies();
					tv0->AddReply(515734, 16793, 16792);
					tv0->AddReply(515732, 16791, 16790);
					return;
				}
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511935);
				tv0->ClearReplies();
				if (f_722_a1_b(tv1)) {
					tv0->AddReply(512489, 13660, 13658);
				}
				if (f_73a_a1_b(tv1) && !f_746_a1_b(tv1) && f_75e_a1_b(tv1)) {
					tv0->AddReply(511936, 13155, 13153);
				}
				if (f_746_a1_b(tv1) && f_752_a1_b(tv1)) {
					tv0->AddReply(511937, 13156, 13154);
				}
				tv0->AddReply(512490, -1, 13659);
				return;
			}
			if (a0 == 13156) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511939);
				tv0->ClearReplies();
				tv0->AddReply(511947, 13165, 13164);
				return;
			}
			if (a0 == 13165) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511948);
				tv0->ClearReplies();
				tv0->AddReply(511949, 13167, 13166);
				tv0->AddReply(515752, 13167, 16816);
				return;
			}
			if (a0 == 13167) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511950);
				tv0->ClearReplies();
				tv0->AddReply(511951, 13171, 13168);
				return;
			}
			if (a0 == 13171) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511954);
				tv0->ClearReplies();
				tv0->AddReply(511955, -1, 13172);
				tv0->AddReply(515754, -1, 16820);
				return;
			}
			if (a0 == 13155) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511938);
				tv0->ClearReplies();
				tv0->AddReply(511940, 13158, 13157);
				tv0->AddReply(515753, 13160, 16818);
				return;
			}
			if (a0 == 13158) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511941);
				tv0->ClearReplies();
				tv0->AddReply(511942, 13160, 13159);
				tv0->AddReply(515749, 13160, 16811);
				return;
			}
			if (a0 == 13160) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511943);
				tv0->ClearReplies();
				tv0->AddReply(511944, 13162, 13161);
				return;
			}
			if (a0 == 13162) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511945);
				tv0->ClearReplies();
				tv0->AddReply(511946, 13169, 13163);
				return;
			}
			if (a0 == 13169) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511952);
				tv0->ClearReplies();
				tv0->AddReply(511953, -1, 13170);
				return;
			}
			if (a0 == 13660) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(512491);
				tv0->ClearReplies();
				tv0->AddReply(512492, -1, 13661);
				return;
			}
			if (a0 == 16791) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(515733);
				tv0->ClearReplies();
				tv0->AddReply(515737, 16793, 16795);
				return;
			}
			if (a0 == 16793) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(515735);
				tv0->ClearReplies();
				tv0->AddReply(511918, 13135, 13134);
				tv0->AddReply(515736, 16797, 16794);
				return;
			}
			if (a0 == 16797) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(515738);
				tv0->ClearReplies();
				tv0->AddReply(515739, 13137, 16798);
				return;
			}
			if (a0 == 13135) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511919);
				tv0->ClearReplies();
				tv0->AddReply(511920, 13137, 13136);
				tv0->AddReply(515743, 16805, 16804);
				return;
			}
			if (a0 == 16805) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(515744);
				tv0->ClearReplies();
				tv0->AddReply(515745, 16807, 16806);
				return;
			}
			if (a0 == 16807) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(515746);
				tv0->ClearReplies();
				tv0->AddReply(515747, 13137, 16808);
				tv0->AddReply(515748, -1, 16809);
				return;
			}
			if (a0 == 13137) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511921);
				tv0->ClearReplies();
				tv0->AddReply(511924, 13141, 13140);
				tv0->AddReply(511922, 13139, 13138);
				return;
			}
			if (a0 == 13139) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511923);
				tv0->ClearReplies();
				tv0->AddReply(511929, 13141, 13145);
				return;
			}
			if (a0 == 13141) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511925);
				tv0->ClearReplies();
				tv0->AddReply(511926, 13143, 13142);
				tv0->AddReply(511930, 13148, 13147);
				return;
			}
			if (a0 == 13148) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511931);
				tv0->ClearReplies();
				tv0->AddReply(511932, 13150, 13149);
				tv0->AddReply(515741, 13150, 16801);
				return;
			}
			if (a0 == 13150) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511933);
				tv0->ClearReplies();
				tv0->AddReply(511934, -1, 13151);
				tv0->AddReply(515742, 13143, 16803);
				return;
			}
			if (a0 == 13143) {
				f_1fa_a1_v("Neutral");
				tv0->SetMessage(511927);
				tv0->ClearReplies();
				tv0->AddReply(511928, -1, 13144);
				tv0->AddReply(515740, -1, 16800);
				return;
			}
			tv3 = true;
			if (f_7e4_a0_b()) {
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
	var float tv0;
	var float tv1;
	var int tv2;

	void init(void)
	{
		object L0;
		@SensePlayerOnly(true);
		f_51c_a0_v();
		@GetScene(L0);
		for (tv2 = 0; ; tv2++) {
			bool L1;
			L0->GetLocator(f_676_a1_s(tv2), L1);
			if (!L1) {
				break;
			}
		}
		if (!f_585_a0_b()) {
			t0{};
		}
		f_524_a0_v();
		for (; ; ) {
			int L2;
			bool L3;
			Vector L4;
			Vector L5;
			Vector L6;
			@irand(L2, tv2);
			L0->GetLocator(f_676_a1_s(L2), L3, L4, L5);
			L6 = L4 - f_553_a0_V();
			if (f_61f_a1_f(L6) > tv1) {
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

	void f_51c_a0_v(void)
	{
		string L0;
		@GetProperty("loc", L0);
		g0 = L0;
	}

	void f_524_a0_v(void)
	{
		Vector L0;
		Vector L1;
		@GetAnimationOffset(L0, "all", "walk_stopl");
		@GetAnimationOffset(L1, "all", "walk_stopr");
		tv0 = (L0.z + L1.z) / 2.0;
		tv1 = f_617_a1_f(L0.z - tv0) + 40;
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
			f_571_a1_b(a0);
			enable OnUse;
			f_7e6_a1_v(a0);
		}
	}
}

Vector f_553_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

float f_558_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_560_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_567_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_571_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_567_a1_b(L0);
}

void f_57a_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_585_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_58a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_60d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_7e4_a0_b()) {
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

void f_5cf_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_7e4_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_5e1_a1_v(string a0)
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

void f_5f1_a2_v(string a0, bool a1)
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

void f_600_a0_v(void)
{
	if (f_7e4_a0_b()) {
		@lshStopSpeech();
	}
}

object f_607_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_60d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_617_a1_f(float a0)
{
	return a0 < 0 ? -a0 : a0;
}

float f_61f_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

int f_629_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_62e_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_63a_a2_v(object a0, int a1)
{
	f_560_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_62e_a2_v(L0, a1);
	}
}

bool f_64d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_659_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_65e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_665_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_65e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

string f_676_a1_s(int a0)
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
			@RemoveActor(f_607_a0_o());
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
		@RemoveActor(f_607_a0_o());
	}
}

void f_6a3_a2_v(object a0, object a1)
{
	@Trace("money10000 is given");
	f_63a_a2_v(a0, 10000);
}

void f_6ad_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_6b3_a2_v(object a0, object a1)
{
	@SetVariable("d5q02", -1);
	f_76a_a0_v();
}

void f_6bc_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q02", 2);
	L0 = f_7ba_a0_o();
	L0->AddMark("d5q02GorbunFindTheDaughter", "pt_map_gorbun", 0, 515362, f_659_a0_f());
	f_777_a0_v();
}

void f_6d3_a2_v(object a0, object a1)
{
	@SetVariable("ood5Gorbun1", 1);
}

void f_6d9_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_7ba_a0_o();
	L0->FindMark(L1, "d5q02AnnaGotoGorbun");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02AnnaGotoGorbunSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02AnnaGotoKabak");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02GorbunFindTheDaughter");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02NudeMeeting");
	if (L1) {
		L1->Remove();
	}
	f_784_a0_v();
	f_64d_a2_b("quest_d5_02", "completed");
}

void f_70c_a2_v(object a0, object a1)
{
	@SetVariable("ood5Gorbun2", 1);
}

void f_712_a2_v(object a0, object a1)
{
	@SetVariable("ood5Gorbun3", 1);
}

void f_718_a2_v(object a0, object a1)
{
	@Trace("money 50000 is given");
	f_63a_a2_v(a0, 50000);
}

bool f_722_a1_b(object a0)
{
	if (f_629_a1_i("d5q02") == 1) {
		return true;
	}
	return false;
}

bool f_72e_a1_b(object a0)
{
	if (f_629_a1_i("ood5Gorbun1") == 0) {
		return true;
	}
	return false;
}

bool f_73a_a1_b(object a0)
{
	if (f_629_a1_i("d5q02") == 4) {
		return true;
	}
	return false;
}

bool f_746_a1_b(object a0)
{
	if (f_629_a1_i("d5q02KnowNudeIsDead") == 1) {
		return true;
	}
	return false;
}

bool f_752_a1_b(object a0)
{
	if (f_629_a1_i("ood5Gorbun2") == 0) {
		return true;
	}
	return false;
}

bool f_75e_a1_b(object a0)
{
	if (f_629_a1_i("ood5Gorbun3") == 0) {
		return true;
	}
	return false;
}

void f_76a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 715, 2, 536323);
	f_79e_a2_b(L0, 148);
}

void f_777_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 150, 2, 515356);
	f_79e_a2_b(L0, 148);
}

void f_784_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 153, 2, 515359);
	f_79e_a2_b(L0, 148);
}

object f_791_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_79e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_791_a0_o();
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

object f_7ba_a0_o(void)
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

int f_7cb_a0_i(void)
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

int f_7dc_a0_i(void)
{
	return 515594;
}

int f_7de_a0_i(void)
{
	return 512583;
}

string f_7e0_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_7e2_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_7e4_a0_b(void)
{
	return false;
}

void f_7e6_a1_v(object a0)
{
	t4{a0};
}

