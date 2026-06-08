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
		disable OnUse;
		@IsOverrideActive(L0);
		if (!L0) {
			@ShowWindow("apparatus.xml", false, false, f_17_a0_o());
			enable OnUse;
		}
	}
}

object f_17_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

