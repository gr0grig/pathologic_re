event OnUse 0;

maintask t0
{
	void init(void)
	{
		object L0;
		bool L1;
		@SetVisibility(true);
		@GetScene(L0);
		L0->GetProperty("nailed", L1);
		if (L1) {
			int L2;
			f_db_a3_v("Rifle", 1, 150);
			f_db_a3_v("Revolver", 1, 100);
			f_e6_a4_v("rifle_ammo", 1, 15, 3);
			f_e6_a4_v("revolver_ammo", 1, 15, 6);
			L2 = f_100_a0_i();
			if (L2 >= 3) {
				f_db_a3_v("halfboot_repel", 1, 15);
				f_db_a3_v("boot_repel", 1, 20);
				f_db_a3_v("drapery", 1, 5);
				f_db_a3_v("cloak_repel", 1, 15);
				f_db_a3_v("raincoat_repel", 1, 35);
				f_db_a3_v("glove_disp", 1, 20);
				f_db_a3_v("glove", 1, 20);
			}
			if (L2 >= 9) {
				f_db_a3_v("boot_army", 1, 40);
				f_db_a3_v("glove_army", 1, 50);
				f_db_a3_v("balahon", 1, 70);
			}
		} else {
			int L3;
			f_db_a3_v("Rifle", 1, 300);
			f_db_a3_v("Revolver", 1, 200);
			L3 = f_100_a0_i();
			if (L3 >= 3) {
				f_db_a3_v("halfboot_repel", 1, 30);
				f_db_a3_v("boot_repel", 1, 50);
				f_db_a3_v("drapery", 1, 10);
				f_db_a3_v("cloak_repel", 1, 20);
				f_db_a3_v("raincoat_repel", 1, 40);
				f_db_a3_v("glove_disp", 1, 30);
				f_db_a3_v("glove", 1, 30);
			}
			if (L3 >= 9) {
				f_db_a3_v("boot_army", 1, 50);
				f_db_a3_v("glove_army", 1, 50);
				f_db_a3_v("balahon", 1, 100);
			}
		}
		f_c3_a0_v();
	}

	void f_c3_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_fa_a0_b()) {
			return;
		}
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				@Barter(a0);
			}
			enable OnUse;
		}
	}
}

void f_db_a3_v(string a0, int a1, int a2)
{
	if (f_f5_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_e6_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_f5_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, a3 + 1);
	}
}

bool f_f5_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_fa_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_100_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

