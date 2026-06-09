event OnLoad 5;

maintask t0
{
	void init(void)
	{
		@RemoveEnvelope();
		@RemoveRTEnvelope();
		for (; ; ) {
			bool L0;
			while (!f_2a_a0_b()) {
				@Hold();
			}
			@Is3DSoundLoaded(L0, "agony");
			if (L0 && f_2f_a1_b(0.3333333432674408)) {
				@PlayGlobalSound("agony", [0.0, 40.0, 0.0]);
			}
			@PlayAnimation("all", "agony");
			@WaitForAnimEnd(L0);
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

bool f_2a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2f_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

