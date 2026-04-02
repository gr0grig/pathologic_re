maintask task_0
{
	void init(void)
	{
		@SetBackground("default");
		@ProcessEvents();
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int)
	{
		@SendMessageToParent(0);
	}

}


