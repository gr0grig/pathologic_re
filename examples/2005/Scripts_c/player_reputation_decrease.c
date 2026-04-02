maintask task_0
{
	void init(bool var_0_bool)
	{
		func_27((float)288);
	}

}


void func_5(bool var_13_bool, float var_14_float)
{
	float var_16_float;
	bool var_17_bool;
	func_78(var_17_bool);
	if(!var_17_bool) { //@nz
		var_26_int = -var_14_float;
		var_16_float = var_26_int / 36.0;
		bool var_28_bool; float var_30_float;
		var_16_float = var_30_float;
		func_59(var_28_bool, "reputation", var_30_float, (float)0, (float)1);
		float var_44_float;
		var_16_float = var_44_float;
		func_102(var_44_float);
	}
	var_13_bool = false;
}


void func_102(float var_44_float)
{
	object var_46_object;
	@CreateFloatVector(var_46_object);
	var_46_object->add(var_44_float);
	@SendWorldWndMessage(16, var_46_object);
}
EMIT "Stack[-1] = 0";


void func_27(float var_1_float)
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
				goto Label_58;
			EMIT "GOTO 0x39";
			}
			bool var_48_bool;
			func_5(var_48_bool, (var_9_float - var_8_float));
			if(var_48_bool != 0) {
				goto Label_58;
			}
			var_9_float = var_8_float;
			}
		}
	Label_58:

	}
	
}


// @pe
void func_91(float var_38_float, float var_39_float, float var_40_float, float var_41_float)
{
	if(var_39_float < var_40_float) {
		var_40_float = var_38_float;
		return 0;
	}
	if(var_39_float > var_41_float) {
		var_41_float = var_38_float;
		return 0;
	}
	var_39_float = var_38_float;
}


void func_78(bool var_17_bool)
{
	bool var_20_bool;
	@HasProperty("sleeping", var_20_bool);
	if(!var_20_bool) //@nz
		var_17_bool = false;
	bool var_21_bool;
	@GetProperty("sleeping", var_21_bool);
	var_21_bool = var_17_bool;
}


void func_59(bool var_28_bool, string var_29_string, float var_30_float, float var_31_float, float var_32_float)
{
	bool var_35_bool;
	@HasProperty(var_29_string, var_35_bool);
	if(!var_35_bool) //@nz
		var_28_bool = false;
	float var_36_float;
	@GetProperty(var_29_string, var_36_float);
	float var_38_float; float var_40_float; float var_41_float;
	var_31_float = var_40_float;
	var_32_float = var_41_float;
	func_91(var_38_float, (var_36_float + var_30_float), var_40_float, var_41_float);
	@SetProperty(var_29_string, var_38_float);
	var_28_bool = true;
}


