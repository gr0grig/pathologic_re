event OnLoad 5;

maintask t0
{
	void init(void)
	{
		string L0;
		@RemoveRTEnvelope();
		@RemoveEnvelope();
		@SetDeathState();
		@GetProperty("animation", L0);
		@LockAnimationEnd("all", L0);
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		string L0;
		@GetProperty("animation", L0);
		@LockAnimationEnd("all", L0);
	}
}

