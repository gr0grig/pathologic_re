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
		@SetBackground("highlight");
		@SendMessageToParent(0);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int)
	{
		@SetBackground("default");
	}

	void OnGameTime(void)
	{
		@SetBackground("highlight");
	}

	void OnCollision(void)
	{
		@SetBackground("default");
	}

}


