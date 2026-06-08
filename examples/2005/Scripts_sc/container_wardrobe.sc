event OnUse 0;

maintask t0
{
	void init(void)
	{
		object L0;
		bool L1;
		@SetVisibility(true);
		@DisableUpdate();
		@GetScene(L0);
		L0->GetProperty("nailed", L1);
		if (L1) {
			int L2;
			f_c8_a3_v("Rifle", 1, 250);
			f_c8_a3_v("Revolver", 1, 250);
			L2 = f_ed_a0_i();
			if (L2 >= 3) {
				f_c8_a3_v("halfboot_repel", 1, 40);
				f_c8_a3_v("drapery", 1, 30);
				f_c8_a3_v("glove_disp", 1, 40);
			}
			if (L2 >= 5) {
				f_c8_a3_v("cloak_repel", 1, 40);
				f_c8_a3_v("glove", 1, 40);
			}
			if (L2 >= 6) {
				f_c8_a3_v("boot_repel", 1, 70);
			}
			if (L2 >= 8) {
				f_c8_a3_v("raincoat_repel", 1, 60);
			}
			f_d3_a4_v("Money", 1, 2, 5);
		} else {
			int L3;
			L3 = f_ed_a0_i();
			if (L3 >= 3) {
				f_c8_a3_v("halfboot_repel", 1, 60);
				f_c8_a3_v("drapery", 1, 40);
				f_c8_a3_v("glove_disp", 1, 60);
			}
			if (L3 >= 5) {
				f_c8_a3_v("cloak_repel", 1, 60);
				f_c8_a3_v("glove", 1, 60);
			}
			if (L3 >= 8) {
				f_c8_a3_v("boot_repel", 1, 80);
			}
			if (L3 >= 8) {
				f_c8_a3_v("raincoat_repel", 1, 80);
			}
			f_d3_a4_v("Money", 1, 2, 3);
		}
		f_a1_a0_v();
	}

	void f_a1_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_e7_a0_b()) {
			return;
		}
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				int L2;
				@GetItemCount(L2);
				if (L2) {
					object L3;
					@GetScene(L3);
					@BroadcastSteal(a0, L3);
				}
				@Barter(a0);
			}
			enable OnUse;
		}
	}
}

void f_c8_a3_v(string a0, int a1, int a2)
{
	if (f_e2_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_d3_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_e2_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

bool f_e2_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_e7_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_ed_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

