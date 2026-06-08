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
			f_151_a4_v("alpha_pills", 1, 2, 3);
			f_146_a3_v("tvirin", 1, 20);
			f_146_a3_v("lemon", 1, 10);
			f_146_a3_v("meradorm", 1, 25);
			f_146_a3_v("syringe", 1, 20);
			f_151_a4_v("kerosene", 1, 3, 10);
			f_151_a4_v("hook", 1, 15, 3);
			f_151_a4_v("needle", 1, 5, 2);
			f_151_a4_v("Money", 1, 2, 5);
			L2 = f_16b_a0_i();
			if (L2 >= 4) {
				f_146_a3_v("neomicin", 1, 15);
				f_146_a3_v("glove_disp", 1, 30);
			}
			if (L2 >= 5) {
				f_146_a3_v("novocaine", 1, 20);
				f_151_a4_v("beta_pills", 1, 4, 2);
				f_146_a3_v("Scalpel", 1, 45);
			}
			if (L2 >= 7) {
				f_146_a3_v("packet", 1, 25);
				f_146_a3_v("monomicin", 1, 25);
				f_146_a3_v("morfin", 1, 25);
				f_151_a4_v("gamma_pills", 1, 8, 2);
			}
			if (L2 >= 10) {
				f_146_a3_v("feromicin", 1, 35);
				f_146_a3_v("delta_pills", 1, 16);
				f_146_a3_v("etorfin", 1, 40);
			}
		} else {
			int L3;
			L3 = f_16b_a0_i();
			f_146_a3_v("bandage", 1, 50);
			f_146_a3_v("tourniquet", 1, 50);
			f_151_a4_v("alpha_pills", 1, 4, 3);
			if (L3 <= 7) {
				f_146_a3_v("packet", 1, 50);
			} else {
				f_146_a3_v("packet", 1, 20);
			}
			f_151_a4_v("needle", 1, 15, 2);
			f_146_a3_v("hook", 1, 5);
			f_146_a3_v("flower", 1, 10);
			f_146_a3_v("syringe", 1, 30);
			f_146_a3_v("watch", 1, 30);
			f_146_a3_v("razor", 1, 30);
			f_146_a3_v("beads", 1, 20);
			f_146_a3_v("bracelet", 1, 20);
			f_146_a3_v("ear_ring", 1, 20);
			f_146_a3_v("gold_ring", 1, 50);
			f_146_a3_v("silver_ring", 1, 30);
			f_146_a3_v("glove", 1, 80);
			f_151_a4_v("Money", 1, 2, 3);
		}
		f_11f_a0_v();
	}

	void f_11f_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_165_a0_b()) {
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

void f_146_a3_v(string a0, int a1, int a2)
{
	if (f_160_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_151_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_160_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

bool f_160_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_165_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_16b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

