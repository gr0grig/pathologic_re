event OnUse 0;

maintask t0
{
	void init(void)
	{
		float L0;
		@SetVisibility(true);
		f_1a_a0_v();
		@rand(L0, 13);
		@GameSleep(L0 + 1);
		for (; ; ) {
			f_1a_a0_v();
			@rand(L0, 2);
			@GameSleep(L0 + 12);
		}
	}

	void f_1a_a0_v(void)
	{
		@RemoveAllItems();
		f_5b_a4_v("bottle_empty", 1, 2, 1);
		f_50_a3_v("watch", 1, 20);
		f_50_a3_v("razor", 1, 12);
		f_50_a3_v("needle", 1, 12);
		f_50_a3_v("gold_ring", 1, 60);
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_6f_a0_b()) {
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

void f_50_a3_v(string a0, int a1, int a2)
{
	if (f_6a_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_5b_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_6a_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

bool f_6a_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_6f_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

