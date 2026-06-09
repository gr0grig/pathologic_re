event OnLoad 5;

maintask t0
{
	void init(void)
	{
		@DisableUpdate();
		@Hold();
	}

	void OnLoad(void)
	{
		@SetVisibility(true);
		@StopGroup0();
	}
}

