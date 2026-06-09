event OnSee 1;
event OnHear 3;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnDeath 41;
event OnTimer 7;
event OnCollision 10;
event OnActorStuck 28;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnStopSee 2;
event OnHit2 43;
event OnUnload 6;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		f_7eb_a0_v();
		for (; ; ) {
			@SetTimer(90, 10);
			f_63_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_778_a1_b(a0)) {
			f_3d_a0_v();
			f_77f_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_769_a1_b(a0)) {
			f_3d_a0_v();
			f_770_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_3d_a0_v();
		f_789_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_7d2_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_3d_a0_v(void)
	{
		@KillTimer(90);
		f_aa_a0_v();
	}

	void OnDeath(object a0)
	{
		f_3d_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 90) {
			float L0;
			@SetTimer(90, 1);
			@GetBrightness(L0);
			if (L0 < 0.10000000149011612) {
				f_3d_a0_v();
				t7{};
			}
		}
	}

	void f_63_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_9e_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_b3_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_b1_a0_b(), L5);
					L4 = null;
					if (L5) {
						t3{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_9e_a0_f(void)
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

	void f_aa_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	bool f_b1_a0_b(void)
	{
		return false;
	}

	object f_b3_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t1
{
	void init(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			f_6dd_a0_v();
		}
		f_6c5_a0_v();
		f_c9_a1_v(a0);
	}

	void f_c9_a1_v(object a0)
	{
		disable OnUse;
		f_e2_a1_v(a0);
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
			f_688_a1_v(a0);
		}
	}

	void f_e2_a1_v(object a0)
	{
		if (a0 == null) {
			f_13d_a1_v("fdie");
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
			f_5df_a1_v(L4);
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

	void f_13d_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_5df_a1_v(a0);
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
	var Vector tv0;
	var object tv1;
	var object tv2;

	void init(object a0)
	{
		f_1a1_a2_v(a0, false);
	}

	void OnSee(object a0)
	{
		if (f_778_a1_b(a0)) {
			f_215_a0_v();
			f_77f_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_215_a0_v();
		f_789_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_7d2_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	bool f_187_a2_b(object a0, object a1)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			return false;
		}
		if (!f_7ec_a1_b(a1)) {
			return false;
		}
		@IsPlayerActor(a1, L0);
		return L0;
	}

	bool f_19a_a1_b(object a0)
	{
		return f_7ec_a1_b(a0);
	}

	void f_1a1_a2_v(object a0, bool a1)
	{
		if (!f_50c_a1_b(tv1)) {
			return;
		}
		tv1 = a0;
		f_661_a1_v(tv1);
		tv1->GetPFPosition(tv0);
		@SetTimer(61, 0.5);
		do {
			bool L0;
			@FindPathTo(tv2, tv0);
			if (tv2 == null) {
				@Trace("Can't find path to noise source");
				break;
			}
			@FollowPath(tv2, a1, L0);
			if (!L0) {
				if (tv2 == null) {
					break;
				}
			} else {
				@KillTimer(61);
				tv1 = t6{tv1};
				@SetTimer(61, 0.5);
				if (!f_50c_a1_b(tv1)) {
					break;
				}
				tv1->GetPFPosition(tv0);
			}
		} while (tv2 != null);
		@KillTimer(61);
	}

	void OnTimer(int a0)
	{
		if (a0 == 61) {
			if (!f_19a_a1_b(tv1)) {
				@Stop();
				tv2 = null;
			}
			@ResetAAS();
		}
	}

	void OnHear(object a0)
	{
		if (!a0) {
			return;
		}
		if (a0 == tv1) {
			if (!f_19a_a1_b(tv1)) {
				f_215_a0_v();
				tv2 = null;
				return;
			}
		} else {
			if (f_187_a2_b(a0, tv1)) {
				tv1 = a0;
			}
		}
		tv1->GetPFPosition(tv0);
		@Trace("new hunt point");
		@Stop();
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_215_a0_v(void)
	{
		@KillTimer(61);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_215_a0_v();
		global.OnDeath(a0);
	}
}

task t3
{
	void OnSee(object a0)
	{
		if (f_778_a1_b(a0)) {
			f_2a6_a0_v();
			f_77f_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_769_a1_b(a0)) {
			f_2a6_a0_v();
			f_770_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_2a6_a0_v();
		f_789_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_7d2_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_5b5_a0_b()) {
			return;
		}
		L0 = f_671_a0_i();
		for (L1 = 0; L1 < 5 && f_5b5_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_66a_a1_s(L3));
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
			if (!f_2a4_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_2a4_a0_b(void)
	{
		return true;
	}

	void f_2a6_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t4
{
	var object tv0;
	var bool tv1;

	void init(object a0)
	{
		tv0 = a0;
		@CanSee(tv1, a0);
		f_52e_a1_b(a0);
		if (!f_50c_a1_b(a0)) {
			return;
		}
		@Face(a0);
		while (f_50c_a1_b(tv0)) {
			Vector L0;
			Vector L1;
			Vector L2;
			int L3;
			object L4;
			Vector L5;
			bool L6;
			object L7;
			if (!tv1) {
				@StopAsync();
				tv0 = t5{};
				if (tv0 == null) {
					break;
				}
				@CanSee(tv1, tv0);
				@Face(tv0);
			}
			f_661_a1_v(tv0);
			@ReportAttack(tv0);
			@GetPosition(L0);
			tv0->GetPosition(L1);
			L2 = L1 - L0;
			L3 = f_745_a1_i(sqrt(L2 | L2));
			@PlayAnimation("all", "attack_begin" + L3);
			@WaitForAnimEnd();
			if (tv0 == null) {
				break;
			}
			@PlayAnimation("all", "attack_end" + L3);
			@GetScene(L4);
			@GetGeometryLocator("attack" + L3, L6, L0, L5);
			@AddActorByType(L7, "scripted", L4, L0, [0.0, 0.0, 1.0], "grenade.xml");
			L7->SetScriptProperty("Owner", f_608_a0_o());
			if (L3 == 1) {
				L7->SetScriptProperty("StartVelocity", [0.0, -500.0, 0.0]);
			} else {
				float L8;
				float L9;
				L8 = sqrt((1 - L5.y * L5.y) / (L2.x * L2.x + L2.z * L2.z));
				L5.x = L2.x * L8;
				L5.z = L2.z * L8;
				tv0->GetPosition(L1);
				L9 = f_719_a3_f(L0, L1, L5);
				if (L9 < 0) {
					L9 = f_753_a1_f(L3);
				} else {
					L9 = f_75b_a2_f(L3, L9);
				}
				L7->SetScriptProperty("StartVelocity", L5 * L9);
			}
			L7->SetScriptProperty("DamageAmount", 0.800000011920929);
			L7->SetScriptProperty("DamageType", 2);
			@WaitForAnimEnd();
			if (L3 == 1) {
				int L10;
				@irand(L10, 2);
				@Speak("scream" + (L10 + 1));
				f_5ba_a1_v(tv0);
				@PlayAnimation("all", "scream" + (L10 + 1));
				@WaitForAnimEnd();
				@UnlookAsync("head");
			}
		}
		@StopAsync();
	}

	void OnSee(object a0)
	{
		if (a0 == tv0) {
			tv1 = true;
		}
	}

	void OnStopSee(object a0)
	{
		if (a0 == tv0) {
			tv1 = false;
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		f_7d2_a2_b(a0, a1);
	}
}

task t5
{
	var object tv0;

	object init(void)
	{
		@Sleep(5);
		return tv0;
	}

	void OnSee(object a0)
	{
		f_39c_a1_v(a0);
	}

	void OnStopSee(object a0)
	{
		if (a0 == tv0) {
			tv0 = null;
		}
	}

	void OnAttacked(object a0)
	{
		f_39c_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_7d2_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_39c_a1_v(object a0)
	{
		if (tv0 == null && f_7ec_a1_b(a0)) {
			tv0 = a0;
			@StopGroup0();
		}
	}
}

task t6
{
	var float tv0;
	var float tv1;
	var object tv2;

	object init(object a0)
	{
		bool L0;
		int L1;
		@GetSeeThreshold(tv0);
		@GetSeeFOV(tv1);
		@SetSeeThreshold(tv0 / 1.5);
		tv2 = a0;
		f_661_a1_v(tv2);
		for (L1 = 0; L1 < 3; L1++) {
			@SetSeeFOV(tv1 * 1.7999999523162842);
			@PlayAnimation("all", "hunt");
			@WaitForAnimEnd(L0);
			@SetSeeFOV(tv1);
			if (!L0) {
				break;
			}
			@Sleep(2, L0);
			if (!L0) {
				break;
			}
			f_661_a1_v(tv2);
		}
		f_41c_a0_v();
		if (L0) {
			tv2 = null;
		}
		return tv2;
	}

	void OnSee(object a0)
	{
		if (f_778_a1_b(a0)) {
			f_41c_a0_v();
			f_77f_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		bool L0;
		@IsPlayerActor(tv2, L0);
		if (L0) {
			return;
		}
		if (!f_7ec_a1_b(a0)) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (L0) {
			tv2 = a0;
			@Stop();
			@StopGroup0();
		}
	}

	void OnAttacked(object a0)
	{
		f_41c_a0_v();
		f_789_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_7d2_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_41c_a0_v(void)
	{
		@SetSeeThreshold(tv0);
		@SetSeeFOV(tv1);
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_41c_a0_v();
		global.OnDeath(a0);
	}
}

task t7
{
	void init(void)
	{
		@SetTimer(91, 20);
		f_493_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_778_a1_b(a0)) {
			f_467_a0_v();
			f_77f_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_769_a1_b(a0)) {
			f_467_a0_v();
			f_770_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_467_a0_v();
		f_789_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_7d2_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_467_a0_v(void)
	{
		@KillTimer(91);
		@Stop();
		f_4a8_a0_v();
	}

	void OnDeath(object a0)
	{
		f_467_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 91) {
			f_467_a0_v();
		}
	}
}

bool f_481_a0_b(void)
{
	float L0;
	@rand(L0);
	if (L0 < 0.30000001192092896) {
		bool L1;
		@PlayAnimation("all", "hunt");
		@WaitForAnimEnd(L1);
		if (!L1) {
			return true;
		}
	}
	return false;
}

void f_493_a0_v(void)
{
	for (; ; ) {
		float L0;
		float L1;
		bool L2;
		@RandVec2D(L0, L1);
		@Rotate(L0, L1, L2);
		if (!L2) {
			break;
		}
		if (f_481_a0_b()) {
			break;
		}
		@Sleep(5, L2);
		if (!L2) {
			break;
		}
	}
}

void f_4a8_a0_v(void)
{
	@Stop();
	@StopGroup0();
}

Vector f_4ad_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_4b4_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_4bc_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_4c1_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_4cd_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_4c1_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_618_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_4e3_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_4e8_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_4e3_a1_b(a0)) {
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

bool f_50c_a1_b(object a0)
{
	int L0;
	if (!f_4e8_a1_b(a0)) {
		return false;
	}
	if (!f_4c1_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

bool f_524_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_52e_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_524_a1_b(L0);
}

void f_537_a1_v(object a0)
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

void f_563_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_60e_a1_V(f_4ad_a1_V(a0));
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
			f_5a7_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_537_a1_v(a0);
}

void f_5a7_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_537_a1_v(a0);
}

bool f_5b5_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_5ba_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_5c5_a3_v(string a0, int a1, int a2)
{
	if (f_623_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_5d0_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_623_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

void f_5df_a1_v(string a0)
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

object f_608_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_60e_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_618_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_623_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_628_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_64b_a1_v(a1);
	f_4cd_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_64b_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_655_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_661_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

string f_66a_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_671_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_66a_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_682_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_688_a1_v(object a0)
{
	if (f_682_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_695_a2_v(int a0, int a1)
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
	@AddItem(L1, f_702_a1_i("Money"), 0, L0);
}

void f_6b4_a1_v(string a0)
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

void f_6c5_a0_v(void)
{
	if (f_682_a0_i() != 1) {
		return;
	}
	f_6b4_a1_v("liver");
	f_6b4_a1_v("kidney");
	f_6b4_a1_v("heart");
	f_6b4_a1_v("blood");
}

void f_6dd_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_695_a2_v(600, 1500);
	f_5c5_a3_v("fresh_meat", 1, 6);
	f_5d0_a4_v("rusk", 1, 6, 2);
	f_5c5_a3_v("gamma_pills", 1, 3);
	@AddItem(L1, f_702_a1_i("bomber_mark"), 0, 1);
}

int f_702_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

bool f_707_a1_b(object a0)
{
	string L0;
	string L1;
	if (!f_4c1_a2_b(a0, "class")) {
		return false;
	}
	@GetProperty("class", L0);
	a0->GetProperty("class", L1);
	return L1 == L0;
}

float f_719_a3_f(Vector a0, Vector a1, Vector a2)
{
	float L0;
	float L1;
	float L2;
	float L3;
	float L4;
	L0 = sqrt(a2.x * a2.x + a2.z * a2.z);
	L1 = a2.y / L0;
	L2 = sqrt((a0.x - a1.x) * (a0.x - a1.x) + (a0.z - a1.z) * (a0.z - a1.z));
	L3 = 500.0 / (L2 * L1 - (a1.y - a0.y));
	if (L3 < 0) {
		return -1;
	}
	L4 = L2 / L0 * sqrt(L3);
	return L4;
}

int f_745_a1_i(float a0)
{
	if (a0 < 200) {
		return 1;
	} else {
		if (a0 < 1000) {
			return 2;
		}
	}
	return 3;
}

float f_753_a1_f(int a0)
{
	if (a0 == 1) {
		return 30;
	}
	return 700;
}

float f_75b_a2_f(int a0, float a1)
{
	if (a1 < 10) {
		return 10;
	} else {
		if (a1 > 1500) {
			return 1500;
		}
	}
	return a1;
}

bool f_769_a1_b(object a0)
{
	return f_7ec_a1_b(a0);
}

void f_770_a1_v(object a0)
{
	t2{a0};
}

bool f_778_a1_b(object a0)
{
	return f_7ec_a1_b(a0);
}

void f_77f_a1_v(object a0)
{
	t4{a0};
	@ResetAAS();
}

void f_789_a1_v(object a0)
{
	f_81c_a1_v(a0);
	t4{a0};
	@ResetAAS();
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_563_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_5a7_a5_v(a0, a1, a2, a4, a5);
}

void f_7a9_a1_v(object a0)
{
	f_826_a1_v(a0);
	if (f_4bc_a1_b(a0)) {
		f_628_a2_b(a0, 0.05000000074505806);
	}
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
	f_7a9_a1_v(a0);
}

bool f_7d2_a2_b(object a0, object a1)
{
	if (f_707_a1_b(a1)) {
		bool L0;
		@CanSee(L0, a0);
		if (L0 || f_4b4_a1_f(a0) <= 490000.0) {
			return true;
		}
	}
	return false;
}

void f_7eb_a0_v(void)
{
}

bool f_7ec_a1_b(object a0)
{
	if (!f_50c_a1_b(a0)) {
		return false;
	}
	if (!f_4c1_a2_b(a0, "health")) {
		return false;
	}
	if (f_4c1_a2_b(a0, "class")) {
		string L0;
		a0->GetProperty("class", L0);
		if (L0 == "rat" || L0 == "rat_big" || L0 == "bomber") {
			return false;
		}
	}
	return true;
}

void f_81c_a1_v(object a0)
{
}

void OnUnload(void)
{
	@RemoveActor(f_608_a0_o());
	@Hold();
}

void f_826_a1_v(object a0)
{
	f_655_a2_b("quest_d6_02", "gorbun_death");
}

