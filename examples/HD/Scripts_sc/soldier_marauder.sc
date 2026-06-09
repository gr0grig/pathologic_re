event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnTimer 7;
event OnAttacked 17;
event OnSee 1;
event OnHear 3;
event OnCollision 10;
event OnActorStuck 28;
event OnHit2 43;

task t0
{
	void init(object a0)
	{
		if (f_21f_a1_b(a0)) {
			f_3aa_a0_v();
		}
		f_392_a0_v();
		f_11_a1_v(a0);
	}

	void f_11_a1_v(object a0)
	{
		disable OnUse;
		f_2a_a1_v(a0);
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
			f_355_a1_v(a0);
		}
	}

	void f_2a_a1_v(object a0)
	{
		if (a0 == null) {
			f_85_a1_v("fdie");
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
			f_309_a1_v(L4);
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

	void f_85_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_309_a1_v(a0);
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

maintask t1
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		for (; ; ) {
			@SetTimer(110, 0.30000001192092896);
			f_103_a0_v();
		}
	}

	bool f_ae_a0_b(void)
	{
		float L0;
		@GetBrightness(L0);
		return L0 >= 0.5;
	}

	void OnTimer(int a0)
	{
		bool L0;
		if (a0 != 110) {
			return;
		}
		@IsInWalkMode(L0);
		if (L0) {
			if (f_ae_a0_b()) {
				@SwitchToRun();
			} else {
				@SwitchToWalk();
			}
		}
	}

	void f_c7_a0_v(void)
	{
		f_14a_a0_v();
		@KillTimer(110);
	}

	void OnDeath(object a0)
	{
		f_c7_a0_v();
		global.OnDeath(a0);
	}

	void OnAttacked(object a0)
	{
		if (!f_259_a1_b(a0)) {
			return;
		}
		f_c7_a0_v();
		f_40c_a1_v(a0);
	}

	void OnSee(object a0)
	{
		if (f_41a_a1_b(a0)) {
			f_c7_a0_v();
			f_427_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_42f_a1_b(a0)) {
			f_c7_a0_v();
			f_43c_a1_v(a0);
		}
	}

	void f_103_a0_v(void)
	{
		float L0;
		tv0 = false;
		tv1 = false;
		@rand(L0, 0.5);
		@Sleep(L0);
		while (!tv0) {
			Vector L1;
			if (!tv1) {
				for (; ; ) {
					Vector L2;
					bool L3;
					@GetPosition(L2);
					@GetRandomPFPointInCircle(L1, L2, f_13e_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_151_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_ae_a0_b(), L5);
					L4 = null;
					if (L5) {
						t2{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_13e_a0_f(void)
	{
		float L0;
		@GetCameraFarDistance(L0);
		return L0;
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_14a_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	object f_151_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t2
{
	void init(void)
	{
	}
}

task t3
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_158_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_338_a1_V(f_338_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void init(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_158_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_158_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_213_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_158_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_213_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_158_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_203_a0_b())) {
				@Stop();
				tv1 = f_213_a0_V() + L2;
			}
		}
	}

	void f_1f3_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_1f3_a0_v();
		global.OnDeath(a0);
	}

	bool f_203_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_218_a1_V(tv0);
		return f_347_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_213_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_218_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_21f_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_224_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_230_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_235_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_230_a1_b(a0)) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	return true;
}

bool f_259_a1_b(object a0)
{
	int L0;
	if (!f_235_a1_b(a0)) {
		return false;
	}
	if (!f_224_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_271_a1_v(object a0)
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

void f_29d_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_338_a1_V(f_218_a1_V(a0));
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
			f_2e1_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_271_a1_v(a0);
}

void f_2e1_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_271_a1_v(a0);
}

void f_2ef_a3_v(string a0, int a1, int a2)
{
	if (f_342_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_2fa_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_342_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

void f_309_a1_v(string a0)
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

object f_332_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_338_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_342_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_347_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

int f_34f_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_355_a1_v(object a0)
{
	if (f_34f_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_362_a2_v(int a0, int a1)
{
	int L0;
	bool L1;
	if (a0 > a1) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	L0 = 0;
	if (a0 != a1) {
		@irand(L0, a1 - a0);
	} else {
		if (a0 == 0) {
			return;
		}
	}
	L0 = L0 + a0;
	if (L0 == 0) {
		return;
	}
	@AddItem(L1, f_3ce_a1_i("Money"), 0, L0);
}

void f_381_a1_v(string a0)
{
	object L0;
	int L1;
	bool L2;
	@CreateInvItem(L0);
	L0->SetItemName(a0);
	L0->SetProperty("Organ", 1);
	L0->GetItemID(L1);
	@AddItem(L2, L0, 0, 1);
}

void f_392_a0_v(void)
{
	if (f_34f_a0_i() != 1) {
		return;
	}
	f_381_a1_v("liver");
	f_381_a1_v("kidney");
	f_381_a1_v("heart");
	f_381_a1_v("blood");
}

void f_3aa_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_362_a2_v(500, 1000);
	f_2fa_a4_v("rifle_ammo", 1, 3, 3);
	f_2fa_a4_v("rusk", 1, 3, 2);
	f_2ef_a3_v("bandage", 1, 6);
	f_2ef_a3_v("tourniquet", 1, 6);
}

int f_3ce_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_3d3_a1_v(object a0)
{
	t0{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_29d_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_2e1_a5_v(a0, a1, a2, a4, a5);
}

void OnPropertyChange(object a0, string a1)
{
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
	if (f_21f_a1_b(a0)) {
		@ReportReputationChange(a0, f_332_a0_o(), 0.05000000074505806, true);
	}
	f_414_a1_v(a0);
}

void f_40c_a1_v(object a0)
{
	t3{a0};
}

void f_414_a1_v(object a0)
{
	f_3d3_a1_v(a0);
}

bool f_41a_a1_b(object a0)
{
	bool L0;
	if (!f_259_a1_b(a0)) {
		return false;
	}
	@IsPlayerActor(a0, L0);
	return L0;
}

void f_427_a1_v(object a0)
{
	t3{a0};
}

bool f_42f_a1_b(object a0)
{
	bool L0;
	if (!f_259_a1_b(a0)) {
		return false;
	}
	@IsPlayerActor(a0, L0);
	return L0;
}

void f_43c_a1_v(object a0)
{
	t3{a0};
}

