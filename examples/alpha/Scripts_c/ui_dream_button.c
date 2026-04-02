maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	// @pe
	void OnStopSee(bool var_0_bool, int var_1_int, int var_2_int)
	{
		@SetBackground("pressed");
		@SendMessageToParent(0);
	}

	// @pe
	void OnHear(bool var_0_bool, int var_1_int, int var_2_int)
	{
		@SetBackground("default");
		var_0_bool = !var_0_bool;
	}

	void OnUse(bool var_0_bool)
	{
		if(!var_0_bool) //@nz
			@Blit("start", 0, 0);
		else
			@Blit("stop", 0, 0);
	
	}

}


