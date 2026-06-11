event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
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
		if (!f_1f9_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_317_a0_i());
		L0->SetNPCDescription(f_315_a0_i());
		L0->SetPhoto(f_319_a0_s());
		L0->SetPhoto2(f_31b_a0_s());
		L0->SetPlayerName(f_304_a0_i());
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
		f_23d_a1_v(a0);
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
			if (f_2a5_a1_b(tv1)) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(506910);
				tv0->ClearReplies();
				tv0->AddReply(506911, 7618, 7617);
				if (f_299_a1_b(tv1)) {
					tv0->AddReply(507249, 7993, 7989);
				}
				break;
			}
			return;
		}
		if (f_31d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_24e_a1_v(tv2);
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

	void f_8e_a1_v(string a0)
	{
		if (!f_31d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_255_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_25b_a0_v();
			if (a1 == 7988) {
				f_27c_a2_v(tv1, tv0);
				f_282_a2_v(tv1, tv0);
			}
			if (a1 == 7990) {
				f_27c_a2_v(tv1, tv0);
				f_282_a2_v(tv1, tv0);
			}
			if (a1 == 7991) {
				f_27c_a2_v(tv1, tv0);
				f_282_a2_v(tv1, tv0);
			}
			if (a1 == 7992) {
				f_27c_a2_v(tv1, tv0);
			}
			if (a0 == 7616) {
				if (f_2a5_a1_b(tv1)) {
					f_8e_a1_v("Neutral");
					tv0->SetMessage(506910);
					tv0->ClearReplies();
					tv0->AddReply(506911, 7618, 7617);
					if (f_299_a1_b(tv1)) {
						tv0->AddReply(507249, 7993, 7989);
					}
					return;
				}
			}
			if (a0 == 7993) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(507253);
				tv0->ClearReplies();
				tv0->AddReply(507254, 7995, 7994);
				return;
			}
			if (a0 == 7995) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(507255);
				tv0->ClearReplies();
				tv0->AddReply(507256, 7997, 7996);
				return;
			}
			if (a0 == 7997) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(507257);
				tv0->ClearReplies();
				tv0->AddReply(507258, 7999, 7998);
				tv0->AddReply(507261, 7618, 8002);
				return;
			}
			if (a0 == 7999) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(507259);
				tv0->ClearReplies();
				tv0->AddReply(507260, 7618, 8000);
				return;
			}
			if (a0 == 7618) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(506912);
				tv0->ClearReplies();
				tv0->AddReply(507242, 7983, 7982);
				if (f_2b1_a1_b(tv1)) {
					tv0->AddReply(507252, -1, 7992);
				}
				return;
			}
			if (a0 == 7983) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(507243);
				tv0->ClearReplies();
				tv0->AddReply(507244, 7985, 7984);
				tv0->AddReply(507251, -1, 7991);
				return;
			}
			if (a0 == 7985) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(507245);
				tv0->ClearReplies();
				tv0->AddReply(507246, 7987, 7986);
				tv0->AddReply(507250, -1, 7990);
				return;
			}
			if (a0 == 7987) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(507247);
				tv0->ClearReplies();
				tv0->AddReply(507248, -1, 7988);
				return;
			}
			tv3 = true;
			if (f_31d_a0_b()) {
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
	var bool tv1;

	void init(void)
	{
		tv1 = false;
		f_1c7_a0_v();
	}

	void OnUse(object a0)
	{
		int L0;
		if (tv1) {
			return;
		}
		@GetVariable("d2q03", L0);
		if (L0 != -1) {
			t0{a0};
			tv1 = true;
		}
	}

	void f_1c7_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_1f7_a0_b()) {
				@RemoveActor(f_262_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1f7_a0_b()) {
			@RemoveActor(f_262_a0_o());
		}
	}
}

bool f_1f7_a0_b(void)
{
	return true;
}

bool f_1f9_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_268_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_31d_a0_b()) {
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

void f_23d_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_31d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_24e_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_255_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_25b_a0_v(void)
{
	if (f_31d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_262_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_268_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_272_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_277_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_27c_a2_v(object a0, object a1)
{
	@SetVariable("ood2Birdmask1", 1);
}

void f_282_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q03", 3);
	L0 = f_2f3_a0_o();
	L0->AddMark("d2q03BirdmaskGotoLara", "pt_map_lara", 0, 515293, f_277_a0_f());
	f_2bd_a0_v();
}

bool f_299_a1_b(object a0)
{
	if (f_272_a1_i("KnowTheater") == 1) {
		return true;
	}
	return false;
}

bool f_2a5_a1_b(object a0)
{
	if (f_272_a1_i("ood2Birdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_2b1_a1_b(object a0)
{
	if (f_272_a1_i("d2q03") == 3) {
		return true;
	}
	return false;
}

void f_2bd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 133, 2, 515270);
	f_2d7_a2_b(L0, 12);
}

object f_2ca_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2d7_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2ca_a0_o();
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

object f_2f3_a0_o(void)
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

int f_304_a0_i(void)
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

int f_315_a0_i(void)
{
	return 515571;
}

int f_317_a0_i(void)
{
	return 504029;
}

string f_319_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_31b_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_31d_a0_b(void)
{
	return false;
}

