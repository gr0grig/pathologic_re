maintask task_0
{
	void init(int var_0_int)
	{
		var_0_int = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, string var_2_string, object var_3_object)
	{
		if(var_1_int > 100)
			var_0_int = 100;
		if(var_0_int < 0)
			var_0_int = 0;
	}

	void OnUse(int var_0_int)
	{
		string var_6_string; int var_7_int; int var_8_int; int var_9_int;
		if(var_0_int <= 33) {
			var_6_string = "r1";
		} else if(var_0_int <= 66) {
				var_6_string = "r2";
		}
		for(;;) {
			@GetWindowSize(var_7_int, var_8_int);
			if((var_0_int + 2) > 100)
				var_9_int = 100;
			@Blit("default", 0, 0);
			@BlitClipped(var_6_string, 0, 0, 0, 0, ((var_7_int * var_0_int) / 100), var_8_int);

		}
	
		var_6_string = "r3";
	}

}


