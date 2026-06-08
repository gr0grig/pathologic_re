maintask t0
{
	void init(void)
	{
		float L0;
		@GetAnimationLength(L0);
		for (; ; ) {
			@PlayAnimation(0, L0);
			@WaitForAnimEnd();
		}
	}
}

