event OnLoad 5;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		if (!tv0) {
			float L0;
			@GetGameTime(L0);
			if (L0 >= 240) {
				tv0 = true;
			}
		}
	}
}

