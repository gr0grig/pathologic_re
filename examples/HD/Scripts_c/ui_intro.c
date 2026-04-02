maintask task_0
{
	void init(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, string var_10_string, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object)
	{
		var_11_bool = false;
		var_12_bool = false;
		var_13_bool = false;
		var_2_float = 0;
		var_6_int = 0;
		var_1_float = 0;
		@GetWindowSize(var_3_int, var_4_int);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ShowCursor(false);
		@CaptureKeyboard();
		@SetNeedUpdate(true);
		func_412(var_13_bool, var_14_object);
		func_440(var_13_bool, var_14_object);
		@ProcessEvents();
	}

	// @pe
	void event_101(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, string var_10_string, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, int var_15_int)
	{
		bool var_16_bool = true;
		bool var_17_bool = true;
		var_19_bool = var_15_int == 40;
		if(var_19_bool != 1) {
			var_21_bool = var_15_int == 268;
			if(var_21_bool != 1)
				var_17_bool = false;
		}
		if(var_17_bool != 1) {
			var_23_bool = var_15_int == 274;
			if(var_23_bool != 1)
				var_16_bool = false;
		}
		if(var_16_bool != 0) {
			var_12_bool = true;
		} else {
				bool var_24_bool = true;
				bool var_25_bool = true;
				var_27_bool = var_15_int == 38;
				if(var_27_bool != 1) {
					var_29_bool = var_15_int == 267;
					if(var_29_bool != 1)
						var_25_bool = false;
				}
				if(var_25_bool != 1) {
					var_31_bool = var_15_int == 272;
					if(var_31_bool != 1)
						var_24_bool = false;
				}
				if(var_24_bool == 0) goto Label_171;
				var_13_bool = true;
		}
	Label_198:
		for(;;) {
			return 0;

		}
	
	Label_171:
		bool var_32_bool = true;
		bool var_33_bool = true;
		bool var_34_bool = true;
		var_36_bool = var_15_int == 27;
		if(var_36_bool != 1) {
			var_38_bool = var_15_int == 32;
			if(var_38_bool != 1)
				var_34_bool = false;
		}
		if(var_34_bool != 1) {
			var_40_bool = var_15_int == 257;
			if(var_40_bool != 1)
				var_33_bool = false;
		}
		if(var_33_bool != 1) {
			var_42_bool = var_15_int == 262;
			if(var_42_bool != 1)
				var_32_bool = false;
		}
		if(var_32_bool == 0) goto Label_198;
		func_238(var_14_object, var_15_int);
	}

	// @pe
	void event_102(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, string var_10_string, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, int var_15_int)
	{
		bool var_16_bool = true;
		bool var_17_bool = true;
		var_19_bool = var_15_int == 40;
		if(var_19_bool != 1) {
			var_21_bool = var_15_int == 268;
			if(var_21_bool != 1)
				var_17_bool = false;
		}
		if(var_17_bool != 1) {
			var_23_bool = var_15_int == 274;
			if(var_23_bool != 1)
				var_16_bool = false;
		}
		if(var_16_bool != 0) {
			var_12_bool = false;
		} else {
			bool var_24_bool = true;
			bool var_25_bool = true;
			var_27_bool = var_15_int == 38;
			if(var_27_bool != 1) {
				var_29_bool = var_15_int == 267;
				if(var_29_bool != 1)
					var_25_bool = false;
			}
			if(var_25_bool != 1) {
				var_31_bool = var_15_int == 272;
				if(var_31_bool != 1)
					var_24_bool = false;
			}
			if(var_24_bool == 0) goto Label_237;
			var_13_bool = false;
		}
	Label_237:
	
	}

	void OnSee(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, string var_10_string, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, float var_15_float)
	{
		float var_16_float;
		if(!var_11_bool) //@nz
			return 2;
		var_1_float += var_15_float;
		float var_17_float = 16.0;
		if(1 == var_7_int) {
			var_17_float = 16.0;
		} else if(2 == var_7_int) {
				var_17_float = 16.0;
		}
	Label_293:
		for(;;) {
			if(var_13_bool != 0)
				var_17_float *= 4.0;
			if(var_12_bool != 0)
				var_17_float /= 4.0;
			var_2_float += (var_15_float * var_17_float);
			bool var_26_bool;
			if(var_2_float > (var_4_int + var_5_int)) {
				bool var_29_bool;
				func_31(false, var_29_bool);
				if(!var_29_bool) //@nz
					var_26_bool = true;
			}
			if(var_26_bool != 0)
				func_238(var_16_float, var_17_float);
			bool var_60_bool;
			if(var_2_float > var_5_int) {
				bool var_62_bool;
				func_31(false, var_62_bool);
				if(!var_62_bool) //@nz
					var_60_bool = true;
			}
			if(var_60_bool != 0) {
				if((var_0_float + var_15_float) > 1)
					func_238(var_16_float, var_17_float);
			}
			return 2;

		}
	
		if(!(3 == var_7_int)) goto Label_293;
		var_17_float = 11.0;
	}

	// @pe
	void event_200(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, string var_10_string, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, int var_15_int, string var_16_string, object var_17_object)
	{
		bool var_18_bool = true;
		bool var_19_bool = true;
		bool var_20_bool = true;
		var_22_bool = var_16_string == "ul";
		if(var_22_bool != 1) {
			var_24_bool = var_16_string == "bl";
			if(var_24_bool != 1)
				var_20_bool = false;
		}
		if(var_20_bool != 1) {
			var_26_bool = var_16_string == "br";
			if(var_26_bool != 1)
				var_19_bool = false;
		}
		if(var_19_bool != 1) {
			var_28_bool = var_16_string == "ur";
			if(var_28_bool != 1)
				var_18_bool = false;
		}
		if(var_18_bool != 0) {
			func_440(var_16_string, var_17_object);
			return 0;
		}
		if(!var_11_bool) { //@nz
			int var_37_int;
			func_65(var_11_bool, var_12_bool, var_13_bool, var_14_object, var_37_int, var_16_string, var_17_object, var_37_int);
		}
	}

	void OnUse(float var_0_float, float var_1_float, float var_2_float, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, string var_10_string, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object)
	{
		if(!var_11_bool) { //@nz
		}
		int var_18_int = var_2_float;
		float var_19_float = var_2_float - var_18_int;
		int var_20_int;
		@PrintInWidth(var_20_int, "intro_font", (var_6_int + 4), (var_4_int - var_18_int), ((var_3_int - (var_6_int * 2)) - 8), var_10_string, 0.24313726, 0.12156863, 0.11764706, (1 - var_19_float));
		@PrintInWidth(var_20_int, "intro_font", (var_6_int + 4), ((var_4_int - var_18_int) - 1), ((var_3_int - (var_6_int * 2)) - 8), var_10_string, 0.24313726, 0.12156863, 0.11764706, var_19_float);
	}

}


// @pe
void func_65(int var_3_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, string var_10_string, bool var_11_bool, int var_37_int)
{
	var_7_int = var_37_int;
	if(var_7_int == 1) {
		@GetStringByID(var_10_string, 204);
		@PlaySound("intro_danko");
	} else if(var_7_int == 2) {
			@GetStringByID(var_10_string, 207);
			@PlaySound("intro_burah");
	}
Label_122:
	for(;;) {
		@GetTextHeightInWidth(var_5_int, "intro_font", ((var_3_int - (var_6_int * 2)) - 8), var_10_string);
		var_11_bool = true;
		return 0;

	}
	
	if(var_7_int == 3) {
		@GetStringByID(var_10_string, 210);
		@PlaySound("intro_klara");
		goto Label_122;
	}
	if(var_7_int == 0) {
		@irand(var_8_int, 2);
		if(var_8_int != 0) {
			@GetStringByID(var_10_string, 211);
			@PlaySound("intro1");
		} else {
			@GetStringByID(var_10_string, 212);
			@PlaySound("intro2");
	}
		@GetStringByID(var_10_string, 600);
	}
	goto Label_122;
	
}


void func_238(int var_7_int, bool var_11_bool)
{
	@SendMessageToParent(0);
	var_11_bool = false;
	if(var_7_int == 1) {
		@PauseSound("intro_danko");
	} else if(var_7_int == 2) {
			@PauseSound("intro_burah");
	}

	for(;;) {
		return 0;

	}
	
	if(var_7_int == 3) {
		@PauseSound("intro_klara");
	} else if(var_8_int != 0) {
		@PauseSound("intro1");
	}
	@PauseSound("intro2");
}


void func_440(int var_9_int, object var_14_object)
{
	string var_29_string;
	var_14_object->get(var_29_string, var_9_int); //@t
	@SendMessage(0, var_29_string);
	var_9_int += 1;
	int var_30_int;
	var_14_object->size(var_30_int); //@t
	if(var_9_int >= var_30_int)
		var_9_int -= var_30_int;
}


void func_412(int var_9_int, object var_14_object)
{
	var_9_int = 0;
	@CreateStringVector(var_14_object);
	var_14_object->add("ul"); //@t
	var_14_object->add("ur"); //@t
	var_14_object->add("br"); //@t
	var_14_object->add("ul"); //@t
	var_14_object->add("br"); //@t
	var_14_object->add("ul"); //@t
	var_14_object->add("bl"); //@t
	var_14_object->add("ul"); //@t
}


void func_31(int var_7_int, bool var_29_bool)
{
	bool var_31_bool;
	if(var_7_int == 1) {
		@IsSoundPlaying(var_31_bool, "intro_danko");
	} else if(var_7_int == 2) {
				@IsSoundPlaying(var_31_bool, "intro_burah");
	}
	if(var_7_int == 3)
		@IsSoundPlaying(var_31_bool, "intro_klara");
	if(var_7_int == 0) {
		if(var_8_int != 0)
			@IsSoundPlaying(var_31_bool, "intro1");
		else
			@IsSoundPlaying(var_31_bool, "intro2");

	}
	var_31_bool = var_29_bool;
	
}


