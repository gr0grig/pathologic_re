event OnTimer 7;
event OnPlayerStopAltShooting 37;
event OnAction 18;
event OnHit 22;
event OnDispose 32;
event OnPlayerStartShooting 13;
event OnPlayerStopShooting 14;
event OnPlayerStartAltShooting 36;
event OnPlayerHolsterWeapon 15;
event OnTrigger 26;
event OnPropertyChange 16;
event OnDeath 41;
event OnReputationChange 31;
event OnPlayerLand 19;
event OnPlayerStartWalking 20;
event OnPlayerStopWalking 21;
event OnAttacked 17;
event OnFallDamage 39;

var string g0;
var object g1;

task t0
{
	void init(void)
	{
		bool L0;
		@IsWeaponHolstered(L0);
		if (L0) {
			@SetWeaponHolster(false);
			@PlayAnimation("unholster");
			@WaitForAnimEnd();
		} else {
			@PlayAnimation("holster");
			@WaitForAnimEnd();
			@SetWeaponHolster(true);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}
}

task t1
{
	var bool tv0;
	var bool tv1;

	void init(float a0)
	{
		tv0 = false;
		tv1 = false;
		do {
			@PlayAnimation("block");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			f_a65_a2_v("armor_phys", a0);
			tv1 = true;
			while (f_5d_a0_b() && !tv0) {
				@PlayAnimation("walkblock");
				@WaitForAnimEnd();
			}
			tv1 = false;
			f_a65_a2_v("armor_phys", -a0);
			if (tv0) {
				return;
			}
			@PlayAnimation("unblock");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_5d_a0_b());
	}

	bool f_5d_a0_b(void)
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
}

task t2
{
	var bool tv0;

	string f_7d_a0_s(void)
	{
		return "punch";
	}

	float f_7f_a1_f(bool a0)
	{
		return a0 ? 0.4000000059604645 : 0.20000000298023224;
	}

	int f_86_a0_i(void)
	{
		return 0;
	}

	int f_88_a0_i(void)
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
			string L3;
			int L4;
			string L5;
			float L6;
			object L7;
			@GetCurrentWeapon(L3);
			@irand(L4, L0);
			L5 = "attack" + (L4 + 1);
			@PlaySound(f_7d_a0_s() + (L4 + 1));
			@SetAttackState(true);
			@PlayAnimation(L5 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@SetAttackState(false);
			@GetAttackDistance(L6);
			@GetVictim(L6, L7);
			if (L7 != null) {
				bool L8;
				if (L7->FuncExist("GetDirection", 1)) {
					Vector L9;
					Vector L10;
					@GetDirection(L9);
					L7->GetDirection(L10);
					L8 = f_b0f_a2_f(L9, L10) >= 0.4999999701976776;
				} else {
					L8 = false;
				}
				float L11;
				L11 = f_10d_a1_f(L8);
				float L12;
				L12 = f_a7f_a3_f(L7, L11, f_86_a0_i());
				if (L12) {
					int L13;
					@irand(L13, 2);
					@PlaySound(f_7d_a0_s() + "_hit" + (L13 + 1));
					@ReportAttack(L7);
					@ReportHit(L7, f_88_a0_i(), L12, L11);
					@BroadcastPlayerDamage(L7);
				}
				f_12e_a0_v();
			}
			@PlayAnimation(L5 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_12f_a0_b());
	}

	float f_10d_a1_f(bool a0)
	{
		return f_7f_a1_f(a0);
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}

	void f_12e_a0_v(void)
	{
	}

	bool f_12f_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t3
{
	var bool tv0;

	string f_134_a0_s(void)
	{
		return "scalpel";
	}

	float f_136_a1_f(bool a0)
	{
		return a0 ? 0.20000000298023224 : 0.4000000059604645;
	}

	float f_13d_a0_f(void)
	{
		return 0.5;
	}

	int f_13f_a0_i(void)
	{
		return 1;
	}

	int f_141_a0_i(void)
	{
		return 0;
	}

	int f_143_a0_i(void)
	{
		return 1;
	}

	float f_145_a1_f(bool a0)
	{
		return f_136_a1_f(a0) * f_b5c_a1_f(f_13d_a0_f());
	}

	void f_153_a0_v(void)
	{
		f_b49_a1_v(f_13f_a0_i());
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
			string L3;
			int L4;
			string L5;
			float L6;
			object L7;
			@GetCurrentWeapon(L3);
			@irand(L4, L0);
			L5 = "attack" + (L4 + 1);
			@PlaySound(f_134_a0_s() + (L4 + 1));
			@SetAttackState(true);
			@PlayAnimation(L5 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@SetAttackState(false);
			@GetAttackDistance(L6);
			@GetVictim(L6, L7);
			if (L7 != null) {
				bool L8;
				if (L7->FuncExist("GetDirection", 1)) {
					Vector L9;
					Vector L10;
					@GetDirection(L9);
					L7->GetDirection(L10);
					L8 = f_b0f_a2_f(L9, L10) >= 0.4999999701976776;
				} else {
					L8 = false;
				}
				float L11;
				L11 = f_145_a1_f(L8);
				float L12;
				L12 = f_a7f_a3_f(L7, L11, f_141_a0_i());
				if (L12) {
					int L13;
					@irand(L13, 2);
					@PlaySound(f_134_a0_s() + "_hit" + (L13 + 1));
					@ReportAttack(L7);
					@ReportHit(L7, f_143_a0_i(), L12, L11);
					@BroadcastPlayerDamage(L7);
				}
				f_153_a0_v();
			}
			@PlayAnimation(L5 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_1f8_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}

	bool f_1f8_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t4
{
	var bool tv0;

	string f_1fd_a0_s(void)
	{
		return "hammer";
	}

	float f_1ff_a1_f(bool a0)
	{
		return a0 ? 0.6000000238418579 : 0.30000001192092896;
	}

	float f_206_a0_f(void)
	{
		return 0.5;
	}

	int f_208_a0_i(void)
	{
		return 1;
	}

	int f_20a_a0_i(void)
	{
		return 0;
	}

	int f_20c_a0_i(void)
	{
		return 0;
	}

	float f_20e_a1_f(bool a0)
	{
		return f_1ff_a1_f(a0) * f_b5c_a1_f(f_206_a0_f());
	}

	void f_21c_a0_v(void)
	{
		f_b49_a1_v(f_208_a0_i());
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
			string L3;
			int L4;
			string L5;
			float L6;
			object L7;
			@GetCurrentWeapon(L3);
			@irand(L4, L0);
			L5 = "attack" + (L4 + 1);
			@PlaySound(f_1fd_a0_s() + (L4 + 1));
			@SetAttackState(true);
			@PlayAnimation(L5 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@SetAttackState(false);
			@GetAttackDistance(L6);
			@GetVictim(L6, L7);
			if (L7 != null) {
				bool L8;
				if (L7->FuncExist("GetDirection", 1)) {
					Vector L9;
					Vector L10;
					@GetDirection(L9);
					L7->GetDirection(L10);
					L8 = f_b0f_a2_f(L9, L10) >= 0.4999999701976776;
				} else {
					L8 = false;
				}
				float L11;
				L11 = f_20e_a1_f(L8);
				float L12;
				L12 = f_a7f_a3_f(L7, L11, f_20a_a0_i());
				if (L12) {
					int L13;
					@irand(L13, 2);
					@PlaySound(f_1fd_a0_s() + "_hit" + (L13 + 1));
					@ReportAttack(L7);
					@ReportHit(L7, f_20c_a0_i(), L12, L11);
					@BroadcastPlayerDamage(L7);
				}
				f_21c_a0_v();
			}
			@PlayAnimation(L5 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_2c1_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}

	bool f_2c1_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t5
{
	var bool tv0;

	string f_2c6_a0_s(void)
	{
		return "knife";
	}

	float f_2c8_a1_f(bool a0)
	{
		return a0 ? 0.30000001192092896 : 0.30000001192092896;
	}

	float f_2cf_a0_f(void)
	{
		return 0.5;
	}

	int f_2d1_a0_i(void)
	{
		return 1;
	}

	int f_2d3_a0_i(void)
	{
		return 0;
	}

	int f_2d5_a0_i(void)
	{
		return 1;
	}

	float f_2d7_a1_f(bool a0)
	{
		return f_2c8_a1_f(a0) * f_b5c_a1_f(f_2cf_a0_f());
	}

	void f_2e5_a0_v(void)
	{
		f_b49_a1_v(f_2d1_a0_i());
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
			string L3;
			int L4;
			string L5;
			float L6;
			object L7;
			@GetCurrentWeapon(L3);
			@irand(L4, L0);
			L5 = "attack" + (L4 + 1);
			@PlaySound(f_2c6_a0_s() + (L4 + 1));
			@SetAttackState(true);
			@PlayAnimation(L5 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@SetAttackState(false);
			@GetAttackDistance(L6);
			@GetVictim(L6, L7);
			if (L7 != null) {
				bool L8;
				if (L7->FuncExist("GetDirection", 1)) {
					Vector L9;
					Vector L10;
					@GetDirection(L9);
					L7->GetDirection(L10);
					L8 = f_b0f_a2_f(L9, L10) >= 0.4999999701976776;
				} else {
					L8 = false;
				}
				float L11;
				L11 = f_2d7_a1_f(L8);
				float L12;
				L12 = f_a7f_a3_f(L7, L11, f_2d3_a0_i());
				if (L12) {
					int L13;
					@irand(L13, 2);
					@PlaySound(f_2c6_a0_s() + "_hit" + (L13 + 1));
					@ReportAttack(L7);
					@ReportHit(L7, f_2d5_a0_i(), L12, L11);
					@BroadcastPlayerDamage(L7);
				}
				f_2e5_a0_v();
			}
			@PlayAnimation(L5 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_38a_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}

	bool f_38a_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t6
{
	var bool tv0;

	string f_38f_a0_s(void)
	{
		return "trost";
	}

	float f_391_a1_f(bool a0)
	{
		return a0 ? 0.30000001192092896 : 0.20000000298023224;
	}

	float f_398_a0_f(void)
	{
		return 0.5;
	}

	int f_39a_a0_i(void)
	{
		return 1;
	}

	int f_39c_a0_i(void)
	{
		return 0;
	}

	int f_39e_a0_i(void)
	{
		return 0;
	}

	float f_3a0_a1_f(bool a0)
	{
		return f_391_a1_f(a0) * f_b5c_a1_f(f_398_a0_f());
	}

	void f_3ae_a0_v(void)
	{
		f_b49_a1_v(f_39a_a0_i());
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
			string L3;
			int L4;
			string L5;
			float L6;
			object L7;
			@GetCurrentWeapon(L3);
			@irand(L4, L0);
			L5 = "attack" + (L4 + 1);
			@PlaySound(f_38f_a0_s() + (L4 + 1));
			@SetAttackState(true);
			@PlayAnimation(L5 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@SetAttackState(false);
			@GetAttackDistance(L6);
			@GetVictim(L6, L7);
			if (L7 != null) {
				bool L8;
				if (L7->FuncExist("GetDirection", 1)) {
					Vector L9;
					Vector L10;
					@GetDirection(L9);
					L7->GetDirection(L10);
					L8 = f_b0f_a2_f(L9, L10) >= 0.4999999701976776;
				} else {
					L8 = false;
				}
				float L11;
				L11 = f_3a0_a1_f(L8);
				float L12;
				L12 = f_a7f_a3_f(L7, L11, f_39c_a0_i());
				if (L12) {
					int L13;
					@irand(L13, 2);
					@PlaySound(f_38f_a0_s() + "_hit" + (L13 + 1));
					@ReportAttack(L7);
					@ReportHit(L7, f_39e_a0_i(), L12, L11);
					@BroadcastPlayerDamage(L7);
				}
				f_3ae_a0_v();
			}
			@PlayAnimation(L5 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
		} while (f_453_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}

	bool f_453_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t7
{
	var bool tv0;

	bool f_458_a0_b(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (!f_b26_a2_b("rifle_ammo", 1)) {
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int f_474_a0_i(void)
	{
		return 1;
	}

	float f_476_a0_f(void)
	{
		return 0.01745329238474369;
	}

	void f_478_a0_v(void)
	{
		bool L0;
		@SetWeaponProperty(L0, "ammo", false);
	}

	void f_47e_a0_v(void)
	{
		if (f_b26_a2_b("rifle_ammo", 1)) {
			@PlaySound(f_491_a0_s() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string f_491_a0_s(void)
	{
		return "rifle";
	}

	float f_493_a0_f(void)
	{
		return 1.5;
	}

	int f_495_a0_i(void)
	{
		return 0;
	}

	int f_497_a0_i(void)
	{
		return 2;
	}

	void init(void)
	{
		tv0 = false;
		do {
			if (!f_458_a0_b()) {
				break;
			}
			string L0;
			@GetCurrentWeapon(L0);
			int L1;
			@irand(L1, 2);
			string L2;
			L2 = "attack1";
			@SetAttackState(true);
			f_478_a0_v();
			@PlayAnimation(L2 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@PlaySound(f_491_a0_s() + "_shot");
			f_542_a0_v();
			@SetAttackState(false);
			int L3;
			L3 = f_474_a0_i();
			bool L4;
			L4 = false;
			float L5;
			L5 = f_493_a0_f() / L3;
			float L6;
			L6 = f_476_a0_f();
			Vector L7;
			@GetDirection(L7);
			object L8;
			L8 = f_af6_a0_o();
			int L9;
			for (L9 = 0; L9 < L3; L9++) {
				Vector L10;
				@RandVecCone3D(L10, L7, L6);
				object L11;
				int L12;
				Vector L13;
				@GetVictimMaterial(L11, L12, L13, L10);
				if (L11 != null) {
					float L14;
					L14 = f_a7f_a3_f(L11, L5, f_495_a0_i());
					if (L14) {
						L8->add(L11);
						@ReportHit(L11, f_497_a0_i(), L14, L5);
					} else {
						if (L12 != -1) {
							if (!L4) {
								object L15;
								object L16;
								@GetScene(L15);
								@AddActorByType(L16, "scripted", L15, L13, [0.0, 0.0, 1.0], "richochet.xml");
								L16->SetScriptProperty("Material", L12);
								L4 = true;
							}
						}
					}
				}
			}
			object L17;
			L8->iterator(L17);
			object L18;
			bool L19;
			while (L17->Next(L19, L18), L19) {
				@ReportAttack(L18);
				@BroadcastPlayerDamage(L18);
			}
			@PlayAnimation(L2 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			f_47e_a0_v();
		} while (f_543_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}

	void f_542_a0_v(void)
	{
	}

	bool f_543_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t8
{
	var bool tv0;

	bool f_548_a0_b(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (!f_b26_a2_b("revolver_ammo", 6)) {
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int f_564_a0_i(void)
	{
		return 1;
	}

	float f_566_a0_f(void)
	{
		return 0.02617993950843811;
	}

	void f_568_a0_v(void)
	{
		bool L0;
		int L1;
		@GetWeaponProperty(L0, "ammo", L1);
		@SetWeaponProperty(L0, "ammo", L1 - 1);
	}

	void f_572_a0_v(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (f_b26_a2_b("revolver_ammo", 6)) {
				@PlaySound(f_591_a0_s() + "_reload");
				@PlayAnimation("reload");
				@WaitForAnimEnd();
			}
		}
	}

	string f_591_a0_s(void)
	{
		return "revolver";
	}

	float f_593_a0_f(void)
	{
		return 0.800000011920929;
	}

	int f_595_a0_i(void)
	{
		return 0;
	}

	int f_597_a0_i(void)
	{
		return 2;
	}

	void init(void)
	{
		tv0 = false;
		do {
			if (!f_548_a0_b()) {
				break;
			}
			string L0;
			@GetCurrentWeapon(L0);
			int L1;
			@irand(L1, 2);
			string L2;
			L2 = "attack1";
			@SetAttackState(true);
			f_568_a0_v();
			@PlayAnimation(L2 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@PlaySound(f_591_a0_s() + "_shot");
			f_642_a0_v();
			@SetAttackState(false);
			int L3;
			L3 = f_564_a0_i();
			bool L4;
			L4 = false;
			float L5;
			L5 = f_593_a0_f() / L3;
			float L6;
			L6 = f_566_a0_f();
			Vector L7;
			@GetDirection(L7);
			object L8;
			L8 = f_af6_a0_o();
			int L9;
			for (L9 = 0; L9 < L3; L9++) {
				Vector L10;
				@RandVecCone3D(L10, L7, L6);
				object L11;
				int L12;
				Vector L13;
				@GetVictimMaterial(L11, L12, L13, L10);
				if (L11 != null) {
					float L14;
					L14 = f_a7f_a3_f(L11, L5, f_595_a0_i());
					if (L14) {
						L8->add(L11);
						@ReportHit(L11, f_597_a0_i(), L14, L5);
					} else {
						if (L12 != -1) {
							if (!L4) {
								object L15;
								object L16;
								@GetScene(L15);
								@AddActorByType(L16, "scripted", L15, L13, [0.0, 0.0, 1.0], "richochet.xml");
								L16->SetScriptProperty("Material", L12);
								L4 = true;
							}
						}
					}
				}
			}
			object L17;
			L8->iterator(L17);
			object L18;
			bool L19;
			while (L17->Next(L19, L18), L19) {
				@ReportAttack(L18);
				@BroadcastPlayerDamage(L18);
			}
			@PlayAnimation(L2 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			f_572_a0_v();
		} while (f_643_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}

	void f_642_a0_v(void)
	{
	}

	bool f_643_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t9
{
	var bool tv0;

	bool f_648_a0_b(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (!f_b26_a2_b("samopal_ammo", 2)) {
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int f_664_a0_i(void)
	{
		return 5;
	}

	float f_666_a0_f(void)
	{
		return 0.1745329350233078;
	}

	void f_668_a0_v(void)
	{
		bool L0;
		int L1;
		@GetWeaponProperty(L0, "ammo", L1);
		@SetWeaponProperty(L0, "ammo", L1 - 1);
	}

	void f_672_a0_v(void)
	{
		bool L0;
		bool L1;
		@GetWeaponProperty(L0, "ammo", L1);
		if (!L0 || !L1) {
			if (f_b26_a2_b("samopal_ammo", 2)) {
				@PlaySound(f_691_a0_s() + "_reload");
				@PlayAnimation("reload");
				@WaitForAnimEnd();
			}
		}
	}

	string f_691_a0_s(void)
	{
		return "samopal";
	}

	float f_693_a0_f(void)
	{
		return 0.800000011920929;
	}

	int f_695_a0_i(void)
	{
		return 0;
	}

	int f_697_a0_i(void)
	{
		return 2;
	}

	void init(void)
	{
		tv0 = false;
		do {
			if (!f_648_a0_b()) {
				break;
			}
			string L0;
			@GetCurrentWeapon(L0);
			int L1;
			@irand(L1, 2);
			string L2;
			L2 = "attack1";
			@SetAttackState(true);
			f_668_a0_v();
			@PlayAnimation(L2 + "_phase1");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			@PlaySound(f_691_a0_s() + "_shot");
			f_742_a0_v();
			@SetAttackState(false);
			int L3;
			L3 = f_664_a0_i();
			bool L4;
			L4 = false;
			float L5;
			L5 = f_693_a0_f() / L3;
			float L6;
			L6 = f_666_a0_f();
			Vector L7;
			@GetDirection(L7);
			object L8;
			L8 = f_af6_a0_o();
			int L9;
			for (L9 = 0; L9 < L3; L9++) {
				Vector L10;
				@RandVecCone3D(L10, L7, L6);
				object L11;
				int L12;
				Vector L13;
				@GetVictimMaterial(L11, L12, L13, L10);
				if (L11 != null) {
					float L14;
					L14 = f_a7f_a3_f(L11, L5, f_695_a0_i());
					if (L14) {
						L8->add(L11);
						@ReportHit(L11, f_697_a0_i(), L14, L5);
					} else {
						if (L12 != -1) {
							if (!L4) {
								object L15;
								object L16;
								@GetScene(L15);
								@AddActorByType(L16, "scripted", L15, L13, [0.0, 0.0, 1.0], "richochet.xml");
								L16->SetScriptProperty("Material", L12);
								L4 = true;
							}
						}
					}
				}
			}
			object L17;
			L8->iterator(L17);
			object L18;
			bool L19;
			while (L17->Next(L19, L18), L19) {
				@ReportAttack(L18);
				@BroadcastPlayerDamage(L18);
			}
			@PlayAnimation(L2 + "_phase2");
			@WaitForAnimEnd();
			if (tv0) {
				return;
			}
			f_672_a0_v();
		} while (f_743_a0_b());
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			}
		}
	}

	void f_742_a0_v(void)
	{
	}

	bool f_743_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t10
{
	var object tv0;
	var bool tv1;
	var bool tv2;

	void init(void)
	{
		object L0;
		if (!f_84f_a0_b()) {
			return;
		}
		tv2 = false;
		tv1 = false;
		f_78c_a0_v();
		@GetScene(L0);
		@AddActorByType(tv0, "flame", L0, [0.0, 0.0, 0.0]);
		tv0->Attach(f_ad3_a0_o(), "flame");
		tv0->SetLength(0.8333333134651184);
		@SetTimer(20, 0.10000000149011612);
		for (; ; ) {
			@PlayAnimation("attack");
			@WaitForAnimEnd();
			if (tv2) {
				break;
			}
			if (tv1) {
				float L1;
				tv0->GetActualLength(L1);
				if (L1 < 0.01666666753590107) {
					break;
				}
			}
			if (!f_85e_a0_b()) {
				if (!tv1) {
					f_7ba_a0_v();
				}
			}
		}
		@KillTimer(20);
		@RemoveActor(tv0);
		@RemoveAttachPoint("flame");
	}

	void f_78c_a0_v(void)
	{
		Vector L0;
		L0.y = 0;
		L0.x = 0;
		L0.z = 0;
		@CreateAttachPoint("flame", L0);
	}

	void OnDispose(void)
	{
		if (tv0 != null) {
			@RemoveActor(tv0);
		}
		@RemoveAttachPoint("flame");
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv2 = true;
		} else {
			global.OnAction(a0);
		}
	}

	void OnPlayerStartShooting(void)
	{
		if (f_84f_a0_b()) {
			tv1 = false;
			tv0->SetLength(0.8333333134651184);
		}
	}

	void OnPlayerStopShooting(void)
	{
		f_7ba_a0_v();
	}

	void f_7ba_a0_v(void)
	{
		tv1 = true;
		tv0->SetLength(0.0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bda_a0_v();
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
			} else {
				if (a0 == 20) {
					f_7d5_a0_v();
				}
			}
		}
	}

	void f_7d5_a0_v(void)
	{
		object L0;
		float L1;
		float L2;
		bool L3;
		object L4;
		bool L5;
		tv0->Intersect(L0, L1);
		if (!tv1) {
			tv0->SetLength(f_ad9_a2_f(L1, 0.8333333134651184));
		}
		L2 = f_858_a0_f();
		L3 = false;
		while (L0->Next(L5, L4), L5) {
			if (L4 != null && L4 != f_ad3_a0_o()) {
				float L6;
				L3 = true;
				L6 = f_a7f_a3_f(L4, L2, f_85a_a0_i());
				if (f_a59_a2_b(L4, "disease")) {
					float L7;
					L4->GetProperty("disease", L7);
					if (L7 <= 0.10000000149011612) {
						L7 = 0;
					} else {
						L7 = L7 - 0.10000000149011612;
					}
					L4->SetProperty("disease", L7);
				}
				if (f_a59_a2_b(L4, "fire")) {
					float L8;
					L4->GetProperty("fire", L8);
					L4->SetProperty("fire", L8 + 0.10000000149011612);
				}
				@ReportAttack(L4);
				@ReportHit(L4, f_85c_a0_i(), L6, L2);
				@BroadcastPlayerDamage(L4);
			}
		}
		if (L3 && !tv1 && L1 < 0.10000000149011612) {
			f_a7f_a3_f(f_ad3_a0_o(), L2, f_85a_a0_i());
		}
		if (!f_84f_a0_b()) {
			tv1 = true;
		}
	}

	bool f_84f_a0_b(void)
	{
		int L0;
		bool L1;
		@GetInvItemByName(L0, "ognemet_ammo");
		@RemoveItemByType(L1, L0, 1);
		return L1;
	}

	float f_858_a0_f(void)
	{
		return 0.06499999761581421;
	}

	int f_85a_a0_i(void)
	{
		return 1;
	}

	int f_85c_a0_i(void)
	{
		return 4;
	}

	bool f_85e_a0_b(void)
	{
		bool L0;
		@IsShooting(L0);
		return L0;
	}
}

task t11
{
	var bool tv0;

	void init(void)
	{
		Vector L0;
		Vector L1;
		float L2;
		object L3;
		object L4;
		int L5;
		bool L6;
		tv0 = false;
		@PlayAnimation("attack1");
		@WaitForAnimEnd();
		if (tv0) {
			return;
		}
		@GetDirection(L0);
		@GetPosition(L1);
		@GetEyesHeight(L2);
		L1.y += L2;
		L1 = L1 + L0 * 10;
		@GetScene(L3);
		@AddActorByType(L4, "scripted", L3, L1, [0.0, 0.0, 1.0], "player_grenade.xml");
		L4->SetScriptProperty("Owner", f_ad3_a0_o());
		L4->SetScriptProperty("StartVelocity", L0 * 1000);
		L4->SetScriptProperty("DamageAmount", f_8c6_a0_f());
		L4->SetScriptProperty("DamageType", f_8c8_a0_i());
		@GetInvItemByName(L5, "bottle_weapon");
		@RemoveItemByType(L6, L5, 1);
		@SelectAnyItemByID(L6, L5, 0);
		@PlayAnimation("attack2");
		@WaitForAnimEnd();
		if (tv0) {
			return;
		}
		if (L6) {
			@PlayAnimation("aunholster");
			@WaitForAnimEnd();
		} else {
			@SetHandsItem(-1);
			@PlayAnimation("unholster");
			@WaitForAnimEnd();
		}
	}

	void OnAction(int a0)
	{
		if (a0 == 10) {
			tv0 = true;
		} else {
			global.OnAction(a0);
		}
	}

	float f_8c6_a0_f(void)
	{
		return 0.5;
	}

	int f_8c8_a0_i(void)
	{
		return 0;
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
		if (f_a59_a2_b(L0, "lp")) {
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
	void f_934_a1_v(string a0)
	{
		if (a0 == "empty") {
			t2{};
		} else {
			if (a0 == "scalpel") {
				t3{};
			} else {
				if (a0 == "hammer") {
					t4{};
				} else {
					if (a0 == "knife") {
						t5{};
					} else {
						if (a0 == "trost") {
							t6{};
						} else {
							if (a0 == "rifle") {
								t7{};
							} else {
								if (a0 == "revolver") {
									t8{};
								} else {
									if (a0 == "samopal") {
										t9{};
									} else {
										if (a0 == "ognemet") {
											t10{};
										} else {
											if (a0 == "bottle") {
												t11{};
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
				}
			}
		}
	}

	void f_998_a1_v(string a0)
	{
		if (a0 == "empty") {
			t1{0.25};
		}
	}

	void init(void)
	{
		bool L0;
		float L1;
		g1 = f_af6_a0_o();
		@HasProperty("effects", L0);
		if (!L0) {
			@SetProperty("effects", true);
			@ApplyEffect("player_disease.bin");
			@ApplyEffect("player_stat.bin");
			@ApplyEffect("player_hit.bin");
			@ApplyEffect("player_head.bin");
			@ApplyEffect("player_flashlight.bin");
			@ApplyEffect("player_visir.bin");
		}
		f_a49_a0_v();
		@GetProperty("health", L1);
		if (L1 <= 0) {
			f_ba0_a0_v();
			return;
		}
		for (; ; ) {
			bool L2;
			@IsWeaponHolstered(L2);
			if (!L2) {
				bool L3;
				@IsWalking(L3);
				if (L3) {
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
			f_a4d_a0_v();
			@GetCurrentWeapon(L1);
			f_934_a1_v(L1);
			f_a49_a0_v();
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
			f_a4d_a0_v();
			@GetCurrentWeapon(L1);
			f_998_a1_v(L1);
			f_a49_a0_v();
			@IsShooting(L2);
			if (L2) {
				OnPlayerStartShooting();
			}
		}
	}

	void OnPlayerHolsterWeapon(void)
	{
		f_a4d_a0_v();
		t0{};
		f_a49_a0_v();
	}

	void OnTimer(int a0)
	{
		bool L0;
		if (a0 == 10) {
			f_bda_a0_v();
			return;
		} else {
			if (a0 == 11) {
				f_bde_a0_v();
				return;
			}
		}
		f_a4d_a0_v();
		@IsWeaponHolstered(L0);
		if (!L0) {
			int L1;
			@irand(L1, 2);
			@PlayAnimation("idle" + (L1 + 1));
			@WaitForAnimEnd();
		}
		f_a49_a0_v();
	}
}

void f_a49_a0_v(void)
{
	f_cd1_a0_v();
}

void f_a4d_a0_v(void)
{
	@KillTimer(0);
}

string f_a51_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

bool f_a59_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

void f_a65_a2_v(string a0, float a1)
{
	float L0;
	@GetProperty(a0, L0);
	@SetProperty(a0, L0 + a1);
}

bool f_a6c_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_ae0_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_a7f_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_a59_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_a59_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_a51_a1_s(a2);
	if (!f_a59_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_ad9_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_ae0_a3_f(L4 - L5, 0, 1));
	return L5;
}

string f_abf_a1_s(int a0)
{
	if (a0 == 1) {
		return "wood";
	} else {
		if (a0 == 2) {
			return "metal";
		} else {
			if (a0 == 3) {
				return "ground";
			}
		}
	}
	return "stone";
}

object f_ad3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_ad9_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_ae0_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_aeb_a3_i(int a0, int a1, int a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_af6_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

float f_afc_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_b05_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_b0f_a2_f(Vector a0, Vector a1)
{
	return f_afc_a2_f(a0, a1) / (f_b05_a1_f(a0) * f_b05_a1_f(a1));
}

bool f_b20_a0_b(void)
{
	int L0;
	@GetItemCountOfType(L0, "kerosene");
	return L0;
}

bool f_b26_a2_b(string a0, int a1)
{
	int L0;
	@GetInvItemByName(L0, a0);
	int L1;
	for (L1 = 0; L1 < a1; L1++) {
		bool L2;
		@RemoveItemByType(L2, L0, 1);
		if (!L2) {
			break;
		}
	}
	if (!L1) {
		return false;
	}
	bool L3;
	@SetWeaponProperty(L3, "ammo", L1);
	return true;
}

float f_b3e_a0_f(void)
{
	bool L0;
	int L1;
	@GetWeaponProperty(L0, "durability", L1);
	return L0 ? L1 / 100.0 : 1.0;
}

void f_b49_a1_v(int a0)
{
	bool L0;
	int L1;
	@GetWeaponProperty(L0, "durability", L1);
	if (L0) {
		L1 = f_aeb_a3_i(L1 - a0, 0, 100);
	} else {
		L1 = 100;
	}
	@SetWeaponProperty(L0, "durability", L1);
}

float f_b5c_a1_f(float a0)
{
	return a0 + f_b3e_a0_f() * (1 - a0);
}

void f_b65_a0_v(void)
{
	bool L0;
	int L1;
	string L2;
	int L3;
	@GetGroundMaterial(L0, L1);
	if (!L0) {
		L1 = -1;
	}
	L2 = f_abf_a1_s(L1);
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

void f_ba0_a0_v(void)
{
	bool L0;
	@IsDead(L0);
	if (!L0) {
		object L1;
		object L2;
		@SetDeathState();
		@GetMainOutdoorScene(L1);
		@AddBlankActor(L2, L1, "player_death", "play_death_danko.bin");
	}
}

void f_bb0_a0_v(void)
{
	bool L0;
	@KillTimer(11, L0);
	if (L0) {
		@ModNoise(-2);
	}
}

void f_bba_a0_v(void)
{
	f_bb0_a0_v();
	@SetTimer(11, 0.15000000596046448);
	@ModNoise(2);
}

void f_bc5_a0_v(void)
{
	bool L0;
	@KillTimer(10, L0);
	if (L0) {
		@ModNoise(-1);
	}
}

void f_bcf_a0_v(void)
{
	f_bc5_a0_v();
	@SetTimer(10, 0.3499999940395355);
	@ModNoise(1);
}

void f_bda_a0_v(void)
{
	f_b65_a0_v();
}

void f_bde_a0_v(void)
{
	f_b65_a0_v();
	f_bb0_a0_v();
}

void OnTrigger(string a0)
{
	if (a0 == "die") {
		f_ba0_a0_v();
	}
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
	f_ba0_a0_v();
}

void OnReputationChange(object a0, float a1)
{
	bool L0;
	g1->in(L0, a0);
	if (L0) {
		return;
	}
	g1->add(a0);
	f_a6c_a4_b("reputation", a1, 0, 1);
}

void OnPlayerLand(void)
{
	f_cd1_a0_v();
	f_bba_a0_v();
}

void OnPlayerStartWalking(void)
{
	f_bcf_a0_v();
	f_bb0_a0_v();
}

void OnPlayerStopWalking(void)
{
	f_bc5_a0_v();
	f_bba_a0_v();
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
		L1 = f_a7f_a3_f(f_ad3_a0_o(), L0, 0);
		@ReportHit(f_ad3_a0_o(), 0, L1, L0);
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
						@ShowPlayerStats();
					} else {
						if (a0 == 5) {
							bool L7;
							@IsFlashlightOn(L7);
							if (L7) {
								@SwitchFlashlight(false);
								@PlaySound("flashlight_off");
							} else {
								if (f_b20_a0_b()) {
									@SwitchFlashlight(true);
									@PlaySound("flashlight_on");
								} else {
									@PlaySound("flashlight_nofuel");
								}
							}
						} else {
							if (a0 == 6) {
								bool L8;
								@IsVisirOn(L8);
								if (L8) {
									@SwitchVisir(false);
								} else {
									int L9;
									@GetProperty("visir", L9);
									if (L9) {
										int L10;
										@GetProperty("vcharge", L10);
										if (L10 >= 10) {
											@SwitchVisir(true);
										} else {
										}
									}
								}
							} else {
								if (a0 == 7) {
									bool L11;
									@IsOverrideActive(L11);
									if (!L11) {
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

void f_cd1_a0_v(void)
{
	float L0;
	@rand(L0, 10, 30);
	@SetTimer(0, L0);
}

