maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		var_3_int = -1;
		var_0_int = 0;
		@GetWindowSize(var_5_int, var_6_int);
		@EnableClipping(true);
		@CaptureKeyboard();
		@SetOwnerDraw(true);
		func_18(var_4_int, var_5_int, var_6_int);
		@ProcessEvents();
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		int var_16_int; int var_17_int; string var_18_string;
		func_18(var_16_int, var_17_int, var_18_string);
		int var_13_int = var_0_int;
		string var_75_string;
		func_354(var_75_string);
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
				func_363(var_85_string, var_86_int);
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
			func_363(var_24_string, var_25_int);
			var_24_string = var_19_string;
			int var_30_int; int var_31_int;
			var_18_int = var_31_int;
			func_372(var_30_int, var_31_int);
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

	// @pe
	void OnHear(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int)
	{
		func_204(var_7_int, var_8_int);
	}

	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, float var_9_float)
	{
		int var_12_int;
		@GetFontHeight(var_12_int, "default");
		int var_13_int = var_9_float * var_12_int;
		var_0_int += var_13_int;
		int var_11_int;
		func_18(var_11_int, var_12_int, var_13_int);
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, string var_8_string, object var_9_object)
	{
		if(var_8_string == "p_scrollbar") {
			var_12_int = -var_1_int;
			var_0_int = (var_12_int * var_7_int) / 100;
			func_18(var_7_int, var_8_string, var_9_object);
		}
	}

	// @pe
	void event_101(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		if(var_7_int == 267) {
			@HideCursor();
			func_274(var_7_int);
		} else if(var_7_int == 268) {
			@HideCursor();
			func_292(var_7_int);
		}
	
	}

	// @pe
	void event_102(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		if(var_7_int == 272) {
			@HideCursor();
			func_274(var_7_int);
		} else if(var_7_int == 274) {
				@HideCursor();
				func_292(var_7_int);
		}
	Label_353:
		for(;;) {

		}
	
		if(!(var_7_int == 256)) goto Label_353;
		func_204(var_6_int, var_7_int);
	}

}


void func_354(string var_24_string)
{
	string var_26_string;
	@GetReplic(var_26_string);
	if(var_26_string == "")
		var_26_string = "Error: missing replic";
	var_26_string = var_24_string;
}


void func_292(int var_3_int)
{
	int var_22_int;
	@GetAnswerCount(var_22_int);
	if(var_3_int == -1) {
		var_3_int = 0;
	} else if(var_3_int < (var_22_int - 1)) {
			var_3_int += 1;
	}
	
	var_3_int = 0;
}


void func_363(string var_37_string, int var_38_int)
{
	string var_40_string;
	@GetAnswer(var_38_int, var_40_string);
	if(var_40_string == "")
		var_40_string = "ERROR: missing answer";
	var_40_string = var_37_string;
}


void func_204(int var_0_int, int var_3_int)
{
	if(var_3_int == -1) {
	}
	string var_43_string;
	func_354(var_43_string);
	string var_36_string;
	var_43_string = var_36_string;
	string var_48_string;
	func_363(var_48_string, var_3_int);
	string var_39_string;
	var_48_string = var_39_string;
	int var_54_int;
	func_372(var_54_int, var_3_int);
	int var_37_int;
	var_54_int = var_37_int;
	int var_60_int;
	func_377(var_60_int, var_3_int);
	int var_38_int;
	var_60_int = var_38_int;
	@SelectAnswer(var_37_int, var_38_int);
	object var_40_object;
	@CreateStringVector(var_40_object);
	var_40_object->add(var_36_string);
	var_40_object->add(var_39_string);
	var_3_int = -1;
	@SendMessage(0, "history_text", var_40_object);
	var_0_int = 0;
	func_18(var_38_int, var_39_string, var_40_object);
}
EMIT "Stack[-1] = 0";


void func_18(int var_0_int, int var_1_int, int var_6_int)
{
	int var_9_int;
	func_52(var_6_int, var_9_int);
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


void func_274(int var_3_int)
{
	int var_11_int;
	@GetAnswerCount(var_11_int);
	if(var_3_int == -1) {
		var_3_int = var_11_int - 1;
	} else if(var_3_int > 0) {
			var_3_int += -1;
	}
	
	var_3_int = var_11_int - 1;
}


void func_372(int var_54_int, int var_55_int)
{
	int var_58_int; string var_59_string;
	@GetAnswer(var_55_int, var_59_string, var_58_int);
	var_58_int = var_54_int;
}


void func_52(int var_5_int, int var_9_int)
{
	string var_23_string;
	string var_24_string;
	func_354(var_24_string);
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
		func_363(var_37_string, var_38_int);
		var_37_string = var_23_string;
		@GetTextHeightInWidth(var_17_int, "default", ((var_5_int - 15) - 5), var_23_string);
		var_18_int += var_17_int;
		var_22_int += 1;
	}
	
}


void func_377(int var_60_int, int var_61_int)
{
	int var_65_int; int var_66_int; string var_67_string;
	@GetAnswer(var_61_int, var_67_string, var_65_int, var_66_int);
	var_66_int = var_60_int;
}


