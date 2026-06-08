event OnIntersection 23;
event OnUnload 6;
event OnStopIntersection 27;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnIntersection(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			t1{a0};
		}
	}
}

task t1
{
	var object tv0;

	void init(object a0)
	{
		tv0 = a0;
		for (; ; ) {
			int L0;
			bool L1;
			@PlaySound(f_37_a1_b(0.5) ? "sound1" : "sound2");
			@irand(L0, 15);
			@Sleep(L0 + 15, L1);
			if (!L1 || !tv0) {
				break;
			}
		}
	}

	void OnUnload(void)
	{
		@StopGroup0();
	}

	void OnStopIntersection(object a0)
	{
		if (tv0 == a0) {
			@StopGroup0();
		}
	}
}

bool f_37_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

