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
		if (!f_30a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_49f_a0_i());
		L0->SetNPCDescription(f_49d_a0_i());
		L0->SetPhoto(f_4a1_a0_s());
		L0->SetPhoto2(f_4a3_a0_s());
		L0->SetPlayerName(f_48c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_361_a1_b(f_420_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_34f_a1_v(a0);
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
			if (!f_450_a1_b(tv1)) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(539214);
				tv0->ClearReplies();
				if (f_468_a1_b(tv1)) {
					tv0->AddReply(539215, 43417, 41158);
				}
				tv0->AddReply(541312, -1, 43448);
				break;
			}
			f_cc_a1_v("Sly");
			tv0->SetMessage(539216);
			tv0->ClearReplies();
			if (!f_45c_a1_b(tv1) && f_474_a1_b(tv1)) {
				tv0->AddReply(539217, 43420, 41160);
			}
			if (f_45c_a1_b(tv1) && f_480_a1_b(tv1)) {
				tv0->AddReply(541289, 43423, 43422);
			}
			tv0->AddReply(541288, -1, 43421);
			break;
			return;
		}
		if (f_4a5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3eb_a1_v(tv2);
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

	void f_cc_a1_v(string a0)
	{
		if (!f_4a5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_419_a0_v();
			if (a1 == 41158) {
				f_43e_a2_v(tv1, tv0);
			}
			if (a1 == 41160) {
				f_444_a2_v(tv1, tv0);
			}
			if (a1 == 43422) {
				f_44a_a2_v(tv1, tv0);
			}
			if (a0 == 41157) {
				if (!f_450_a1_b(tv1)) {
					f_cc_a1_v("Neutral");
					tv0->SetMessage(539214);
					tv0->ClearReplies();
					if (f_468_a1_b(tv1)) {
						tv0->AddReply(539215, 43417, 41158);
					}
					tv0->AddReply(541312, -1, 43448);
					return;
				}
				f_cc_a1_v("Sly");
				tv0->SetMessage(539216);
				tv0->ClearReplies();
				if (!f_45c_a1_b(tv1) && f_474_a1_b(tv1)) {
					tv0->AddReply(539217, 43420, 41160);
				}
				if (f_45c_a1_b(tv1) && f_480_a1_b(tv1)) {
					tv0->AddReply(541289, 43423, 43422);
				}
				tv0->AddReply(541288, -1, 43421);
				return;
			}
			if (a0 == 43423) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(541290);
				tv0->ClearReplies();
				tv0->AddReply(541303, 43441, 43438);
				tv0->AddReply(541304, 43441, 43439);
				return;
			}
			if (a0 == 43441) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(541306);
				tv0->ClearReplies();
				tv0->AddReply(541307, -1, 43443);
				tv0->AddReply(541308, 43445, 43444);
				return;
			}
			if (a0 == 43445) {
				f_cc_a1_v("Saveyouall");
				tv0->SetMessage(541309);
				tv0->ClearReplies();
				tv0->AddReply(541310, -1, 43446);
				tv0->AddReply(541311, -1, 43447);
				return;
			}
			if (a0 == 43420) {
				f_cc_a1_v("Sly");
				tv0->SetMessage(541287);
				tv0->ClearReplies();
				tv0->AddReply(541296, 43430, 43429);
				tv0->AddReply(541291, 43425, 43424);
				return;
			}
			if (a0 == 43425) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(541292);
				tv0->ClearReplies();
				tv0->AddReply(541293, 43427, 43426);
				tv0->AddReply(541298, -1, 43431);
				return;
			}
			if (a0 == 43427) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(541294);
				tv0->ClearReplies();
				tv0->AddReply(541295, -1, 43428);
				return;
			}
			if (a0 == 43430) {
				f_cc_a1_v("Smile");
				tv0->SetMessage(541297);
				tv0->ClearReplies();
				tv0->AddReply(541299, 43433, 43432);
				return;
			}
			if (a0 == 43433) {
				f_cc_a1_v("Smile");
				tv0->SetMessage(541300);
				tv0->ClearReplies();
				tv0->AddReply(541301, 43427, 43434);
				tv0->AddReply(541302, 43427, 43436);
				return;
			}
			if (a0 == 43417) {
				f_cc_a1_v("Grin");
				tv0->SetMessage(541284);
				tv0->ClearReplies();
				tv0->AddReply(541320, 43457, 43456);
				tv0->AddReply(541285, 43419, 43418);
				return;
			}
			if (a0 == 43457) {
				f_cc_a1_v("Sly");
				tv0->SetMessage(541321);
				tv0->ClearReplies();
				tv0->AddReply(541322, 43459, 43458);
				tv0->AddReply(541325, 43450, 43462);
				return;
			}
			if (a0 == 43459) {
				f_cc_a1_v("Sly");
				tv0->SetMessage(541323);
				tv0->ClearReplies();
				tv0->AddReply(541324, 43419, 43460);
				tv0->AddReply(541326, 43419, 43464);
				return;
			}
			if (a0 == 43419) {
				f_cc_a1_v("Saveyouall");
				tv0->SetMessage(541286);
				tv0->ClearReplies();
				tv0->AddReply(541313, 43450, 43449);
				tv0->AddReply(541327, 43452, 43466);
				return;
			}
			if (a0 == 43450) {
				f_cc_a1_v("Saveyouall");
				tv0->SetMessage(541314);
				tv0->ClearReplies();
				tv0->AddReply(541315, 43452, 43451);
				tv0->AddReply(541328, 43474, 43468);
				tv0->AddReply(541330, 43474, 43470);
				return;
			}
			if (a0 == 43452) {
				f_cc_a1_v("Smile");
				tv0->SetMessage(541316);
				tv0->ClearReplies();
				tv0->AddReply(541317, 43474, 43453);
				tv0->AddReply(541334, 43474, 43477);
				return;
			}
			if (a0 == 43474) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(541331);
				tv0->ClearReplies();
				tv0->AddReply(541332, -1, 43475);
				tv0->AddReply(541335, 43482, 43481);
				return;
			}
			if (a0 == 43482) {
				f_cc_a1_v("Smile");
				tv0->SetMessage(541336);
				tv0->ClearReplies();
				tv0->AddReply(541333, -1, 43476);
				tv0->AddReply(541337, -1, 43483);
				return;
			}
			tv3 = true;
			if (f_4a5_a0_b()) {
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

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_308_a0_b()) {
				@RemoveActor(f_420_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_308_a0_b()) {
			@RemoveActor(f_420_a0_o());
		}
	}
}

bool f_308_a0_b(void)
{
	return true;
}

bool f_30a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_426_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_4a5_a0_b()) {
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

void f_34f_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_4a5_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_361_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_39b_a1_b(a0)) {
			if (!f_3c0_a1_b(a0)) {
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
		if (!f_3c0_a1_b(a0)) {
			if (!f_39b_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_39b_a1_b(object a0)
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
	return f_40a_a1_b(L4);
}

bool f_3c0_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_435_a0_i() + "m";
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
	return f_40a_a1_b(L4);
}

void f_3eb_a1_v(string a0)
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

void f_3fb_a2_v(string a0, bool a1)
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

bool f_40a_a1_b(string a0)
{
	if (f_4a5_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_419_a0_v(void)
{
	if (f_4a5_a0_b()) {
		@lshStopSpeech();
	}
}

object f_420_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_426_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_430_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_435_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_43e_a2_v(object a0, object a1)
{
	@SetVariable("ook12Klara2Sobor1", 1);
}

void f_444_a2_v(object a0, object a1)
{
	@SetVariable("ook12Klara2Sobor2", 1);
}

void f_44a_a2_v(object a0, object a1)
{
	@SetVariable("ook12Klara2Sobor3", 1);
}

bool f_450_a1_b(object a0)
{
	if (f_430_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_45c_a1_b(object a0)
{
	if (f_430_a1_i("game_final") == 3) {
		return true;
	}
	return false;
}

bool f_468_a1_b(object a0)
{
	if (f_430_a1_i("ook12Klara2Sobor1") == 0) {
		return true;
	}
	return false;
}

bool f_474_a1_b(object a0)
{
	if (f_430_a1_i("ook12Klara2Sobor2") == 0) {
		return true;
	}
	return false;
}

bool f_480_a1_b(object a0)
{
	if (f_430_a1_i("ook12Klara2Sobor3") == 0) {
		return true;
	}
	return false;
}

int f_48c_a0_i(void)
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

int f_49d_a0_i(void)
{
	return 515540;
}

int f_49f_a0_i(void)
{
	return 502865;
}

string f_4a1_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_4a3_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_4a5_a0_b(void)
{
	return true;
}

