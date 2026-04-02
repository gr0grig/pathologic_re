maintask task_0
{
	void init(int var_0_int)
	{
		float var_6_float; string var_7_string; string var_8_string;
		var_0_int = 0;
		int var_5_int;
		@GetSelectedMessage(var_5_int);
		if(var_5_int != -1) {
			@GetMessage(var_5_int, var_7_string, var_8_string, var_6_float);
			var_0_int = var_6_float / 24.0;
			@SendMessage((var_5_int | 32768), "text");
		}
		@ShowCursor();
		@SetCursor("default");
		func_55(var_0_int);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	// @pe
	void event_100(int var_0_int, int var_1_int)
	{
		@DestroyWindow();
	}

	void event_200(int var_0_int, int var_1_int, string var_2_string, object var_3_object)
	{
		int var_5_int = 0;
	
		for(;;) {
			if(var_5_int < 12) {
				if(var_2_string == ("button_day" + (var_5_int + 1)))
					var_0_int = var_5_int;
				else
					var_5_int += 1;
			}
			func_55(var_0_int);

		}
	}

}


void func_55(int var_16_int)
{
	int var_18_int = 0;
	
	for(;;) {
		if(var_18_int < 12) {
			if(var_18_int == var_16_int)
				@SendMessage(1, ("button_day" + (var_18_int + 1)));
			else
				@SendMessage(0, ("button_day" + (var_18_int + 1)));
		@SendMessage(var_16_int, "text");
		}
		var_18_int += 1;
	}
	
}


