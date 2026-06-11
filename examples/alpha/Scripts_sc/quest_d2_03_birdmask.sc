event evt_11 11;
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
		if (!f_1e8_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2fd_a0_i());
		L0->SetPhoto(f_2ff_a0_s());
		L0->SetPlayerName(f_2dc_a0_i());
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
		f_220_a1_v(a0);
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
			if (f_289_a1_b(tv1)) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(6910);
				tv0->ClearReplies();
				tv0->AddReply(6911, 7618, 7617);
				if (f_27d_a1_b(tv1)) {
					tv0->AddReply(7249, 7993, 7989);
				}
				break;
			}
			return;
		}
		if (f_301_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_224_a1_v(tv2);
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

	void f_83_a1_v(string a0)
	{
		if (!f_301_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_224_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_236_a0_v();
			if (a1 == 7988) {
				f_257_a2_v(tv1, tv0);
				f_25d_a2_v(tv1, tv0);
			}
			if (a1 == 7990) {
				f_257_a2_v(tv1, tv0);
				f_25d_a2_v(tv1, tv0);
			}
			if (a1 == 7991) {
				f_257_a2_v(tv1, tv0);
				f_25d_a2_v(tv1, tv0);
			}
			if (a1 == 7992) {
				f_257_a2_v(tv1, tv0);
			}
			if (a0 == 7616) {
				if (f_289_a1_b(tv1)) {
					f_83_a1_v("Neutral");
					tv0->SetMessage(6910);
					tv0->ClearReplies();
					tv0->AddReply(6911, 7618, 7617);
					if (f_27d_a1_b(tv1)) {
						tv0->AddReply(7249, 7993, 7989);
					}
					return;
				}
			}
			if (a0 == 7993) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(7253);
				tv0->ClearReplies();
				tv0->AddReply(7254, 7995, 7994);
				return;
			}
			if (a0 == 7995) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(7255);
				tv0->ClearReplies();
				tv0->AddReply(7256, 7997, 7996);
				return;
			}
			if (a0 == 7997) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(7257);
				tv0->ClearReplies();
				tv0->AddReply(7258, 7999, 7998);
				tv0->AddReply(7261, 7618, 8002);
				return;
			}
			if (a0 == 7999) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(7259);
				tv0->ClearReplies();
				tv0->AddReply(7260, 7618, 8000);
				return;
			}
			if (a0 == 7618) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(6912);
				tv0->ClearReplies();
				tv0->AddReply(7242, 7983, 7982);
				if (f_295_a1_b(tv1)) {
					tv0->AddReply(7252, -1, 7992);
				}
				return;
			}
			if (a0 == 7983) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(7243);
				tv0->ClearReplies();
				tv0->AddReply(7244, 7985, 7984);
				tv0->AddReply(7251, -1, 7991);
				return;
			}
			if (a0 == 7985) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(7245);
				tv0->ClearReplies();
				tv0->AddReply(7246, 7987, 7986);
				tv0->AddReply(7250, -1, 7990);
				return;
			}
			if (a0 == 7987) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(7247);
				tv0->ClearReplies();
				tv0->AddReply(7248, -1, 7988);
				return;
			}
			tv3 = true;
			if (f_301_a0_b()) {
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
		f_1b6_a0_v();
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

	void f_1b6_a0_v(void)
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
			if (!L0 && f_1e6_a0_b()) {
				@RemoveActor(f_23d_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1e6_a0_b()) {
			@RemoveActor(f_23d_a0_o());
		}
	}
}

bool f_1e6_a0_b(void)
{
	return true;
}

bool f_1e8_a1_b(object a0)
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
	L5 = L3 * 70 + f_243_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_220_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_224_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_236_a0_v(void)
{
	if (f_301_a0_b()) {
		@lshStopSpeech();
	}
}

object f_23d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_243_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_24d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_252_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_257_a2_v(object a0, object a1)
{
	@SetVariable("ood2Birdmask1", 1);
}

void f_25d_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q03", 3);
	L0 = f_2cb_a0_o();
	L0->AddMark("d2q03BirdmaskGotoLara", "pt_map_lara", 0, 15293, f_252_a0_f());
	L0->AddMark("d2q03BirdmaskGotoLaraSelf", "", 0, 15292, f_252_a0_f());
	f_2ed_a0_v();
}

bool f_27d_a1_b(object a0)
{
	if (f_24d_a1_i("KnowTheater") == 1) {
		return true;
	}
	return false;
}

bool f_289_a1_b(object a0)
{
	if (f_24d_a1_i("ood2Birdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_295_a1_b(object a0)
{
	if (f_24d_a1_i("d2q03") == 3) {
		return true;
	}
	return false;
}

object f_2a1_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2ae_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2a1_a0_o();
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

object f_2cb_a0_o(void)
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

int f_2dc_a0_i(void)
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

void f_2ed_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 133, 2, 15270);
	f_2ae_a2_b(L0, 12);
}

int f_2fd_a0_i(void)
{
	return 4029;
}

string f_2ff_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_301_a0_b(void)
{
	return false;
}

