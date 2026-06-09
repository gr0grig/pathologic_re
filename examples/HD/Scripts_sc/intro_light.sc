event OnTrigger 26;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "off") {
			t1{};
		}
	}
}

task t1
{
	void init(void)
	{
		Vector L0;
		float L1;
		float L2;
		@GetColor(L0);
		L1 = 1;
		L2 = 0.8999999761581421;
		for (; ; ) {
			float L3;
			@sync(L3);
			L1 = L1 - L3 * L2;
			if (L1 <= 0.009999999776482582) {
				break;
			}
			@SetColor(L0 * L1);
		}
		@SetColor(L0 * 0.009999999776482582);
	}
}

