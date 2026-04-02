maintask task_0
{
	// @pe
	void init(bool var_0_bool, bool var_1_bool)
	{
		func_51();
		@ProcessEvents();
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, int var_2_int, int var_3_int)
	{
		if(var_0_bool != 0)
			var_5_int = 1;
		else
			var_6_int = 0; //@pi
		@SendMessageToParent(var_5_int);
	
	}

	// @pe
	void event_200(bool var_0_bool, bool var_1_bool, int var_2_int, string var_3_string, object var_4_object)
	{
		if(var_3_string == "map") {
			var_0_bool = var_2_int != 0;
			if(var_1_bool != 0)
				func_41();
			else
				func_51();
		}
	
	}

	// @pe
	void OnGameTime(bool var_0_bool, bool var_1_bool)
	{
		func_41();
		var_1_bool = true;
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool)
	{
		func_51();
		var_1_bool = false;
	}

}


void func_41(void)
{
	if(var_0_bool != 0)
		@SetBackground("to_map_h");
	else
		@SetBackground("to_quest_h");
	
}


void func_51(void)
{
	if(var_0_bool != 0)
		@SetBackground("to_map");
	else
		@SetBackground("to_quest");
	
}


