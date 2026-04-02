maintask task_0
{
	void init(string var_0_string)
	{
		@SetBackground("default");
		@ProcessEvents();
		@GetWindowName(var_0_string);
		@Trace(var_0_string);
	}

	// @pe
	void OnStopSee(string var_0_string, int var_1_int, int var_2_int)
	{
		@SetBackground("highlight");
		@SendMessageToParent(0);
	}

	// @pe
	void OnHear(string var_0_string, int var_1_int, int var_2_int)
	{
		@SetBackground("default");
	}

	void OnGameTime(string var_0_string)
	{
		@SetBackground("highlight");
	}

	void OnCollision(string var_0_string)
	{
		@SetBackground("default");
	}

	// @pe
	void event_200(string var_0_string, int var_1_int, string var_2_string, object var_3_object)
	{
		if(var_1_int == 1) {
			@SetBackground("highlight");
		} else if(var_1_int == 0) {
				@SetBackground("default");
		}
	Label_55:
		for(;;) {
			return 0;

		}
	
		if(!(var_1_int == 2)) goto Label_55;
		@SetBackground("highlight");
		@SendMessageToParent(0);
	}

}


