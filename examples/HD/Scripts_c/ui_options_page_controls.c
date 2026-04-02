maintask task_0
{
	void init(string var_0_string, string var_1_string, string var_2_string, int var_3_int, int var_4_int, int var_5_int)
	{
		@SetOwnerDraw(true);
		func_30();
		@ProcessEvents();
	}

	void OnUse(string var_0_string, string var_1_string, string var_2_string, int var_3_int, int var_4_int, int var_5_int)
	{
		string var_9_string;
		func_156(var_9_string, 101);
		@Print("default", 15, 12, var_9_string);
		@Print("default", var_3_int, 12, var_0_string);
		string var_18_string;
		func_156(var_18_string, 120);
		@Print("default", 15, 64, var_18_string);
		@Print("default", var_4_int, 64, var_1_string);
		string var_25_string;
		func_156(var_25_string, 121);
		@Print("default", 15, 112, var_25_string);
		@Print("default", var_5_int, 112, var_2_string);
		string var_32_string;
		func_156(var_32_string, 100);
		@Print("default", 15, 164, var_32_string);
		string var_37_string;
		func_156(var_37_string, 122);
		@Print("default", 15, 186, var_37_string);
		string var_42_string;
		func_156(var_42_string, 123);
		@Print("default", 15, 210, var_42_string);
	}

	void event_200(string var_0_string, string var_1_string, string var_2_string, int var_3_int, int var_4_int, int var_5_int, int var_6_int, string var_7_string, object var_8_object)
	{
		float var_9_float; float var_10_float;
		if(var_8_object != null) {
			var_8_object->get(var_10_float, 0);
			if(var_6_int == 109) {
				float var_15_float;
				func_0(var_9_float, var_15_float, var_15_float);
			} else if(var_6_int == 110) {
					float var_24_float;
					func_10(var_9_float, var_24_float, var_24_float);
			}
		}
	Label_155:
		for(;;) {

		}
	
		if(!(var_6_int == 111)) goto Label_155;
		float var_33_float;
		func_20(var_9_float, var_33_float, var_33_float);
	}

}


void func_0(string var_0_string, int var_3_int, float var_13_float)
{
	int var_15_int;
	@GetTextWidth(var_15_int, "default", var_13_float);
	var_3_int = 305 - (var_15_int / 2);
}


void func_10(string var_1_string, int var_4_int, float var_20_float)
{
	int var_22_int;
	@GetTextWidth(var_22_int, "default", var_20_float);
	var_4_int = 305 - (var_22_int / 2);
}


void func_20(string var_2_string, int var_5_int, float var_27_float)
{
	int var_29_int;
	@GetTextWidth(var_29_int, "default", var_27_float);
	var_5_int = 305 - (var_29_int / 2);
}


void func_156(string var_9_string, int var_10_int)
{
	string var_12_string;
	@GetStringByID(var_12_string, var_10_int);
	var_12_string = var_9_string;
}


void func_30(void)
{
	float var_10_float;
	@GetMouseSensivity(var_10_float);
	float var_11_float;
	@GetGamepadSensivity(var_11_float);
	float var_12_float;
	@GetGamepadUISensivity(var_12_float);
	float var_13_float;
	var_10_float = var_13_float;
	func_0(var_11_float, var_12_float, var_13_float);
	float var_20_float;
	var_11_float = var_20_float;
	func_10(var_11_float, var_12_float, var_20_float);
	float var_27_float;
	func_20(var_11_float, var_27_float, var_27_float);
}


