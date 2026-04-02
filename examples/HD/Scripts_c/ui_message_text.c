maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object)
	{
		object var_23_object; int var_25_int; float var_26_float; string var_27_string; string var_28_string; int var_29_int; object var_31_object; object var_32_object; object var_33_object;
		@SetOwnerDraw(true);
		@EnableClipping(true);
		@GetWindowSize(var_2_int, var_3_int);
		var_0_int = 0;
		var_4_int = 0;
		var_5_int = -1;
		@CreateObjectVector(var_7_object);
		@CreateObjectVector(var_8_object);
		@CreateObjectVector(var_9_object);
		int var_22_int = 0;
	
		while(var_22_int < 12) {
			@CreateStringVector(var_23_object);
			var_7_object->add(var_23_object); //@t
			@CreateStringVector(var_23_object);
			var_8_object->add(var_23_object); //@t
			@CreateIntVector(var_23_object);
			var_9_object->add(var_23_object); //@t
			var_23_object = null;
			var_22_int += 1;
		}
	
		int var_24_int;
		@GetMessageCount(var_24_int);
		if(var_24_int != 0) {
			var_25_int = var_24_int - 1;

			while(var_25_int >= 0) {
				@GetMessage(var_25_int, var_27_string, var_28_string, var_26_float);
				var_29_int = var_26_float / 24;
				bool var_46_bool = false;
				if((var_26_float - (var_29_int * 24)) < 7) {
					if(var_29_int > 0)
						var_46_bool = true;
				}
				if(var_46_bool != 0)
					var_29_int += -1;
				var_7_object->get(var_31_object, var_29_int); //@t
				var_8_object->get(var_32_object, var_29_int); //@t
				var_9_object->get(var_33_object, var_29_int); //@t
				var_31_object->add(var_27_string);
				var_32_object->add(var_28_string);
				var_33_object->add(var_25_int);
				var_33_object = null;
				var_32_object = null;
				var_31_object = null;
				var_25_int += -1;
			}

			var_5_int = var_24_int - 1;
		}
		func_128(var_31_object, var_32_object, var_33_object);
		func_149(var_32_object, var_33_object);
		@ProcessEvents();
	}

	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int, float var_12_float)
	{
		int var_14_int = (var_12_float * 5) * 2;
		var_0_int += var_14_int;
		int var_13_int;
		func_128(var_12_float, var_13_int, var_14_int);
		func_149(var_13_int, var_14_int);
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object)
	{
		int var_20_int; string var_26_string; string var_27_string; int var_28_int; int var_29_int;
		var_20_int = var_0_int;
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
			goto Label_336;

		Label_336:
			var_25_int += 1;
		}
	
	}
	EMIT "Stack[-7] = 0";
	EMIT "Stack[-8] = 0";
	EMIT "Stack[-9] = 0";

	void OnHear(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int)
	{
		int var_15_int;
		var_11_int = var_15_int;
		int var_12_int;
		int var_13_int;
		int var_14_int;
		func_211(var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_int, var_13_int, var_14_int, var_15_int);
		var_14_int = var_13_int;
		if(var_13_int == -1) {
		}
		if(var_13_int == var_5_int)
			var_5_int = -1;
		else
			var_5_int = var_13_int;
		func_128(var_11_int, var_12_int, var_13_int);
		func_149(var_12_int, var_13_int);
	
	}

	// @pe
	void OnRegionChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int)
	{
		int var_12_int; int var_13_int;
		func_211(var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_13_int, var_12_int, var_13_int);
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
			func_128(var_10_int, var_11_string, var_12_object);
			return 0;
		EMIT "GOTO 0x1a1";
		}
		if(var_11_string == "message") {
			if((var_10_int & 32768) != 0) {
				var_5_int = var_10_int & 32767;
			} else if(var_10_int == 1000) {
					func_118(var_12_object);
			}
		}
	Label_417:
		for(;;) {
			return 0;

		}
	
		if(var_10_int == 1001) {
			func_108(var_12_object);
			goto Label_417;
		}
		var_4_int = var_10_int;
		func_128(var_10_int, var_11_string, var_12_object);
		func_149(var_11_string, var_12_object);
	}

}


void func_128(int var_0_int, int var_1_int, int var_3_int)
{
	int var_54_int;
	func_165(var_28_string, var_29_int, var_30_int, var_31_object, var_32_object, var_33_object, var_54_int);
	if((var_54_int - var_3_int) < 0) {
		var_1_int = 0;
	} else if(-0 > var_1_int) {
			var_0_int = -var_1_int;
	}
Label_148:
	for(;;) {
		return 0;

	}
	
	if(!(var_0_int > 0)) goto Label_148;
	var_0_int = 0;
}


void func_165(int var_2_int, int var_4_int, int var_5_int, object var_7_object, object var_8_object, object var_9_object, int var_54_int)
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


void func_108(int var_0_int)
{
	int var_76_int = 20;
	var_0_int += var_76_int;
	int var_75_int;
	func_128(var_12_object, var_75_int, var_76_int);
	func_149(var_75_int, var_76_int);
}


void func_211(int var_0_int, int var_2_int, int var_4_int, int var_5_int, object var_7_object, object var_8_object, object var_9_object, int var_12_int, int var_13_int)
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


void func_149(int var_0_int, int var_1_int)
{
	if(var_1_int == 0) {
		@SendMessage(16384, "scrollbar");
	} else {
		var_95_int = -var_0_int;
		@SendMessage(((var_95_int * 100) / var_1_int), "scrollbar");
	}
	
}


void func_118(int var_0_int)
{
	int var_63_int = -20;
	var_0_int += var_63_int;
	int var_62_int;
	func_128(var_12_object, var_62_int, var_63_int);
	func_149(var_62_int, var_63_int);
}


