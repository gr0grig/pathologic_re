event OnUse 0;

maintask t0
{
	void init(void)
	{
		@SetVisibility(true);
		f_7_a0_v();
	}

	void f_7_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_25_a0_b()) {
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

bool f_25_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

