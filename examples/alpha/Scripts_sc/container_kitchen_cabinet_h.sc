event OnUse 0;

maintask t0
{
	void init(void)
	{
		@SetVisibility(true);
		f_44_a3_v("Knife", 1, 10);
		f_44_a3_v("Tvirin", 1, 7);
		f_4f_a4_v("Lemon", 1, 5, 2);
		f_44_a3_v("Funduk", 1, 30);
		f_44_a3_v("Peanut", 1, 30);
		f_44_a3_v("Walnut", 1, 30);
		f_2c_a0_v();
	}

	void f_2c_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_63_a0_b()) {
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

void f_44_a3_v(string a0, int a1, int a2)
{
	if (f_5e_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_4f_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_5e_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, a3 + 1);
	}
}

bool f_5e_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_63_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

