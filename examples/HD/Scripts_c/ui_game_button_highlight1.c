maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool)
	{
		var_0_bool = false;
		var_1_bool = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(bool var_0_bool, bool var_1_bool)
	{
		bool var_2_bool = true;
		var_3_bool = !var_0_bool; //@nz
		if(var_3_bool != 1) {
			if(var_1_bool != 1)
				var_2_bool = false;
		}
		if(var_2_bool != 0)
			@StretchBlit("disabled", 0, 0, 250, 297);
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, int var_2_int, int var_3_int)
	{
		if(!var_1_bool) //@nz
			@SendMessageToParent(0);
	}

	void OnGameTime(bool var_0_bool, bool var_1_bool)
	{
		var_0_bool = true;
		@SendMessageToParent(1);
	}

	void OnCollision(bool var_0_bool, bool var_1_bool)
	{
		var_0_bool = false;
		@SendMessageToParent(2);
	}

	// @pe
	void event_200(bool var_0_bool, bool var_1_bool, int var_2_int, string var_3_string, object var_4_object)
	{
		if(131072 == var_2_int) {
			var_1_bool = true;
		} else if(var_2_int == 0) {
				var_0_bool = false;
				@SendMessageToParent(2);
		}
	Label_74:
		for(;;) {
			return 0;

		}
	
		if(var_2_int == 1) {
			var_0_bool = true;
			@SendMessageToParent(1);
		} else if(var_2_int == 2) {
			var_15_bool = !var_1_bool; //@nz
			if(var_15_bool == 0) goto Label_74;
			@SendMessageToParent(0);
		}
	}

}


