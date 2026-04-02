maintask task_0
{
	void init(bool var_0_bool)
	{
		bool var_1_bool;
		func_85(var_1_bool, "health", 0.05, (float)0, (float)1);
		func_148(0.05);
		bool var_21_bool;
		func_85(var_21_bool, "immunity", 0.05, (float)0, (float)1);
		func_138(0.05);
		bool var_30_bool;
		func_85(var_30_bool, "tiredness", 0.05, (float)0, (float)1);
		func_128(0.05);
		func_53(12.0);
	}

}


void func_128(float var_35_float)
{
	object var_37_object;
	@CreateFloatVector(var_37_object);
	var_37_object->add(var_35_float);
	@SendWorldWndMessage(11, var_37_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_38(bool var_51_bool, float var_52_float)
{
	bool var_53_bool;
	func_104(var_53_bool);
	if(var_53_bool != 0) {
		bool var_61_bool;
		func_85(var_61_bool, "tiredness", (var_52_float * -0.1), (float)0, (float)1);
	}
	var_51_bool = false;
}


void func_104(bool var_53_bool)
{
	bool var_56_bool;
	@HasProperty("sleeping", var_56_bool);
	if(!var_56_bool) //@nz
		var_53_bool = false;
	bool var_57_bool;
	@GetProperty("sleeping", var_57_bool);
	var_57_bool = var_53_bool;
}


void func_138(float var_26_float)
{
	object var_28_object;
	@CreateFloatVector(var_28_object);
	var_28_object->add(var_26_float);
	@SendWorldWndMessage(13, var_28_object);
}
EMIT "Stack[-1] = 0";


void func_148(float var_17_float)
{
	object var_19_object;
	@CreateFloatVector(var_19_object);
	var_19_object->add(var_17_float);
	@SendWorldWndMessage(15, var_19_object);
}
EMIT "Stack[-1] = 0";


void func_53(float var_39_float)
{
	float var_44_float; float var_47_float;
	@GetGameTime(var_44_float);
	float var_45_float = var_44_float + var_39_float;
	float var_46_float;
	var_44_float = var_46_float;
	
	for(;;) {
		@sync();
		if(var_0_bool != 0) {
		} else {
			@GetGameTime(var_47_float);
			if(var_47_float <= var_46_float) {
			} else {
			if(var_47_float >= var_45_float) {
				bool var_51_bool;
				func_38(var_51_bool, (var_45_float - var_46_float));
				goto Label_84;
			EMIT "GOTO 0x53";
			}
			bool var_67_bool;
			func_38(var_67_bool, (var_47_float - var_46_float));
			if(var_67_bool != 0) {
				goto Label_84;
			}
			var_47_float = var_46_float;
			}
		}
	Label_84:

	}
	
}


void func_85(bool var_1_bool, string var_2_string, float var_3_float, float var_4_float, float var_5_float)
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
	func_117(var_11_float, (var_9_float + var_3_float), var_13_float, var_14_float);
	@SetProperty(var_2_string, var_11_float);
	var_1_bool = true;
}


// @pe
void func_117(float var_11_float, float var_12_float, float var_13_float, float var_14_float)
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


