event OnUnload 6;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
	}
}

