event OnDialogReply 11;
event OnUse 0;
event OnAttacked 17;
event OnTimer 7;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnHit2 43;

var object g0;
var bool g1;

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
		if (!f_3a0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_562_a0_i());
		L0->SetNPCDescription(f_560_a0_i());
		L0->SetPhoto(f_564_a0_s());
		L0->SetPhoto2(f_566_a0_s());
		L0->SetPlayerName(f_53c_a0_i());
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
		f_3e5_a1_v(a0);
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
			if (f_4e0_a1_b(tv1)) {
				f_4cf_a2_v(tv1, tv0);
				f_8e_a1_v("Neutral");
				tv0->SetMessage(514445);
				tv0->ClearReplies();
				tv0->AddReply(514456, 15687, 15686);
				tv0->AddReply(514446, 15675, 15674);
				break;
			}
			return;
		}
		if (f_568_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3f7_a1_v(tv2);
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
		if (!f_568_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_407_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_421_a0_v();
			if (a1 == 42007) {
				f_4a2_a2_v(tv1, tv0);
				f_4a8_a2_v(tv1, tv0);
				f_4b9_a2_v(tv1, tv0);
			}
			if (a1 == 42008) {
				f_491_a2_v(tv1, tv0);
			}
			if (a1 == 15679) {
				f_491_a2_v(tv1, tv0);
			}
			if (a1 == 42005) {
				f_4bf_a2_v(tv1, tv0);
			}
			if (a0 == 15673) {
				if (f_4e0_a1_b(tv1)) {
					f_4cf_a2_v(tv1, tv0);
					f_8e_a1_v("Neutral");
					tv0->SetMessage(514445);
					tv0->ClearReplies();
					tv0->AddReply(514456, 15687, 15686);
					tv0->AddReply(514446, 15675, 15674);
					return;
				}
			}
			if (a0 == 15675) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(514447);
				tv0->ClearReplies();
				tv0->AddReply(514448, 15677, 15676);
				tv0->AddReply(514452, 15681, 15680);
				return;
			}
			if (a0 == 15681) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(514453);
				tv0->ClearReplies();
				tv0->AddReply(514454, 15677, 15682);
				tv0->AddReply(514455, 15677, 15684);
				return;
			}
			if (a0 == 15677) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(514449);
				tv0->ClearReplies();
				tv0->AddReply(514450, 42006, 15678);
				tv0->AddReply(514451, -1, 15679);
				tv0->AddReply(540038, -1, 42005);
				return;
			}
			if (a0 == 42006) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(540039);
				tv0->ClearReplies();
				if (f_4d5_a1_b(tv1)) {
					tv0->AddReply(540040, -1, 42007);
				}
				tv0->AddReply(540041, -1, 42008);
				return;
			}
			if (a0 == 15687) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(514457);
				tv0->ClearReplies();
				tv0->AddReply(514458, 15689, 15688);
				return;
			}
			if (a0 == 15689) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(514459);
				tv0->ClearReplies();
				tv0->AddReply(514460, 15681, 15690);
				return;
			}
			tv3 = true;
			if (f_568_a0_b()) {
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
		g1 = false;
		while (true) {
			f_1d5_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		int L0;
		f_216_a0_v();
		L0 = t0{a0};
		if (L0 == 0) {
			bool L1;
			g1 = true;
			@PlayAnimation("all", "attack_begin2");
			@WaitForAnimEnd(L1);
			@PlayAnimation("all", "attack_end2");
			@WaitForAnimEnd(L1);
			f_46d_a2_b("quest_d11_01", "teleport");
		}
	}

	void OnAttacked(object a0)
	{
		f_216_a0_v();
		f_46d_a2_b("quest_d11_01", "soldier_attack");
		@SetProperty("health", 0);
		@SetVariable("d11q01", 3);
		f_46d_a2_b("quest_d11_01", "restore_andrei");
		f_4ec_a0_v();
	}

	void f_1d5_a2_v(float a0, float a1)
	{
		if (!f_39b_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_224_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1f0_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_315_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1f0_a0_b()) {
				if (!tv2) {
					f_416_a1_v(tv4);
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

	void f_216_a0_v(void)
	{
		f_275_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}

	void f_224_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_39b_a0_b()) {
			return;
		}
		L0 = f_480_a0_i();
		for (L1 = 0; L1 < 5 && f_39b_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_479_a1_s(L3));
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
			if (!f_273_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_273_a0_b(void)
	{
		return true;
	}

	void f_275_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t3
{
	void init(object a0)
	{
		disable OnUse;
		f_293_a1_v(a0);
		@SetRTEnvelope(50, 40);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_553_a1_v(a0);
		}
	}

	void f_293_a1_v(object a0)
	{
		if (a0 == null) {
			f_2ee_a1_v("fdie");
		} else {
			Vector L0;
			a0->GetPosition(L0);
			Vector L1;
			@GetPosition(L1);
			Vector L2;
			@GetDirection(L2);
			Vector L3;
			L3 = L1 - L0;
			string L4;
			if (L3.x * L2.x + L3.z * L2.z >= 0) {
				L4 = "fdie";
			} else {
				L4 = "bdie";
			}
			@RemoveRTEnvelope();
			@SetDeathState();
			@Stop();
			@StopAsync();
			object L5;
			L5 = a0;
			if (a0->FuncExist("GetScriptProperty", 2)) {
				bool L6;
				a0->HasScriptProperty(L6, "Owner");
				if (L6) {
					a0->GetScriptProperty(L5, "Owner");
					if (L5 == null) {
						L5 = a0;
					}
				}
			}
			bool L7;
			if (L5->FuncExist("@GetEyesHeight", 1)) {
				float L8;
				Vector L9;
				L5->GetEyesHeight(L8);
				L9 = [0.0, 0.0, 0.0];
				L9.y = L8;
				@LookAsync(a0, "head", L9);
				L7 = true;
			} else {
				L7 = false;
			}
			f_428_a1_v(L4);
			@PlayAnimation("all", L4);
			@WaitForAnimEnd();
			if (L7) {
				@StopAsync();
				@UnlookAsync("head");
			}
			@LockAnimationEnd("all", L4);
			@RemoveEnvelope();
		}
	}

	void f_2ee_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_428_a1_v(a0);
		@PlayAnimation("all", a0);
		@WaitForAnimEnd();
		@LockAnimationEnd("all", a0);
		@RemoveEnvelope();
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
	}

	void OnPropertyChange(object a0, string a1)
	{
	}

	void OnDeath(object a0)
	{
	}
}

Vector f_30e_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_315_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_31d_a1_v(object a0)
{
	bool L0;
	int L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	string L6;
	if (a0 == null) {
		return;
	}
	@IsDead(L0);
	if (L0) {
		return;
	}
	@GetSecondaryAnimationType(L1);
	if (L1 < 0) {
		return;
	}
	a0->GetPosition(L2);
	@GetPosition(L3);
	@GetDirection(L4);
	L5 = L3 - L2;
	if (L5.x * L4.x + L5.z * L4.z >= 0) {
		L6 = "fhit";
	} else {
		L6 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L6 + "1", L6 + "2", -10);
}

void f_349_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_457_a1_V(f_30e_a1_V(a0));
		object L1;
		@CreateVectorVector(L1);
		int L2;
		for (L2 = 1; ; L2++) {
			bool L3;
			Vector L4;
			Vector L5;
			@GetGeometryLocator("hit" + L2, L3, L4, L5);
			if (!L3) {
				break;
			}
			if ((L5 | L0) >= 0.7071067690849304) {
				L1->add(L4);
			}
		}
		int L6;
		L1->size(L6);
		if (L6) {
			int L7;
			Vector L8;
			@irand(L7, L6);
			L1->get(L8, L7);
			f_38d_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_31d_a1_v(a0);
}

void f_38d_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_31d_a1_v(a0);
}

bool f_39b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3a0_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_457_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_568_a0_b()) {
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

void f_3e5_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_568_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_3f7_a1_v(string a0)
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

void f_407_a2_v(string a0, bool a1)
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

void f_416_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_421_a0_v(void)
{
	if (f_568_a0_b()) {
		@lshStopSpeech();
	}
}

void f_428_a1_v(string a0)
{
	bool L0;
	@IsExisting3DSound(L0, a0);
	if (!L0) {
		int L1;
		for (L1 = 0; ; L1++) {
			bool L2;
			@IsExisting3DSound(L2, a0 + (L1 + 1));
			if (!L2) {
				break;
			}
		}
		if (!L1) {
			return;
		}
		int L3;
		@irand(L3, L1);
		a0 = a0 + (L3 + 1);
	}
	bool L4;
	@Is3DSoundLoaded(L4, a0);
	if (L4) {
		float L5;
		Vector L6;
		Vector L7;
		@GetEyesHeight(L5);
		@GetDirection(L6);
		L7 = L6 * 50;
		L7.y += L5;
		@PlayGlobalSound(a0, L7);
	}
}

object f_451_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_457_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_461_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_466_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_46d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_479_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_480_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_479_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_491_a2_v(object a0, object a1)
{
	@SetVariable("d11q01", 3);
	f_506_a0_v();
	f_46d_a2_b("quest_d11_01", "restore_andrei");
	a1->SetReturnValue(0);
}

void f_4a2_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "burah_serum", 1);
}

void f_4a8_a2_v(object a0, object a1)
{
	@SetVariable("d11q01", 3);
	f_4f9_a0_v();
	f_46d_a2_b("quest_d11_01", "restore_andrei");
	a1->SetReturnValue(1);
}

void f_4b9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_4bf_a2_v(object a0, object a1)
{
	@SetVariable("d11q01", 3);
	f_46d_a2_b("quest_d11_01", "soldier_attack");
	f_46d_a2_b("quest_d11_01", "restore_andrei");
}

void f_4cf_a2_v(object a0, object a1)
{
	@SetVariable("ood11Officer1", 1);
}

bool f_4d5_a1_b(object a0)
{
	if (f_466_a2_b(a0, "burah_serum")) {
		return true;
	}
	return false;
}

bool f_4e0_a1_b(object a0)
{
	if (f_461_a1_i("ood11Officer1") == 0) {
		return true;
	}
	return false;
}

void f_4ec_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 794, 1, 543369);
	f_520_a2_b(L0, 192);
}

void f_4f9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 769, 1, 540066);
	f_520_a2_b(L0, 192);
}

void f_506_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 768, 1, 540065);
	f_520_a2_b(L0, 192);
}

object f_513_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_520_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_513_a0_o();
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

int f_53c_a0_i(void)
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

int f_54d_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_553_a1_v(object a0)
{
	if (f_54d_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

int f_560_a0_i(void)
{
	return 515572;
}

int f_562_a0_i(void)
{
	return 504031;
}

string f_564_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_566_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_568_a0_b(void)
{
	return false;
}

void f_56a_a1_v(object a0)
{
	object L0;
	@GetScene(L0);
	L0->RemoveStationaryActor(f_451_a0_o());
	t3{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_349_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_38d_a5_v(a0, a1, a2, a4, a5);
}

void OnPropertyChange(object a0, string a1)
{
	if (g1) {
		return;
	}
	if (a1 == "health") {
		float L0;
		@GetProperty("health", L0);
		if (L0 <= 0) {
			@SignalDeath(a0);
		}
	}
}

void OnDeath(object a0)
{
	f_56a_a1_v(a0);
}

