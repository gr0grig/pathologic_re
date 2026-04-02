maintask task_0
{
	void init(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		var_5_int = 0;
		var_1_int = 0;
		@GetWindowSize(var_3_int, var_4_int);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		object var_11_object; object var_14_object;
		@GetDiaryRoot(var_11_object);
		var_6_int = 0;
		int var_12_int;
		var_11_object->ChildCount(var_12_int);
		int var_13_int = 0;
	
		while(var_13_int < var_12_int) {
			var_11_object->Child(var_14_object, var_13_int);
			object var_16_object;
			func_42(var_11_object, var_12_int, var_13_int, var_16_object, var_16_object, 0);
			var_6_int += 15;
			var_14_object = null;
			var_13_int += 1;
		}
	
		if((var_6_int - var_4_int) < 0)
			var_2_int = 0;
	}
	EMIT "Stack[-4] = 0";

	// @pe
	void event_200(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, string var_8_string, object var_9_object)
	{
		if(var_8_string == "scrollbar") {
			var_12_int = -var_2_int;
			var_1_int = (var_12_int * var_7_int) / 100;
		}
		var_5_int = var_7_int;
	}

}


void func_42(int var_1_int, int var_3_int, int var_5_int, int var_6_int, object var_16_object, int var_17_int)
{
	int var_26_int; object var_32_object; int var_33_int;
	var_16_object->GetCategory(var_26_int);
	if(var_26_int != var_5_int)
		return 16;
	int var_27_int;
	var_16_object->GetTextID(var_27_int);
	string var_28_string;
	@GetStringByID(var_28_string, var_27_int);
	int var_29_int;
	@PrintInWidth(var_29_int, "default", var_17_int, (var_1_int + var_6_int), (var_3_int + var_17_int), var_28_string, 1.0, 1.0, 1.0);
	var_6_int += var_29_int;
	int var_30_int;
	var_16_object->ChildCount(var_30_int);
	int var_31_int = 0;
	
	for(;;) {
		if(var_31_int < var_30_int) {
			var_16_object->Child(var_32_object, var_31_int);
			var_32_object->GetCategory(var_33_int);
			if(var_33_int != var_5_int) {
			} else {
			var_6_int += 10;
			object var_45_object;
			func_42(var_30_int, var_31_int, var_45_object, var_33_int, var_45_object, (var_17_int + 20));
			var_32_object = null;
		}
		return 16;
		}
		var_31_int += 1;
	}
	
}


