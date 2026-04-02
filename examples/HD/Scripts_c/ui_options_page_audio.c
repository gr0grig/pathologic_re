maintask task_0
{
	void init(string var_0_string, string var_1_string, string var_2_string, string var_3_string, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		@SetOwnerDraw(true);
		func_88();
		@ProcessEvents();
	}

	void OnUse(string var_0_string, string var_1_string, string var_2_string, string var_3_string, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		string var_11_string;
		func_214(var_11_string, 104);
		@Print("default", 15, 15, var_11_string);
		@Print("default", var_4_int, 15, var_0_string);
		string var_20_string;
		func_214(var_20_string, 105);
		@Print("default", 15, 98, var_20_string);
		@Print("default", var_5_int, 98, var_1_string);
		string var_27_string;
		func_214(var_27_string, 106);
		@Print("default", 16, 182, var_27_string);
		@Print("default", var_6_int, 182, var_2_string);
		string var_34_string;
		func_214(var_34_string, 107);
		@Print("default", 16, 265, var_34_string);
		@Print("default", var_7_int, 265, var_3_string);
	}

	void event_200(string var_0_string, string var_1_string, string var_2_string, string var_3_string, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, string var_9_string, object var_10_object)
	{
		float var_11_float; float var_12_float;
		if(var_10_object != null) {
			var_10_object->get(var_12_float, 0);
			if(var_8_int == 105) {
				float var_17_float;
				func_0(var_11_float, var_17_float, var_17_float);
			} else if(var_8_int == 106) {
					float var_36_float;
					func_22(var_11_float, var_36_float, var_36_float);
			}
		}

	
		if(var_8_int == 107) {
			float var_53_float;
			func_44(var_11_float, var_53_float, var_53_float);
		} else if(var_8_int == 108) {
			float var_70_float;
			func_66(var_11_float, var_70_float, var_70_float);
		}
	}

}


void func_0(string var_0_string, int var_4_int, float var_17_float)
{
	int var_21_int = var_17_float * 100;
	if(var_21_int == 0) {
		string var_25_string;
		func_214(var_25_string, 124);
		var_0_string = var_25_string;
	} else {
		var_0_string = var_21_int + "%";
	}
	int var_20_int;
	@GetTextWidth(var_20_int, "default", var_0_string);
	var_4_int = 305 - (var_20_int / 2);
	
}


void func_66(string var_3_string, int var_7_int, float var_64_float)
{
	int var_68_int = var_64_float * 100;
	if(var_68_int == 0) {
		string var_72_string;
		func_214(var_72_string, 124);
		var_3_string = var_72_string;
	} else {
		var_3_string = var_68_int + "%";
	}
	int var_67_int;
	@GetTextWidth(var_67_int, "default", var_3_string);
	var_7_int = 305 - (var_67_int / 2);
	
}


void func_44(string var_2_string, int var_6_int, float var_49_float)
{
	int var_53_int = var_49_float * 100;
	if(var_53_int == 0) {
		string var_57_string;
		func_214(var_57_string, 124);
		var_2_string = var_57_string;
	} else {
		var_2_string = var_53_int + "%";
	}
	int var_52_int;
	@GetTextWidth(var_52_int, "default", var_2_string);
	var_6_int = 305 - (var_52_int / 2);
	
}


void func_214(string var_25_string, int var_26_int)
{
	string var_28_string;
	@GetStringByID(var_28_string, var_26_int);
	var_28_string = var_25_string;
}


void func_22(string var_1_string, int var_5_int, float var_34_float)
{
	int var_38_int = var_34_float * 100;
	if(var_38_int == 0) {
		string var_42_string;
		func_214(var_42_string, 124);
		var_1_string = var_42_string;
	} else {
		var_1_string = var_38_int + "%";
	}
	int var_37_int;
	@GetTextWidth(var_37_int, "default", var_1_string);
	var_5_int = 305 - (var_37_int / 2);
	
}


void func_88(void)
{
	float var_13_float;
	@GetVolMaster(var_13_float);
	float var_14_float;
	@GetVolMusic(var_14_float);
	float var_15_float;
	@GetVolVoice(var_15_float);
	float var_16_float;
	@GetVolSounds(var_16_float);
	float var_17_float;
	var_13_float = var_17_float;
	func_0(var_15_float, var_16_float, var_17_float);
	float var_34_float;
	var_14_float = var_34_float;
	func_22(var_15_float, var_16_float, var_34_float);
	float var_49_float;
	var_15_float = var_49_float;
	func_44(var_15_float, var_16_float, var_49_float);
	float var_64_float;
	func_66(var_15_float, var_64_float, var_64_float);
}


