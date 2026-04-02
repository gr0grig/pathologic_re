maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, int var_4_int)
	{
		func_5(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, false);
	}

	// @pe
	void OnPlayerHolsterWeapon(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, int var_4_int, int var_5_int, int var_6_int, float var_7_float)
	{
		@SendToParent();
	}

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, int var_4_int)
	{
		if(var_1_bool != 0)
			return 0;
		if(var_0_bool != 0) {
			var_7_string = "slider_pressed";
			if(var_2_bool != 0)
				var_9_int = 0; //@pi
			else
				var_13_int = var_3_int;
				if(var_2_bool != 0)
					var_16_int = 0; //@pi
				else
					var_20_int = var_3_int;
				if(var_2_bool != 0)
					var_18_int = var_3_int;
				else
					var_19_int = 0; //@pi

				@Blit("slider", var_16_int, var_18_int);
		}
		if(var_2_bool != 0)
			var_11_int = var_3_int;
		else
			var_12_int = 0; //@pi

		@Blit(var_7_string, var_9_int, var_11_int);
		goto Label_61;
	
	Label_61:
	
	}

	void OnStopSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		int var_10_int; int var_11_int;
		if(var_1_bool != 0)
			return 6;
		bool var_14_bool; int var_15_int; int var_16_int;
		var_5_int = var_15_int;
		var_6_int = var_16_int;
		int var_12_int;
		func_207(var_12_int, var_14_bool, var_15_int, var_16_int);
		if(var_14_bool != 0) {
			@CaptureMouse();
			var_0_bool = true;
			return 6;
		}
		if(var_2_bool != 0)
			var_6_int = var_10_int;
		else
			var_5_int = var_10_int;
		if(var_10_int < 0) {
		} else if(0 > var_4_int) {
				var_10_int = var_4_int;

		}
		if(var_10_int > var_3_int) {
			var_11_int = ((var_10_int - var_3_int) * 100) / var_4_int;
			if(var_11_int < 27)
				var_3_int = var_10_int;
			else
				var_3_int += ((27 * var_4_int) / 100);
				var_12_int = ((var_3_int - var_10_int) * 100) / var_4_int;
				if(var_12_int < 27)
					var_3_int = var_10_int;
				} else {
			var_3_int -= ((27 * var_4_int) / 100);

				}
		for(;;) {
			func_62(var_11_int, var_12_int);
			return 6;

		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		if(var_1_bool != 0)
			return 0;
		var_0_bool = false;
		@ReleaseMouse();
	}

	// @pe
	void event_200(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, int var_4_int, int var_5_int, string var_6_string, object var_7_object)
	{
		if(var_6_string == "scroll_button_up") {
			if((var_3_int - ((27 * var_4_int) / 100)) < 0)
				var_3_int = 0;
			func_62(var_6_string, var_7_object);
		} else if(var_6_string == "scroll_button_down") {
				if((var_3_int + ((27 * var_4_int) / 100)) > var_4_int)
					var_3_int = var_4_int;
				func_62(var_6_string, var_7_object);
		}
		for(;;) {
			return 0;

		}
	
		if((16384 & var_5_int) != 0)
			var_1_bool = true;
		else
			var_1_bool = false;
		var_3_int = ((16383 & var_5_int) * var_4_int) / 100;
	
	}

	void OnRegionChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		int var_7_int; int var_8_int;
		if(var_1_bool != 0) {
		}
		if(var_0_bool != 0) {
			if(var_2_bool != 0)
				var_6_int = var_8_int;
			else
				var_5_int = var_8_int;
			if(var_8_int < 0) {
			} else if(0 > var_4_int) {
				var_8_int = var_4_int;

			}
			var_3_int = var_8_int;
			func_62(var_7_int, var_8_int);
		}
	
	}

}


void func_5(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, int var_4_int, bool var_5_bool)
{
	var_0_bool = false;
	var_1_bool = false;
	var_3_int = 0;
	@SetOwnerDraw(true);
	int var_8_int;
	int var_9_int;
	@GetWindowSize(var_8_int, var_9_int);
	if(var_5_bool != 0)
		var_4_int = var_9_int - 14;
	else
		var_4_int = var_8_int - 14;
	@ProcessEvents();
	
}


void func_62(int var_3_int, int var_4_int)
{
	@SendMessageToParent((var_3_int * 100) / var_4_int);
}


// @pe
void func_207(int var_3_int, bool var_14_bool, int var_15_int, int var_16_int)
{
	if(var_2_bool != 0) {
		bool var_18_bool = false;
		if(var_16_int >= var_3_int) {
			if(var_16_int <= (var_3_int + 14))
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_14_bool = true;
			return 0;
		}
		var_14_bool = false;
		return 0;
	}
	bool var_23_bool = false;
	if(var_15_int >= var_3_int) {
		if(var_15_int <= (var_3_int + 14))
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		var_14_bool = true;
		return 0;
	}
	var_14_bool = false;
}


