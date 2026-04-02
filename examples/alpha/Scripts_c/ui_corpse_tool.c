maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
		@SetBackground("disabled");
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	// @pe
	void OnStopSee(bool var_0_bool, int var_1_int, int var_2_int)
	{
		if(var_0_bool != 0) {
			@SendMessageToParent(0);
			@SetBackground("pressed");
		}
	}

	// @pe
	void OnHear(bool var_0_bool, int var_1_int, int var_2_int)
	{
		if(var_0_bool != 0)
			@SetBackground("default");
		else
			@SetBackground("disabled");
	
	}

	void OnCollision(bool var_0_bool)
	{
		if(var_0_bool != 0)
			@SetBackground("default");
		else
			@SetBackground("disabled");
	
	}

	// @pe
	void event_200(bool var_0_bool, int var_1_int, string var_2_string, object var_3_object)
	{
		if(var_1_int > 0) {
			var_0_bool = true;
			@SetBackground("default");
		} else {
			var_0_bool = false;
			@SetBackground("disabled");
		}
	
	}

}


