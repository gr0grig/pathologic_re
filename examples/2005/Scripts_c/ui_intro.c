maintask task_0
{
	void init(float var_0_float, float var_1_float, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, string var_9_string, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object)
	{
		var_10_bool = false;
		var_11_bool = false;
		var_12_bool = false;
		var_1_float = 0;
		var_5_int = 0;
		var_0_float = 0;
		@GetWindowSize(var_2_int, var_3_int);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ShowCursor(false);
		@CaptureKeyboard();
		@SetNeedUpdate(true);
		func_314(var_12_bool, var_13_object);
		func_342(var_12_bool, var_13_object);
		@ProcessEvents();
	}

	// @pe
	void event_101(float var_0_float, float var_1_float, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, string var_9_string, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, int var_14_int)
	{
		if(var_14_int == 40) {
			var_11_bool = true;
		} else if(var_14_int == 38) {
				var_12_bool = true;
		}
	
		func_158(var_13_object, var_14_int);
	}

	// @pe
	void event_102(float var_0_float, float var_1_float, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, string var_9_string, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, int var_14_int)
	{
		if(var_14_int == 40) {
			var_11_bool = false;
		} else if(var_14_int == 38) {
			var_12_bool = false;
		}
	
	}

	void OnSee(float var_0_float, float var_1_float, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, string var_9_string, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, float var_14_float)
	{
		float var_15_float;
		if(!var_10_bool) //@nz
			return 2;
		var_0_float += var_14_float;
		float var_16_float = 16.0;
		if(1 == var_6_int) {
			var_16_float = 16.0;
		} else if(2 == var_6_int) {
				var_16_float = 16.0;
		}
	Label_213:
		for(;;) {
			if(var_12_bool != 0)
				var_16_float *= 4.0;
			if(var_11_bool != 0)
				var_16_float /= 4.0;
			bool var_25_bool;
			if((var_1_float + (var_14_float * var_16_float)) > (var_3_int + var_4_int)) {
				bool var_28_bool;
				func_31(false, var_28_bool);
				if(!var_28_bool) //@nz
					var_25_bool = true;
			}
			if(var_25_bool != 0)
				func_158(var_15_float, var_16_float);
			return 2;

		}
	
		if(!(3 == var_6_int)) goto Label_213;
		var_16_float = 11.0;
	}

	// @pe
	void event_200(float var_0_float, float var_1_float, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, string var_9_string, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, int var_14_int, string var_15_string, object var_16_object)
	{
		bool var_17_bool = true;
		bool var_18_bool = true;
		bool var_19_bool = true;
		var_21_bool = var_15_string == "ul";
		if(var_21_bool != 1) {
			var_23_bool = var_15_string == "bl";
			if(var_23_bool != 1)
				var_19_bool = false;
		}
		if(var_19_bool != 1) {
			var_25_bool = var_15_string == "br";
			if(var_25_bool != 1)
				var_18_bool = false;
		}
		if(var_18_bool != 1) {
			var_27_bool = var_15_string == "ur";
			if(var_27_bool != 1)
				var_17_bool = false;
		}
		if(var_17_bool != 0) {
			func_342(var_15_string, var_16_object);
			return 0;
		}
		if(!var_10_bool) { //@nz
			int var_36_int;
			func_65(var_10_bool, var_11_bool, var_12_bool, var_13_object, var_36_int, var_15_string, var_16_object, var_36_int);
		}
	}

	void OnUse(float var_0_float, float var_1_float, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, string var_9_string, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object)
	{
		if(!var_10_bool) { //@nz
		}
		int var_17_int = var_1_float;
		float var_18_float = var_1_float - var_17_int;
		int var_19_int;
		@PrintInWidth(var_19_int, "intro_font", (var_5_int + 4), (var_3_int - var_17_int), ((var_2_int - (var_5_int * 2)) - 8), var_9_string, 0.24313726, 0.12156863, 0.11764706, (1 - var_18_float));
		@PrintInWidth(var_19_int, "intro_font", (var_5_int + 4), ((var_3_int - var_17_int) - 1), ((var_2_int - (var_5_int * 2)) - 8), var_9_string, 0.24313726, 0.12156863, 0.11764706, var_18_float);
	}

}


// @pe
void func_65(int var_2_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, string var_9_string, bool var_10_bool, int var_36_int)
{
	var_6_int = var_36_int;
	if(var_6_int == 1) {
		@GetStringByID(var_9_string, 204);
		@PlaySound("intro_danko");
	} else if(var_6_int == 2) {
			@GetStringByID(var_9_string, 207);
			@PlaySound("intro_burah");
	}
Label_122:
	for(;;) {
		@GetTextHeightInWidth(var_4_int, "intro_font", ((var_2_int - (var_5_int * 2)) - 8), var_9_string);
		var_10_bool = true;
		return 0;

	}
	
	if(var_6_int == 3) {
		@GetStringByID(var_9_string, 210);
		@PlaySound("intro_klara");
		goto Label_122;
	}
	if(var_6_int == 0) {
		@irand(var_7_int, 2);
		if(var_7_int != 0) {
			@GetStringByID(var_9_string, 211);
			@PlaySound("intro1");
		} else {
			@GetStringByID(var_9_string, 212);
			@PlaySound("intro2");
	}
		@GetStringByID(var_9_string, 600);
	}
	goto Label_122;
	
}


void func_342(int var_8_int, object var_13_object)
{
	string var_28_string;
	var_13_object->get(var_28_string, var_8_int); //@t
	@SendMessage(0, var_28_string);
	var_8_int += 1;
	int var_29_int;
	var_13_object->size(var_29_int); //@t
	if(var_8_int >= var_29_int)
		var_8_int -= var_29_int;
}


void func_314(int var_8_int, object var_13_object)
{
	var_8_int = 0;
	@CreateStringVector(var_13_object);
	var_13_object->add("ul"); //@t
	var_13_object->add("ur"); //@t
	var_13_object->add("br"); //@t
	var_13_object->add("ul"); //@t
	var_13_object->add("br"); //@t
	var_13_object->add("ul"); //@t
	var_13_object->add("bl"); //@t
	var_13_object->add("ul"); //@t
}


void func_158(int var_6_int, bool var_10_bool)
{
	@SendMessageToParent(0);
	var_10_bool = false;
	if(var_6_int == 1) {
		@PauseSound("intro_danko");
	} else if(var_6_int == 2) {
			@PauseSound("intro_burah");
	}

	for(;;) {
		return 0;

	}
	
	if(var_6_int == 3) {
		@PauseSound("intro_klara");
	} else if(var_7_int != 0) {
		@PauseSound("intro1");
	}
	@PauseSound("intro2");
}


void func_31(int var_6_int, bool var_28_bool)
{
	bool var_30_bool;
	if(var_6_int == 1) {
		@IsSoundPlaying(var_30_bool, "intro_danko");
	} else if(var_6_int == 2) {
				@IsSoundPlaying(var_30_bool, "intro_burah");
	}
	if(var_6_int == 3)
		@IsSoundPlaying(var_30_bool, "intro_klara");
	if(var_6_int == 0) {
		if(var_7_int != 0)
			@IsSoundPlaying(var_30_bool, "intro1");
		else
			@IsSoundPlaying(var_30_bool, "intro2");

	}
	var_30_bool = var_28_bool;
	
}


