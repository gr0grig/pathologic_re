event OnUse 0;

maintask t0
{
	void init(void)
	{
		int L0;
		@SetVisibility(true);
		@DisableUpdate();
		f_9b_a3_v("meradorm", 1, 20);
		f_a6_a4_v("alpha_pills", 1, 25, 4);
		f_9b_a3_v("tvirin", 1, 12);
		f_a6_a4_v("lemon", 1, 10, 2);
		L0 = f_c0_a0_i();
		if (L0 >= 5) {
			f_9b_a3_v("novocaine", 1, 10);
		}
		if (L0 >= 7) {
			f_9b_a3_v("morfin", 1, 20);
		}
		if (L0 >= 10) {
			f_9b_a3_v("etorfin", 1, 30);
		}
		f_a6_a4_v("revolver_ammo", 1, 20, 2);
		f_9b_a3_v("rifle_ammo", 1, 10);
		f_9b_a3_v("powder", 1, 500);
		f_9b_a3_v("syringe", 1, 20);
		f_a6_a4_v("kerosene", 1, 4, 10);
		f_9b_a3_v("lockpick", 1, 20);
		f_a6_a4_v("hook", 1, 15, 5);
		f_a6_a4_v("needle", 1, 15, 3);
		f_9b_a3_v("glove", 1, 70);
		f_7d_a0_v();
	}

	void f_7d_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_ba_a0_b()) {
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

void f_9b_a3_v(string a0, int a1, int a2)
{
	if (f_b5_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_a6_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_b5_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

bool f_b5_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_ba_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_c0_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

