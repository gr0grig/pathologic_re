maintask task_0
{
	void init(int var_0_int)
	{
		int var_1_int;
		func_91(var_1_int);
		var_0_int = var_1_int - 1;
		bool var_8_bool = false;
		int var_9_int;
		func_100(var_9_int);
		if(var_9_int < 7) {
			if(var_0_int > 0)
				var_8_bool = true;
		}
		if(var_8_bool != 0)
			var_0_int += -1;
		@SendMessage(var_0_int, "text");
		@ShowCursor();
		@SetCursor("default");
		func_62(var_0_int);
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
			func_62(var_0_int);

		}
	}

}


void func_91(int var_1_int)
{
	float var_3_float;
	@GetGameTime(var_3_float);
	var_1_int = 1 + (var_3_float / 24);
}


void func_100(int var_9_int)
{
	float var_11_float;
	@GetGameTime(var_11_float);
	int var_12_int;
	var_11_float = var_12_int;
	var_9_int = var_12_int % 24;
}


void func_62(int var_21_int)
{
	int var_23_int = 0;
	
	for(;;) {
		if(var_23_int < 12) {
			if(var_23_int == var_21_int)
				@SendMessage(1, ("button_day" + (var_23_int + 1)));
			else
				@SendMessage(0, ("button_day" + (var_23_int + 1)));
		@SendMessage(var_21_int, "text");
		}
		var_23_int += 1;
	}
	
}


