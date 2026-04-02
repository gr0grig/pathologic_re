maintask task_0
{
	void init(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		var_5_int = 0;
		var_1_int = 0;
		@GetWindowSize(var_3_int, var_4_int);
		func_20(var_3_int, var_4_int, var_5_int, var_6_int, true);
		func_203(var_5_int, var_6_int);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		func_20(var_3_int, var_4_int, var_5_int, var_6_int, false);
	}

	// @pe
	void event_200(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, string var_8_string, object var_9_object)
	{
		if(var_8_string == "scrollbar") {
			var_12_int = -var_2_int;
			var_1_int = (var_12_int * var_7_int) / 100;
			func_188(var_8_string, var_9_object);
			return 0;
		EMIT "GOTO 0x9a";
		}
		if(var_8_string == "diary") {
			if(var_7_int < 1000) {
				var_5_int = var_7_int;
				var_1_int = 0;
				func_20(var_6_int, var_7_int, var_8_string, var_9_object, true);
				func_203(var_8_string, var_9_object);
			} else if(var_7_int == 1000) {
					func_178(var_9_object);
			}
		}
	Label_154:
		for(;;) {
			return 0;

		}
	
		if(!(var_7_int == 1001)) goto Label_154;
		func_168(var_9_object);
	}

	void OnPlayerHolsterWeapon(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, float var_9_float)
	{
		int var_11_int = (var_9_float * 15) * 2;
		var_1_int += var_11_int;
		int var_10_int;
		func_188(var_10_int, var_11_int);
		func_203(var_10_int, var_11_int);
	}

}


void func_168(int var_1_int)
{
	int var_95_int = 60;
	var_1_int += var_95_int;
	int var_94_int;
	func_188(var_94_int, var_95_int);
	func_203(var_94_int, var_95_int);
}


void func_203(int var_1_int, int var_2_int)
{
	if(var_2_int == 0) {
		@SendMessage(16384, "scrollbar");
	} else {
		var_65_int = -var_1_int;
		@SendMessage(((var_65_int * 100) / var_2_int), "scrollbar");
	}
	
}


void func_60(int var_1_int, int var_3_int, int var_5_int, int var_6_int, object var_21_object, int var_22_int, bool var_23_bool)
{
	int var_32_int; int var_35_int; object var_38_object; int var_39_int;
	var_21_object->GetCategory(var_32_int);
	if(var_32_int != var_5_int)
		return 16;
	int var_33_int;
	var_21_object->GetTextID(var_33_int);
	string var_34_string;
	@GetStringByID(var_34_string, var_33_int);
	if(var_23_bool != 0)
		@GetTextHeightInWidth(var_35_int, "default", (var_3_int - var_22_int), var_34_string);
	else
		@PrintInWidth(var_35_int, "default", var_22_int, (var_1_int + var_6_int), (var_3_int - var_22_int), var_34_string, 1.0, 1.0, 1.0);
	var_6_int += var_35_int;
	int var_36_int;
	var_21_object->ChildCount(var_36_int);
	int var_37_int = 0;
	
	for(;;) {
		if(var_37_int < var_36_int) {
			var_21_object->Child(var_38_object, var_37_int);
			var_38_object->GetCategory(var_39_int);
			if(var_39_int != var_5_int) {
			} else {
			var_6_int += 10;
			object var_48_object; bool var_50_bool;
			var_23_bool = var_50_bool;
			func_60(var_36_int, var_37_int, var_48_object, var_39_int, var_48_object, (var_22_int + 20), var_50_bool);
			var_38_object = null;
		}
		return 16;

		}
		var_37_int += 1;
	}
	
}


void func_178(int var_1_int)
{
	int var_91_int = -60;
	var_1_int += var_91_int;
	int var_90_int;
	func_188(var_90_int, var_91_int);
	func_203(var_90_int, var_91_int);
}


void func_20(int var_2_int, int var_4_int, int var_5_int, int var_6_int, bool var_7_bool)
{
	int var_15_int; object var_17_object;
	var_6_int = 0;
	object var_13_object;
	@GetDiaryRoot(var_13_object);
	int var_14_int;
	var_13_object->ChildCount(var_14_int);
	int var_16_int = 0;
	
	for(;;) {
		if(var_16_int < var_14_int) {
			var_13_object->Child(var_17_object, var_16_int);
			var_17_object->GetCategory(var_15_int);
			if(var_15_int != var_5_int) {
			} else {
			object var_21_object; bool var_23_bool;
			var_7_bool = var_23_bool;
			func_60(var_14_int, var_15_int, var_16_int, var_21_object, var_21_object, 0, var_23_bool);
			var_6_int += 15;
			var_17_object = null;
		}
		if((var_6_int - var_4_int) < 0)
			var_2_int = 0;
		}
		var_16_int += 1;
	}
	
}
EMIT "Stack[-5] = 0";


void func_188(int var_1_int, int var_2_int)
{
	if(var_2_int == 0) {
		var_1_int = 0;
		return 0;
	}
	var_17_int = -var_1_int;
	if(var_17_int > var_2_int) {
		var_1_int = -var_2_int;
	} else if(var_1_int > 0) {
		var_1_int = 0;
	}
	
}


