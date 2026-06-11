event OnUse 0;

maintask t0
{
	void init(void)
	{
		int L0;
		@SetVisibility(true);
		f_bd_a4_v("revolver_ammo", 1, 15, 2);
		f_bd_a4_v("rifle_ammo", 1, 20, 2);
		f_bd_a4_v("alpha_pills", 1, 3, 4);
		f_bd_a4_v("beta_pills", 1, 6, 3);
		f_bd_a4_v("gamma_pills", 1, 8, 2);
		f_b2_a3_v("delta_pills", 1, 12);
		f_b2_a3_v("tvirin", 1, 12);
		f_bd_a4_v("lemon", 1, 10, 2);
		f_b2_a3_v("powder", 1, 500);
		f_b2_a3_v("neomicin", 1, 10);
		f_b2_a3_v("monomicin", 1, 20);
		f_b2_a3_v("feromicin", 1, 30);
		f_b2_a3_v("meradorm", 1, 20);
		f_b2_a3_v("novocaine", 1, 10);
		f_b2_a3_v("morfin", 1, 20);
		f_b2_a3_v("etorfin", 1, 30);
		f_b2_a3_v("syringe", 1, 20);
		f_bd_a4_v("kerosene", 2, 5, 10);
		f_b2_a3_v("lockpick", 1, 20);
		L0 = f_d7_a0_i();
		if (L0 >= 3) {
			f_b2_a3_v("glove_disp", 1, 20);
			f_b2_a3_v("glove", 1, 20);
			f_b2_a3_v("mask", 1, 40);
		}
		f_9a_a0_v();
	}

	void f_9a_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_d1_a0_b()) {
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

void f_b2_a3_v(string a0, int a1, int a2)
{
	if (f_cc_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_bd_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_cc_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, a3 + 1);
	}
}

bool f_cc_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_d1_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_d7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

