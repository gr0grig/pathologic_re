maintask task_0
{
	void init(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, bool var_7_bool)
	{
		bool var_9_bool;
		@GetWindowSize(var_5_int, var_6_int);
		var_7_bool = true;
		var_4_int = 0;
		var_3_int = 0;
	
		for(;;) {
			if(true != 0) {
				@IsImageLoaded(var_9_bool, (var_4_int + 1));
				if(!var_9_bool) { //@nz
				} else {
					var_4_int += 1;
				}
			}
			@SetOwnerDraw(true);
			@SetNeedUpdate(true);
			@ProcessEvents();

		}
	}

	void OnUse(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(!var_7_bool) //@nz
			@StretchBlit((var_3_int + 1), 0, 0, var_5_int, var_6_int, var_2_float);
	}

	// @pe
	void event_200(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, string var_9_string, object var_10_object)
	{
		if(var_9_string == "intro")
			func_75(var_5_int, var_6_int, var_7_bool, var_8_int, var_9_string, var_10_object);
	}

	// @pe
	void OnSee(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float)
	{
		if(var_7_bool != 0)
			return 0;
		var_0_float -= var_8_float;
		if(var_0_float > 0)
			return 0;
		var_1_float -= var_8_float;
		if(var_1_float < 0) {
			var_2_float = 1 + var_1_float;
			if(var_1_float < -1) {
				@SendMessage(0, "intro");
				var_7_bool = true;
				return 0;
			}
		} else {
			var_2_float = -var_0_float;
		}
		if(var_2_float > 1)
			var_2_float = 1;
	
	}

}


void func_75(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, bool var_7_bool)
{
	var_7_bool = false;
	var_0_float = 1;
	@rand(var_1_float);
	var_1_float = 6 + (var_1_float * 3);
	var_2_float = 0;
	var_3_int += 1;
	var_3_int = var_3_int % var_4_int;
}


