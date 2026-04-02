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
		@SetBackground("pressed");
		@SendMessageToParent(-1);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int)
	{
		@SetBackground("default");
	}

	void OnCollision(void)
	{
		@SetBackground("default");
	}

}


