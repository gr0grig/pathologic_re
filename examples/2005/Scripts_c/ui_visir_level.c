maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(bool var_0_bool)
	{
		if(var_0_bool != 0)
			@Blit("default", 0, 0);
	}

	// @pe
	void event_200(bool var_0_bool, int var_1_int, string var_2_string, object var_3_object)
	{
		var_0_bool = var_1_int != 0;
	}

}


