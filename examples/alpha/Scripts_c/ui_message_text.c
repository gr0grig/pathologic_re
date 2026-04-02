maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object)
	{
		object var_22_object; float var_25_float; string var_26_string; string var_27_string; int var_28_int; object var_29_object; object var_30_object; object var_31_object;
		@SetOwnerDraw(true);
		@EnableClipping(true);
		@GetWindowSize(var_2_int, var_3_int);
		var_0_int = 0;
		var_4_int = 0;
		var_5_int = -1;
		@CreateObjectVector(var_7_object);
		@CreateObjectVector(var_8_object);
		@CreateObjectVector(var_9_object);
		int var_21_int = 0;
	
		while(var_21_int < 12) {
			@CreateStringVector(var_22_object);
			var_7_object->add(var_22_object); //@t
			@CreateStringVector(var_22_object);
			var_8_object->add(var_22_object); //@t
			@CreateIntVector(var_22_object);
			var_9_object->add(var_22_object); //@t
			var_22_object = null;
			var_21_int += 1;
		}
	
		int var_23_int;
		@GetMessageCount(var_23_int);
		int var_24_int = 0;
	
		while(var_24_int < var_23_int) {
			@GetMessage(var_24_int, var_26_string, var_27_string, var_25_float);
			var_28_int = var_25_float / 24;
			var_7_object->get(var_29_object, var_28_int); //@t
			var_8_object->get(var_30_object, var_28_int); //@t
			var_9_object->get(var_31_object, var_28_int); //@t
			var_29_object->add(var_26_string);
			var_30_object->add(var_27_string);
			var_31_object->add(var_24_int);
			var_31_object = null;
			var_30_object = null;
			var_29_object = null;
			var_24_int += 1;
		}
	
		@ProcessEvents();
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object)
	{
		string var_26_string; string var_27_string; int var_28_int; int var_29_int;
		func_68(var_28_int, var_29_int);
		int var_20_int = var_0_int;
		object var_21_object;
		var_7_object->get(var_21_object, var_4_int); //@t
		object var_22_object;
		var_8_object->get(var_22_object, var_4_int); //@t
		object var_23_object;
		var_9_object->get(var_23_object, var_4_int); //@t
		int var_24_int;
		var_21_object->size(var_24_int);
		int var_25_int = 0;
	
		for(;;) {
			if(var_25_int < var_24_int) {
				var_21_object->get(var_26_string, var_25_int);
				var_22_object->get(var_27_string, var_25_int);
				var_23_object->get(var_28_int, var_25_int);
				if(var_28_int == var_6_int)
					@PrintInWidth(var_29_int, "default", 0, var_20_int, var_2_int, var_26_string, 1.0, 1.0, 1.0);
				else
					@PrintInWidth(var_29_int, "default", 0, var_20_int, var_2_int, var_26_string, 0.804, 0.804, 0.804);
			}
			var_20_int += var_29_int;
			if(var_28_int == var_5_int) {
				var_20_int += 5;
				if(var_28_int == var_6_int)
					@PrintInWidth(var_29_int, "default", 15, var_20_int, (var_2_int - 15), var_27_string, 0.804, 0.804, 0.804);
				else
					@PrintInWidth(var_29_int, "default", 15, var_20_int, (var_2_int - 15), var_27_string, 0.698, 0.659, 0.647);
			var_20_int += 5;

			}
			var_20_int += var_29_int;
			var_20_int += 5;
			goto Label_252;

		Label_252:
			var_25_int += 1;
		}
	
	}
	EMIT "Stack[-7] = 0";
	EMIT "Stack[-8] = 0";
	EMIT "Stack[-9] = 0";

	void OnHear(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int)
	{
		int var_12_int; int var_13_int;
		int var_14_int; int var_15_int;
		func_124(var_7_object, var_8_object, var_9_object, var_10_int, var_15_int, var_12_int, var_13_int, var_14_int, var_15_int);
		var_14_int = var_13_int;
		if(var_13_int == -1) {
		}
		if(var_13_int == var_5_int)
			var_5_int = -1;
		else
			var_5_int = var_13_int;
		func_68(var_12_int, var_13_int);
	
	}

	// @pe
	void OnRegionChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int)
	{
		int var_12_int; int var_13_int;
		func_124(var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_13_int, var_12_int, var_13_int);
		var_6_int = var_12_int;
	}

	void OnCollision(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object)
	{
		var_6_int = -1;
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, int var_10_int, string var_11_string, object var_12_object)
	{
		if(var_11_string == "scrollbar") {
			var_15_int = -var_1_int;
			var_0_int = (var_15_int * var_10_int) / 100;
			return 0;
		}
		if((var_10_int & 32768) != 0)
			var_5_int = var_10_int & 32767;
		else
			var_4_int = var_10_int;
	
	}

}


void func_124(int var_0_int, int var_2_int, int var_4_int, int var_5_int, object var_7_object, object var_8_object, object var_9_object, int var_12_int, int var_13_int)
{
	int var_25_int; int var_31_int; string var_32_string; string var_33_string; int var_34_int; int var_35_int;
	var_25_int = var_0_int;
	object var_26_object;
	var_7_object->get(var_26_object, var_4_int); //@t
	object var_27_object;
	var_8_object->get(var_27_object, var_4_int); //@t
	object var_28_object;
	var_9_object->get(var_28_object, var_4_int); //@t
	int var_29_int;
	var_26_object->size(var_29_int);
	int var_30_int = 0;
	
	for(;;) {
		if(var_30_int < var_29_int) {
			var_25_int = var_31_int;
			var_26_object->get(var_32_string, var_30_int);
			var_27_object->get(var_33_string, var_30_int);
			var_28_object->get(var_34_int, var_30_int);
			@GetTextHeightInWidth(var_35_int, "default", var_2_int, var_32_string);
			var_25_int += var_35_int;
			if(var_34_int == var_5_int) {
				var_25_int += 5;
				@GetTextHeightInWidth(var_35_int, "default", (var_2_int - 15), var_33_string);
				var_25_int += var_35_int;
				var_25_int += 5;
			} else {
		}
		return 22;
		}
		bool var_44_bool = false;
		if(var_13_int > var_31_int) {
			if(var_13_int < (var_25_int + 5))
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			var_34_int = -1;
			return 22;
		}
		var_30_int += 1;
	}
	
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";


void func_78(int var_2_int, int var_4_int, int var_5_int, object var_7_object, object var_8_object, object var_9_object, int var_54_int)
{
	int var_65_int; string var_71_string; string var_72_string; int var_73_int; int var_74_int;
	var_65_int = 0;
	object var_66_object;
	var_7_object->get(var_66_object, var_4_int); //@t
	object var_67_object;
	var_8_object->get(var_67_object, var_4_int); //@t
	object var_68_object;
	var_9_object->get(var_68_object, var_4_int); //@t
	int var_69_int;
	var_66_object->size(var_69_int);
	int var_70_int = 0;
	
	for(;;) {
		if(var_70_int < var_69_int) {
			var_66_object->get(var_71_string, var_70_int);
			var_67_object->get(var_72_string, var_70_int);
			var_68_object->get(var_73_int, var_70_int);
			@GetTextHeightInWidth(var_74_int, "default", var_2_int, var_71_string);
			var_65_int += var_74_int;
			if(var_73_int == var_5_int) {
				var_65_int += 5;
				@GetTextHeightInWidth(var_74_int, "default", (var_2_int - 15), var_72_string);
				var_65_int += var_74_int;
				var_65_int += 5;
			} else {
			var_65_int += 5;
		}
		var_65_int = var_54_int;
		}
		var_70_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


void func_68(int var_1_int, int var_3_int)
{
	int var_54_int;
	func_78(var_8_object, var_9_object, var_10_int, var_11_int, var_12_int, var_13_int, var_54_int);
	if((var_54_int - var_3_int) < 0)
		var_1_int = 0;
}


