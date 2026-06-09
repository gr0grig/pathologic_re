event OnAction 18;
event OnDispose 32;
event OnPlayerStartShooting 13;
event OnPlayerStartAltShooting 36;
event OnPlayerHolsterWeapon 15;
event OnTimer 7;
event OnPlayerEnemy 44;
event OnPlayerStartWalking 20;
event OnPlayerStopWalking 21;
event OnLSHAnimationEnd 45;
event OnTrigger 26;
event OnPropertyChange 16;
event OnDeath 41;
event OnReputationChange 31;
event OnPlayerLand 19;
event OnAttacked 17;
event OnFallDamage 39;

var string g0;
var object g1;
var object g2;
var object g3;

task t0
{
	void init(void)
	{
		string L0;
		bool L1;
		object L2;
		@GetCurrentWeapon(L0);
		@IsWeaponHolstered(L1);
		@GetScene(L2);
		if (L1) {
			@BroadcastMessage("unholster", f_5ef_a0_o(), L2);
			f_689_a1_v(L0 + "_unholster");
			@SetWeaponHolster(false);
			@PlayAnimation("unholster");
			@WaitForAnimEnd();
		} else {
			@BroadcastMessage("holster", f_5ef_a0_o(), L2);
			f_689_a1_v(L0 + "_holster");
			@PlayAnimation("holster");
			@WaitForAnimEnd();
			@SetWeaponHolster(true);
		}
	}
}

task t1
{
	var bool tv0;

	string f_32_a0_s(void)
	{
		return "scalpel";
	}

	float f_34_a1_f(bool a0)
	{
		return 0.6000000238418579;
	}

	float f_37_a0_f(void)
	{
		return 0.5;
	}

	int f_39_a0_i(void)
	{
		return 2;
	}

	int f_3b_a0_i(void)
	{
		return 0;
	}

	int f_3d_a0_i(void)
	{
		return 1;
	}

	float f_3f_a1_f(bool a0)
	{
		return f_34_a1_f(a0) * f_7b8_a1_f(f_37_a0_f());
	}

	void f_4d_a0_v(void)
	{
		f_7a6_a1_v(f_39_a0_i());
	}

	void init(void)
	{
		int L0;
		tv0 = false;
		L0 = 0;
		for (; ; ) {
			string L1;
			bool L2;
			L0 = L0 + 1;
			L1 = f_143_a0_s() + "attack" + L0 + "_phase1";
			@HasAnimation(L2, L1);
			if (!L2) {
				break;
			}
		}
		L0 = L0 + -1;
		if (!L0) {
			return;
		}
		do {
			string L3;
			float L4;
			Vector L5;
			object L6;
			int L7;
			Vector L8;
			bool L9;
			Vector L10;
			Vector L11;
			string L12;
			@GetCurrentWeapon(L3);
			@GetAttackDistance(L4);
			@GetDirection(L5);
			L9 = false;
			if (f_141_a0_b()) {
				@GetVictimMaterialExact(L6, L7, L8, L5, L4);
				if (L6 != null && f_54a_a2_b(L6, "health") && !f_5b5_a1_b(L6) && L7 == 4) {
					if (L6->FuncExist("GetDirection", 1)) {
						@GetDirection(L10);
						L6->GetDirection(L11);
						L9 = f_631_a2_f(L10, L11) >= 0.4999999701976776;
					}
				}
			}
			if (L9) {
				L12 = "battack";
				@PlaySound(f_32_a0_s() + "_back");
			} else {
				int L13;
				@irand(L13, L0);
				L12 = f_143_a0_s() + "attack" + (L13 + 1);
				@PlaySound(f_32_a0_s() + (L13 + 1));
			}
			@SetAttackState(true);
			@PlayAnimation(L12 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@SetAttackState(false);
			@GetAttackDistance(L4);
			@GetDirection(L5);
			@GetVictimMaterialExact(L6, L7, L8, L5, L4);
			if (L6 != null) {
				if (L6->FuncExist("GetDirection", 1)) {
					Vector L14;
					Vector L15;
					@GetDirection(L14);
					L6->GetDirection(L15);
					L9 = f_631_a2_f(L14, L15) >= 0.4999999701976776;
				} else {
					L9 = false;
				}
				float L16;
				L16 = f_3f_a1_f(L9);
				if (L7 == 4) {
					L16 = L16 * 3.0;
				}
				float L17;
				L17 = f_56c_a3_f(L6, L16, f_3b_a0_i());
				if (L17) {
					int L18;
					bool L19;
					@irand(L18, 2);
					@PlaySound(f_32_a0_s() + "_hit" + (L18 + 1));
					@ReportAttack(L6);
					@ReportHit(L6, f_3d_a0_i(), L17, L16, L8, L5);
					g2->in(L19, L6);
					if (!L19) {
						g3->add(L6);
						@BroadcastPlayerDamage(L6, false);
					} else {
						@BroadcastPlayerDamage(L6, true);
					}
				}
				f_4d_a0_v();
			}
			@PlayAnimation(L12 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_145_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	bool f_141_a0_b(void)
	{
		return false;
	}

	string f_143_a0_s(void)
	{
		return "";
	}

	bool f_145_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t2
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		int L0;
		int L1;
		object L2;
		bool L3;
		tv0 = false;
		tv1 = false;
		@GetWeaponItem(L0);
		@PlayAnimation("use_begin");
		@WaitForAnimEnd();
		if (tv0) {
			return;
		}
		@GetWeaponItem(L1);
		@GetPlayerSelectedObject(L2);
		L3 = false;
		if (L1 == L0) {
			if (f_54a_a2_b(L2, "lp")) {
				bool L4;
				L2->GetProperty("lp", L4);
				if (L4) {
					bool L5;
					L2->GetProperty("locked", L5);
					if (L5) {
						bool L6;
						int L7;
						L3 = true;
						L2->SetProperty("locked", false);
						L7 = 0;
						@GetWeaponProperty(L6, "uses", L7);
						if (L7 <= 1) {
							int L8;
							@GetWeaponItem(L8);
							@SelectItem(L8, false, 0);
							@RemoveItem(L8, 1, 0);
							tv1 = true;
						} else {
							@SetWeaponProperty(L6, "uses", L7 - 1);
						}
					}
				}
			}
		}
		if (L3) {
			@PlayAnimation("use_success");
		} else {
			@PlayAnimation("use_fail");
		}
		@WaitForAnimEnd();
		if (tv0) {
			return;
		}
		if (tv1) {
			@PlayAnimation("holster");
			@WaitForAnimEnd();
			@SetHandsItem(-1);
			if (tv0) {
				return;
			}
			tv1 = false;
			@PlayAnimation("unholster");
			@WaitForAnimEnd();
		}
	}

	void OnDispose(void)
	{
		if (!tv0 && tv1) {
			@SetHandsItem(-1);
		}
	}
}

maintask t3
{
	void init(void)
	{
		object L0;
		int L1;
		@CreateStringVector(L0);
		L0->add("player_reputation_decrease.bin");
		L0->add("player_klara_dream.bin");
		@GetVariable("player_init", L1);
		if (!L1) {
			@Diary();
			@SetVariable("player_init", 1);
		}
		f_205_a1_v(L0);
	}

	void f_1d4_a1_v(string a0)
	{
		if (a0 == "empty") {
			t4{};
		} else {
			if (a0 == "scalpel") {
				t1{};
			} else {
				if (a0 == "lockpick") {
					t2{};
				} else {
					if (a0 == "gun") {
						t5{};
					}
				}
			}
		}
	}

	void f_1f9_a1_v(string a0)
	{
		if (a0 == "gun") {
			t6{};
		}
	}

	void f_203_a1_v(string a0)
	{
	}

	void f_205_a1_v(object a0)
	{
		g1 = f_612_a0_o();
		g2 = f_612_a0_o();
		g3 = f_612_a0_o();
		bool L0;
		@HasProperty("effects", L0);
		if (!L0) {
			@SetProperty("effects", true);
			@ApplyEffect("player_disease.bin");
			@ApplyEffect("player_stat.bin");
			@ApplyEffect("player_hit.bin");
			@ApplyEffect("player_head.bin");
			@ApplyEffect("player_flashlight.bin");
			@ApplyEffect("player_visir.bin");
			@ApplyEffect("player_vis.bin");
			@ApplyEffect("player_eyes_height.bin");
			@ApplyEffect("player_gifts.bin");
			if (a0) {
				int L1;
				int L2;
				a0->size(L1);
				for (L2 = 0; L2 < L1; L2++) {
					string L3;
					a0->get(L3, L2);
					@ApplyEffect(L3);
				}
			}
		}
		f_2ec_a0_v();
		float L4;
		@GetProperty("health", L4);
		if (L4 <= 0 && !f_691_a0_b()) {
			f_6fb_a0_v();
			return;
		}
		for (; ; ) {
			bool L5;
			@IsWeaponHolstered(L5);
			if (!L5) {
				bool L6;
				@IsWalking(L6);
				if (L6) {
					@PlayAnimation("walk");
					@WaitForAnimEnd();
					continue;
				}
			}
			@Sleep(0.10000000149011612);
		}
	}

	void OnPlayerStartShooting(void)
	{
		bool L0;
		@IsWeaponHolstered(L0);
		if (!L0) {
			string L1;
			bool L2;
			f_2f0_a0_v();
			@GetCurrentWeapon(L1);
			f_1d4_a1_v(L1);
			f_2ec_a0_v();
			@IsAltShooting(L2);
			if (L2) {
				OnPlayerStartAltShooting();
			}
		}
	}

	void OnPlayerStartAltShooting(void)
	{
		bool L0;
		@IsWeaponHolstered(L0);
		if (!L0) {
			string L1;
			bool L2;
			f_2f0_a0_v();
			@GetCurrentWeapon(L1);
			f_203_a1_v(L1);
			f_2ec_a0_v();
			@IsShooting(L2);
			if (L2) {
				OnPlayerStartShooting();
			}
		}
	}

	void OnPlayerHolsterWeapon(void)
	{
		f_2f0_a0_v();
		t0{};
		f_2ec_a0_v();
	}

	void OnTimer(int a0)
	{
		bool L0;
		if (f_7c1_a1_b(a0)) {
			return;
		}
		f_2f0_a0_v();
		@IsWeaponHolstered(L0);
		if (!L0) {
			int L1;
			for (L1 = 0; ; L1++) {
				bool L2;
				@HasAnimation(L2, "idle" + (L1 + 1));
				if (!L2) {
					break;
				}
			}
			if (L1) {
				int L3;
				@irand(L3, L1);
				@PlayAnimation("idle" + (L3 + 1));
				@WaitForAnimEnd();
			}
		}
		f_2ec_a0_v();
	}

	void OnAction(int a0)
	{
		if (a0 == 11) {
			string L0;
			@GetCurrentWeapon(L0);
			f_1f9_a1_v(L0);
		} else {
			global.OnAction(a0);
		}
	}

	void f_2ec_a0_v(void)
	{
		f_940_a0_v();
	}

	void f_2f0_a0_v(void)
	{
		@KillTimer(0);
	}
}

task t4
{
	var bool tv0;

	void init(void)
	{
		int L0;
		tv0 = false;
		L0 = 0;
		for (; ; ) {
			string L1;
			bool L2;
			L0 = L0 + 1;
			L1 = "attack" + L0 + "_phase1";
			@HasAnimation(L2, L1);
			if (!L2) {
				break;
			}
		}
		L0 = L0 + -1;
		if (!L0) {
			return;
		}
		do {
			float L3;
			@GetAttackDistance(L3);
			L3 = L3 * 2.1875;
			Vector L4;
			@GetDirection(L4);
			object L5;
			int L6;
			Vector L7;
			@GetVictimMaterialExact(L5, L6, L7, L4, L3);
			if (L5 != null) {
				if (f_54a_a2_b(L5, "healable")) {
					@PlayAnimation("heal_phase1");
					@WaitForAnimEnd();
					if (tv0) {
						return;
					}
					if (f_5ba_a1_b(L5)) {
						@Trigger(L5, "heal");
					}
					@PlayAnimation("heal_phase2");
					@WaitForAnimEnd();
					if (tv0) {
						return;
					}
					continue;
				}
			}
			bool L8;
			if (L5->FuncExist("GetDirection", 1)) {
				Vector L9;
				Vector L10;
				@GetDirection(L9);
				L5->GetDirection(L10);
				L8 = f_631_a2_f(L9, L10) >= 0.4999999701976776;
			} else {
				L8 = false;
			}
			string L11;
			if (L8) {
				L11 = "battack";
				@PlaySound("punch_back");
			} else {
				int L12;
				@irand(L12, L0);
				L11 = "attack" + (L12 + 1);
				@PlaySound("punch" + (L12 + 1));
			}
			@PlayAnimation(L11 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@GetVictimMaterialExact(L5, L6, L7, L4, L3);
			if (L5 != null) {
				if (L5->FuncExist("GetDirection", 1)) {
					Vector L13;
					Vector L14;
					@GetDirection(L13);
					L5->GetDirection(L14);
					L8 = f_631_a2_f(L13, L14) >= 0.4999999701976776;
				} else {
					L8 = false;
				}
				float L15;
				L15 = f_3bd_a1_f(L8);
				if (L6 == 4) {
					L15 = L15 * 3.0;
				}
				float L16;
				L16 = f_56c_a3_f(L5, L15, 0);
				if (L16) {
					int L17;
					bool L18;
					@irand(L17, 2);
					@PlaySound("punch_hit" + (L17 + 1));
					@ReportAttack(L5);
					@ReportHit(L5, 0, L16, L15, L7, L4);
					g2->in(L18, L5);
					if (!L18) {
						g3->add(L5);
						@BroadcastPlayerDamage(L5, false);
					} else {
						@BroadcastPlayerDamage(L5, true);
					}
				}
			}
			@PlayAnimation(L11 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_3c4_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	float f_3bd_a1_f(bool a0)
	{
		return a0 ? 0.4000000059604645 : 0.20000000298023224;
	}

	bool f_3c4_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t5
{
	var bool tv0;

	bool f_3c9_a0_b(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (!f_777_a2_b("revolver_ammo", 2)) {
				@PlaySound(f_42c_a0_s() + "_noammo");
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int f_3ec_a0_i(void)
	{
		return 3;
	}

	float f_3ee_a0_f(void)
	{
		return 0.02617993950843811;
	}

	void f_3f0_a0_v(void)
	{
		bool L0;
		int L1;
		@GetWeaponProperty(L0, "ammo", L1);
		@SetWeaponProperty(L0, "ammo", L1 - 1);
		f_949_a0_v();
	}

	void f_3fd_a0_v(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			f_40d_a0_v();
		}
	}

	void f_40d_a0_v(void)
	{
		if (f_777_a2_b("revolver_ammo", 2)) {
			@PlaySound(f_42c_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	void OnAction(int a0)
	{
		if (a0 == 11) {
			f_40d_a0_v();
		}
		global.OnAction(a0);
	}

	string f_42c_a0_s(void)
	{
		return "gun";
	}

	float f_42e_a0_f(void)
	{
		return 1.2999999523162842;
	}

	int f_430_a0_i(void)
	{
		return 1;
	}

	int f_432_a0_i(void)
	{
		return 2;
	}

	int f_434_a0_i(void)
	{
		return 2;
	}

	void init(void)
	{
		tv0 = false;
		do {
			if (!f_3c9_a0_b()) {
				break;
			}
			string L0;
			@GetCurrentWeapon(L0);
			string L1;
			L1 = "attack1";
			@SetAttackState(true);
			f_3f0_a0_v();
			@PlayAnimation(L1 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@TriggerWeapon("shot");
			@PlaySound(f_42c_a0_s() + "_shot");
			f_7a6_a1_v(f_434_a0_i());
			f_516_a0_v();
			@SetAttackState(false);
			int L2;
			L2 = f_3ec_a0_i();
			bool L3;
			L3 = false;
			float L4;
			L4 = f_42e_a0_f() / L2;
			float L5;
			L5 = 1.0 / (1.5 + (1.0 / f_3ee_a0_f() - 1.5) * f_79b_a0_f());
			Vector L6;
			@GetDirection(L6);
			object L7;
			L7 = f_618_a0_o();
			int L8;
			for (L8 = 0; L8 < L2; L8++) {
				Vector L9;
				@RandVecCone3D(L9, L6, L5);
				object L10;
				int L11;
				Vector L12;
				@GetVictimMaterialExact(L10, L11, L12, L9, 10000);
				if (L10) {
					float L13;
					L13 = L4;
					if (L11 == 4) {
						L13 = L13 * 3.0;
					}
					float L14;
					L14 = f_56c_a3_f(L10, L13, f_430_a0_i());
					if (L14) {
						L7->add(L10);
						@ReportHit(L10, f_432_a0_i(), L14, L13, L12, L9);
						if (f_517_a0_b()) {
							float L15;
							L10->GetProperty("health", L15);
							if (!L15) {
								object L16;
								@GetVictimMaterialExact(L16, L11, L12, L9, 10000, L10);
								if (L16 && L16 != L10) {
									float L17;
									L17 = f_56c_a3_f(L16, L13 * 0.75, f_430_a0_i());
									if (L17) {
										L7->add(L16);
										@ReportHit(L16, f_432_a0_i(), L17, L13, L12, L9);
									}
								}
							}
						}
					} else {
						if (L11 != -1) {
							if (!L3) {
								object L18;
								object L19;
								@GetScene(L18);
								@AddActorByType(L19, "scripted", L18, L12, [0.0, 0.0, 1.0], "richochet.xml");
								L19->SetScriptProperty("Material", L11);
								L3 = true;
							}
						}
					}
				}
			}
			int L20;
			L7->size(L20);
			int L21;
			for (L21 = 0; L21 < L20; L21++) {
				object L22;
				bool L23;
				L7->get(L22, L21);
				@ReportAttack(L22);
				g2->in(L23, L22);
				if (!L23) {
					g3->add(L22);
					@BroadcastPlayerDamage(L22, false);
				} else {
					@BroadcastPlayerDamage(L22, true);
				}
			}
			@PlayAnimation(L1 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			f_3fd_a0_v();
		} while (f_519_a0_b());
	}

	void f_516_a0_v(void)
	{
	}

	bool f_517_a0_b(void)
	{
		return false;
	}

	bool f_519_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t6
{
	void init(void)
	{
		f_536_a0_v();
		if (f_777_a2_b("revolver_ammo", 2)) {
			@PlaySound(f_534_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}
}

string f_534_a0_s(void)
{
	return "gun";
}

void f_536_a0_v(void)
{
}

string f_537_a1_s(int a0)
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

bool f_545_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_54a_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_556_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_54a_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_5fc_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_56c_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_54a_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_54a_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_537_a1_s(a2);
	if (!f_54a_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_5f5_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_5fc_a3_f(L4 - L5, 0, 1));
	if (f_545_a1_b(a0)) {
		f_665_a1_v(-L5);
	}
	return L5;
}

bool f_5b5_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_5ba_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
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

string f_5cf_a1_s(int a0)
{
	if (a0 == 1) {
		return "wood";
	} else {
		if (a0 == 2) {
			return "metal";
		} else {
			if (a0 == 3) {
				return "ground";
			} else {
				if (a0 == 4) {
					return "water";
				} else {
					if (a0 == 5) {
						return "carpet";
					}
				}
			}
		}
	}
	return "stone";
}

object f_5ef_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_5f5_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_5fc_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_607_a3_i(int a0, int a1, int a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_612_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

object f_618_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

float f_61e_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_627_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_631_a2_f(Vector a0, Vector a1)
{
	return f_61e_a2_f(a0, a1) / (f_627_a1_f(a0) * f_627_a1_f(a1));
}

bool f_642_a2_b(object a0, float a1)
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
	f_676_a1_v(a1);
	f_556_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_665_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

void f_676_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

int f_680_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_689_a1_v(string a0)
{
	bool L0;
	@IsExistingSound(L0, a0);
	if (L0) {
		@PlaySound(a0);
	}
}

bool f_691_a0_b(void)
{
	bool L0;
	@GetVariable("god_mode", L0);
	return L0;
}

bool f_697_a0_b(void)
{
	int L0;
	@GetItemCountOfType(L0, "kerosene");
	return L0;
}

int f_69d_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

bool f_6a3_a1_b(int a0)
{
	if (a0 == 10) {
		f_74f_a0_v();
		return true;
	} else {
		if (a0 == 11) {
			f_757_a0_v();
			return true;
		} else {
			if (a0 == 12) {
				f_753_a0_v();
				return true;
			}
		}
	}
	return false;
}

void f_6c0_a0_v(void)
{
	bool L0;
	int L1;
	string L2;
	int L3;
	@GetGroundMaterial(L0, L1);
	if (!L0) {
		L1 = -1;
	}
	L2 = f_5cf_a1_s(L1);
	for (L3 = 0; ; L3++) {
		bool L4;
		@IsExistingSound(L4, "step_" + L2 + (L3 + 1));
		if (!L4) {
			break;
		}
	}
	int L5;
	string L6;
	string L7;
	if (!L3) {
		g0 = "";
		return;
	}
	if (L3 == 1) {
		L5 = 0;
	} else {
		for (; ; ) {
			@irand(L5, L3);
			L6 = "step_" + L2 + (L5 + 1);
			if (L6 != g0) {
				break;
			}
		}
	}
	L7 = "step_" + L2 + (L5 + 1);
	@PlaySound(L7);
	g0 = L7;
}

void f_6fb_a0_v(void)
{
	object L0;
	object L1;
	if (f_680_a0_i() == 12) {
		@UnlockAchievement("ACHIEVEMENT_MIGHT");
	}
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, "player_death", "play_death_klara.bin");
	@SetDeathState();
}

void f_710_a0_v(void)
{
	bool L0;
	@KillTimer(11, L0);
	if (L0) {
		@ModNoise(-3);
	}
}

void f_71a_a0_v(void)
{
	f_710_a0_v();
	@SetTimer(11, 0.15000000596046448);
	@ModNoise(3);
}

void f_725_a0_v(void)
{
	bool L0;
	@KillTimer(10, L0);
	if (L0) {
		@ModNoise(-2);
	}
}

void f_72f_a0_v(void)
{
	bool L0;
	@KillTimer(12, L0);
	if (L0) {
		@ModNoise(-1);
	}
}

void f_739_a0_v(void)
{
	f_725_a0_v();
	@SetTimer(10, 0.3499999940395355);
	@ModNoise(2);
}

void f_744_a0_v(void)
{
	f_72f_a0_v();
	@SetTimer(12, 0.6000000238418579);
	@ModNoise(1);
}

void f_74f_a0_v(void)
{
	f_6c0_a0_v();
}

void f_753_a0_v(void)
{
	f_6c0_a0_v();
}

void f_757_a0_v(void)
{
	f_6c0_a0_v();
	f_710_a0_v();
}

void OnPlayerEnemy(void)
{
	f_744_a0_v();
	f_710_a0_v();
}

void OnPlayerStartWalking(void)
{
	f_739_a0_v();
	f_710_a0_v();
}

void OnPlayerStopWalking(void)
{
	f_725_a0_v();
	f_71a_a0_v();
}

void OnLSHAnimationEnd(void)
{
	f_72f_a0_v();
}

bool f_777_a2_b(string a0, int a1)
{
	bool L0;
	int L1;
	int L2;
	@GetWeaponProperty(L0, "ammo", L1);
	if (L0 && L1 >= a1) {
		return false;
	}
	@GetInvItemByName(L2, a0);
	while (L1 < a1) {
		bool L3;
		@RemoveItemByType(L3, L2, 1);
		if (!L3) {
			break;
		}
		L1 = L1 + 1;
	}
	if (!L1) {
		return false;
	}
	@SetWeaponProperty(L0, "ammo", L1);
	return true;
}

float f_79b_a0_f(void)
{
	bool L0;
	int L1;
	@GetWeaponProperty(L0, "durability", L1);
	return L0 ? L1 / 100.0 : 1.0;
}

void f_7a6_a1_v(int a0)
{
	bool L0;
	int L1;
	@GetWeaponProperty(L0, "durability", L1);
	if (!L0) {
		L1 = 100;
	}
	L1 = f_607_a3_i(L1 - a0, 0, 100);
	@SetWeaponProperty(L0, "durability", L1);
}

float f_7b8_a1_f(float a0)
{
	return a0 + f_79b_a0_f() * (1 - a0);
}

bool f_7c1_a1_b(int a0)
{
	if (f_69d_a0_i() == 0) {
		int L0;
		L0 = 0;
		@GetVariable("birdMaskAchievement", L0);
		if (L0 == 0) {
			int L1;
			int L2;
			int L3;
			bool L4;
			bool L5;
			int L6;
			@GetItemCount(L1, 1);
			@GetInvItemByName(L2, "bird_mask");
			@GetInvItemByName(L3, "bird_balahon");
			L4 = false;
			L5 = false;
			for (L6 = 0; L6 < L1; L6++) {
				object L7;
				int L8;
				@GetItem(L7, L6, 1);
				L7->GetItemID(L8);
				if (L8 == L2) {
					bool L9;
					@IsItemSelected(L9, L6, 1);
					if (L9) {
						L4 = true;
					}
				} else {
					if (L8 == L3) {
						bool L10;
						@IsItemSelected(L10, L6, 1);
						if (L10) {
							L5 = true;
						}
					}
				}
			}
			if (L4 && L5) {
				@SetVariable("birdMaskAchievement", 1);
				@UnlockAchievement("ACHIEVEMENT_THEY");
			}
		}
	}
	return f_6a3_a1_b(a0);
}

void OnTimer(int a0)
{
	f_7c1_a1_b(a0);
}

void OnTrigger(string a0)
{
	if (a0 == "die") {
		f_6fb_a0_v();
	}
}

void OnPropertyChange(object a0, string a1)
{
	if (a1 == "health") {
		float L0;
		@GetProperty("health", L0);
		if (L0 < 0.0010000000474974513) {
			@SignalDeath(a0);
		}
	} else {
		if (a1 == "reputation") {
			object L1;
			@GetScene(L1);
			@BroadcastMessage("prc", f_5ef_a0_o(), L1);
		}
	}
	object L2;
	@CreateStringVector(L2);
	L2->add(a1);
	@SendWorldWndMessage(10, L2);
}

void OnDeath(object a0)
{
	if (!f_691_a0_b()) {
		f_6fb_a0_v();
	}
}

void OnReputationChange(object a0, float a1, bool a2)
{
	bool L0;
	if (!a0) {
		return;
	}
	g2->in(L0, a0);
	if (L0) {
		@Trace("Reputation is not changed for enemy: " + a0);
		return;
	}
	if (!a2) {
		g1->in(L0, a0);
		if (L0) {
			return;
		}
	}
	g1->add(a0);
	f_642_a2_b(f_5ef_a0_o(), a1);
}

void OnPlayerLand(void)
{
	f_940_a0_v();
	f_71a_a0_v();
}

void OnAttacked(object a0)
{
}

void OnFallDamage(float a0)
{
	if (a0 > 770.0) {
		float L0;
		float L1;
		@Trace(a0);
		L0 = (a0 - 770.0) * 0.003499999875202775;
		L1 = f_56c_a3_f(f_5ef_a0_o(), L0, 0);
		@ReportHit(f_5ef_a0_o(), 0, L1, L0, [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]);
	}
}

void OnAction(int a0)
{
	if (a0 == 0) {
		@Inventory();
	} else {
		if (a0 == 1) {
			object L0;
			object L1;
			object L2;
			Vector L3;
			@GetMainOutdoorScene(L0);
			@GetActiveScene(L1);
			if (L0 == null) {
				@Trace("Can't find main outdoor oscene");
				return;
			}
			L0->GetMap(L2);
			if (L2 == null) {
				@Trace("Can't find map");
				return;
			}
			if (L0 == L1) {
				@GetPosition(L3);
			} else {
				string L4;
				bool L5;
				Vector L6;
				L1->GetName(L4);
				L0->GetLocator("pt_gmap_" + L4, L5, L3, L6);
				if (!L5) {
					@Trace("FIXME: No map locator for scene : " + L4);
					L3 = [0.0, 0.0, 0.0];
				}
			}
			L2->SetMapParams(L3.x, L3.z);
			@ShowMap(L2);
		} else {
			if (a0 == 2) {
				@Diary();
			} else {
				if (a0 == 3) {
					@ShowMessage();
				} else {
					if (a0 == 4) {
						int L7;
						@ShowPlayerStats(L7);
						if (L7 == 1) {
							@ShowWindow("people.xml", true);
						}
					} else {
						if (a0 == 5) {
							bool L8;
							@IsFlashlightOn(L8);
							if (L8) {
								@SwitchFlashlight(false);
								@PlaySound("flashlight_off");
							} else {
								if (f_697_a0_b()) {
									@SwitchFlashlight(true);
									@PlaySound("flashlight_on");
								} else {
									@PlaySound("flashlight_nofuel");
								}
							}
						} else {
							if (a0 == 6) {
								bool L9;
								if (f_69d_a0_i() != 0) {
									return;
								}
								@IsVisirOn(L9);
								if (L9) {
									@SwitchVisir(false);
									@SendWorldWndMessage(2);
								} else {
									int L10;
									@GetProperty("visir", L10);
									if (L10) {
										int L11;
										@GetProperty("vcharge", L11);
										if (L11 >= 10) {
											@SwitchVisir(true);
											@SendWorldWndMessage(1);
										} else {
										}
									}
								}
							} else {
								if (a0 == 7) {
									bool L12;
									@IsOverrideActive(L12);
									if (!L12) {
										@ShowWindow("people.xml", true);
									}
								} else {
									if (a0 == 21) {
										int L13;
										@GetWeaponItem(L13);
										if (L13 != -1) {
											@SelectItem(L13, false, 0);
											@SetHandsItem(-1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void f_940_a0_v(void)
{
	float L0;
	@rand(L0, 10, 30);
	@SetTimer(0, L0);
}

void f_949_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("player_shot", f_5ef_a0_o(), L0);
}

