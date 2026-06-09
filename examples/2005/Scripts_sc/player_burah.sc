event OnPlayerStopAltShooting 37;
event OnPlayerStartShooting 13;
event OnAction 18;
event OnHit 22;
event OnDispose 32;
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
			@BroadcastMessage("unholster", f_bb9_a0_o(), L2);
			f_c43_a1_v(L0 + "_unholster");
			@SetWeaponHolster(false);
			@PlayAnimation("unholster");
			@WaitForAnimEnd();
		} else {
			@BroadcastMessage("holster", f_bb9_a0_o(), L2);
			f_c43_a1_v(L0 + "_holster");
			@PlayAnimation("holster");
			@WaitForAnimEnd();
			@SetWeaponHolster(true);
		}
	}
}

task t1
{
	var bool tv0;
	var bool tv1;
	var float tv2;

	void init(float a0)
	{
		tv0 = false;
		tv1 = false;
		tv2 = a0;
		do {
			@PlayAnimation("block");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			f_66_a0_v();
			tv1 = true;
			while (f_7a_a0_b() && !tv0) {
				@PlayAnimation("walkblock");
				@WaitForAnimEnd();
			}
			tv1 = false;
			f_70_a0_v();
			if (tv0) {
				return;
			}
			@PlayAnimation("unblock");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_7a_a0_b());
	}

	void f_66_a0_v(void)
	{
		f_b2e_a2_v("armor_phys", tv2);
		@SetProperty("blocking", true);
	}

	void f_70_a0_v(void)
	{
		@SetProperty("blocking", false);
		f_b2e_a2_v("armor_phys", -tv2);
	}

	bool f_7a_a0_b(void)
	{
		bool L0;
		@IsAltShooting(L0);
		return L0;
	}

	void OnPlayerStopAltShooting(void)
	{
		if (tv1) {
			@StopAnimation();
		}
	}

	void OnPlayerStartShooting(void)
	{
		f_70_a0_v();
		if (t2{}) {
			tv0 = true;
		} else {
			f_66_a0_v();
		}
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
			if (tv1) {
				@StopAnimation();
			}
		} else {
			global.OnAction(a0);
		}
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
		if (tv1) {
			@PlayAnimation("hitblock");
		}
	}

	void OnDispose(void)
	{
		if (tv1) {
			f_b2e_a2_v("armor_phys", -tv2);
			@SetProperty("blocking", false);
		}
	}
}

task t2
{
	var bool tv0;

	bool init(void)
	{
		f_c9_a0_v();
		return tv0;
	}

	string f_ba_a0_s(void)
	{
		return "punch";
	}

	float f_bc_a1_f(bool a0)
	{
		return a0 ? 0.20000000298023224 : 0.10000000149011612;
	}

	int f_c3_a0_i(void)
	{
		return 0;
	}

	int f_c5_a0_i(void)
	{
		return 0;
	}

	string f_c7_a0_s(void)
	{
		return "b";
	}

	void f_c9_a0_v(void)
	{
		int L0;
		tv0 = false;
		L0 = 0;
		for (; ; ) {
			string L1;
			bool L2;
			L0 = L0 + 1;
			L1 = f_c7_a0_s() + "attack" + L0 + "_phase1";
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
			if (f_1bd_a0_b()) {
				@GetVictimMaterialExact(L6, L7, L8, L5, L4);
				if (L6 != null && f_b22_a2_b(L6, "health") && !f_b94_a1_b(L6) && L7 == 4) {
					if (L6->FuncExist("GetDirection", 1)) {
						@GetDirection(L10);
						L6->GetDirection(L11);
						L9 = f_bfb_a2_f(L10, L11) >= 0.4999999701976776;
					}
				}
			}
			if (L9) {
				L12 = "battack";
				@PlaySound(f_ba_a0_s() + "_back");
			} else {
				int L13;
				@irand(L13, L0);
				L12 = f_c7_a0_s() + "attack" + (L13 + 1);
				@PlaySound(f_ba_a0_s() + (L13 + 1));
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
					L9 = f_bfb_a2_f(L14, L15) >= 0.4999999701976776;
				} else {
					L9 = false;
				}
				float L16;
				L16 = f_1aa_a1_f(L9);
				if (L7 == 4) {
					L16 = L16 * 3.0;
				}
				float L17;
				L17 = f_b4b_a3_f(L6, L16, f_c3_a0_i());
				if (L17) {
					int L18;
					bool L19;
					@irand(L18, 2);
					@PlaySound(f_ba_a0_s() + "_hit" + (L18 + 1));
					@ReportAttack(L6);
					@ReportHit(L6, f_c5_a0_i(), L17, L16, L8, L5);
					g2->in(L19, L6);
					if (!L19) {
						g3->add(L6);
						@BroadcastPlayerDamage(L6, false);
					} else {
						@BroadcastPlayerDamage(L6, true);
					}
				}
				f_1bc_a0_v();
			}
			@PlayAnimation(L12 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_1bf_a0_b());
	}

	float f_1aa_a1_f(bool a0)
	{
		return f_bc_a1_f(a0);
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void f_1bc_a0_v(void)
	{
	}

	bool f_1bd_a0_b(void)
	{
		return false;
	}

	bool f_1bf_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t3
{
	var bool tv0;

	string f_1c4_a0_s(void)
	{
		return "punch";
	}

	float f_1c6_a1_f(bool a0)
	{
		return a0 ? 0.30000001192092896 : 0.20000000298023224;
	}

	int f_1cd_a0_i(void)
	{
		return 0;
	}

	int f_1cf_a0_i(void)
	{
		return 0;
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
			L1 = f_2c7_a0_s() + "attack" + L0 + "_phase1";
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
			if (f_2c5_a0_b()) {
				@GetVictimMaterialExact(L6, L7, L8, L5, L4);
				if (L6 != null && f_b22_a2_b(L6, "health") && !f_b94_a1_b(L6) && L7 == 4) {
					if (L6->FuncExist("GetDirection", 1)) {
						@GetDirection(L10);
						L6->GetDirection(L11);
						L9 = f_bfb_a2_f(L10, L11) >= 0.4999999701976776;
					}
				}
			}
			if (L9) {
				L12 = "battack";
				@PlaySound(f_1c4_a0_s() + "_back");
			} else {
				int L13;
				@irand(L13, L0);
				L12 = f_2c7_a0_s() + "attack" + (L13 + 1);
				@PlaySound(f_1c4_a0_s() + (L13 + 1));
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
					L9 = f_bfb_a2_f(L14, L15) >= 0.4999999701976776;
				} else {
					L9 = false;
				}
				float L16;
				L16 = f_2b2_a1_f(L9);
				if (L7 == 4) {
					L16 = L16 * 3.0;
				}
				float L17;
				L17 = f_b4b_a3_f(L6, L16, f_1cd_a0_i());
				if (L17) {
					int L18;
					bool L19;
					@irand(L18, 2);
					@PlaySound(f_1c4_a0_s() + "_hit" + (L18 + 1));
					@ReportAttack(L6);
					@ReportHit(L6, f_1cf_a0_i(), L17, L16, L8, L5);
					g2->in(L19, L6);
					if (!L19) {
						g3->add(L6);
						@BroadcastPlayerDamage(L6, false);
					} else {
						@BroadcastPlayerDamage(L6, true);
					}
				}
				f_2c4_a0_v();
			}
			@PlayAnimation(L12 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_2c9_a0_b());
	}

	float f_2b2_a1_f(bool a0)
	{
		return f_1c6_a1_f(a0);
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void f_2c4_a0_v(void)
	{
	}

	bool f_2c5_a0_b(void)
	{
		return false;
	}

	string f_2c7_a0_s(void)
	{
		return "";
	}

	bool f_2c9_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t4
{
	var bool tv0;

	string f_2ce_a0_s(void)
	{
		return "scalpel";
	}

	float f_2d0_a1_f(bool a0)
	{
		return 0.6000000238418579;
	}

	float f_2d3_a0_f(void)
	{
		return 0.5;
	}

	int f_2d5_a0_i(void)
	{
		return 2;
	}

	int f_2d7_a0_i(void)
	{
		return 0;
	}

	int f_2d9_a0_i(void)
	{
		return 1;
	}

	float f_2db_a1_f(bool a0)
	{
		return f_2d0_a1_f(a0) * f_d6e_a1_f(f_2d3_a0_f());
	}

	void f_2e9_a0_v(void)
	{
		f_d5c_a1_v(f_2d5_a0_i());
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
			L1 = f_3df_a0_s() + "attack" + L0 + "_phase1";
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
			if (f_3dd_a0_b()) {
				@GetVictimMaterialExact(L6, L7, L8, L5, L4);
				if (L6 != null && f_b22_a2_b(L6, "health") && !f_b94_a1_b(L6) && L7 == 4) {
					if (L6->FuncExist("GetDirection", 1)) {
						@GetDirection(L10);
						L6->GetDirection(L11);
						L9 = f_bfb_a2_f(L10, L11) >= 0.4999999701976776;
					}
				}
			}
			if (L9) {
				L12 = "battack";
				@PlaySound(f_2ce_a0_s() + "_back");
			} else {
				int L13;
				@irand(L13, L0);
				L12 = f_3df_a0_s() + "attack" + (L13 + 1);
				@PlaySound(f_2ce_a0_s() + (L13 + 1));
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
					L9 = f_bfb_a2_f(L14, L15) >= 0.4999999701976776;
				} else {
					L9 = false;
				}
				float L16;
				L16 = f_2db_a1_f(L9);
				if (L7 == 4) {
					L16 = L16 * 3.0;
				}
				float L17;
				L17 = f_b4b_a3_f(L6, L16, f_2d7_a0_i());
				if (L17) {
					int L18;
					bool L19;
					@irand(L18, 2);
					@PlaySound(f_2ce_a0_s() + "_hit" + (L18 + 1));
					@ReportAttack(L6);
					@ReportHit(L6, f_2d9_a0_i(), L17, L16, L8, L5);
					g2->in(L19, L6);
					if (!L19) {
						g3->add(L6);
						@BroadcastPlayerDamage(L6, false);
					} else {
						@BroadcastPlayerDamage(L6, true);
					}
				}
				f_2e9_a0_v();
			}
			@PlayAnimation(L12 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_3e1_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	bool f_3dd_a0_b(void)
	{
		return false;
	}

	string f_3df_a0_s(void)
	{
		return "";
	}

	bool f_3e1_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t5
{
	var bool tv0;

	bool f_3e6_a0_b(void)
	{
		return true;
	}

	string f_3e8_a0_s(void)
	{
		return "knife";
	}

	float f_3ea_a1_f(bool a0)
	{
		return a0 ? 0.699999988079071 : 0.4000000059604645;
	}

	float f_3f1_a0_f(void)
	{
		return 0.5;
	}

	int f_3f3_a0_i(void)
	{
		return 4;
	}

	int f_3f5_a0_i(void)
	{
		return 0;
	}

	int f_3f7_a0_i(void)
	{
		return 1;
	}

	float f_3f9_a1_f(bool a0)
	{
		return f_3ea_a1_f(a0) * f_d6e_a1_f(f_3f1_a0_f());
	}

	void f_407_a0_v(void)
	{
		f_d5c_a1_v(f_3f3_a0_i());
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
			L1 = f_4fb_a0_s() + "attack" + L0 + "_phase1";
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
			if (f_3e6_a0_b()) {
				@GetVictimMaterialExact(L6, L7, L8, L5, L4);
				if (L6 != null && f_b22_a2_b(L6, "health") && !f_b94_a1_b(L6) && L7 == 4) {
					if (L6->FuncExist("GetDirection", 1)) {
						@GetDirection(L10);
						L6->GetDirection(L11);
						L9 = f_bfb_a2_f(L10, L11) >= 0.4999999701976776;
					}
				}
			}
			if (L9) {
				L12 = "battack";
				@PlaySound(f_3e8_a0_s() + "_back");
			} else {
				int L13;
				@irand(L13, L0);
				L12 = f_4fb_a0_s() + "attack" + (L13 + 1);
				@PlaySound(f_3e8_a0_s() + (L13 + 1));
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
					L9 = f_bfb_a2_f(L14, L15) >= 0.4999999701976776;
				} else {
					L9 = false;
				}
				float L16;
				L16 = f_3f9_a1_f(L9);
				if (L7 == 4) {
					L16 = L16 * 3.0;
				}
				float L17;
				L17 = f_b4b_a3_f(L6, L16, f_3f5_a0_i());
				if (L17) {
					int L18;
					bool L19;
					@irand(L18, 2);
					@PlaySound(f_3e8_a0_s() + "_hit" + (L18 + 1));
					@ReportAttack(L6);
					@ReportHit(L6, f_3f7_a0_i(), L17, L16, L8, L5);
					g2->in(L19, L6);
					if (!L19) {
						g3->add(L6);
						@BroadcastPlayerDamage(L6, false);
					} else {
						@BroadcastPlayerDamage(L6, true);
					}
				}
				f_407_a0_v();
			}
			@PlayAnimation(L12 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_4fd_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	string f_4fb_a0_s(void)
	{
		return "";
	}

	bool f_4fd_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t6
{
	var bool tv0;

	bool f_502_a0_b(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (!f_d2d_a2_b("rifle_ammo", 1)) {
				@PlaySound(f_54b_a0_s() + "_noammo");
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int f_525_a0_i(void)
	{
		return 1;
	}

	float f_527_a0_f(void)
	{
		return 0.01745329238474369;
	}

	bool f_529_a0_b(void)
	{
		return true;
	}

	void f_52b_a0_v(void)
	{
		bool L0;
		@SetWeaponProperty(L0, "ammo", false);
		f_eab_a0_v();
	}

	void f_534_a0_v(void)
	{
		f_538_a0_v();
	}

	void f_538_a0_v(void)
	{
		if (f_d2d_a2_b("rifle_ammo", 1)) {
			@PlaySound(f_54b_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string f_54b_a0_s(void)
	{
		return "rifle";
	}

	float f_54d_a0_f(void)
	{
		return 1.5;
	}

	int f_54f_a0_i(void)
	{
		return 1;
	}

	int f_551_a0_i(void)
	{
		return 2;
	}

	int f_553_a0_i(void)
	{
		return 2;
	}

	void init(void)
	{
		tv0 = false;
		do {
			if (!f_502_a0_b()) {
				break;
			}
			string L0;
			@GetCurrentWeapon(L0);
			string L1;
			L1 = "attack1";
			@SetAttackState(true);
			f_52b_a0_v();
			@PlayAnimation(L1 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@TriggerWeapon("shot");
			@PlaySound(f_54b_a0_s() + "_shot");
			f_d5c_a1_v(f_553_a0_i());
			f_640_a0_v();
			@SetAttackState(false);
			int L2;
			L2 = f_525_a0_i();
			bool L3;
			L3 = false;
			float L4;
			L4 = f_54d_a0_f() / L2;
			float L5;
			L5 = 1.0 / (1.5 + (1.0 / f_527_a0_f() - 1.5) * f_d51_a0_f());
			Vector L6;
			@GetDirection(L6);
			object L7;
			L7 = f_be2_a0_o();
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
					L14 = f_b4b_a3_f(L10, L13, f_54f_a0_i());
					if (L14) {
						L7->add(L10);
						@ReportHit(L10, f_551_a0_i(), L14, L13, L12, L9);
						if (f_529_a0_b()) {
							float L15;
							L10->GetProperty("health", L15);
							if (!L15) {
								object L16;
								@GetVictimMaterialExact(L16, L11, L12, L9, 10000, L10);
								if (L16 && L16 != L10) {
									float L17;
									L17 = f_b4b_a3_f(L16, L13 * 0.75, f_54f_a0_i());
									if (L17) {
										L7->add(L16);
										@ReportHit(L16, f_551_a0_i(), L17, L13, L12, L9);
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
			f_534_a0_v();
		} while (f_641_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void f_640_a0_v(void)
	{
	}

	bool f_641_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t7
{
	void init(void)
	{
		f_65e_a0_v();
		if (f_d2d_a2_b("rifle_ammo", 1)) {
			@PlaySound(f_65c_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string f_65c_a0_s(void)
	{
		return "rifle";
	}

	void f_65e_a0_v(void)
	{
	}
}

task t8
{
	var bool tv0;

	bool f_65f_a0_b(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (!f_d2d_a2_b("revolver_ammo", 6)) {
				@PlaySound(f_6c2_a0_s() + "_noammo");
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int f_682_a0_i(void)
	{
		return 1;
	}

	float f_684_a0_f(void)
	{
		return 0.02617993950843811;
	}

	void f_686_a0_v(void)
	{
		bool L0;
		int L1;
		@GetWeaponProperty(L0, "ammo", L1);
		@SetWeaponProperty(L0, "ammo", L1 - 1);
		f_eab_a0_v();
	}

	void f_693_a0_v(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			f_6a3_a0_v();
		}
	}

	void f_6a3_a0_v(void)
	{
		if (f_d2d_a2_b("revolver_ammo", 6)) {
			@PlaySound(f_6c2_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	void OnAction(int a0)
	{
		if (a0 == 11) {
			f_6a3_a0_v();
		}
		global.OnAction(a0);
	}

	string f_6c2_a0_s(void)
	{
		return "revolver";
	}

	float f_6c4_a0_f(void)
	{
		return 0.800000011920929;
	}

	int f_6c6_a0_i(void)
	{
		return 1;
	}

	int f_6c8_a0_i(void)
	{
		return 2;
	}

	int f_6ca_a0_i(void)
	{
		return 2;
	}

	void init(void)
	{
		tv0 = false;
		do {
			if (!f_65f_a0_b()) {
				break;
			}
			string L0;
			@GetCurrentWeapon(L0);
			string L1;
			L1 = "attack1";
			@SetAttackState(true);
			f_686_a0_v();
			@PlayAnimation(L1 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@TriggerWeapon("shot");
			@PlaySound(f_6c2_a0_s() + "_shot");
			f_d5c_a1_v(f_6ca_a0_i());
			f_7ac_a0_v();
			@SetAttackState(false);
			int L2;
			L2 = f_682_a0_i();
			bool L3;
			L3 = false;
			float L4;
			L4 = f_6c4_a0_f() / L2;
			float L5;
			L5 = 1.0 / (1.5 + (1.0 / f_684_a0_f() - 1.5) * f_d51_a0_f());
			Vector L6;
			@GetDirection(L6);
			object L7;
			L7 = f_be2_a0_o();
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
					L14 = f_b4b_a3_f(L10, L13, f_6c6_a0_i());
					if (L14) {
						L7->add(L10);
						@ReportHit(L10, f_6c8_a0_i(), L14, L13, L12, L9);
						if (f_7ad_a0_b()) {
							float L15;
							L10->GetProperty("health", L15);
							if (!L15) {
								object L16;
								@GetVictimMaterialExact(L16, L11, L12, L9, 10000, L10);
								if (L16 && L16 != L10) {
									float L17;
									L17 = f_b4b_a3_f(L16, L13 * 0.75, f_6c6_a0_i());
									if (L17) {
										L7->add(L16);
										@ReportHit(L16, f_6c8_a0_i(), L17, L13, L12, L9);
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
			f_693_a0_v();
		} while (f_7af_a0_b());
	}

	void f_7ac_a0_v(void)
	{
	}

	bool f_7ad_a0_b(void)
	{
		return false;
	}

	bool f_7af_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t9
{
	void init(void)
	{
		f_7cc_a0_v();
		if (f_d2d_a2_b("revolver_ammo", 6)) {
			@PlaySound(f_7ca_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string f_7ca_a0_s(void)
	{
		return "revolver";
	}

	void f_7cc_a0_v(void)
	{
	}
}

task t10
{
	var bool tv0;

	bool f_7cd_a0_b(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (!f_d2d_a2_b("samopal_ammo", 2)) {
				@PlaySound(f_830_a0_s() + "_noammo");
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int f_7f0_a0_i(void)
	{
		return 5;
	}

	float f_7f2_a0_f(void)
	{
		return 0.039269909262657166;
	}

	void f_7f4_a0_v(void)
	{
		bool L0;
		int L1;
		@GetWeaponProperty(L0, "ammo", L1);
		@SetWeaponProperty(L0, "ammo", L1 - 1);
		f_eab_a0_v();
	}

	void f_801_a0_v(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			f_811_a0_v();
		}
	}

	void f_811_a0_v(void)
	{
		if (f_d2d_a2_b("samopal_ammo", 2)) {
			@PlaySound(f_830_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	void OnAction(int a0)
	{
		if (a0 == 11) {
			f_811_a0_v();
		}
		global.OnAction(a0);
	}

	string f_830_a0_s(void)
	{
		return "samopal";
	}

	float f_832_a0_f(void)
	{
		return 1.7999999523162842;
	}

	int f_834_a0_i(void)
	{
		return 1;
	}

	int f_836_a0_i(void)
	{
		return 2;
	}

	int f_838_a0_i(void)
	{
		return 2;
	}

	void init(void)
	{
		tv0 = false;
		do {
			if (!f_7cd_a0_b()) {
				break;
			}
			string L0;
			@GetCurrentWeapon(L0);
			string L1;
			L1 = "attack1";
			@SetAttackState(true);
			f_7f4_a0_v();
			@PlayAnimation(L1 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@TriggerWeapon("shot");
			@PlaySound(f_830_a0_s() + "_shot");
			f_d5c_a1_v(f_838_a0_i());
			f_91a_a0_v();
			@SetAttackState(false);
			int L2;
			L2 = f_7f0_a0_i();
			bool L3;
			L3 = false;
			float L4;
			L4 = f_832_a0_f() / L2;
			float L5;
			L5 = 1.0 / (1.5 + (1.0 / f_7f2_a0_f() - 1.5) * f_d51_a0_f());
			Vector L6;
			@GetDirection(L6);
			object L7;
			L7 = f_be2_a0_o();
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
					L14 = f_b4b_a3_f(L10, L13, f_834_a0_i());
					if (L14) {
						L7->add(L10);
						@ReportHit(L10, f_836_a0_i(), L14, L13, L12, L9);
						if (f_91b_a0_b()) {
							float L15;
							L10->GetProperty("health", L15);
							if (!L15) {
								object L16;
								@GetVictimMaterialExact(L16, L11, L12, L9, 10000, L10);
								if (L16 && L16 != L10) {
									float L17;
									L17 = f_b4b_a3_f(L16, L13 * 0.75, f_834_a0_i());
									if (L17) {
										L7->add(L16);
										@ReportHit(L16, f_836_a0_i(), L17, L13, L12, L9);
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
			f_801_a0_v();
		} while (f_91d_a0_b());
	}

	void f_91a_a0_v(void)
	{
	}

	bool f_91b_a0_b(void)
	{
		return false;
	}

	bool f_91d_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t11
{
	void init(void)
	{
		f_93a_a0_v();
		if (f_d2d_a2_b("samopal_ammo", 2)) {
			@PlaySound(f_938_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string f_938_a0_s(void)
	{
		return "samopal";
	}

	void f_93a_a0_v(void)
	{
	}
}

task t12
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		object L0;
		bool L1;
		tv0 = false;
		tv1 = false;
		@PlayAnimation("use_begin");
		@WaitForAnimEnd();
		if (tv0) {
			return;
		}
		@GetPlayerSelectedObject(L0);
		L1 = false;
		if (f_b22_a2_b(L0, "lp")) {
			bool L2;
			L0->GetProperty("lp", L2);
			if (L2) {
				bool L3;
				L0->GetProperty("locked", L3);
				if (L3) {
					bool L4;
					int L5;
					L1 = true;
					L0->SetProperty("locked", false);
					L5 = 0;
					@GetWeaponProperty(L4, "uses", L5);
					if (L5 <= 1) {
						int L6;
						@GetWeaponItem(L6);
						@SelectItem(L6, false, 0);
						@RemoveItem(L6, 1, 0);
						tv1 = true;
					} else {
						@SetWeaponProperty(L4, "uses", L5 - 1);
					}
				}
			}
		}
		if (L1) {
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

maintask t13
{
	void init(void)
	{
		int L0;
		@GetVariable("player_init", L0);
		if (!L0) {
			@Diary();
			@SetVariable("player_init", 1);
		}
		f_a20_a1_v(f_c51_a0_o());
	}

	void f_9b9_a1_v(string a0)
	{
		if (a0 == "empty") {
			t3{};
		} else {
			if (a0 == "scalpel") {
				t4{};
			} else {
				if (a0 == "knife") {
					t5{};
				} else {
					if (a0 == "rifle") {
						t6{};
					} else {
						if (a0 == "revolver") {
							t8{};
						} else {
							if (a0 == "samopal") {
								t10{};
							} else {
								if (a0 == "lockpick") {
									t12{};
								}
							}
						}
					}
				}
			}
		}
	}

	void f_9f9_a1_v(string a0)
	{
		if (a0 == "rifle") {
			t7{};
		} else {
			if (a0 == "revolver") {
				t9{};
			} else {
				if (a0 == "samopal") {
					t11{};
				}
			}
		}
	}

	void f_a15_a1_v(string a0)
	{
		if (a0 == "empty") {
			t1{0.25};
		}
	}

	void f_a20_a1_v(object a0)
	{
		g1 = f_bdc_a0_o();
		g2 = f_bdc_a0_o();
		g3 = f_bdc_a0_o();
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
		f_b07_a0_v();
		float L4;
		@GetProperty("health", L4);
		if (L4 <= 0 && !f_c4b_a0_b()) {
			f_cba_a0_v();
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
			f_b0b_a0_v();
			@GetCurrentWeapon(L1);
			f_9b9_a1_v(L1);
			f_b07_a0_v();
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
			f_b0b_a0_v();
			@GetCurrentWeapon(L1);
			f_a15_a1_v(L1);
			f_b07_a0_v();
			@IsShooting(L2);
			if (L2) {
				OnPlayerStartShooting();
			}
		}
	}

	void OnPlayerHolsterWeapon(void)
	{
		f_b0b_a0_v();
		t0{};
		f_b07_a0_v();
	}

	void OnTimer(int a0)
	{
		bool L0;
		if (f_d77_a1_b(a0)) {
			return;
		}
		f_b0b_a0_v();
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
		f_b07_a0_v();
	}

	void OnAction(int a0)
	{
		if (a0 == 11) {
			string L0;
			@GetCurrentWeapon(L0);
			f_9f9_a1_v(L0);
		} else {
			global.OnAction(a0);
		}
	}
}

void f_b07_a0_v(void)
{
	f_ea2_a0_v();
}

void f_b0b_a0_v(void)
{
	@KillTimer(0);
}

string f_b0f_a1_s(int a0)
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

bool f_b1d_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_b22_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

void f_b2e_a2_v(string a0, float a1)
{
	float L0;
	@GetProperty(a0, L0);
	@SetProperty(a0, L0 + a1);
}

bool f_b35_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_b22_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_bc6_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_b4b_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_b22_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_b22_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_b0f_a1_s(a2);
	if (!f_b22_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_bbf_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_bc6_a3_f(L4 - L5, 0, 1));
	if (f_b1d_a1_b(a0)) {
		f_c2f_a1_v(-L5);
	}
	return L5;
}

bool f_b94_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

string f_b99_a1_s(int a0)
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

object f_bb9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_bbf_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_bc6_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_bd1_a3_i(int a0, int a1, int a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_bdc_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

object f_be2_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

float f_be8_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_bf1_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_bfb_a2_f(Vector a0, Vector a1)
{
	return f_be8_a2_f(a0, a1) / (f_bf1_a1_f(a0) * f_bf1_a1_f(a1));
}

bool f_c0c_a2_b(object a0, float a1)
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
	f_c39_a1_v(a1);
	f_b35_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_c2f_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

void f_c39_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

void f_c43_a1_v(string a0)
{
	bool L0;
	@IsExistingSound(L0, a0);
	if (L0) {
		@PlaySound(a0);
	}
}

bool f_c4b_a0_b(void)
{
	bool L0;
	@GetVariable("god_mode", L0);
	return L0;
}

object f_c51_a0_o(void)
{
	object L0;
	L0 = null;
	return L0;
}

bool f_c56_a0_b(void)
{
	int L0;
	@GetItemCountOfType(L0, "kerosene");
	return L0;
}

int f_c5c_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

bool f_c62_a1_b(int a0)
{
	if (a0 == 10) {
		f_d05_a0_v();
		return true;
	} else {
		if (a0 == 11) {
			f_d0d_a0_v();
			return true;
		} else {
			if (a0 == 12) {
				f_d09_a0_v();
				return true;
			}
		}
	}
	return false;
}

void f_c7f_a0_v(void)
{
	bool L0;
	int L1;
	string L2;
	int L3;
	@GetGroundMaterial(L0, L1);
	if (!L0) {
		L1 = -1;
	}
	L2 = f_b99_a1_s(L1);
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

void f_cba_a0_v(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, "player_death", "play_death_burah.bin");
	@SetDeathState();
}

void f_cc6_a0_v(void)
{
	bool L0;
	@KillTimer(11, L0);
	if (L0) {
		@ModNoise(-3);
	}
}

void f_cd0_a0_v(void)
{
	f_cc6_a0_v();
	@SetTimer(11, 0.15000000596046448);
	@ModNoise(3);
}

void f_cdb_a0_v(void)
{
	bool L0;
	@KillTimer(10, L0);
	if (L0) {
		@ModNoise(-2);
	}
}

void f_ce5_a0_v(void)
{
	bool L0;
	@KillTimer(12, L0);
	if (L0) {
		@ModNoise(-1);
	}
}

void f_cef_a0_v(void)
{
	f_cdb_a0_v();
	@SetTimer(10, 0.3499999940395355);
	@ModNoise(2);
}

void f_cfa_a0_v(void)
{
	f_ce5_a0_v();
	@SetTimer(12, 0.6000000238418579);
	@ModNoise(1);
}

void f_d05_a0_v(void)
{
	f_c7f_a0_v();
}

void f_d09_a0_v(void)
{
	f_c7f_a0_v();
}

void f_d0d_a0_v(void)
{
	f_c7f_a0_v();
	f_cc6_a0_v();
}

void OnPlayerEnemy(void)
{
	f_cfa_a0_v();
	f_cc6_a0_v();
}

void OnPlayerStartWalking(void)
{
	f_cef_a0_v();
	f_cc6_a0_v();
}

void OnPlayerStopWalking(void)
{
	f_cdb_a0_v();
	f_cd0_a0_v();
}

void OnLSHAnimationEnd(void)
{
	f_ce5_a0_v();
}

bool f_d2d_a2_b(string a0, int a1)
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

float f_d51_a0_f(void)
{
	bool L0;
	int L1;
	@GetWeaponProperty(L0, "durability", L1);
	return L0 ? L1 / 100.0 : 1.0;
}

void f_d5c_a1_v(int a0)
{
	bool L0;
	int L1;
	@GetWeaponProperty(L0, "durability", L1);
	if (!L0) {
		L1 = 100;
	}
	L1 = f_bd1_a3_i(L1 - a0, 0, 100);
	@SetWeaponProperty(L0, "durability", L1);
}

float f_d6e_a1_f(float a0)
{
	return a0 + f_d51_a0_f() * (1 - a0);
}

bool f_d77_a1_b(int a0)
{
	return f_c62_a1_b(a0);
}

void OnTimer(int a0)
{
	f_d77_a1_b(a0);
}

void OnTrigger(string a0)
{
	if (a0 == "die") {
		f_cba_a0_v();
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
			@BroadcastMessage("prc", f_bb9_a0_o(), L1);
		}
	}
	object L2;
	@CreateStringVector(L2);
	L2->add(a1);
	@SendWorldWndMessage(10, L2);
}

void OnDeath(object a0)
{
	if (!f_c4b_a0_b()) {
		f_cba_a0_v();
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
	f_c0c_a2_b(f_bb9_a0_o(), a1);
}

void OnPlayerLand(void)
{
	f_ea2_a0_v();
	f_cd0_a0_v();
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
		L1 = f_b4b_a3_f(f_bb9_a0_o(), L0, 0);
		@ReportHit(f_bb9_a0_o(), 0, L1, L0, [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]);
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
								if (f_c56_a0_b()) {
									@SwitchFlashlight(true);
									@PlaySound("flashlight_on");
								} else {
									@PlaySound("flashlight_nofuel");
								}
							}
						} else {
							if (a0 == 6) {
								bool L9;
								if (f_c5c_a0_i() != 0) {
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
								}
							}
						}
					}
				}
			}
		}
	}
}

void f_ea2_a0_v(void)
{
	float L0;
	@rand(L0, 10, 30);
	@SetTimer(0, L0);
}

void f_eab_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("player_shot", f_bb9_a0_o(), L0);
}

