maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		var_3_int = -1;
		var_0_int = 0;
		@GetWindowSize(var_5_int, var_6_int);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		func_16(var_4_int, var_5_int, var_6_int);
		@ProcessEvents();
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		int var_16_int; int var_17_int; string var_18_string;
		func_16(var_16_int, var_17_int, var_18_string);
		int var_13_int = var_0_int;
		string var_75_string;
		func_267(var_75_string);
		string var_14_string;
		var_75_string = var_14_string;
		@PrintInWidth(var_2_int, "default", 0, var_13_int, (var_5_int - 5), var_14_string, 0.804, 0.804, 0.804);
		var_13_int += var_2_int;
		var_13_int += 10;
		int var_15_int;
		@GetAnswerCount(var_15_int);
	
		for(;;) {
			if(0 < var_15_int) {
				string var_85_string; int var_86_int;
				var_17_int = var_86_int;
				func_276(var_85_string, var_86_int);
				var_85_string = var_18_string;
				if(var_17_int == var_3_int)
					@PrintInWidth(var_16_int, "default", 15, var_13_int, ((var_5_int - 15) - 5), var_18_string, 1.0, 1.0, 1.0);
				else
					@PrintInWidth(var_16_int, "default", 15, var_13_int, ((var_5_int - 15) - 5), var_18_string, 0.698, 0.659, 0.647);
			}
			var_13_int += var_16_int;
			var_13_int += 5;
			var_17_int += 1;
		}
	
	}

	void OnRegionChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int)
	{
		int var_15_int; int var_17_int; int var_18_int; string var_19_string; int var_20_int;
		var_15_int = (var_0_int + var_2_int) + 10;
		int var_16_int;
		@GetAnswerCount(var_16_int);
		var_3_int = -1;
	
		while(0 < var_16_int) {
			string var_24_string; int var_25_int;
			var_18_int = var_25_int;
			func_276(var_24_string, var_25_int);
			var_24_string = var_19_string;
			int var_30_int; int var_31_int;
			var_18_int = var_31_int;
			func_285(var_30_int, var_31_int);
			var_30_int = var_20_int;
			@GetTextHeightInWidth(var_17_int, "default", ((var_5_int - 15) - 5), var_19_string);
			bool var_41_bool = false;
			if(var_8_int > var_15_int) {
				if(var_8_int < (var_15_int + var_17_int))
					var_41_bool = true;
			}
			if(var_41_bool != 0) {
				var_3_int = var_18_int;
				var_4_int = var_20_int;
			}
			var_15_int += var_17_int;
			var_15_int += 5;
			var_18_int += 1;
		}
	
	}

	void OnHear(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int)
	{
		if(var_3_int == -1) {
		}
		string var_21_string;
		func_267(var_21_string);
		string var_14_string;
		var_21_string = var_14_string;
		string var_26_string;
		func_276(var_26_string, var_3_int);
		string var_17_string;
		var_26_string = var_17_string;
		int var_32_int;
		func_285(var_32_int, var_3_int);
		int var_15_int;
		var_32_int = var_15_int;
		int var_38_int;
		func_290(var_38_int, var_3_int);
		int var_16_int;
		var_38_int = var_16_int;
		@SelectAnswer(var_15_int, var_16_int);
		object var_18_object;
		@CreateStringVector(var_18_object);
		var_18_object->add(var_14_string);
		var_18_object->add(var_17_string);
		var_3_int = -1;
		@SendMessage(0, "history_text", var_18_object);
		var_0_int = 0;
		func_16(var_16_int, var_17_string, var_18_object);
	}
	EMIT "Stack[-1] = 0";

	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, float var_9_float)
	{
		int var_12_int;
		@GetFontHeight(var_12_int, "default");
		int var_13_int = var_9_float * var_12_int;
		var_0_int += var_13_int;
		int var_11_int;
		func_16(var_11_int, var_12_int, var_13_int);
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, string var_8_string, object var_9_object)
	{
		if(var_8_string == "p_scrollbar") {
			var_12_int = -var_1_int;
			var_0_int = (var_12_int * var_7_int) / 100;
			func_16(var_7_int, var_8_string, var_9_object);
		}
	}

}


void func_290(int var_38_int, int var_39_int)
{
	int var_43_int; int var_44_int; string var_45_string;
	@GetAnswer(var_39_int, var_45_string, var_43_int, var_44_int);
	var_44_int = var_38_int;
}


void func_267(string var_24_string)
{
	string var_26_string;
	@GetReplic(var_26_string);
	if(var_26_string == "")
		var_26_string = "Error: missing replic";
	var_26_string = var_24_string;
}


void func_16(int var_0_int, int var_1_int, int var_6_int)
{
	int var_9_int;
	func_50(var_6_int, var_9_int);
	if((var_9_int - var_6_int) < 0)
		var_1_int = 0;
	var_52_int = -var_0_int;
	if(var_52_int > var_1_int) {
		var_0_int = -var_1_int;
	} else if(var_0_int > 0) {
			var_0_int = 0;
	}
	if(var_1_int == 0) {
		@SendMessage(16384, "p_scrollbar");
	} else {
		var_58_int = -var_0_int;
		@SendMessage(((var_58_int * 100) / var_1_int), "p_scrollbar");

	}
	
}


void func_50(int var_5_int, int var_9_int)
{
	string var_23_string;
	string var_24_string;
	func_267(var_24_string);
	string var_19_string;
	var_24_string = var_19_string;
	int var_17_int;
	@GetTextHeightInWidth(var_17_int, "default", (var_5_int - 5), var_19_string);
	int var_18_int;
	var_17_int = var_18_int;
	var_18_int += 10;
	int var_20_int;
	@GetAnswerCount(var_20_int);
	int var_22_int = 0;
	
	for(;;) {
		if(var_22_int < var_20_int) {
			if(var_22_int == 0)
				var_18_int += 10;
			else
				var_18_int += 5;
		var_18_int = var_9_int;
		}
		string var_37_string; int var_38_int;
		var_22_int = var_38_int;
		func_276(var_37_string, var_38_int);
		var_37_string = var_23_string;
		@GetTextHeightInWidth(var_17_int, "default", ((var_5_int - 15) - 5), var_23_string);
		var_18_int += var_17_int;
		var_22_int += 1;
	}
	
}


void func_276(string var_37_string, int var_38_int)
{
	string var_40_string;
	@GetAnswer(var_38_int, var_40_string);
	if(var_40_string == "")
		var_40_string = "ERROR: missing answer";
	var_40_string = var_37_string;
}


void func_285(int var_32_int, int var_33_int)
{
	int var_36_int; string var_37_string;
	@GetAnswer(var_33_int, var_37_string, var_36_int);
	var_36_int = var_32_int;
}


