// @GLOBALS: 0:int:

maintask task_0
{
	void init(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, string var_10_string, string var_11_string)
	{
		var_4_int = -1;
		var_1_int = 0;
		@GetWindowSize(var_6_int, var_7_int);
		var_14_int = GlobalVars[0];
		GlobalVars[0] = (var_6_int / 4.8);
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
		object var_12_object;
		func_43(var_11_string, var_12_object, var_13_object);
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
			var_26_int = GlobalVars[0];
			var_27_int = GlobalVars[0];
			@PrintInWidth(var_23_int, "default", var_26_int, var_18_int, (var_6_int - var_27_int), var_21_string, 0.804, 0.804, 0.804);
			@Print("default", 0, var_18_int, var_10_string, 0.804, 0.804, 0.804);
			var_18_int += var_23_int;
			var_18_int += 10;
			var_39_int = GlobalVars[0];
			var_40_int = GlobalVars[0];
			@PrintInWidth(var_23_int, "default", var_39_int, var_18_int, (var_6_int - var_40_int), var_22_string, 0.698, 0.659, 0.647);
			@Print("default", 0, var_18_int, var_11_string, 0.698, 0.659, 0.647);
			var_18_int += var_23_int;
			var_18_int += 10;
			var_20_int += 1;
		}
	
	}

	void event_200(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, string var_10_string, string var_11_string, int var_12_int, string var_13_string, object var_14_object)
	{
		string var_16_string; string var_17_string; string var_18_string;
		if(var_13_string == "h_scrollbar") {
			var_21_int = -var_2_int;
			var_1_int = (var_21_int * var_12_int) / 100;
		} else if(var_13_string == "dialog_text") {
			var_14_object->get(var_17_string, 0);
			var_14_object->get(var_18_string, 1);
			var_8_object->add(var_17_string); //@t
			var_9_object->add(var_18_string); //@t
			func_43(var_16_string, var_17_string, var_18_string);
		}
	
	}

	void OnPlayerHolsterWeapon(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, string var_10_string, string var_11_string, int var_12_int, int var_13_int, float var_14_float)
	{
		int var_17_int;
		@GetFontHeight(var_17_int, "default");
		int var_18_int = var_14_float * var_17_int;
		var_1_int += var_18_int;
		int var_16_int;
		func_63(var_16_int, var_17_int, var_18_int);
	}

}


void func_97(int var_6_int, object var_8_object, object var_9_object, int var_18_int)
{
	int var_26_int; int var_27_int; string var_29_string; string var_30_string;
	var_27_int = 0;
	int var_25_int;
	var_8_object->size(var_25_int); //@t
	int var_28_int = 0;
	
	while(var_28_int < var_25_int) {
		var_8_object->get(var_29_string, var_28_int); //@t
		var_9_object->get(var_30_string, var_28_int); //@t
		var_33_int = GlobalVars[0];
		@GetTextHeightInWidth(var_26_int, "default", (var_6_int - var_33_int), var_29_string);
		var_27_int += var_26_int;
		var_27_int += 10;
		var_37_int = GlobalVars[0];
		@GetTextHeightInWidth(var_26_int, "default", (var_6_int - var_37_int), var_30_string);
		var_27_int += var_26_int;
		if(var_28_int != (var_25_int - 1))
			var_27_int += 10;
		var_28_int += 1;
	}
	
	var_27_int = var_18_int;
}


void func_43(int var_1_int, int var_2_int, int var_7_int)
{
	int var_18_int;
	func_97(var_11_string, var_12_object, var_13_object, var_18_int);
	if((var_18_int - var_7_int) < 0) {
		var_2_int = 0;
		@SendMessage(16484, "h_scrollbar");
	} else {
		@SendMessage(100, "h_scrollbar");
	}
	var_1_int = -var_2_int;
	
}


void func_63(int var_1_int, int var_2_int, int var_7_int)
{
	int var_20_int;
	func_97(var_16_int, var_17_int, var_18_int, var_20_int);
	if((var_20_int - var_7_int) < 0)
		var_2_int = 0;
	var_48_int = -var_1_int;
	if(var_48_int > var_2_int) {
		var_1_int = -var_2_int;
	} else if(var_1_int > 0) {
			var_1_int = 0;
	}
	if(var_2_int == 0) {
		@SendMessage(16384, "h_scrollbar");
	} else {
		var_54_int = -var_1_int;
		@SendMessage(((var_54_int * 100) / var_2_int), "h_scrollbar");

	}
	
}


