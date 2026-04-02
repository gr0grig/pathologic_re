maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int, int var_3_int, int var_4_int, float var_5_float, bool var_6_bool)
	{
		@GetWindowSize(var_2_int, var_3_int);
		func_20(var_5_float, false);
		@SetBackground("default");
		@SetNeedUpdate(true);
		@SetOwnerDraw(true);
		@EnableClipping();
		@ProcessEvents();
	}

	void OnUse(string var_0_string, int var_1_int, int var_2_int, int var_3_int, int var_4_int, float var_5_float, bool var_6_bool)
	{
		int var_9_int; int var_10_int;
		@GetTextWidth(var_9_int, "default", var_0_string, var_1_int);
		if(var_9_int > (var_2_int - 1))
			var_10_int = (var_9_int - var_2_int) + 1;
		else
			var_10_int = 0;
		var_18_int = -var_10_int;
		@Print("default", var_18_int, 0, var_0_string);
		bool var_20_bool = false;
		var_21_float = sin(var_5_float);
		if(var_21_float > 0.5) {
			if(var_6_bool != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0)
			@Blit("text_cursor", (var_9_int - var_10_int), 0);
	
	}

	// @pe
	void OnSee(string var_0_string, int var_1_int, int var_2_int, int var_3_int, int var_4_int, float var_5_float, bool var_6_bool, float var_7_float)
	{
		var_5_float += (var_7_float * 3.1415);
		if(var_5_float > 3.1415)
			var_5_float -= 3.1415;
	}

	void event_100(string var_0_string, int var_1_int, int var_2_int, int var_3_int, int var_4_int, float var_5_float, bool var_6_bool, int var_7_int)
	{
		object var_9_object;
		if(var_7_int == 8)
			return 2;
		if(var_7_int == 13) {
			@CreateStringVector(var_9_object);
			var_9_object->add(var_0_string);
			@SendMessageToParent(0, var_9_object);
			return 2;
		EMIT "Stack[-1] = 0";
		}
		int var_15_int;
		var_7_int = var_15_int;
		object var_8_object;
		func_41(var_8_object, var_9_object, var_15_int);
	}

	// @pe
	void event_101(string var_0_string, int var_1_int, int var_2_int, int var_3_int, int var_4_int, float var_5_float, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 37) {
			func_25(var_7_int);
		} else if(var_7_int == 39) {
				func_32(var_6_bool, var_7_int);
		}

	
		if(var_7_int == 35) {
			func_20(var_6_bool, var_7_int);
		} else if(var_7_int == 36) {
			func_23(var_7_int);
		} else if(var_7_int == 8) {
			func_59(var_6_bool, var_7_int);
		}
	}

	// @pe
	void OnStopSee(string var_0_string, int var_1_int, int var_2_int, int var_3_int, int var_4_int, float var_5_float, bool var_6_bool, int var_7_int, int var_8_int)
	{
		if(!var_6_bool) //@nz
			@CaptureKeyboard();
		var_6_bool = true;
	}

}


void func_32(string var_0_string, int var_1_int)
{
	int var_16_int;
	@_strlen(var_16_int, var_0_string);
	if((var_1_int + 1) > var_16_int)
		var_1_int = var_16_int;
}


void func_41(string var_0_string, int var_1_int, int var_15_int)
{
	bool var_22_bool; int var_23_int;
	func_184(var_22_bool, var_23_int);
	if(var_22_bool != 0) {
	}
	string var_19_string = NEW1(var_23_int);
	string var_20_string;
	@_strsub(var_20_string, var_0_string, 0, var_1_int);
	string var_21_string;
	@_strsub(var_21_string, var_0_string, var_1_int);
	var_0_string = (var_20_string + var_19_string) + var_21_string;
	var_1_int += 1;
}


void func_20(string var_0_string, int var_1_int)
{
	@_strlen(var_1_int, var_0_string);
}


void func_23(int var_1_int)
{
	var_1_int = 0;
}


void func_184(bool var_22_bool, int var_23_int)
{
	bool var_25_bool;
	@FontHasCharacterGlyph(var_25_bool, "default", var_23_int);
	var_22_bool = !var_25_bool;
}


void func_25(int var_1_int)
{
	if((var_1_int + -1) < 0)
		var_1_int = 0;
}


void func_59(string var_0_string, int var_1_int)
{
	if(var_1_int == 0) {
	}
	string var_27_string;
	@_strsub(var_27_string, var_0_string, 0, (var_1_int - 1));
	string var_28_string;
	@_strsub(var_28_string, var_0_string, var_1_int);
	var_0_string = var_27_string + var_28_string;
	var_1_int += -1;
}


