maintask task_0
{
	void init(bool var_0_bool)
	{
		bool var_1_bool;
		func_82(var_1_bool, "health", 0.15, (float)0, (float)1);
		func_135(0.15);
		bool var_21_bool;
		func_82(var_21_bool, "tiredness", 0.25, (float)0, (float)1);
		func_125(0.25);
		func_50(10.0);
	}

}


void func_101(bool var_44_bool)
{
	bool var_47_bool;
	@HasProperty("sleeping", var_47_bool);
	if(!var_47_bool) //@nz
		var_44_bool = false;
	bool var_48_bool;
	@GetProperty("sleeping", var_48_bool);
	var_48_bool = var_44_bool;
}


void func_135(float var_17_float)
{
	object var_19_object;
	@CreateFloatVector(var_19_object);
	var_19_object->add(var_17_float);
	@SendWorldWndMessage(15, var_19_object);
}
EMIT "Stack[-1] = 0";


void func_82(bool var_1_bool, string var_2_string, float var_3_float, float var_4_float, float var_5_float)
{
	bool var_8_bool;
	@HasProperty(var_2_string, var_8_bool);
	if(!var_8_bool) //@nz
		var_1_bool = false;
	float var_9_float;
	@GetProperty(var_2_string, var_9_float);
	float var_11_float; float var_13_float; float var_14_float;
	var_4_float = var_13_float;
	var_5_float = var_14_float;
	func_114(var_11_float, (var_9_float + var_3_float), var_13_float, var_14_float);
	@SetProperty(var_2_string, var_11_float);
	var_1_bool = true;
}


void func_50(float var_30_float)
{
	float var_35_float; float var_38_float;
	@GetGameTime(var_35_float);
	float var_36_float = var_35_float + var_30_float;
	float var_37_float;
	var_35_float = var_37_float;
	
	for(;;) {
		@sync();
		if(var_0_bool != 0) {
		} else {
			@GetGameTime(var_38_float);
			if(var_38_float <= var_37_float) {
			} else {
			if(var_38_float >= var_36_float) {
				bool var_42_bool;
				func_27(var_42_bool, (var_36_float - var_37_float));
				goto Label_81;
			EMIT "GOTO 0x50";
			}
			bool var_64_bool;
			func_27(var_64_bool, (var_38_float - var_37_float));
			if(var_64_bool != 0) {
				goto Label_81;
			}
			var_38_float = var_37_float;
			}
		}
	Label_81:

	}
	
}


// @pe
void func_114(float var_11_float, float var_12_float, float var_13_float, float var_14_float)
{
	if(var_12_float < var_13_float) {
		var_13_float = var_11_float;
		return 0;
	}
	if(var_12_float > var_14_float) {
		var_14_float = var_11_float;
		return 0;
	}
	var_12_float = var_11_float;
}


// @pe
void func_27(bool var_42_bool, float var_43_float)
{
	bool var_44_bool;
	func_101(var_44_bool);
	if(var_44_bool != 0) {
		bool var_52_bool;
		func_82(var_52_bool, "health", (var_43_float * 0.2), (float)0, (float)1);
		bool var_58_bool;
		func_82(var_58_bool, "tiredness", (var_43_float * -0.08), (float)0, (float)1);
	}
	var_42_bool = false;
}


void func_125(float var_26_float)
{
	object var_28_object;
	@CreateFloatVector(var_28_object);
	var_28_object->add(var_26_float);
	@SendWorldWndMessage(11, var_28_object);
}
EMIT "Stack[-1] = 0";


