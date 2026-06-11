event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;

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
		if (!f_35d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_493_a0_i());
		L0->SetNPCDescription(f_491_a0_i());
		L0->SetPhoto(f_495_a0_s());
		L0->SetPhoto2(f_497_a0_s());
		L0->SetPlayerName(f_516_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_3b4_a1_b(f_473_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_3a2_a1_v(a0);
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
			if (f_4c8_a1_b(tv1)) {
				f_4b3_a2_v(tv1, tv0);
				f_ae_a1_v("Confusion");
				tv0->SetMessage(518556);
				tv0->ClearReplies();
				tv0->AddReply(518557, 19668, 19667);
				tv0->AddReply(518965, 20084, 20077);
				break;
			}
			f_ae_a1_v("Warning");
			tv0->SetMessage(518560);
			tv0->ClearReplies();
			if (f_4d4_a1_b(tv1)) {
				tv0->AddReply(518978, 20099, 20090);
			}
			tv0->AddReply(518561, -1, 19671);
			break;
			return;
		}
		if (f_499_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_43e_a1_v(tv2);
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

	void f_ae_a1_v(string a0)
	{
		if (!f_499_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_44e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_46c_a0_v();
			if (a1 == 19669) {
				f_4b9_a2_v(tv1, tv0);
			}
			if (a1 == 20131) {
				f_4b9_a2_v(tv1, tv0);
			}
			if (a1 == 20090) {
				f_4c2_a2_v(tv1, tv0);
			}
			if (a0 == 19666) {
				if (f_4c8_a1_b(tv1)) {
					f_4b3_a2_v(tv1, tv0);
					f_ae_a1_v("Confusion");
					tv0->SetMessage(518556);
					tv0->ClearReplies();
					tv0->AddReply(518557, 19668, 19667);
					tv0->AddReply(518965, 20084, 20077);
					return;
				}
				f_ae_a1_v("Warning");
				tv0->SetMessage(518560);
				tv0->ClearReplies();
				if (f_4d4_a1_b(tv1)) {
					tv0->AddReply(518978, 20099, 20090);
				}
				tv0->AddReply(518561, -1, 19671);
				return;
			}
			if (a0 == 20099) {
				f_ae_a1_v("Warning");
				tv0->SetMessage(518984);
				tv0->ClearReplies();
				tv0->AddReply(518985, 20101, 20100);
				return;
			}
			if (a0 == 20101) {
				f_ae_a1_v("Confusion");
				tv0->SetMessage(518986);
				tv0->ClearReplies();
				tv0->AddReply(518987, 20103, 20102);
				return;
			}
			if (a0 == 20103) {
				f_ae_a1_v("Rage");
				tv0->SetMessage(518988);
				tv0->ClearReplies();
				tv0->AddReply(518989, -1, 20104);
				return;
			}
			if (a0 == 20084) {
				f_ae_a1_v("Warning");
				tv0->SetMessage(518972);
				tv0->ClearReplies();
				tv0->AddReply(518973, 20086, 20085);
				return;
			}
			if (a0 == 20086) {
				f_ae_a1_v("Warning");
				tv0->SetMessage(518974);
				tv0->ClearReplies();
				tv0->AddReply(518976, 20089, 20088);
				return;
			}
			if (a0 == 20089) {
				f_ae_a1_v("Warning");
				tv0->SetMessage(518977);
				tv0->ClearReplies();
				tv0->AddReply(518979, 20092, 20091);
				return;
			}
			if (a0 == 20092) {
				f_ae_a1_v("Rage");
				tv0->SetMessage(518980);
				tv0->ClearReplies();
				tv0->AddReply(518981, 20087, 20093);
				return;
			}
			if (a0 == 19668) {
				f_ae_a1_v("Confusion");
				tv0->SetMessage(518558);
				tv0->ClearReplies();
				tv0->AddReply(518966, 20087, 20078);
				tv0->AddReply(518967, 20080, 20079);
				return;
			}
			if (a0 == 20080) {
				f_ae_a1_v("Warning");
				tv0->SetMessage(518968);
				tv0->ClearReplies();
				tv0->AddReply(518969, 20087, 20081);
				tv0->AddReply(518970, 20083, 20082);
				return;
			}
			if (a0 == 20083) {
				f_ae_a1_v("Warning");
				tv0->SetMessage(518971);
				tv0->ClearReplies();
				tv0->AddReply(518982, 20084, 20096);
				return;
			}
			if (a0 == 20087) {
				f_ae_a1_v("Confusion");
				tv0->SetMessage(518975);
				tv0->ClearReplies();
				tv0->AddReply(518993, 20110, 20108);
				tv0->AddReply(518994, 20110, 20109);
				return;
			}
			if (a0 == 20110) {
				f_ae_a1_v("Rage");
				tv0->SetMessage(518995);
				tv0->ClearReplies();
				tv0->AddReply(518996, 20113, 20112);
				tv0->AddReply(527917, 20113, 29266);
				return;
			}
			if (a0 == 20113) {
				f_ae_a1_v("Rage");
				tv0->SetMessage(518997);
				tv0->ClearReplies();
				tv0->AddReply(518998, 20115, 20114);
				return;
			}
			if (a0 == 20115) {
				f_ae_a1_v("Rage");
				tv0->SetMessage(518999);
				tv0->ClearReplies();
				tv0->AddReply(519005, 20122, 20121);
				tv0->AddReply(519001, 20118, 20117);
				return;
			}
			if (a0 == 20118) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(519002);
				tv0->ClearReplies();
				tv0->AddReply(519003, 20124, 20119);
				return;
			}
			if (a0 == 20124) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(519007);
				tv0->ClearReplies();
				tv0->AddReply(519008, 20122, 20125);
				return;
			}
			if (a0 == 20122) {
				f_ae_a1_v("Confusion");
				tv0->SetMessage(519006);
				tv0->ClearReplies();
				tv0->AddReply(519000, 20120, 20116);
				return;
			}
			if (a0 == 20120) {
				f_ae_a1_v("Confusion");
				tv0->SetMessage(519004);
				tv0->ClearReplies();
				tv0->AddReply(519009, 20128, 20127);
				return;
			}
			if (a0 == 20128) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(519010);
				tv0->ClearReplies();
				tv0->AddReply(519011, 20130, 20129);
				return;
			}
			if (a0 == 20130) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(519012);
				tv0->ClearReplies();
				tv0->AddReply(518559, -1, 19669);
				tv0->AddReply(519013, -1, 20131);
				return;
			}
			tv3 = true;
			if (f_499_a0_b()) {
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
	var bool tv0;

	void OnUse(object a0)
	{
		f_353_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_358_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_302_a0_v();
		}
	}

	void f_2cf_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_300_a0_b()) {
			@RemoveActor(f_473_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_2cf_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_300_a0_b()) {
			@RemoveActor(f_473_a0_o());
		}
	}
}

bool f_300_a0_b(void)
{
	return true;
}

void f_302_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_358_a0_b()) {
		return;
	}
	L0 = f_4a2_a0_i();
	for (L1 = 0; L1 < 5 && f_358_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_49b_a1_s(L3));
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
		if (!f_351_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_351_a0_b(void)
{
	return true;
}

void f_353_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_358_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_35d_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_479_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_499_a0_b()) {
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

void f_3a2_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_499_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_3b4_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3ee_a1_b(a0)) {
			if (!f_413_a1_b(a0)) {
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
		if (!f_413_a1_b(a0)) {
			if (!f_3ee_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3ee_a1_b(object a0)
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
	return f_45d_a1_b(L4);
}

bool f_413_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_488_a0_i() + "m";
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
	return f_45d_a1_b(L4);
}

void f_43e_a1_v(string a0)
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

void f_44e_a2_v(string a0, bool a1)
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

bool f_45d_a1_b(string a0)
{
	if (f_499_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_46c_a0_v(void)
{
	if (f_499_a0_b()) {
		@lshStopSpeech();
	}
}

object f_473_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_479_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_483_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_488_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_491_a0_i(void)
{
	return 515551;
}

int f_493_a0_i(void)
{
	return 502876;
}

string f_495_a0_s(void)
{
	return "ui/NPC_Rubin.png";
}

string f_497_a0_s(void)
{
	return "ui/NPC_Rubin_b.png";
}

bool f_499_a0_b(void)
{
	return true;
}

string f_49b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4a2_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_49b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_4b3_a2_v(object a0, object a1)
{
	@SetVariable("oob4Rubin1", 1);
}

void f_4b9_a2_v(object a0, object a1)
{
	@SetVariable("b4q01", 1000);
	f_4e0_a0_v();
}

void f_4c2_a2_v(object a0, object a1)
{
	@SetVariable("oob4Rubin2", 1);
}

bool f_4c8_a1_b(object a0)
{
	if (f_483_a1_i("oob4Rubin1") == 0) {
		return true;
	}
	return false;
}

bool f_4d4_a1_b(object a0)
{
	if (f_483_a1_i("oob4Rubin2") == 0) {
		return true;
	}
	return false;
}

void f_4e0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 219, 1, 518597);
	f_4fa_a2_b(L0, 216);
}

object f_4ed_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4fa_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4ed_a0_o();
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

int f_516_a0_i(void)
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

