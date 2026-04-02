maintask task_0
{
	void init(void)
	{
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(void)
	{
		@Blit("text", 0, 0);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int)
	{
		@SetBackground("pressed");
		@SendMessageToParent(0);
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


