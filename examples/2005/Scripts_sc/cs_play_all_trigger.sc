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
		if (a0 == "play") {
			disable OnTrigger;
			@PlayAnimation();
			@Hold();
			enable OnTrigger;
		}
	}
}

