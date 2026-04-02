maintask task_0
{
	void init(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, string var_10_string, string var_11_string)
	{
		var_4_int = -1;
		var_1_int = 0;
		@CreateStringVector(var_8_object);
		@CreateStringVector(var_9_object);
		object var_13_object;
		@GetConversation(var_13_object);
		if(var_13_object == null)
			@UITrace("null conversation");
		var_13_object->GetNPCName(var_10_string);
		@_strupr(var_10_string);
		var_13_object->GetPlayerName(var_11_string);
		@_strupr(var_11_string);
		@GetWindowSize(var_6_int, var_7_int);
		object var_12_object;
		func_39(var_11_string, var_12_object, var_13_object);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		var_0_bool = false;
		@ProcessEvents();
	}
	EMIT "Stack[-1] = 0";

	void OnUse(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, string var_10_string, string var_11_string)
	{
		int var_18_int; string var_21_string; string var_22_string; int var_23_int;
		var_18_int = var_1_int;
		int var_19_int;
		var_8_object->size(var_19_int); //@t
		int var_20_int = 0;
	
		while(var_20_int < var_19_int) {
			var_8_object->get(var_21_string, var_20_int); //@t
			var_9_object->get(var_22_string, var_20_int); //@t
			@PrintInWidth(var_23_int, "default", 159, var_18_int, (var_6_int - 159), var_21_string, 0.804, 0.804, 0.804);
			@Print("default", 0, var_18_int, var_10_string, 0.804, 0.804, 0.804);
			var_18_int += var_23_int;
			var_18_int += 10;
			@PrintInWidth(var_23_int, "default", 159, var_18_int, (var_6_int - 159), var_22_string, 0.698, 0.659, 0.647);
			@Print("default", 0, var_18_int, var_11_string, 0.698, 0.659, 0.647);
			var_18_int += var_23_int;
			var_18_int += 10;
			var_20_int += 1;
		}
	
	}

	void event_200(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, string var_10_string, string var_11_string, int var_12_int, string var_13_string, object var_14_object)
	{
		int var_19_int; int var_20_int; string var_21_string; string var_22_string;
		if(var_13_string == "h_scrollbar") {
			var_25_int = -var_2_int;
			var_1_int = (var_25_int * var_12_int) / 100;
		} else if(var_13_string == "dialog_text") {
			@GetReplic(var_21_string);
			@GetAnswer(var_12_int, var_22_string, var_19_int, var_20_int);
			var_8_object->add(var_21_string); //@t
			var_9_object->add(var_22_string); //@t
			func_39(var_20_int, var_21_string, var_22_string);
			@SelectAnswer(var_19_int, var_20_int);
		}
	
	}

}


void func_59(int var_6_int, object var_8_object, object var_9_object, int var_16_int)
{
	int var_24_int; int var_25_int; string var_27_string; string var_28_string;
	var_25_int = 0;
	int var_23_int;
	var_8_object->size(var_23_int); //@t
	int var_26_int = 0;
	
	while(var_26_int < var_23_int) {
		var_8_object->get(var_27_string, var_26_int); //@t
		var_9_object->get(var_28_string, var_26_int); //@t
		@GetTextHeightInWidth(var_24_int, "default", (var_6_int - 159), var_27_string);
		var_25_int += var_24_int;
		var_25_int += 10;
		@GetTextHeightInWidth(var_24_int, "default", (var_6_int - 159), var_28_string);
		var_25_int += var_24_int;
		if(var_26_int != (var_23_int - 1))
			var_25_int += 10;
		var_26_int += 1;
	}
	
	var_25_int = var_16_int;
}


void func_39(int var_1_int, int var_2_int, int var_7_int)
{
	int var_16_int;
	func_59(var_11_string, var_12_object, var_13_object, var_16_int);
	if((var_16_int - var_7_int) < 0) {
		var_2_int = 0;
		@SendMessage(16484, "h_scrollbar");
	} else {
		@SendMessage(100, "h_scrollbar");
	}
	var_1_int = -var_2_int;
	
}


