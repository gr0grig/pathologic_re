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
		int L0;
		bool L1;
		@RemoveAllItems();
		@irand(L0, 20);
		if (L0 > 18) {
			@AddItem(L1, "watch", 0);
		} else {
			if (L0 > 10) {
				@AddItem(L1, "bottle_empty", 0, 2);
			} else {
				if (L0 > 3) {
					@AddItem(L1, "bottle_empty", 0, 1);
				}
			}
		}
		@irand(L0, 20);
		if (L0 > 16) {
			@AddItem(L1, "razor", 0, 1);
		}
		@irand(L0, 60);
		if (L0 == 0) {
			@AddItem(L1, "gold_ring", 0, 1);
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_64_a0_b()) {
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

bool f_64_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

