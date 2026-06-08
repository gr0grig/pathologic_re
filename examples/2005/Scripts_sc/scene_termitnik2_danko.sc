event OnLoad 5;
event OnUnload 6;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
	}

	void OnUnload(void)
	{
	}
}

