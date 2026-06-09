event OnUse 0;

maintask t0
{
	void init(void)
	{
		@SetVisibility(true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (f_24_a0_i() != 1) {
			return;
		}
		disable OnUse;
		@IsOverrideActive(L0);
		if (!L0) {
			@ShowWindow("dapparatus.xml", false, false, f_1e_a0_o());
			enable OnUse;
		}
	}
}

object f_1e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

int f_24_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

