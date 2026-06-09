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
		@IsOverrideActive(L0);
		if (!L0) {
			@ActivateSleepMode(a0);
		}
	}
}

