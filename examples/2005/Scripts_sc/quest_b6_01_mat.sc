event OnLoad 5;
event OnDialogReply 11;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_52f_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_589_a1_b(f_636_a0_o());
		if (!f_534_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7e4_a0_i());
		L0->SetNPCDescription(f_7e2_a0_i());
		L0->SetPhoto(f_7e6_a0_s());
		L0->SetPhoto2(f_7e8_a0_s());
		L0->SetPlayerName(f_7d1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_578_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t2
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
			if (f_710_a1_b(tv1)) {
				f_6a9_a2_v(tv1, tv0);
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520595);
				tv0->ClearReplies();
				tv0->AddReply(520596, 21802, 21801);
				tv0->AddReply(520621, 29795, 21829);
				break;
			}
			f_eb_a1_v("Neutral");
			tv0->SetMessage(520622);
			tv0->ClearReplies();
			if (f_71c_a1_b(tv1)) {
				tv0->AddReply(520623, 21833, 21832);
			}
			if (f_728_a1_b(tv1) && f_732_a1_b(tv1)) {
				tv0->AddReply(520626, 21836, 21835);
			}
			if (f_732_a1_b(tv1) && f_73e_a1_b(tv1)) {
				tv0->AddReply(520686, 21897, 21896);
			}
			if (f_704_a1_b(tv1)) {
				tv0->AddReply(528534, 29927, 29926);
			}
			tv0->AddReply(520629, -1, 21838);
			break;
			return;
		}
		if (f_7ea_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_613_a1_v(tv2);
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

	void f_eb_a1_v(string a0)
	{
		if (!f_7ea_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_61a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_62f_a0_v();
			if (a1 == 21809) {
				f_6af_a2_v(tv1, tv0);
			}
			if (a1 == 21822) {
				f_6af_a2_v(tv1, tv0);
			}
			if (a1 == 21834) {
				f_6af_a2_v(tv1, tv0);
			}
			if (a1 == 21895) {
				f_6b8_a2_v(tv1, tv0);
				f_6e9_a2_v(tv1, tv0);
				f_6dd_a2_v(tv1, tv0);
				f_6f9_a2_v(tv1, tv0);
			}
			if (a1 == 21890) {
				f_6b8_a2_v(tv1, tv0);
				f_6e9_a2_v(tv1, tv0);
				f_6f9_a2_v(tv1, tv0);
				f_6dd_a2_v(tv1, tv0);
			}
			if (a1 == 29926) {
				f_6e3_a2_v(tv1, tv0);
			}
			if (a0 == 21800) {
				if (f_710_a1_b(tv1)) {
					f_6a9_a2_v(tv1, tv0);
					f_eb_a1_v("Neutral");
					tv0->SetMessage(520595);
					tv0->ClearReplies();
					tv0->AddReply(520596, 21802, 21801);
					tv0->AddReply(520621, 29795, 21829);
					return;
				}
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520622);
				tv0->ClearReplies();
				if (f_71c_a1_b(tv1)) {
					tv0->AddReply(520623, 21833, 21832);
				}
				if (f_728_a1_b(tv1) && f_732_a1_b(tv1)) {
					tv0->AddReply(520626, 21836, 21835);
				}
				if (f_732_a1_b(tv1) && f_73e_a1_b(tv1)) {
					tv0->AddReply(520686, 21897, 21896);
				}
				if (f_704_a1_b(tv1)) {
					tv0->AddReply(528534, 29927, 29926);
				}
				tv0->AddReply(520629, -1, 21838);
				return;
			}
			if (a0 == 29927) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528535);
				tv0->ClearReplies();
				tv0->AddReply(528536, 29929, 29928);
				return;
			}
			if (a0 == 29929) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528537);
				tv0->ClearReplies();
				tv0->AddReply(528538, 29931, 29930);
				return;
			}
			if (a0 == 29931) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528539);
				tv0->ClearReplies();
				tv0->AddReply(528540, 29933, 29932);
				return;
			}
			if (a0 == 29933) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528541);
				tv0->ClearReplies();
				tv0->AddReply(528542, 29935, 29934);
				return;
			}
			if (a0 == 29935) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528543);
				tv0->ClearReplies();
				tv0->AddReply(528544, 29937, 29936);
				return;
			}
			if (a0 == 29937) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528545);
				tv0->ClearReplies();
				tv0->AddReply(528546, -1, 29938);
				return;
			}
			if (a0 == 21897) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520687);
				tv0->ClearReplies();
				tv0->AddReply(520689, 21900, 21899);
				tv0->AddReply(520688, -1, 21898);
				return;
			}
			if (a0 == 21900) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520690);
				tv0->ClearReplies();
				tv0->AddReply(520691, -1, 21901);
				tv0->AddReply(520692, -1, 21902);
				return;
			}
			if (a0 == 21836) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520627);
				tv0->ClearReplies();
				tv0->AddReply(520628, 21885, 21837);
				tv0->AddReply(520677, 21887, 21886);
				return;
			}
			if (a0 == 21887) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520678);
				tv0->ClearReplies();
				tv0->AddReply(520679, 21885, 21888);
				return;
			}
			if (a0 == 21885) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520676);
				tv0->ClearReplies();
				tv0->AddReply(520681, 21892, 21891);
				tv0->AddReply(520680, -1, 21890);
				return;
			}
			if (a0 == 21892) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520682);
				tv0->ClearReplies();
				tv0->AddReply(520683, 21894, 21893);
				tv0->AddReply(528420, 29803, 29802);
				return;
			}
			if (a0 == 29803) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528421);
				tv0->ClearReplies();
				tv0->AddReply(528422, 21894, 29804);
				return;
			}
			if (a0 == 21894) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520684);
				tv0->ClearReplies();
				tv0->AddReply(520685, -1, 21895);
				return;
			}
			if (a0 == 21833) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520624);
				tv0->ClearReplies();
				tv0->AddReply(520625, -1, 21834);
				return;
			}
			if (a0 == 21802) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520597);
				tv0->ClearReplies();
				tv0->AddReply(528414, 29795, 29794);
				return;
			}
			if (a0 == 29795) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528415);
				tv0->ClearReplies();
				tv0->AddReply(528416, 29798, 29797);
				tv0->AddReply(528418, 21806, 29799);
				return;
			}
			if (a0 == 29798) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(528417);
				tv0->ClearReplies();
				tv0->AddReply(520598, 21804, 21803);
				tv0->AddReply(520620, 21808, 21827);
				return;
			}
			if (a0 == 21804) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520599);
				tv0->ClearReplies();
				tv0->AddReply(520600, 21806, 21805);
				return;
			}
			if (a0 == 21806) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520601);
				tv0->ClearReplies();
				tv0->AddReply(520602, 21808, 21807);
				tv0->AddReply(520605, 21811, 21810);
				return;
			}
			if (a0 == 21811) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520606);
				tv0->ClearReplies();
				tv0->AddReply(520607, 21813, 21812);
				tv0->AddReply(520617, 21824, 21823);
				return;
			}
			if (a0 == 21824) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520618);
				tv0->ClearReplies();
				tv0->AddReply(520619, 21815, 21825);
				return;
			}
			if (a0 == 21813) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520608);
				tv0->ClearReplies();
				tv0->AddReply(520609, 21815, 21814);
				tv0->AddReply(520616, -1, 21822);
				return;
			}
			if (a0 == 21815) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520610);
				tv0->ClearReplies();
				tv0->AddReply(520611, 21817, 21816);
				tv0->AddReply(520615, 21817, 21821);
				return;
			}
			if (a0 == 21817) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520612);
				tv0->ClearReplies();
				tv0->AddReply(520613, 21808, 21818);
				tv0->AddReply(520614, -1, 21820);
				return;
			}
			if (a0 == 21808) {
				f_eb_a1_v("Neutral");
				tv0->SetMessage(520603);
				tv0->ClearReplies();
				tv0->AddReply(520604, -1, 21809);
				tv0->AddReply(528419, -1, 29801);
				return;
			}
			tv3 = true;
			if (f_7ea_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t3
{
	var Vector tv0;
	var bool tv1;

	void f_3e1_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_412_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_636_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv1 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(f_636_a0_o());
			@Hold();
		}
		f_483_a0_v();
	}

	void OnLoad(void)
	{
		f_492_a0_v();
	}

	void f_412_a0_v(void)
	{
		if (!f_52f_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_4c8_a0_v();
		}
	}

	bool f_426_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_526_a1_b(L0);
	}

	void f_435_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_43a_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_514_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_450_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_459_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_459_a0_v();
			if (f_52f_a0_b() && f_43a_a0_b()) {
				if (f_426_a0_b()) {
					f_5c3_a1_b(f_636_a0_o());
				}
			} else {
				f_435_a0_v();
				f_450_a0_v();
			}
		}
	}

	void f_483_a0_v(void)
	{
		f_50f_a0_v();
		f_459_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_492_a0_v(void)
	{
		@StopGroup0();
		f_459_a0_v();
		f_613_a1_v("Neutral");
		f_450_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_450_a0_v();
		} else {
			f_613_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_50f_a0_v();
			f_526_a1_b(a0);
			enable OnUse;
			f_3e1_a1_v(a0);
			f_613_a1_v("Neutral");
			f_459_a0_v();
			f_450_a0_v();
		}
	}
}

void f_4c8_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_52f_a0_b()) {
		return;
	}
	L0 = f_698_a0_i();
	for (L1 = 0; L1 < 5 && f_52f_a0_b(); L1++) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_691_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_50d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_50d_a0_b(void)
{
	return true;
}

void f_50f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_514_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_51c_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_526_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_51c_a1_b(L0);
}

bool f_52f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_534_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_63c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_7ea_a0_b()) {
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

void f_578_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_7ea_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_589_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_5c3_a1_b(a0)) {
			if (!f_5e8_a1_b(a0)) {
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
		if (!f_5e8_a1_b(a0)) {
			if (!f_5c3_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_5c3_a1_b(object a0)
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
	return f_620_a1_b(L4);
}

bool f_5e8_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_688_a0_i() + "m";
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
	return f_620_a1_b(L4);
}

void f_613_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_61a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_620_a1_b(string a0)
{
	if (f_7ea_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_62f_a0_v(void)
{
	if (f_7ea_a0_b()) {
		@lshStopSpeech();
	}
}

object f_636_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_63c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_646_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_64b_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_657_a3_v(object a0, object a1, int a2)
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
		f_64b_a2_v(L0, a2);
	}
}

void f_66a_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_657_a3_v(a0, L0, a2);
}

bool f_677_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_683_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_688_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_691_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_698_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_691_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_6a9_a2_v(object a0, object a1)
{
	@SetVariable("oob6Mat1", 1);
}

void f_6af_a2_v(object a0, object a1)
{
	@SetVariable("b6q01", 3);
	f_75c_a0_v();
}

void f_6b8_a2_v(object a0, object a1)
{
	object L0;
	int L1;
	@SetVariable("b6q01", 4);
	L0 = f_79f_a0_o();
	L0->AddMark("b6q01MatGotoByk", "pt_b6q01_bull", 1, 530992, f_683_a0_f());
	f_769_a0_v();
	a0->RemoveItemByType(L1, "alpha_pills", 50);
	f_677_a2_b("quest_b6_01", "init_altar");
	f_677_a2_b("quest_b6_01", "clean_termitnik");
}

void f_6dd_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_6e3_a2_v(object a0, object a1)
{
	@SetVariable("oob6Mat2", 1);
}

void f_6e9_a2_v(object a0, object a1)
{
	f_7b0_a3_v(f_79f_a0_o(), "pt_map_kurgan", 2);
	a1->ShowMap(f_79f_a0_o());
}

void f_6f9_a2_v(object a0, object a1)
{
	@Trace("recipe1 is given");
	f_66a_a3_v(a0, "recipe1", 1);
}

bool f_704_a1_b(object a0)
{
	if (f_646_a1_i("oob6Mat2") == 0) {
		return true;
	}
	return false;
}

bool f_710_a1_b(object a0)
{
	if (f_646_a1_i("oob6Mat1") == 0) {
		return true;
	}
	return false;
}

bool f_71c_a1_b(object a0)
{
	if (f_646_a1_i("b6q01") == 2) {
		return true;
	}
	return false;
}

bool f_728_a1_b(object a0)
{
	if (f_748_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_732_a1_b(object a0)
{
	if (f_646_a1_i("b6q01") == 3) {
		return true;
	}
	return false;
}

bool f_73e_a1_b(object a0)
{
	if (f_74f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_748_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "alpha_pills");
	return L0 >= 50;
}

bool f_74f_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "alpha_pills");
	return L0 > 0 && L0 < 50;
}

void f_75c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 363, 1, 525663);
	f_783_a2_b(L0, 265);
}

void f_769_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 364, 1, 525664);
	f_783_a2_b(L0, 265);
}

object f_776_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_783_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_776_a0_o();
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

object f_79f_a0_o(void)
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

void f_7b0_a3_v(object a0, string a1, float a2)
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

int f_7d1_a0_i(void)
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

int f_7e2_a0_i(void)
{
	return 515545;
}

int f_7e4_a0_i(void)
{
	return 502870;
}

string f_7e6_a0_s(void)
{
	return "ui/NPC_Mat.png";
}

string f_7e8_a0_s(void)
{
	return "ui/NPC_Mat_b.png";
}

bool f_7ea_a0_b(void)
{
	return true;
}

