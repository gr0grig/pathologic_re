maintask task_0
{
	void init(string var_0_string, string var_1_string, string var_2_string, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, int var_7_int, int var_8_int, int var_9_int, int var_10_int)
	{
		@SetOwnerDraw(true);
		func_55();
		@ProcessEvents();
	}

	void OnUse(string var_0_string, string var_1_string, string var_2_string, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, int var_7_int, int var_8_int, int var_9_int, int var_10_int)
	{
		string var_14_string;
		func_285(var_14_string, 110);
		@Print("default", 15, 12, var_14_string);
		@Print("default", var_7_int, 29, var_1_string);
		string var_23_string;
		func_285(var_23_string, 112);
		@Print("default", 15, 62, var_23_string);
		@Print("default", var_9_int, 62, var_2_string);
		string var_30_string;
		func_285(var_30_string, 103);
		@Print("default", 15, 112, var_30_string);
		@Print("default", var_10_int, 112, var_0_string);
		string var_37_string;
		func_285(var_37_string, 113);
		@Print("default", 15, 162, var_37_string);
		@Print("default", var_8_int, 162, var_3_string);
		string var_44_string;
		func_285(var_44_string, 114);
		@Print("default", 15, 223, var_44_string);
		string var_49_string;
		func_285(var_49_string, 102);
		@Print("default", 15, 249, var_49_string);
		string var_54_string;
		func_285(var_54_string, 111);
		@Print("default", 15, 275, var_54_string);
		string var_59_string;
		func_285(var_59_string, 115);
		@Print("default", 15, 300, var_59_string);
		string var_64_string;
		func_285(var_64_string, 116);
		@Print("default", 15, 325, var_64_string);
		string var_69_string;
		func_285(var_69_string, 117);
		@Print("default", 15, 351, var_69_string);
		string var_74_string;
		func_285(var_74_string, 118);
		@Print("default", 15, 375, var_74_string);
		bool var_76_bool = true;
		bool var_77_bool = true;
		if(var_6_bool != 1) {
			if(var_4_bool != 1)
				var_77_bool = false;
		}
		if(var_77_bool != 1) {
			if(var_5_bool != 1)
				var_76_bool = false;
		}
		if(var_76_bool != 0) {
			string var_86_string;
			func_285(var_86_string, 119);
			@PrintInWidth(50, "default", 15, 410, 300, var_86_string, 0.9, 0.0, 0.0);
		}
	}

	void event_200(string var_0_string, string var_1_string, string var_2_string, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, string var_12_string, object var_13_object)
	{
		float var_14_float; float var_15_float;
		if(var_13_object != null) {
			var_13_object->get(var_15_float, 0);
			if(var_11_int == 100) {
				float var_20_float;
				func_11(var_14_float, var_20_float, var_20_float);
			} else if(var_11_int == 101) {
					float var_29_float;
					func_21(var_14_float, var_29_float, var_29_float);
					var_13_object->get(var_4_bool, 1);
			}
		}

	
		if(var_11_int == 103) {
			float var_45_float;
			func_35(var_14_float, var_45_float, var_45_float);
			var_13_object->get(var_5_bool, 1);
		} else if(var_11_int == 104) {
			float var_63_float;
			func_0(var_14_float, var_63_float, var_63_float);
		} else if(var_11_int == 112) {
			var_13_object->get(var_6_bool, 1);
		}
	}

}


void func_0(string var_3_string, int var_8_int, float var_55_float)
{
	int var_59_int;
	var_55_float = var_59_int;
	int var_58_int;
	@GetTextWidth(var_58_int, "default", var_59_int);
	var_8_int = 305 - (var_58_int / 2);
}


void func_35(string var_2_string, int var_9_int, float var_33_float)
{
	int var_37_int;
	var_33_float = var_37_int;
	if(var_37_int == 0) {
		string var_40_string;
		func_285(var_40_string, 124);
		var_2_string = var_40_string;
	} else {
		var_2_string = var_37_int;
	}
	int var_36_int;
	@GetTextWidth(var_36_int, "default", var_2_string);
	var_9_int = 305 - (var_36_int / 2);
	
}


void func_11(string var_0_string, int var_10_int, float var_48_float)
{
	int var_50_int;
	@GetTextWidth(var_50_int, "default", var_48_float);
	var_10_int = 305 - (var_50_int / 2);
}


void func_21(string var_1_string, int var_7_int, float var_20_float)
{
	int var_24_int; int var_25_int;
	@GetResolution(var_20_float, var_24_int, var_25_int);
	int var_26_int;
	@GetTextWidth(var_26_int, "default", ((var_24_int + "x") + var_25_int));
	var_7_int = (332 - var_26_int) / 2;
}


void func_55(void)
{
	float var_16_float;
	@GetCurrentResolution(var_16_float);
	float var_20_float;
	var_16_float = var_20_float;
	float var_18_float;
	float var_19_float;
	func_21(var_18_float, var_19_float, var_20_float);
	float var_17_float;
	@GetCurrentAnisotropic(var_17_float);
	float var_33_float;
	var_17_float = var_33_float;
	func_35(var_18_float, var_19_float, var_33_float);
	@GetGammaCorrection(var_18_float);
	float var_48_float;
	var_18_float = var_48_float;
	func_11(var_18_float, var_19_float, var_48_float);
	@GetPlayerFOV(var_19_float);
	float var_55_float;
	func_0(var_18_float, var_55_float, var_55_float);
}


void func_285(string var_40_string, int var_41_int)
{
	string var_43_string;
	@GetStringByID(var_43_string, var_41_int);
	var_43_string = var_40_string;
}


