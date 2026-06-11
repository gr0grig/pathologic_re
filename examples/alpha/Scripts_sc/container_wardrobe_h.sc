event OnUse 0;

maintask t0
{
	void init(void)
	{
		int L0;
		@SetVisibility(true);
		f_80_a3_v("Rifle", 1, 200);
		f_80_a3_v("Revolver", 1, 150);
		f_8b_a4_v("rifle_ammo", 1, 20, 3);
		f_8b_a4_v("revolver_ammo", 1, 20, 6);
		L0 = f_a5_a0_i();
		if (L0 >= 3) {
			f_80_a3_v("halfboot_repel", 1, 15);
			f_80_a3_v("boot_repel", 1, 20);
			f_80_a3_v("drapery", 1, 5);
			f_80_a3_v("cloak_repel", 1, 15);
			f_80_a3_v("raincoat_repel", 1, 35);
			f_80_a3_v("glove_disp", 1, 20);
			f_80_a3_v("glove", 1, 20);
		}
		if (L0 >= 9) {
			f_80_a3_v("boot_army", 1, 40);
			f_80_a3_v("glove_army", 1, 50);
			f_80_a3_v("balahon", 1, 80);
		}
		f_68_a0_v();
	}

	void f_68_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_9f_a0_b()) {
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

void f_80_a3_v(string a0, int a1, int a2)
{
	if (f_9a_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_8b_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_9a_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, a3 + 1);
	}
}

bool f_9a_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_9f_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_a5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

