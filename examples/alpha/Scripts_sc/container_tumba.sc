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
			f_115_a3_v("revolver_ammo", 1, 10);
			f_115_a3_v("rifle_ammo", 1, 15);
			f_120_a4_v("alpha_pills", 1, 4, 4);
			f_120_a4_v("beta_pills", 1, 8, 3);
			f_120_a4_v("gamma_pills", 1, 12, 2);
			f_115_a3_v("delta_pills", 1, 15);
			f_115_a3_v("tvirin", 1, 20);
			f_115_a3_v("lemon", 1, 10);
			f_115_a3_v("neomicin", 1, 15);
			f_115_a3_v("monomicin", 1, 25);
			f_115_a3_v("feromicin", 1, 35);
			f_115_a3_v("meradorm", 1, 25);
			f_115_a3_v("novocaine", 1, 35);
			f_115_a3_v("morfin", 1, 40);
			f_115_a3_v("etorfin", 1, 40);
			f_115_a3_v("syringe", 1, 20);
			f_120_a4_v("kerosene", 1, 2, 10);
			f_115_a3_v("lockpick", 1, 15);
			f_115_a3_v("Scalpel", 1, 25);
			L2 = f_13a_a0_i();
			if (L2 >= 3) {
				f_115_a3_v("glove_disp", 1, 30);
				f_115_a3_v("glove", 1, 30);
				f_115_a3_v("mask", 1, 50);
			}
		} else {
			f_115_a3_v("bandage", 1, 50);
			f_115_a3_v("tourniquet", 1, 50);
			f_115_a3_v("packet", 1, 50);
			f_120_a4_v("needle", 1, 15, 2);
			f_120_a4_v("hook", 1, 15, 3);
			f_120_a4_v("flower", 1, 10, 2);
			f_115_a3_v("syringe", 1, 30);
			f_115_a3_v("watch", 1, 30);
			f_115_a3_v("razor", 1, 30);
			f_115_a3_v("beads", 1, 20);
			f_115_a3_v("bracelet", 1, 20);
			f_115_a3_v("ear_ring", 1, 20);
			f_115_a3_v("gold_ring", 1, 50);
			f_115_a3_v("silver_ring", 1, 30);
			f_115_a3_v("glove", 1, 40);
		}
		f_fd_a0_v();
	}

	void f_fd_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_134_a0_b()) {
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

void f_115_a3_v(string a0, int a1, int a2)
{
	if (f_12f_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_120_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_12f_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, a3 + 1);
	}
}

bool f_12f_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_134_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_13a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

