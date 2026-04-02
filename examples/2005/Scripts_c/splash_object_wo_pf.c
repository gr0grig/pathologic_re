maintask task_0
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


