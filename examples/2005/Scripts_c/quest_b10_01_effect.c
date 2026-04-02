maintask task_0
{
	void init(bool var_0_bool)
	{
		func_28((float)12);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		if(var_1_string == "b10q01_stop")
			func_60(var_1_string);
	}

}


// @pe
void func_5(bool var_13_bool, float var_14_float)
{
	bool var_15_bool; float var_17_float;
	func_62(var_15_bool, "hunger", var_17_float, (float)0, (float)1);
	func_92(var_17_float * 2);
	var_13_bool = false;
}


void func_60(bool var_0_bool)
{
	var_0_bool = true;
}


void func_92(float var_31_float)
{
	object var_34_object;
	@CreateFloatVector(var_34_object);
	var_34_object->add(var_31_float);
	@SendWorldWndMessage(12, var_34_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(float var_25_float, float var_26_float, float var_27_float, float var_28_float)
{
	if(var_26_float < var_27_float) {
		var_27_float = var_25_float;
		return 0;
	}
	if(var_26_float > var_28_float) {
		var_28_float = var_25_float;
		return 0;
	}
	var_26_float = var_25_float;
}


void func_28(float var_1_float)
{
	float var_6_float; float var_9_float;
	@GetGameTime(var_6_float);
	float var_7_float = var_6_float + var_1_float;
	float var_8_float;
	var_6_float = var_8_float;
	
	for(;;) {
		@sync();
		if(var_0_bool != 0) {
		} else {
			@GetGameTime(var_9_float);
			if(var_9_float <= var_8_float) {
			} else {
			if(var_9_float >= var_7_float) {
				bool var_13_bool;
				func_5(var_13_bool, (var_7_float - var_8_float));
				goto Label_59;
			EMIT "GOTO 0x3a";
			}
			bool var_36_bool;
			func_5(var_36_bool, (var_9_float - var_8_float));
			if(var_36_bool != 0) {
				goto Label_59;
			}
			var_9_float = var_8_float;
			}
		}
	Label_59:

	}
	
}


void func_62(bool var_15_bool, string var_16_string, float var_17_float, float var_18_float, float var_19_float)
{
	bool var_22_bool;
	@HasProperty(var_16_string, var_22_bool);
	if(!var_22_bool) //@nz
		var_15_bool = false;
	float var_23_float;
	@GetProperty(var_16_string, var_23_float);
	float var_25_float; float var_27_float; float var_28_float;
	var_18_float = var_27_float;
	var_19_float = var_28_float;
	func_81(var_25_float, (var_23_float + var_17_float), var_27_float, var_28_float);
	@SetProperty(var_16_string, var_25_float);
	var_15_bool = true;
}


