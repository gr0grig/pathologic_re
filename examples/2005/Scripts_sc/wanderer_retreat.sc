event OnLoad 5;
event OnUse 0;
event OnUnload 6;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnTrigger 26;
event OnSee 1;
event OnCollision 10;
event OnActorStuck 28;
event OnTimer 7;
event OnHit2 43;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_516_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	void init(object a0)
	{
		disable OnUse;
		f_2e_a1_v(a0);
		f_64a_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_645_a1_i(a0);
		if (L0 > 0) {
			f_648_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_64c_a0_v();
	}

	void f_2e_a1_v(object a0)
	{
		if (a0 == null) {
			f_89_a1_v("fdie");
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
			f_51b_a1_v(L4);
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

	void f_89_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_51b_a1_v(a0);
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

task t2
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_645_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_19e_a0_v();
			}
			f_648_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_5df_a1_v(a0);
		L0 = f_621_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_19e_a0_v();
			}
			f_62b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_671_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_633_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_19e_a0_v();
				}
				f_63d_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_652_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_19e_a0_v();
			}
			f_655_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_589_a2_b(a0, a1)) {
			f_19e_a0_v();
			f_5a9_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_657_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_19e_a0_v();
				}
				f_65a_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_5ec_a1_b(a0)) {
			f_19e_a0_v();
			f_5fc_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_19e_a0_v();
		f_64c_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_5c2_a1_b(a0)) {
			f_19e_a0_v();
			f_5d9_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_516_a0_b()) {
			return;
		}
		L0 = f_610_a0_i();
		for (L1 = 0; L1 < 5 && f_516_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_609_a1_s(L3));
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
			if (!f_19c_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_19c_a0_b(void)
	{
		return true;
	}

	void f_19e_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

maintask t3
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_670_a0_v();
		f_1b1_a0_v();
		for (; ; ) {
			f_25e_a0_v();
		}
	}

	void f_1b1_a0_v(void)
	{
		if (!f_516_a0_b()) {
			f_64c_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_645_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_2a5_a0_v();
			}
			f_648_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_5df_a1_v(a0);
		L0 = f_621_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_2a5_a0_v();
			}
			f_62b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_671_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_633_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_2a5_a0_v();
				}
				f_63d_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_652_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_2a5_a0_v();
			}
			f_655_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_589_a2_b(a0, a1)) {
			f_2a5_a0_v();
			f_5a9_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_657_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_2a5_a0_v();
				}
				f_65a_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_5ec_a1_b(a0)) {
			f_2a5_a0_v();
			f_5fc_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_5c2_a1_b(a0)) {
			f_2a5_a0_v();
			f_5d9_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_2a5_a0_v();
		f_64c_a0_v();
	}

	void f_25e_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_299_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_2b7_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_2b5_a0_b(), L5);
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

	float f_299_a0_f(void)
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

	void f_2a5_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_2a5_a0_v();
		global.OnDeath(a0);
	}

	bool f_2b5_a0_b(void)
	{
		return false;
	}

	object f_2b7_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t4
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_35f_a0_v();
		f_64c_a0_v();
	}

	Vector f_2c4_a1_V(float a0)
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
		L3 = f_54a_a1_V(f_54a_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_2c4_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_2c4_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_43a_a0_V() + L0;
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
				L3 = f_2c4_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_43a_a0_V() + L3;
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
			L2 = f_2c4_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_36f_a0_b())) {
				@Stop();
				tv1 = f_43a_a0_V() + L2;
			}
		}
	}

	void f_35f_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_35f_a0_v();
		global.OnDeath(a0);
	}

	bool f_36f_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_43f_a1_V(tv0);
		return f_554_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_37f_a1_V(float a0)
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
		L3 = f_54a_a1_V(f_54a_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_37f_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_37f_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_43a_a0_V() + L0;
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
				L3 = f_37f_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_43a_a0_V() + L3;
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
			L2 = f_37f_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_42a_a0_b())) {
				@Stop();
				tv1 = f_43a_a0_V() + L2;
			}
		}
	}

	void f_41a_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_41a_a0_v();
		global.OnDeath(a0);
	}

	bool f_42a_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_43f_a1_V(tv0);
		return f_554_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_43a_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_43f_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_446_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_44b_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_457_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_45c_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_457_a1_b(a0)) {
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

bool f_480_a1_b(object a0)
{
	int L0;
	if (!f_45c_a1_b(a0)) {
		return false;
	}
	if (!f_44b_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_498_a1_v(object a0)
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

void f_4c4_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_54a_a1_V(f_43f_a1_V(a0));
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
			f_508_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_498_a1_v(a0);
}

void f_508_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_498_a1_v(a0);
}

bool f_516_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_51b_a1_v(string a0)
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

object f_544_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_54a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_554_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

void f_55c_a1_v(object a0)
{
	t1{a0};
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
	f_55c_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_4c4_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_508_a5_v(a0, a1, a2, a4, a5);
}

bool f_589_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_65c_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_661_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_666_a1_b(a0);
			}
		}
	}
	return false;
}

void f_5a9_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_65f_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_664_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_669_a1_v(a0);
			}
		}
	}
}

bool f_5c2_a1_b(object a0)
{
	if (f_65c_a1_b(a0) && f_446_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_5d9_a1_v(object a0)
{
	f_65f_a1_v(a0);
}

void f_5df_a1_v(object a0)
{
	if (f_446_a1_b(a0)) {
		@ReportReputationChange(a0, f_544_a0_o(), 0.0);
	}
}

bool f_5ec_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_66b_a1_b(L0);
	}
	return false;
}

void f_5fc_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_66e_a1_v(L0);
	}
}

string f_609_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_610_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_609_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_621_a1_i(object a0)
{
	return f_480_a1_b(a0) ? 2 : 0;
}

void f_62b_a1_v(object a0)
{
	t4{a0};
}

int f_633_a2_i(object a0, bool a1)
{
	return f_480_a1_b(a0) ? 2 : 0;
}

void f_63d_a1_v(object a0)
{
	t5{a0};
}

int f_645_a1_i(object a0)
{
	return 0;
}

void f_648_a1_v(object a0)
{
}

void f_64a_a1_v(object a0)
{
}

void f_64c_a0_v(void)
{
	t0{};
}

int f_652_a1_i(object a0)
{
	return 0;
}

void f_655_a1_v(object a0)
{
}

int f_657_a2_i(string a0, object a1)
{
	return 0;
}

void f_65a_a2_v(string a0, object a1)
{
}

bool f_65c_a1_b(object a0)
{
	return false;
}

void f_65f_a1_v(object a0)
{
}

bool f_661_a1_b(object a0)
{
	return false;
}

void f_664_a1_v(object a0)
{
}

bool f_666_a1_b(object a0)
{
	return false;
}

void f_669_a1_v(object a0)
{
}

bool f_66b_a1_b(object a0)
{
	return false;
}

void f_66e_a1_v(object a0)
{
}

void f_670_a0_v(void)
{
}

bool f_671_a3_b(object a0, object a1, bool a2)
{
	return true;
}

