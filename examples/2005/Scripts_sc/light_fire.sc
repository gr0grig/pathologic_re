event OnLoad 5;
event OnUnload 6;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_2c_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

maintask t1
{
	var float tv0;
	var float tv1;

	void init(void)
	{
		Vector L0;
		t0{};
		@GetColor(L0);
		for (; ; ) {
			float L1;
			float L2;
			@rand(L1, 0.9200000166893005, 1.0);
			@SetColor(L0 * L1);
			@rand(L2, 0.07500000298023224, 0.10000000149011612);
			@Sleep(L2);
		}
	}

	void OnUnload(void)
	{
		@sync();
		t0{};
	}
}

bool f_2c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

