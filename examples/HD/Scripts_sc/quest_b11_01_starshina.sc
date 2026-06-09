event OnTimer 7;
event OnSee 1;
event OnStopSee 2;
event OnCollision 10;
event OnDeath 41;
event OnHit 22;
event OnPropertyChange 16;
event OnHit2 43;

var object g0;
var object g1;
var object g2;
var object g3;
var object g4;
var object g5;
var object g6;
var object g7;
var object g8;
var object g9;
var object g10;
var object g11;
var object g12;
var object g13;
var object g14;

maintask t0
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(void)
	{
		object L0;
		int L1;
		L0 = f_536_a0_o();
		g1 = f_704_a0_o();
		g3 = f_704_a0_o();
		g5 = f_704_a0_o();
		g7 = f_704_a0_o();
		g9 = f_704_a0_o();
		g0 = f_661_a3_o(L0, 0, g1);
		g2 = f_661_a3_o(L0, 1, g3);
		g4 = f_661_a3_o(L0, 2, g5);
		g6 = f_661_a3_o(L0, 3, g7);
		g8 = f_661_a3_o(L0, 4, g9);
		g10 = f_67a_a2_o(L0, 0);
		g11 = f_67a_a2_o(L0, 1);
		g12 = f_67a_a2_o(L0, 2);
		g13 = f_67a_a2_o(L0, 3);
		g14 = f_67a_a2_o(L0, 4);
		for (L1 = 0; L1 < 5; L1++) {
			L0->RemoveAllItems(L1);
		}
		L0->SelectWeapon();
		@SensePlayerOnly(true);
		@Sleep(1.5);
		for (; ; ) {
			f_a5_a3_v(L0, true, 180.0);
			@Sleep(1);
		}
	}

	float f_9f_a2_f(object a0, int a1)
	{
		return 0.25;
	}

	int f_a2_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_a5_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_18a_a0_v();
		tv5 = 0;
		if (a0->FuncExist("@GetAttackDistance", 1)) {
			a0->GetAttackDistance(L0);
			L0 = L0 + 50;
		} else {
			L0 = a2;
		}
		if (L0 >= 150) {
			L0 = 150;
		}
		tv3 = false;
		tv0 = a0;
		@IsPlayerActor(tv0, L3);
		if (L3) {
			@PlayGlobalMusic("attack");
			@SendPlayerEnemy(a0, f_6e2_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_5c0_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_327_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t1{tv0, L0, 10000.0, true, false}) {
					break;
				}
				L4 = false;
			} else {
				if (L7 >= a2 * a2) {
					Vector L8;
					bool L9;
					float L10;
					tv0->GetPFPosition(L8);
					@CanReachByPF(L9, L8);
					if (!L9) {
						if (!t1{tv0, L0, 10000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_656_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_327_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_5c0_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_2fc_a0_b()) {
						@Face(tv0);
						f_32e_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_278_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_327_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_2fc_a0_b()) {
							if (!f_5c0_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_1d4_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_1d4_a1_b(a2)) {
						break;
					}
					L4 = true;
				}
			}
		}
		@WaitForAnimEnd();
		if (tv3) {
			return;
		}
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if (L3) {
			@Sleep(2.0);
		}
	}

	void f_18a_a0_v(void)
	{
		for (tv1 = 0; ; tv1++) {
			bool L0;
			@HasAnimation(L0, "all", "attack_begin" + (tv1 + 1));
			if (!L0) {
				break;
			}
		}
		for (tv2 = 0; ; tv2++) {
			bool L1;
			@IsExisting3DSound(L1, "attack" + (tv2 + 1));
			if (!L1) {
				break;
			}
		}
		Vector L2;
		@GetAnimationOffset(L2, "all", "bjump");
		tv4 = -L2.z;
	}

	void f_1ad_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_9f_a2_f(L0, a1);
			L2 = f_54e_a3_f(L0, L1, f_a2_a2_i(L0, a1));
			@ReportHit(tv0, f_32c_a0_i(), L2, L1);
			f_333_a2_v(L0, L2);
		}
	}

	bool f_1d4_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_327_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_75a_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_307_a0_v();
		if (!f_5c0_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_1ad_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_75a_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_327_a0_v();
			if (!f_5c0_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_1ad_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_75a_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_327_a0_v();
				if (!f_5c0_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_1ad_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_335_a0_b()) {
			f_25d_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_25d_a1_b(float a0)
	{
		float L0;
		@rand(L0);
		if (L0 < a0) {
			for (; ; ) {
				bool L1;
				@IsAnimationPlaying(L1);
				if (!L1) {
					break;
				}
				if (f_2bf_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_327_a0_v();
		}
		return false;
	}

	bool f_278_a1_b(float a0)
	{
		for (; ; ) {
			bool L0;
			Vector L1;
			Vector L2;
			Vector L3;
			float L4;
			@IsAnimationPlaying(L0);
			if (!L0) {
				break;
			}
			if (f_2bf_a0_b()) {
				return true;
			}
			if (!f_5c0_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_1d4_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_327_a0_v();
		return false;
	}

	bool f_2a3_a0_b(void)
	{
		if (!f_5c0_a1_b(tv0)) {
			return false;
		}
		if (f_2fc_a0_b()) {
			Vector L0;
			Vector L1;
			Vector L2;
			float L3;
			float L4;
			tv0->GetPFPosition(L0);
			@GetPFPosition(L1);
			L2 = L0 - L1;
			L3 = L2 | L2;
			tv0->GetAttackDistance(L4);
			L4 = L4 + 50;
			return L3 <= L4 * L4;
		}
		return false;
	}

	bool f_2bf_a0_b(void)
	{
		if (f_2a3_a0_b() && f_2cf_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_2cf_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_52f_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_327_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_2a3_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_2fc_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_307_a0_v(void)
	{
		float L0;
		if (!tv2) {
			return;
		}
		if (tv5) {
			tv5 = tv5 + -1;
			if (tv5 > 0) {
				return;
			}
		}
		@rand(L0);
		if (L0 < f_339_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_337_a0_i();
		}
	}

	void f_327_a0_v(void)
	{
		f_751_a1_v(tv0);
	}

	int f_32c_a0_i(void)
	{
		return 0;
	}

	void f_32e_a0_v(void)
	{
		f_6b9_a1_v("attack_stay");
	}

	void f_333_a2_v(object a0, float a1)
	{
	}

	bool f_335_a0_b(void)
	{
		return true;
	}

	int f_337_a0_i(void)
	{
		return 1;
	}

	float f_339_a0_f(void)
	{
		return 0.5;
	}
}

task t1
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_751_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_6ae_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_53d_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_6e2_a0_o());
		}
		L1 = f_3a4_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_751_a1_v(tv1);
		} else {
			f_40a_a1_v(a0);
		}
	}

	void f_37a_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_420_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_6ae_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_3a4_a5_b(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		tv0 = false;
		tv1 = a0;
		L1 = a4;
		for (; ; ) {
			object L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			if (!f_430_a1_b(a0)) {
				return false;
			}
			a0->GetPosition(L3);
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (a2 > 0 && L6 > a2 * a2) {
				@Stop();
				return false;
			}
			if (L6 > a1 * a1) {
				object L7;
				a0->GetPFPosition(L3);
				@FindPathTo(L7, L3);
				if (L7 != null) {
					L2 = L7;
					L7 = null;
				}
				if (L2 != null) {
					if (L1) {
						L1 = false;
						@RotatePath(L2, L0);
						if (!L0) {
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
					@FollowPath(L2, a3, L0, f_437_a0_s(), f_439_a0_s());
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						} else {
							continue;
						}
					} else {
						L2 = null;
					}
				} else {
					@KillTimer(0);
					@Sleep(0.5, L0);
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
				}
			} else {
				@KillTimer(0);
				break;
			}
		}
		return !tv0;
	}

	void f_40a_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_430_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_420_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_37a_a0_v();
		global.OnDeath(a0);
	}

	bool f_430_a1_b(object a0)
	{
		return f_5c0_a1_b(a0);
	}

	string f_437_a0_s(void)
	{
		return "walk";
	}

	string f_439_a0_s(void)
	{
		return "run";
	}
}

task t2
{
	void init(object a0)
	{
		object L0;
		object L1;
		f_4a6_a1_v(a0);
		@GetSceneByName(L0, "boiny_arena");
		@RemoveScene(L0);
		f_745_a1_b("NPC_Starshina");
		L1 = f_536_a0_o();
		f_68e_a5_v(L1, 0, g0, g1, g10);
		f_68e_a5_v(L1, 1, g2, g3, g11);
		f_68e_a5_v(L1, 2, g4, g5, g12);
		f_68e_a5_v(L1, 3, g6, g7, g13);
		f_68e_a5_v(L1, 4, g8, g9, g14);
		L1->SelectWeapon();
		f_72d_a3_v(L1, "boiny", "pt_Starshina");
		f_721_a2_b("quest_b11_01", "fight_win");
		for (; ; ) {
			@Hold();
		}
	}

	void f_4a6_a1_v(object a0)
	{
		if (a0 == null) {
			f_501_a1_v("fdie");
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
			f_6b9_a1_v(L4);
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

	void f_501_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_6b9_a1_v(a0);
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

string f_521_a1_s(int a0)
{
	if (a0 == 2) {
		return "fire";
	} else {
		if (a0 == 1) {
			return "bullet";
		}
	}
	return "phys";
}

Vector f_52f_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

object f_536_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_53d_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_542_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_54e_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_542_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_542_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_521_a1_s(a2);
	if (!f_542_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_6f2_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_6f9_a3_f(L4 - L5, 0, 1));
	if (f_53d_a1_b(a0)) {
		f_710_a1_v(-L5);
	}
	return L5;
}

bool f_597_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_59c_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_597_a1_b(a0)) {
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

bool f_5c0_a1_b(object a0)
{
	int L0;
	if (!f_59c_a1_b(a0)) {
		return false;
	}
	if (!f_542_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_5d8_a1_v(object a0)
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

void f_604_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_6e8_a1_V(f_52f_a1_V(a0));
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
			f_648_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_5d8_a1_v(a0);
}

void f_648_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_5d8_a1_v(a0);
}

void f_656_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

object f_661_a3_o(object a0, int a1, object a2)
{
	object L0;
	int L1;
	int L2;
	L0 = f_70a_a0_o();
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		object L3;
		int L4;
		a0->GetItem(L3, L2, a1);
		L0->add(L3);
		a0->GetItemAmount(L4, L2, a1);
		a2->add(L4);
	}
	return L0;
}

object f_67a_a2_o(object a0, int a1)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		bool L3;
		a0->IsItemSelected(L3, L2, a1);
		if (L3) {
			L0->add(L2);
		}
	}
	return L0;
}

void f_68e_a5_v(object a0, int a1, object a2, object a3, object a4)
{
	a0->RemoveAllItems(a1);
	int L0;
	a2->size(L0);
	int L1;
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		int L3;
		bool L4;
		a2->get(L2, L1);
		a3->get(L3, L1);
		a0->AddItem(L4, L2, a1, L3);
	}
	a4->size(L0);
	int L5;
	for (L5 = 0; L5 < L0; L5++) {
		int L6;
		a4->get(L6, L5);
		a0->SelectItem(L6, true, a1);
	}
}

void f_6ae_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_6b9_a1_v(string a0)
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

object f_6e2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_6e8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_6f2_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_6f9_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_704_a0_o(void)
{
	object L0;
	@CreateIntVector(L0);
	return L0;
}

object f_70a_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

void f_710_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

bool f_721_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_72d_a3_v(object a0, string a1, string a2)
{
	object L0;
	bool L1;
	Vector L2;
	Vector L3;
	if (!a0) {
		return;
	}
	@GetSceneByName(L0, a1);
	L0->GetLocator(a2, L1, L2, L3);
	if (!L1) {
		@Trace("Teleport location '" + a2 + "' not found in scene '" + a1 + "'");
	} else {
		@Teleport(a0, L0, L2, L3);
	}
}

bool f_745_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

void f_751_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_75a_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_6e2_a0_o(), L0);
}

void f_765_a1_v(object a0)
{
	t2{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_604_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_648_a5_v(a0, a1, a2, a4, a5);
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
	f_765_a1_v(a0);
}

