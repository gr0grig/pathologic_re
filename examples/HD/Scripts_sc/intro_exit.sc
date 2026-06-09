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
		@TriggerWorld("exit");
	}
}

