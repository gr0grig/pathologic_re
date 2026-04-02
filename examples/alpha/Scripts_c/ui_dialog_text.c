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
		string var_14_string;
		@GetReplic(var_14_string);
		@PrintInWidth(var_2_int, "default", 0, var_13_int, var_5_int, var_14_string, 0.804, 0.804, 0.804);
		var_13_int += var_2_int;
		var_13_int += 15;
		int var_15_int;
		@GetAnswerCount(var_15_int);
		var_17_int = 0;
	
		for(;;) {
			if(var_17_int < var_15_int) {
				@GetAnswer(var_17_int, var_18_string);
				if(var_17_int == var_3_int)
					@PrintInWidth(var_16_int, "default", 15, var_13_int, (var_5_int - 15), var_18_string, 1.0, 1.0, 1.0);
				else
					@PrintInWidth(var_16_int, "default", 15, var_13_int, (var_5_int - 15), var_18_string, 0.698, 0.659, 0.647);
			}
			var_13_int += var_16_int;
			var_13_int += 10;
			var_17_int += 1;
		}
	
	}

	void OnRegionChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int)
	{
		int var_15_int; int var_17_int; string var_19_string; int var_20_int;
		var_15_int = (var_0_int + var_2_int) + 15;
		int var_16_int;
		@GetAnswerCount(var_16_int);
		var_3_int = -1;
		int var_18_int = 0;
	
		while(var_18_int < var_16_int) {
			@GetAnswer(var_18_int, var_19_string, var_20_int);
			@GetTextHeightInWidth(var_17_int, "default", var_5_int, var_19_string);
			bool var_25_bool = false;
			if(var_8_int > var_15_int) {
				if(var_8_int < (var_15_int + var_17_int))
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				var_3_int = var_18_int;
				var_4_int = var_20_int;
			}
			var_15_int += var_17_int;
			var_15_int += 10;
			var_18_int += 1;
		}
	
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int)
	{
		if(var_3_int == -1)
			return 0;
		@SendMessage(var_3_int, "history_text");
		var_0_int = 0;
		func_16(var_6_int, var_7_int, var_8_int);
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


void func_16(int var_0_int, int var_1_int, int var_6_int)
{
	int var_9_int;
	func_38(var_6_int, var_9_int);
	if((var_9_int - var_6_int) < 0) {
		@SendMessage(16384, "p_scrollbar");
	} else {
		var_39_int = -var_0_int;
		@SendMessage(((var_39_int * 100) / 0), "p_scrollbar");
	}
	
}


void func_38(int var_5_int, int var_9_int)
{
	string var_19_string; string var_23_string;
	@GetReplic(var_19_string);
	int var_17_int;
	@GetTextHeightInWidth(var_17_int, "default", var_5_int, var_19_string);
	int var_18_int;
	var_17_int = var_18_int;
	var_18_int += 15;
	int var_20_int;
	@GetAnswerCount(var_20_int);
	int var_22_int = 0;
	
	for(;;) {
		if(var_22_int < var_20_int) {
			if(var_22_int == 0)
				var_18_int += 15;
			else
				var_18_int += 10;
		var_18_int = var_9_int;
		}
		@GetAnswer(var_22_int, var_23_string);
		@GetTextHeightInWidth(var_17_int, "default", (var_5_int - 15), var_23_string);
		var_18_int += var_17_int;
		var_22_int += 1;
	}
	
}


