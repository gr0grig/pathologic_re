event OnUse 0;

maintask t0
{
	void init(void)
	{
		@SetVisibility(true);
		@DisableUpdate();
		f_5f_a3_v("Knife", 1, 15);
		f_5f_a3_v("tvirin", 1, 7);
		f_6a_a4_v("lemon", 1, 5, 2);
		f_5f_a3_v("funduk", 1, 30);
		f_5f_a3_v("peanut", 1, 30);
		f_5f_a3_v("walnut", 1, 30);
		f_5f_a3_v("rifle_ammo", 1, 10);
		f_6a_a4_v("revolver_ammo", 1, 10, 2);
		f_5f_a3_v("samopal_ammo", 1, 13);
		f_41_a0_v();
	}

	void f_41_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_7e_a0_b()) {
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

void f_5f_a3_v(string a0, int a1, int a2)
{
	if (f_79_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_6a_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_79_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

bool f_79_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_7e_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

