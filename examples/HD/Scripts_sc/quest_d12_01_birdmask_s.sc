event OnDialogReply 11;
event OnUse 0;
event OnTimer 7;

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
		if (!f_3b5_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_48b_a0_i());
		L0->SetNPCDescription(f_489_a0_i());
		L0->SetPhoto(f_48d_a0_s());
		L0->SetPhoto2(f_48f_a0_s());
		L0->SetPlayerName(f_50e_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_3fa_a1_v(a0);
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
			if (!f_4b9_a1_b(tv1)) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(535461);
				tv0->ClearReplies();
				if (f_4d9_a1_b(tv1)) {
					tv0->AddReply(539970, 41937, 41936);
				}
				if (f_4e5_a1_b(tv1)) {
					tv0->AddReply(539976, 41943, 41942);
				}
				tv0->AddReply(535479, -1, 37161);
				break;
			}
			if (!f_4c3_a1_b(tv1)) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(535443);
				tv0->ClearReplies();
				if (f_4f1_a1_b(tv1)) {
					tv0->AddReply(539954, 41921, 41920);
				}
				tv0->AddReply(535460, -1, 37142);
				break;
			}
			if (f_4b9_a1_b(tv1) && f_4cd_a1_b(tv1)) {
				f_493_a2_v(tv1, tv0);
				f_ee_a1_v("Neutral");
				tv0->SetMessage(535485);
				tv0->ClearReplies();
				tv0->AddReply(539994, 41963, 41962);
				break;
			}
			f_ee_a1_v("Neutral");
			tv0->SetMessage(535487);
			tv0->ClearReplies();
			tv0->AddReply(535488, -1, 37170);
			tv0->AddReply(539997, -1, 41965);
			break;
			return;
		}
		if (f_491_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_40c_a1_v(tv2);
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

	void f_ee_a1_v(string a0)
	{
		if (!f_491_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_41c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_436_a0_v();
			if (a1 == 41936) {
				f_4a0_a2_v(tv1, tv0);
			}
			if (a1 == 41942) {
				f_4a6_a2_v(tv1, tv0);
			}
			if (a1 == 41920) {
				f_4ac_a2_v(tv1, tv0);
			}
			if (a1 == 37168) {
				f_4b2_a2_v(tv1, tv0);
				f_499_a2_v(tv1, tv0);
			}
			if (a0 == 37143) {
				if (!f_4b9_a1_b(tv1)) {
					f_ee_a1_v("Neutral");
					tv0->SetMessage(535461);
					tv0->ClearReplies();
					if (f_4d9_a1_b(tv1)) {
						tv0->AddReply(539970, 41937, 41936);
					}
					if (f_4e5_a1_b(tv1)) {
						tv0->AddReply(539976, 41943, 41942);
					}
					tv0->AddReply(535479, -1, 37161);
					return;
				}
				if (!f_4c3_a1_b(tv1)) {
					f_ee_a1_v("Neutral");
					tv0->SetMessage(535443);
					tv0->ClearReplies();
					if (f_4f1_a1_b(tv1)) {
						tv0->AddReply(539954, 41921, 41920);
					}
					tv0->AddReply(535460, -1, 37142);
					return;
				}
				if (f_4b9_a1_b(tv1) && f_4cd_a1_b(tv1)) {
					f_493_a2_v(tv1, tv0);
					f_ee_a1_v("Neutral");
					tv0->SetMessage(535485);
					tv0->ClearReplies();
					tv0->AddReply(539994, 41963, 41962);
					return;
				}
				f_ee_a1_v("Neutral");
				tv0->SetMessage(535487);
				tv0->ClearReplies();
				tv0->AddReply(535488, -1, 37170);
				tv0->AddReply(539997, -1, 41965);
				return;
			}
			if (a0 == 41963) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539995);
				tv0->ClearReplies();
				tv0->AddReply(535486, -1, 37168);
				return;
			}
			if (a0 == 41921) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539955);
				tv0->ClearReplies();
				tv0->AddReply(539987, 41954, 41953);
				tv0->AddReply(539969, -1, 41935);
				return;
			}
			if (a0 == 41954) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539988);
				tv0->ClearReplies();
				tv0->AddReply(539956, 41923, 41922);
				return;
			}
			if (a0 == 41923) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539957);
				tv0->ClearReplies();
				tv0->AddReply(539958, 41925, 41924);
				tv0->AddReply(539989, 41956, 41955);
				return;
			}
			if (a0 == 41956) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539990);
				tv0->ClearReplies();
				tv0->AddReply(539991, 41929, 41957);
				tv0->AddReply(539992, 41927, 41958);
				return;
			}
			if (a0 == 41925) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539959);
				tv0->ClearReplies();
				tv0->AddReply(539960, 41927, 41926);
				return;
			}
			if (a0 == 41927) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539961);
				tv0->ClearReplies();
				tv0->AddReply(539962, 41929, 41928);
				tv0->AddReply(539966, -1, 41932);
				return;
			}
			if (a0 == 41929) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539963);
				tv0->ClearReplies();
				tv0->AddReply(539965, -1, 41931);
				tv0->AddReply(539968, -1, 41934);
				return;
			}
			if (a0 == 41943) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539977);
				tv0->ClearReplies();
				tv0->AddReply(539978, 41945, 41944);
				tv0->AddReply(539984, 41951, 41950);
				return;
			}
			if (a0 == 41951) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539985);
				tv0->ClearReplies();
				tv0->AddReply(539986, -1, 41952);
				return;
			}
			if (a0 == 41945) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539979);
				tv0->ClearReplies();
				tv0->AddReply(539980, 41947, 41946);
				tv0->AddReply(539993, -1, 41961);
				return;
			}
			if (a0 == 41947) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539981);
				tv0->ClearReplies();
				tv0->AddReply(539982, -1, 41948);
				tv0->AddReply(539983, -1, 41949);
				return;
			}
			if (a0 == 41937) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539971);
				tv0->ClearReplies();
				tv0->AddReply(539972, 41939, 41938);
				tv0->AddReply(539975, -1, 41941);
				return;
			}
			if (a0 == 41939) {
				f_ee_a1_v("Neutral");
				tv0->SetMessage(539973);
				tv0->ClearReplies();
				tv0->AddReply(539974, -1, 41940);
				return;
			}
			tv3 = true;
			if (f_491_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;

	void init(void)
	{
		while (true) {
			f_303_a2_v(300, 100);
			@Sleep(1);
		}
	}

	void OnUse(object a0)
	{
		if (f_57a_a0_i() == 0) {
			f_344_a0_v();
			t0{a0};
		}
	}

	void f_303_a2_v(float a0, float a1)
	{
		if (!f_3b0_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_352_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_31e_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_3a8_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_31e_a0_b()) {
				if (!tv2) {
					f_42b_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_344_a0_v(void)
	{
		f_3a3_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_352_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_3b0_a0_b()) {
		return;
	}
	L0 = f_478_a0_i();
	for (L1 = 0; L1 < 5 && f_3b0_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_471_a1_s(L3));
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
		if (!f_3a1_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_3a1_a0_b(void)
{
	return true;
}

void f_3a3_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_3a8_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_3b0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3b5_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_43d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_491_a0_b()) {
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

void f_3fa_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_491_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_40c_a1_v(string a0)
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

void f_41c_a2_v(string a0, bool a1)
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

void f_42b_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_436_a0_v(void)
{
	if (f_491_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_43d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_447_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_44c_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_45d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_469_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

string f_471_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_478_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_471_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_489_a0_i(void)
{
	return 515571;
}

int f_48b_a0_i(void)
{
	return 504029;
}

string f_48d_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_48f_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_491_a0_b(void)
{
	return false;
}

void f_493_a2_v(object a0, object a1)
{
	@SetVariable("ood12BirdmaskS1", 1);
}

void f_499_a2_v(object a0, object a1)
{
	f_45d_a2_b("quest_d12_01", "init_sobor");
}

void f_4a0_a2_v(object a0, object a1)
{
	@SetVariable("ood12BirdmaskS2", 1);
}

void f_4a6_a2_v(object a0, object a1)
{
	@SetVariable("ood12BirdmaskS3", 1);
}

void f_4ac_a2_v(object a0, object a1)
{
	@SetVariable("ood12BirdmaskS4", 1);
}

void f_4b2_a2_v(object a0, object a1)
{
	f_44c_a2_v("sobor@door1", false);
}

bool f_4b9_a1_b(object a0)
{
	if (f_4fd_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4c3_a1_b(object a0)
{
	if (f_503_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4cd_a1_b(object a0)
{
	if (f_447_a1_i("ood12BirdmaskS1") == 0) {
		return true;
	}
	return false;
}

bool f_4d9_a1_b(object a0)
{
	if (f_447_a1_i("ood12BirdmaskS2") == 0) {
		return true;
	}
	return false;
}

bool f_4e5_a1_b(object a0)
{
	if (f_447_a1_i("ood12BirdmaskS3") == 0) {
		return true;
	}
	return false;
}

bool f_4f1_a1_b(object a0)
{
	if (f_447_a1_i("ood12BirdmaskS4") == 0) {
		return true;
	}
	return false;
}

bool f_4fd_a1_b(object a0)
{
	return f_554_a0_b();
}

bool f_503_a1_b(object a0)
{
	if (f_469_a0_i() >= 19) {
		return true;
	}
	return false;
}

int f_50e_a0_i(void)
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

void f_51f_a3_v(object a0, bool a1, int a2)
{
	a0->add(6);
	a0->add(26);
	a0->add(2);
	a0->add(22);
	if (a1 == false) {
		a0->add(15);
		a0->add(5);
		a0->add(16);
	} else {
		if (a2 != 0) {
			a0->add(15);
		}
	}
}

bool f_540_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_54a_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_554_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_51f_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_54a_a1_b(L3) || f_540_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

int f_57a_a0_i(void)
{
	int L0;
	@GetVariable("game_final", L0);
	return L0;
}

