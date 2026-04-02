maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, int var_2_int, int var_3_int)
	{
		var_0_bool = false;
		var_1_bool = false;
		var_2_int = 0;
		@SetOwnerDraw(true);
		int var_6_int;
		int var_7_int;
		@GetWindowSize(var_6_int, var_7_int);
		@Trace("iMouseMax " + (var_7_int - 14));
		@ProcessEvents();
	}

	void OnUse(bool var_0_bool, bool var_1_bool, int var_2_int, int var_3_int)
	{
		if(var_1_bool != 0)
			return 0;
		if(var_0_bool != 0)
			@Blit("slider_pressed", 0, var_2_int);
		else
			@Blit("slider", 0, var_2_int);
	
	}

	void OnStopSee(bool var_0_bool, bool var_1_bool, int var_2_int, int var_3_int, int var_4_int, int var_5_int)
	{
		int var_10_int; int var_11_int;
		if(var_1_bool != 0)
			return 6;
		bool var_13_bool; int var_14_int; int var_15_int;
		var_4_int = var_14_int;
		var_5_int = var_15_int;
		func_178(var_13_bool, var_14_int, var_15_int);
		if(var_13_bool != 0) {
			@CaptureMouse();
			var_0_bool = true;
			return 6;
		}
		int var_9_int;
		var_5_int = var_9_int;
		if(var_9_int < 0) {
		} else if(0 > var_3_int) {
				var_9_int = var_3_int;
		}
		if(var_9_int > var_2_int) {
			var_10_int = ((var_9_int - var_2_int) * 100) / var_3_int;
			if(var_10_int < 27)
				var_2_int = var_9_int;
			else
				var_2_int += ((27 * var_3_int) / 100);
				var_11_int = ((var_2_int - var_9_int) * 100) / var_3_int;
				if(var_11_int < 27)
					var_2_int = var_9_int;
				} else {
			var_2_int -= ((27 * var_3_int) / 100);

				}
		for(;;) {
			func_33(var_10_int, var_11_int);
			return 6;

		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, int var_2_int, int var_3_int, int var_4_int, int var_5_int)
	{
		if(var_1_bool != 0)
			return 0;
		var_0_bool = false;
		@ReleaseMouse();
	}

	// @pe
	void event_200(bool var_0_bool, bool var_1_bool, int var_2_int, int var_3_int, int var_4_int, string var_5_string, object var_6_object)
	{
		if(var_5_string == "scroll_button_up") {
			if((var_2_int - ((27 * var_3_int) / 100)) < 0)
				var_2_int = 0;
			@Trace("scroll up " + var_2_int);
			func_33(var_5_string, var_6_object);
		} else if(var_5_string == "scroll_button_down") {
				if((var_2_int + 10) > var_3_int)
					var_2_int = var_3_int;
				@Trace((("scroll down " + var_2_int) + " ") + var_3_int);
				func_33(var_5_string, var_6_object);
		}
		for(;;) {
			return 0;

		}
	
		if((16384 & var_4_int) != 0)
			var_1_bool = true;
		else
			var_1_bool = false;
		var_2_int = ((16383 & var_4_int) * var_3_int) / 100;
	
	}

	void OnRegionChange(bool var_0_bool, bool var_1_bool, int var_2_int, int var_3_int, int var_4_int, int var_5_int)
	{
		int var_6_int; int var_7_int;
		if(var_1_bool != 0) {
		}
		if(var_0_bool != 0) {
			var_5_int = var_7_int;
			if(var_7_int < 0) {
			} else if(0 > var_3_int) {
				var_7_int = var_3_int;
			}
			var_2_int = var_7_int;
			func_33(var_6_int, var_7_int);
		}
	
	}

}


void func_33(int var_2_int, int var_3_int)
{
	@SendMessageToParent((var_2_int * 100) / var_3_int);
}


// @pe
void func_178(int var_2_int, bool var_13_bool, int var_15_int)
{
	bool var_16_bool = false;
	if(var_15_int >= var_2_int) {
		if(var_15_int <= (var_2_int + 14))
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		var_13_bool = true;
		return 0;
	}
	var_13_bool = false;
}


