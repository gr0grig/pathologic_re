maintask t0
{
	var float tv0;
	var float tv1;

	void init(void)
	{
		for (; ; ) {
			float L0;
			@Switch(true);
			@rand(L0, 0.05000000074505806, 1.0);
			@Sleep(L0);
			@Switch(false);
			@rand(L0, 0.05000000074505806, 1.0);
			@Sleep(L0);
		}
	}
}

